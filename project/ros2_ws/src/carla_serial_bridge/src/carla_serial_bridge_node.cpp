
#include <chrono>
#include <functional>
#include <memory>
#include <cstring>

#include "rclcpp/rclcpp.hpp"

#include "carla_msgs/msg/carla_ego_vehicle_control.hpp"
#include "carla_msgs/msg/carla_ego_vehicle_status.hpp"
#include "nav_msgs/msg/odometry.hpp"
#include "rosgraph_msgs/msg/clock.hpp"

#include "carla_serial_bridge/serial_com.hpp"

#define PORT "/dev/ttyACM0"
#define BAUDRATE B115200
#define RX_POOLING_RATE 15ms

typedef union{
  float f;
  char bytes[4];
} float_bytes;

typedef struct{
  float_bytes fLongSpeed;
  float_bytes fLatSpeed;
  float_bytes fHeadingRate;
  unsigned char ucGear;
} vehicle_status;

using namespace std::chrono_literals;

using std::placeholders::_1;

class CarlaSerialBridge : public rclcpp::Node{
  public:

    CarlaSerialBridge() : Node("carla_serial_brigde"){

      vehicle_control_pub_ = this->create_publisher<carla_msgs::msg::CarlaEgoVehicleControl>("/carla/hero/vehicle_control_cmd", 10); // This 10 is QoS?

      vehicle_status_sub_ = this->create_subscription<carla_msgs::msg::CarlaEgoVehicleStatus>("/carla/hero/vehicle_status", 
                                                                                              10, std::bind(&CarlaSerialBridge::vehicle_status_sub_callback, this, _1));

      odom_sub_ = this->create_subscription<nav_msgs::msg::Odometry>("/carla/hero/odometry", 10, std::bind(&CarlaSerialBridge::odom_sub_callback, this, _1));

      clock_sub_ = this->create_subscription<rosgraph_msgs::msg::Clock>("/clock", 10, std::bind(&CarlaSerialBridge::clock_sub_callback, this, _1));

      timer_ = this->create_wall_timer(RX_POOLING_RATE, std::bind(&CarlaSerialBridge::timer_callback, this));
      sm_state = 0;
      publish_seq = 0;
      
    }

  private:

    void clock_sub_callback(const rosgraph_msgs::msg::Clock::SharedPtr msg){
        clock = msg->clock;
    }

    void odom_sub_callback(const nav_msgs::msg::Odometry::SharedPtr msg){
        vehicle_status vehicle_status_tx;

        vehicle_status_tx.ucGear = (unsigned char) gear_rx;
        vehicle_status_tx.fLongSpeed.f = (float) msg->twist.twist.linear.x;
        vehicle_status_tx.fLatSpeed.f = (float) msg->twist.twist.linear.y;
        vehicle_status_tx.fHeadingRate.f = (float) msg->twist.twist.angular.z;

        char * tx_msg = NULL;
        sprintf(tx_msg, "#A%c%c%c%cB%c%c%c%cC%c%c%c%cD%c$",
                vehicle_status_tx.fLongSpeed.bytes[0], vehicle_status_tx.fLongSpeed.bytes[1], vehicle_status_tx.fLongSpeed.bytes[2], vehicle_status_tx.fLongSpeed.bytes[3], 
                vehicle_status_tx.fLatSpeed.bytes[0], vehicle_status_tx.fLatSpeed.bytes[1], vehicle_status_tx.fLatSpeed.bytes[2], vehicle_status_tx.fLatSpeed.bytes[3],
                vehicle_status_tx.fHeadingRate.bytes[0], vehicle_status_tx.fHeadingRate.bytes[1], vehicle_status_tx.fHeadingRate.bytes[2], vehicle_status_tx.fHeadingRate.bytes[3],
                vehicle_status_tx.ucGear);

        serial_com_link.writeSerialPort(tx_msg);
    }

    void vehicle_status_sub_callback(const carla_msgs::msg::CarlaEgoVehicleStatus::SharedPtr msg) const{
        
    }

    void publish_to_carla(){

        auto vehicle_control_msg_ = carla_msgs::msg::CarlaEgoVehicleControl();

        vehicle_control_msg_.throttle = throttle_rx.f;
        vehicle_control_msg_.steer = steering_rx.f;
        vehicle_control_msg_.brake = brake_rx.f;
        vehicle_control_msg_.hand_brake = (bool) hand_brake_rx;
        vehicle_control_msg_.reverse = (bool) reverse_rx;
        vehicle_control_msg_.manual_gear_shift = (bool) manual_shift_rx;
        vehicle_control_msg_.gear = (__uint32_t) gear_rx;

        vehicle_control_msg_.header.stamp = clock;
    
        vehicle_control_pub_->publish(vehicle_control_msg_);
        publish_seq++;
    }

    void timer_callback(){
      char * rx_msg;
      rx_msg = serial_com_link.readSerialPort();

     for(int i = 0; i < (int)strlen(rx_msg); i++){

        switch (sm_state){
            case 0:
                if('#' == rx_msg[i]){
                    sm_state = 1;                 
                }
                break;
            
            case 1:
                switch (rx_msg[i]){
                    case 'T':
                        sm_state = 20;                 
                        break;

                    case 'S':
                        sm_state = 30;                 
                        break;

                    case 'B':
                        sm_state = 40;                 
                        break;

                    case 'H':
                        sm_state = 50;                 
                        break;

                    case 'M':
                        sm_state = 60;                 
                        break;

                    case 'R':
                        sm_state = 70;                 
                        break;

                    case 'G':
                        sm_state = 80;                                     
                        break;

                    case '$':
                        sm_state = 0;   
                        this->publish_to_carla();              
                        break;
                    
                    default:
                        break;
                }
                break;        
            
            case 20:
                throttle_rx.bytes[0] = rx_msg[i];
                sm_state = 21;                 
                break;        
            
            case 21:
                throttle_rx.bytes[1] = rx_msg[i];
                sm_state = 22;                 
                break;        
            
            case 22:
                throttle_rx.bytes[2] = rx_msg[i];
                sm_state = 23;                 
                break;        
            
            case 23:
                throttle_rx.bytes[3] = rx_msg[i];
                sm_state = 1;                 
                break;        
            
            case 30:
                steering_rx.bytes[0] = rx_msg[i];
                sm_state = 31;                 
                break;        
            
            case 31:
                steering_rx.bytes[1] = rx_msg[i];
                sm_state = 32;                 
                break;
            
            
            case 32:
                steering_rx.bytes[2] = rx_msg[i];
                sm_state = 33;                 
                break;        
            
            case 33:
                steering_rx.bytes[3] = rx_msg[i];
                sm_state = 1;                 
                break;        
            
            case 40:
                brake_rx.bytes[0] = rx_msg[i];
                sm_state = 41;                 
                break;        
            
            case 41:
                brake_rx.bytes[1] = rx_msg[i];
                sm_state = 42;                 
                break;        
            
            case 42:
                brake_rx.bytes[2] = rx_msg[i];
                sm_state = 43;                 
                break;        
            
            case 43:
                brake_rx.bytes[3] = rx_msg[i];
                sm_state = 1;                 
                break;        
            
            case 50:
                hand_brake_rx = rx_msg[i];
                sm_state = 1;                             
                break;        
            
            case 60:
                manual_shift_rx = rx_msg[i];
                sm_state = 1;                            
                break;        
            
            case 70:
                reverse_rx = rx_msg[i];
                sm_state = 1;                             
                break;        
            
            case 80:
                gear_rx = rx_msg[i];
                sm_state = 1;                             
                break;
            
            default:
                break;
        }
    }

      // Process rx_msg

      // Publish to CARLA if available

      //char * tx_rx_msg;


      // Process topics to tx_rx_msg
      //serial_com_link.writeSerialPort(tx_rx_msg);
      
    }

    rclcpp::TimerBase::SharedPtr timer_;

    rclcpp::Publisher<carla_msgs::msg::CarlaEgoVehicleControl>::SharedPtr vehicle_control_pub_;

    rclcpp::Subscription<carla_msgs::msg::CarlaEgoVehicleStatus>::SharedPtr vehicle_status_sub_;
    rclcpp::Subscription<nav_msgs::msg::Odometry>::SharedPtr odom_sub_;
    rclcpp::Subscription<rosgraph_msgs::msg::Clock>::SharedPtr clock_sub_;

    __uint32_t loop_rate;
    __uint32_t baudrate;
    char * port_name;

    char sm_state;
    float_bytes throttle_rx;
    float_bytes steering_rx;
    float_bytes brake_rx;
    char hand_brake_rx;
    char manual_shift_rx;
    char reverse_rx;
    char gear_rx;

    rclcpp::Time clock;
    __uint32_t publish_seq;

    SerialCom serial_com_link{PORT, BAUDRATE};
};


int main(int argc, char ** argv){
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<CarlaSerialBridge>());
    rclcpp::shutdown();
    return 0;
}

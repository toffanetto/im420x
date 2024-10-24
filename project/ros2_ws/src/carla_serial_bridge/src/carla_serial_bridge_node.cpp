#include <chrono>
#include <functional>
#include <memory>

#include "rclcpp/rclcpp.hpp"
//#include "sensor_msgs/msg/point_cloud2.hpp"

#include <carla_serial_bridge/serial_com.hpp>

#define PORT "/dev/ttyACM0"
#define BAUDRATE B115200

using namespace std::chrono_literals;

typedef union{
  float f;
  __uint8_t bytes[4];
} float_bytes;

class CarlaSerialBridge : public rclcpp::Node{
  public:

    CarlaSerialBridge() : Node("carla_serial_brigde"){

      // TODO loop_rate = this->get_parameter("loop_rate");
      // TODO baudrate = this->get_parameter("baudware");
      // TODO port_name = this->get_parameter("port_name");

      timer_ = this->create_wall_timer(1000ms,
                                       std::bind(&CarlaSerialBridge::timer_callback, this));
      ss_state = 0;
      
    }

  private:

    void timer_callback(){
      unsigned char * rx_msg;
      rx_msg = serial_com_link.readSerialPort();

      for(int i = 0; i < sizeof(rx_msg); i++){
        if(rx_msg[i])
      }

      // Process rx_msg

      // Publish to CARLA if available

      //char * tx_msg;


      // Process topics to tx_msg
      //serial_com_link.writeSerialPort(tx_msg);
      
    }

    rclcpp::TimerBase::SharedPtr timer_;

    rclcpp::Publisher<type>::SharedPtr ackerman_cmd_pub_;
    rclcpp::Publisher<type>::SharedPtr publisher_;

    rclcpp::Subscription<type>::SharedPtr subscription_;

    __u_int loop_rate;
    __uint16_t baudrate;
    char * port_name;

    __uint8_t ss_state;
    float_bytes trottle_rx;
    float_bytes steering_rx;
    float_bytes brake_rx;
    __uint8_t hand_brake_rx;
    __uint8_t manual_shift_rx;
    __uint8_t reverse_rx;
    __uint8_t gear_rx;

    

    SerialCom serial_com_link{PORT, BAUDRATE};
};


int main(int argc, char ** argv){
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<CarlaSerialBridge>());
  rclcpp::shutdown();
  return 0;
}

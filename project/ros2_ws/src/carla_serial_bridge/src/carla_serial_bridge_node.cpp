#include <chrono>
#include <functional>
#include <memory>

#include "rclcpp/rclcpp.hpp"
//#include "sensor_msgs/msg/point_cloud2.hpp"

#include <carla_serial_bridge/serial_com.hpp>

#define PORT "/dev/ttyACM0"
#define BAUDRATE B115200

using namespace std::chrono_literals;

class CarlaSerialBridge : public rclcpp::Node{
  public:

    CarlaSerialBridge() : Node("carla_serial_brigde"){

      timer_ = this->create_wall_timer(1000ms,
                                       std::bind(&CarlaSerialBridge::timer_callback, this));

      
    }

  private:

    void timer_callback(){
      char * rx_msg;
      rx_msg = serial_com_link.readSerialPort();
      std::cout << rx_msg << std::endl;

      // Process rx_msg

      // Publish to CARLA if available

      //char * tx_msg;


      // Process topics to tx_msg
      //serial_com_link.writeSerialPort(tx_msg);
      
    }

    rclcpp::TimerBase::SharedPtr timer_;

    SerialCom serial_com_link{PORT, BAUDRATE};
};


int main(int argc, char ** argv){
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<CarlaSerialBridge>());
  rclcpp::shutdown();
  return 0;
}

#include <iostream>
#include <chrono>
#include <functional>
#include <memory>
#include <string>

#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/u_int8_multi_array.hpp"

using namespace std::chrono_literals;

class CommandLed : public rclcpp::Node{
	public:
		CommandLed() : Node("command_led"){
			led_pub = this->create_publisher<std_msgs::msg::UInt8MultiArray>("led_control", 10);

			led_commands.data.reserve(4);
			led_commands.data.resize(4,0);
		}

		void ledSendCommand(){
			int k = 1, state;
			while(k != 0 ){
				std::cin >> k >> state;
				if(k == 1 || k == 2 || k == 3){
					led_commands.data[k] = state;
					led_pub->publish(led_commands);
				}

			}
		}
	
	private:

		rclcpp::Publisher<std_msgs::msg::UInt8MultiArray>::SharedPtr led_pub;
		std_msgs::msg::UInt8MultiArray led_commands;

};


int main(int argc, char ** argv)
{

  rclcpp::init(argc, argv);
  
  CommandLed node;

  while(true){
	node.ledSendCommand();
  }


  rclcpp::shutdown();

  return 0;
}

// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from neobotix_usboard_msgs:msg/AnalogIn.idl
// generated code does not contain a copyright notice

#ifndef NEOBOTIX_USBOARD_MSGS__MSG__DETAIL__ANALOG_IN__TRAITS_HPP_
#define NEOBOTIX_USBOARD_MSGS__MSG__DETAIL__ANALOG_IN__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "neobotix_usboard_msgs/msg/detail/analog_in__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace neobotix_usboard_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const AnalogIn & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: command
  {
    out << "command: ";
    rosidl_generator_traits::value_to_yaml(msg.command, out);
    out << ", ";
  }

  // member: analog_data_ch4_low_byte
  {
    out << "analog_data_ch4_low_byte: ";
    rosidl_generator_traits::value_to_yaml(msg.analog_data_ch4_low_byte, out);
    out << ", ";
  }

  // member: analog_data_ch4_high_bits
  {
    out << "analog_data_ch4_high_bits: ";
    rosidl_generator_traits::value_to_yaml(msg.analog_data_ch4_high_bits, out);
    out << ", ";
  }

  // member: analog_data_ch3_low_byte
  {
    out << "analog_data_ch3_low_byte: ";
    rosidl_generator_traits::value_to_yaml(msg.analog_data_ch3_low_byte, out);
    out << ", ";
  }

  // member: analog_data_ch3_high_bits
  {
    out << "analog_data_ch3_high_bits: ";
    rosidl_generator_traits::value_to_yaml(msg.analog_data_ch3_high_bits, out);
    out << ", ";
  }

  // member: analog_data_ch2_low_byte
  {
    out << "analog_data_ch2_low_byte: ";
    rosidl_generator_traits::value_to_yaml(msg.analog_data_ch2_low_byte, out);
    out << ", ";
  }

  // member: analog_data_ch2_high_bits
  {
    out << "analog_data_ch2_high_bits: ";
    rosidl_generator_traits::value_to_yaml(msg.analog_data_ch2_high_bits, out);
    out << ", ";
  }

  // member: analog_data_ch1_low_byte
  {
    out << "analog_data_ch1_low_byte: ";
    rosidl_generator_traits::value_to_yaml(msg.analog_data_ch1_low_byte, out);
    out << ", ";
  }

  // member: analog_data_ch1_high_bits
  {
    out << "analog_data_ch1_high_bits: ";
    rosidl_generator_traits::value_to_yaml(msg.analog_data_ch1_high_bits, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AnalogIn & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: command
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "command: ";
    rosidl_generator_traits::value_to_yaml(msg.command, out);
    out << "\n";
  }

  // member: analog_data_ch4_low_byte
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "analog_data_ch4_low_byte: ";
    rosidl_generator_traits::value_to_yaml(msg.analog_data_ch4_low_byte, out);
    out << "\n";
  }

  // member: analog_data_ch4_high_bits
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "analog_data_ch4_high_bits: ";
    rosidl_generator_traits::value_to_yaml(msg.analog_data_ch4_high_bits, out);
    out << "\n";
  }

  // member: analog_data_ch3_low_byte
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "analog_data_ch3_low_byte: ";
    rosidl_generator_traits::value_to_yaml(msg.analog_data_ch3_low_byte, out);
    out << "\n";
  }

  // member: analog_data_ch3_high_bits
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "analog_data_ch3_high_bits: ";
    rosidl_generator_traits::value_to_yaml(msg.analog_data_ch3_high_bits, out);
    out << "\n";
  }

  // member: analog_data_ch2_low_byte
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "analog_data_ch2_low_byte: ";
    rosidl_generator_traits::value_to_yaml(msg.analog_data_ch2_low_byte, out);
    out << "\n";
  }

  // member: analog_data_ch2_high_bits
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "analog_data_ch2_high_bits: ";
    rosidl_generator_traits::value_to_yaml(msg.analog_data_ch2_high_bits, out);
    out << "\n";
  }

  // member: analog_data_ch1_low_byte
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "analog_data_ch1_low_byte: ";
    rosidl_generator_traits::value_to_yaml(msg.analog_data_ch1_low_byte, out);
    out << "\n";
  }

  // member: analog_data_ch1_high_bits
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "analog_data_ch1_high_bits: ";
    rosidl_generator_traits::value_to_yaml(msg.analog_data_ch1_high_bits, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AnalogIn & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace neobotix_usboard_msgs

namespace rosidl_generator_traits
{

[[deprecated("use neobotix_usboard_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const neobotix_usboard_msgs::msg::AnalogIn & msg,
  std::ostream & out, size_t indentation = 0)
{
  neobotix_usboard_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use neobotix_usboard_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const neobotix_usboard_msgs::msg::AnalogIn & msg)
{
  return neobotix_usboard_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<neobotix_usboard_msgs::msg::AnalogIn>()
{
  return "neobotix_usboard_msgs::msg::AnalogIn";
}

template<>
inline const char * name<neobotix_usboard_msgs::msg::AnalogIn>()
{
  return "neobotix_usboard_msgs/msg/AnalogIn";
}

template<>
struct has_fixed_size<neobotix_usboard_msgs::msg::AnalogIn>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<neobotix_usboard_msgs::msg::AnalogIn>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<neobotix_usboard_msgs::msg::AnalogIn>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // NEOBOTIX_USBOARD_MSGS__MSG__DETAIL__ANALOG_IN__TRAITS_HPP_

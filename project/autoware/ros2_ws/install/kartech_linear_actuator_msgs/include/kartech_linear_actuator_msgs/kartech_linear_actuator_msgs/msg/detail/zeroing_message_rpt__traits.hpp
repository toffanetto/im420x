// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from kartech_linear_actuator_msgs:msg/ZeroingMessageRpt.idl
// generated code does not contain a copyright notice

#ifndef KARTECH_LINEAR_ACTUATOR_MSGS__MSG__DETAIL__ZEROING_MESSAGE_RPT__TRAITS_HPP_
#define KARTECH_LINEAR_ACTUATOR_MSGS__MSG__DETAIL__ZEROING_MESSAGE_RPT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "kartech_linear_actuator_msgs/msg/detail/zeroing_message_rpt__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace kartech_linear_actuator_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ZeroingMessageRpt & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: chip_1_voltage
  {
    out << "chip_1_voltage: ";
    rosidl_generator_traits::value_to_yaml(msg.chip_1_voltage, out);
    out << ", ";
  }

  // member: chip_2_voltage
  {
    out << "chip_2_voltage: ";
    rosidl_generator_traits::value_to_yaml(msg.chip_2_voltage, out);
    out << ", ";
  }

  // member: chip_error_1
  {
    out << "chip_error_1: ";
    rosidl_generator_traits::value_to_yaml(msg.chip_error_1, out);
    out << ", ";
  }

  // member: chip_error_2
  {
    out << "chip_error_2: ";
    rosidl_generator_traits::value_to_yaml(msg.chip_error_2, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ZeroingMessageRpt & msg,
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

  // member: chip_1_voltage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "chip_1_voltage: ";
    rosidl_generator_traits::value_to_yaml(msg.chip_1_voltage, out);
    out << "\n";
  }

  // member: chip_2_voltage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "chip_2_voltage: ";
    rosidl_generator_traits::value_to_yaml(msg.chip_2_voltage, out);
    out << "\n";
  }

  // member: chip_error_1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "chip_error_1: ";
    rosidl_generator_traits::value_to_yaml(msg.chip_error_1, out);
    out << "\n";
  }

  // member: chip_error_2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "chip_error_2: ";
    rosidl_generator_traits::value_to_yaml(msg.chip_error_2, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ZeroingMessageRpt & msg, bool use_flow_style = false)
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

}  // namespace kartech_linear_actuator_msgs

namespace rosidl_generator_traits
{

[[deprecated("use kartech_linear_actuator_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const kartech_linear_actuator_msgs::msg::ZeroingMessageRpt & msg,
  std::ostream & out, size_t indentation = 0)
{
  kartech_linear_actuator_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use kartech_linear_actuator_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const kartech_linear_actuator_msgs::msg::ZeroingMessageRpt & msg)
{
  return kartech_linear_actuator_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<kartech_linear_actuator_msgs::msg::ZeroingMessageRpt>()
{
  return "kartech_linear_actuator_msgs::msg::ZeroingMessageRpt";
}

template<>
inline const char * name<kartech_linear_actuator_msgs::msg::ZeroingMessageRpt>()
{
  return "kartech_linear_actuator_msgs/msg/ZeroingMessageRpt";
}

template<>
struct has_fixed_size<kartech_linear_actuator_msgs::msg::ZeroingMessageRpt>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<kartech_linear_actuator_msgs::msg::ZeroingMessageRpt>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<kartech_linear_actuator_msgs::msg::ZeroingMessageRpt>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // KARTECH_LINEAR_ACTUATOR_MSGS__MSG__DETAIL__ZEROING_MESSAGE_RPT__TRAITS_HPP_

// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from kartech_linear_actuator_msgs:msg/EnhancedPositionRpt.idl
// generated code does not contain a copyright notice

#ifndef KARTECH_LINEAR_ACTUATOR_MSGS__MSG__DETAIL__ENHANCED_POSITION_RPT__TRAITS_HPP_
#define KARTECH_LINEAR_ACTUATOR_MSGS__MSG__DETAIL__ENHANCED_POSITION_RPT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "kartech_linear_actuator_msgs/msg/detail/enhanced_position_rpt__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace kartech_linear_actuator_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const EnhancedPositionRpt & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: shaft_extension
  {
    out << "shaft_extension: ";
    rosidl_generator_traits::value_to_yaml(msg.shaft_extension, out);
    out << ", ";
  }

  // member: motor_overload_error
  {
    out << "motor_overload_error: ";
    rosidl_generator_traits::value_to_yaml(msg.motor_overload_error, out);
    out << ", ";
  }

  // member: clutch_overload_error
  {
    out << "clutch_overload_error: ";
    rosidl_generator_traits::value_to_yaml(msg.clutch_overload_error, out);
    out << ", ";
  }

  // member: motor_open_load_error
  {
    out << "motor_open_load_error: ";
    rosidl_generator_traits::value_to_yaml(msg.motor_open_load_error, out);
    out << ", ";
  }

  // member: clutch_open_load_error
  {
    out << "clutch_open_load_error: ";
    rosidl_generator_traits::value_to_yaml(msg.clutch_open_load_error, out);
    out << ", ";
  }

  // member: position_reach_error
  {
    out << "position_reach_error: ";
    rosidl_generator_traits::value_to_yaml(msg.position_reach_error, out);
    out << ", ";
  }

  // member: hardware_warning_1_error
  {
    out << "hardware_warning_1_error: ";
    rosidl_generator_traits::value_to_yaml(msg.hardware_warning_1_error, out);
    out << ", ";
  }

  // member: hardware_warning_2_error
  {
    out << "hardware_warning_2_error: ";
    rosidl_generator_traits::value_to_yaml(msg.hardware_warning_2_error, out);
    out << ", ";
  }

  // member: motor_current
  {
    out << "motor_current: ";
    rosidl_generator_traits::value_to_yaml(msg.motor_current, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const EnhancedPositionRpt & msg,
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

  // member: shaft_extension
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "shaft_extension: ";
    rosidl_generator_traits::value_to_yaml(msg.shaft_extension, out);
    out << "\n";
  }

  // member: motor_overload_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "motor_overload_error: ";
    rosidl_generator_traits::value_to_yaml(msg.motor_overload_error, out);
    out << "\n";
  }

  // member: clutch_overload_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "clutch_overload_error: ";
    rosidl_generator_traits::value_to_yaml(msg.clutch_overload_error, out);
    out << "\n";
  }

  // member: motor_open_load_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "motor_open_load_error: ";
    rosidl_generator_traits::value_to_yaml(msg.motor_open_load_error, out);
    out << "\n";
  }

  // member: clutch_open_load_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "clutch_open_load_error: ";
    rosidl_generator_traits::value_to_yaml(msg.clutch_open_load_error, out);
    out << "\n";
  }

  // member: position_reach_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position_reach_error: ";
    rosidl_generator_traits::value_to_yaml(msg.position_reach_error, out);
    out << "\n";
  }

  // member: hardware_warning_1_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hardware_warning_1_error: ";
    rosidl_generator_traits::value_to_yaml(msg.hardware_warning_1_error, out);
    out << "\n";
  }

  // member: hardware_warning_2_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hardware_warning_2_error: ";
    rosidl_generator_traits::value_to_yaml(msg.hardware_warning_2_error, out);
    out << "\n";
  }

  // member: motor_current
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "motor_current: ";
    rosidl_generator_traits::value_to_yaml(msg.motor_current, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const EnhancedPositionRpt & msg, bool use_flow_style = false)
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
  const kartech_linear_actuator_msgs::msg::EnhancedPositionRpt & msg,
  std::ostream & out, size_t indentation = 0)
{
  kartech_linear_actuator_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use kartech_linear_actuator_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const kartech_linear_actuator_msgs::msg::EnhancedPositionRpt & msg)
{
  return kartech_linear_actuator_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<kartech_linear_actuator_msgs::msg::EnhancedPositionRpt>()
{
  return "kartech_linear_actuator_msgs::msg::EnhancedPositionRpt";
}

template<>
inline const char * name<kartech_linear_actuator_msgs::msg::EnhancedPositionRpt>()
{
  return "kartech_linear_actuator_msgs/msg/EnhancedPositionRpt";
}

template<>
struct has_fixed_size<kartech_linear_actuator_msgs::msg::EnhancedPositionRpt>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<kartech_linear_actuator_msgs::msg::EnhancedPositionRpt>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<kartech_linear_actuator_msgs::msg::EnhancedPositionRpt>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // KARTECH_LINEAR_ACTUATOR_MSGS__MSG__DETAIL__ENHANCED_POSITION_RPT__TRAITS_HPP_

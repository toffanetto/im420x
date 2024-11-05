// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from kartech_linear_actuator_msgs:msg/ConfigureOutputsKdFreqDeadbandCmd.idl
// generated code does not contain a copyright notice

#ifndef KARTECH_LINEAR_ACTUATOR_MSGS__MSG__DETAIL__CONFIGURE_OUTPUTS_KD_FREQ_DEADBAND_CMD__TRAITS_HPP_
#define KARTECH_LINEAR_ACTUATOR_MSGS__MSG__DETAIL__CONFIGURE_OUTPUTS_KD_FREQ_DEADBAND_CMD__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "kartech_linear_actuator_msgs/msg/detail/configure_outputs_kd_freq_deadband_cmd__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace kartech_linear_actuator_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ConfigureOutputsKdFreqDeadbandCmd & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: confirm
  {
    out << "confirm: ";
    rosidl_generator_traits::value_to_yaml(msg.confirm, out);
    out << ", ";
  }

  // member: kd
  {
    out << "kd: ";
    rosidl_generator_traits::value_to_yaml(msg.kd, out);
    out << ", ";
  }

  // member: closed_loop_freq
  {
    out << "closed_loop_freq: ";
    rosidl_generator_traits::value_to_yaml(msg.closed_loop_freq, out);
    out << ", ";
  }

  // member: error_dead_band
  {
    out << "error_dead_band: ";
    rosidl_generator_traits::value_to_yaml(msg.error_dead_band, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ConfigureOutputsKdFreqDeadbandCmd & msg,
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

  // member: confirm
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "confirm: ";
    rosidl_generator_traits::value_to_yaml(msg.confirm, out);
    out << "\n";
  }

  // member: kd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "kd: ";
    rosidl_generator_traits::value_to_yaml(msg.kd, out);
    out << "\n";
  }

  // member: closed_loop_freq
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "closed_loop_freq: ";
    rosidl_generator_traits::value_to_yaml(msg.closed_loop_freq, out);
    out << "\n";
  }

  // member: error_dead_band
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "error_dead_band: ";
    rosidl_generator_traits::value_to_yaml(msg.error_dead_band, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ConfigureOutputsKdFreqDeadbandCmd & msg, bool use_flow_style = false)
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
  const kartech_linear_actuator_msgs::msg::ConfigureOutputsKdFreqDeadbandCmd & msg,
  std::ostream & out, size_t indentation = 0)
{
  kartech_linear_actuator_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use kartech_linear_actuator_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const kartech_linear_actuator_msgs::msg::ConfigureOutputsKdFreqDeadbandCmd & msg)
{
  return kartech_linear_actuator_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<kartech_linear_actuator_msgs::msg::ConfigureOutputsKdFreqDeadbandCmd>()
{
  return "kartech_linear_actuator_msgs::msg::ConfigureOutputsKdFreqDeadbandCmd";
}

template<>
inline const char * name<kartech_linear_actuator_msgs::msg::ConfigureOutputsKdFreqDeadbandCmd>()
{
  return "kartech_linear_actuator_msgs/msg/ConfigureOutputsKdFreqDeadbandCmd";
}

template<>
struct has_fixed_size<kartech_linear_actuator_msgs::msg::ConfigureOutputsKdFreqDeadbandCmd>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<kartech_linear_actuator_msgs::msg::ConfigureOutputsKdFreqDeadbandCmd>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<kartech_linear_actuator_msgs::msg::ConfigureOutputsKdFreqDeadbandCmd>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // KARTECH_LINEAR_ACTUATOR_MSGS__MSG__DETAIL__CONFIGURE_OUTPUTS_KD_FREQ_DEADBAND_CMD__TRAITS_HPP_

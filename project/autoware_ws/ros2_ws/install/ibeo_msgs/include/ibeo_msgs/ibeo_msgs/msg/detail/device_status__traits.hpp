// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ibeo_msgs:msg/DeviceStatus.idl
// generated code does not contain a copyright notice

#ifndef IBEO_MSGS__MSG__DETAIL__DEVICE_STATUS__TRAITS_HPP_
#define IBEO_MSGS__MSG__DETAIL__DEVICE_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ibeo_msgs/msg/detail/device_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'ibeo_header'
#include "ibeo_msgs/msg/detail/ibeo_data_header__traits.hpp"

namespace ibeo_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const DeviceStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: ibeo_header
  {
    out << "ibeo_header: ";
    to_flow_style_yaml(msg.ibeo_header, out);
    out << ", ";
  }

  // member: scanner_type
  {
    out << "scanner_type: ";
    rosidl_generator_traits::value_to_yaml(msg.scanner_type, out);
    out << ", ";
  }

  // member: sensor_temperature
  {
    out << "sensor_temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.sensor_temperature, out);
    out << ", ";
  }

  // member: frequency
  {
    out << "frequency: ";
    rosidl_generator_traits::value_to_yaml(msg.frequency, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DeviceStatus & msg,
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

  // member: ibeo_header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ibeo_header:\n";
    to_block_style_yaml(msg.ibeo_header, out, indentation + 2);
  }

  // member: scanner_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "scanner_type: ";
    rosidl_generator_traits::value_to_yaml(msg.scanner_type, out);
    out << "\n";
  }

  // member: sensor_temperature
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sensor_temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.sensor_temperature, out);
    out << "\n";
  }

  // member: frequency
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "frequency: ";
    rosidl_generator_traits::value_to_yaml(msg.frequency, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DeviceStatus & msg, bool use_flow_style = false)
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

}  // namespace ibeo_msgs

namespace rosidl_generator_traits
{

[[deprecated("use ibeo_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ibeo_msgs::msg::DeviceStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  ibeo_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ibeo_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const ibeo_msgs::msg::DeviceStatus & msg)
{
  return ibeo_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ibeo_msgs::msg::DeviceStatus>()
{
  return "ibeo_msgs::msg::DeviceStatus";
}

template<>
inline const char * name<ibeo_msgs::msg::DeviceStatus>()
{
  return "ibeo_msgs/msg/DeviceStatus";
}

template<>
struct has_fixed_size<ibeo_msgs::msg::DeviceStatus>
  : std::integral_constant<bool, has_fixed_size<ibeo_msgs::msg::IbeoDataHeader>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<ibeo_msgs::msg::DeviceStatus>
  : std::integral_constant<bool, has_bounded_size<ibeo_msgs::msg::IbeoDataHeader>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<ibeo_msgs::msg::DeviceStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // IBEO_MSGS__MSG__DETAIL__DEVICE_STATUS__TRAITS_HPP_

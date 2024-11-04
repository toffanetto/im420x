// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from neobotix_usboard_msgs:msg/SensorData.idl
// generated code does not contain a copyright notice

#ifndef NEOBOTIX_USBOARD_MSGS__MSG__DETAIL__SENSOR_DATA__TRAITS_HPP_
#define NEOBOTIX_USBOARD_MSGS__MSG__DETAIL__SENSOR_DATA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "neobotix_usboard_msgs/msg/detail/sensor_data__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace neobotix_usboard_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const SensorData & msg,
  std::ostream & out)
{
  out << "{";
  // member: distance
  {
    out << "distance: ";
    rosidl_generator_traits::value_to_yaml(msg.distance, out);
    out << ", ";
  }

  // member: warn
  {
    out << "warn: ";
    rosidl_generator_traits::value_to_yaml(msg.warn, out);
    out << ", ";
  }

  // member: alarm
  {
    out << "alarm: ";
    rosidl_generator_traits::value_to_yaml(msg.alarm, out);
    out << ", ";
  }

  // member: active
  {
    out << "active: ";
    rosidl_generator_traits::value_to_yaml(msg.active, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SensorData & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: distance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "distance: ";
    rosidl_generator_traits::value_to_yaml(msg.distance, out);
    out << "\n";
  }

  // member: warn
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "warn: ";
    rosidl_generator_traits::value_to_yaml(msg.warn, out);
    out << "\n";
  }

  // member: alarm
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "alarm: ";
    rosidl_generator_traits::value_to_yaml(msg.alarm, out);
    out << "\n";
  }

  // member: active
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "active: ";
    rosidl_generator_traits::value_to_yaml(msg.active, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SensorData & msg, bool use_flow_style = false)
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
  const neobotix_usboard_msgs::msg::SensorData & msg,
  std::ostream & out, size_t indentation = 0)
{
  neobotix_usboard_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use neobotix_usboard_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const neobotix_usboard_msgs::msg::SensorData & msg)
{
  return neobotix_usboard_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<neobotix_usboard_msgs::msg::SensorData>()
{
  return "neobotix_usboard_msgs::msg::SensorData";
}

template<>
inline const char * name<neobotix_usboard_msgs::msg::SensorData>()
{
  return "neobotix_usboard_msgs/msg/SensorData";
}

template<>
struct has_fixed_size<neobotix_usboard_msgs::msg::SensorData>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<neobotix_usboard_msgs::msg::SensorData>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<neobotix_usboard_msgs::msg::SensorData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // NEOBOTIX_USBOARD_MSGS__MSG__DETAIL__SENSOR_DATA__TRAITS_HPP_

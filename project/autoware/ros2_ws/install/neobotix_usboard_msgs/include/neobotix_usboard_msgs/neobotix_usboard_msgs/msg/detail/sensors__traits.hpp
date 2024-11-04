// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from neobotix_usboard_msgs:msg/Sensors.idl
// generated code does not contain a copyright notice

#ifndef NEOBOTIX_USBOARD_MSGS__MSG__DETAIL__SENSORS__TRAITS_HPP_
#define NEOBOTIX_USBOARD_MSGS__MSG__DETAIL__SENSORS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "neobotix_usboard_msgs/msg/detail/sensors__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'sensors'
#include "neobotix_usboard_msgs/msg/detail/sensor_data__traits.hpp"

namespace neobotix_usboard_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Sensors & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: sensors
  {
    if (msg.sensors.size() == 0) {
      out << "sensors: []";
    } else {
      out << "sensors: [";
      size_t pending_items = msg.sensors.size();
      for (auto item : msg.sensors) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Sensors & msg,
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

  // member: sensors
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.sensors.size() == 0) {
      out << "sensors: []\n";
    } else {
      out << "sensors:\n";
      for (auto item : msg.sensors) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Sensors & msg, bool use_flow_style = false)
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
  const neobotix_usboard_msgs::msg::Sensors & msg,
  std::ostream & out, size_t indentation = 0)
{
  neobotix_usboard_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use neobotix_usboard_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const neobotix_usboard_msgs::msg::Sensors & msg)
{
  return neobotix_usboard_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<neobotix_usboard_msgs::msg::Sensors>()
{
  return "neobotix_usboard_msgs::msg::Sensors";
}

template<>
inline const char * name<neobotix_usboard_msgs::msg::Sensors>()
{
  return "neobotix_usboard_msgs/msg/Sensors";
}

template<>
struct has_fixed_size<neobotix_usboard_msgs::msg::Sensors>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<neobotix_usboard_msgs::msg::Sensors>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<neobotix_usboard_msgs::msg::Sensors>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // NEOBOTIX_USBOARD_MSGS__MSG__DETAIL__SENSORS__TRAITS_HPP_

// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mobileye_560_660_msgs:msg/ObstacleStatus.idl
// generated code does not contain a copyright notice

#ifndef MOBILEYE_560_660_MSGS__MSG__DETAIL__OBSTACLE_STATUS__TRAITS_HPP_
#define MOBILEYE_560_660_MSGS__MSG__DETAIL__OBSTACLE_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mobileye_560_660_msgs/msg/detail/obstacle_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace mobileye_560_660_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ObstacleStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: num_obstacles
  {
    out << "num_obstacles: ";
    rosidl_generator_traits::value_to_yaml(msg.num_obstacles, out);
    out << ", ";
  }

  // member: timestamp
  {
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << ", ";
  }

  // member: application_version
  {
    out << "application_version: ";
    rosidl_generator_traits::value_to_yaml(msg.application_version, out);
    out << ", ";
  }

  // member: active_version_number_section
  {
    out << "active_version_number_section: ";
    rosidl_generator_traits::value_to_yaml(msg.active_version_number_section, out);
    out << ", ";
  }

  // member: left_close_range_cut_in
  {
    out << "left_close_range_cut_in: ";
    rosidl_generator_traits::value_to_yaml(msg.left_close_range_cut_in, out);
    out << ", ";
  }

  // member: right_close_range_cut_in
  {
    out << "right_close_range_cut_in: ";
    rosidl_generator_traits::value_to_yaml(msg.right_close_range_cut_in, out);
    out << ", ";
  }

  // member: stop_go
  {
    out << "stop_go: ";
    rosidl_generator_traits::value_to_yaml(msg.stop_go, out);
    out << ", ";
  }

  // member: protocol_version
  {
    out << "protocol_version: ";
    rosidl_generator_traits::value_to_yaml(msg.protocol_version, out);
    out << ", ";
  }

  // member: close_car
  {
    out << "close_car: ";
    rosidl_generator_traits::value_to_yaml(msg.close_car, out);
    out << ", ";
  }

  // member: failsafe
  {
    out << "failsafe: ";
    rosidl_generator_traits::value_to_yaml(msg.failsafe, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ObstacleStatus & msg,
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

  // member: num_obstacles
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "num_obstacles: ";
    rosidl_generator_traits::value_to_yaml(msg.num_obstacles, out);
    out << "\n";
  }

  // member: timestamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << "\n";
  }

  // member: application_version
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "application_version: ";
    rosidl_generator_traits::value_to_yaml(msg.application_version, out);
    out << "\n";
  }

  // member: active_version_number_section
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "active_version_number_section: ";
    rosidl_generator_traits::value_to_yaml(msg.active_version_number_section, out);
    out << "\n";
  }

  // member: left_close_range_cut_in
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "left_close_range_cut_in: ";
    rosidl_generator_traits::value_to_yaml(msg.left_close_range_cut_in, out);
    out << "\n";
  }

  // member: right_close_range_cut_in
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "right_close_range_cut_in: ";
    rosidl_generator_traits::value_to_yaml(msg.right_close_range_cut_in, out);
    out << "\n";
  }

  // member: stop_go
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stop_go: ";
    rosidl_generator_traits::value_to_yaml(msg.stop_go, out);
    out << "\n";
  }

  // member: protocol_version
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "protocol_version: ";
    rosidl_generator_traits::value_to_yaml(msg.protocol_version, out);
    out << "\n";
  }

  // member: close_car
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "close_car: ";
    rosidl_generator_traits::value_to_yaml(msg.close_car, out);
    out << "\n";
  }

  // member: failsafe
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "failsafe: ";
    rosidl_generator_traits::value_to_yaml(msg.failsafe, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ObstacleStatus & msg, bool use_flow_style = false)
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

}  // namespace mobileye_560_660_msgs

namespace rosidl_generator_traits
{

[[deprecated("use mobileye_560_660_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const mobileye_560_660_msgs::msg::ObstacleStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  mobileye_560_660_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mobileye_560_660_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const mobileye_560_660_msgs::msg::ObstacleStatus & msg)
{
  return mobileye_560_660_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<mobileye_560_660_msgs::msg::ObstacleStatus>()
{
  return "mobileye_560_660_msgs::msg::ObstacleStatus";
}

template<>
inline const char * name<mobileye_560_660_msgs::msg::ObstacleStatus>()
{
  return "mobileye_560_660_msgs/msg/ObstacleStatus";
}

template<>
struct has_fixed_size<mobileye_560_660_msgs::msg::ObstacleStatus>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<mobileye_560_660_msgs::msg::ObstacleStatus>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<mobileye_560_660_msgs::msg::ObstacleStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MOBILEYE_560_660_MSGS__MSG__DETAIL__OBSTACLE_STATUS__TRAITS_HPP_

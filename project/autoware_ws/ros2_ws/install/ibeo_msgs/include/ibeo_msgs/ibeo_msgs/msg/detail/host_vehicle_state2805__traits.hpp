// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ibeo_msgs:msg/HostVehicleState2805.idl
// generated code does not contain a copyright notice

#ifndef IBEO_MSGS__MSG__DETAIL__HOST_VEHICLE_STATE2805__TRAITS_HPP_
#define IBEO_MSGS__MSG__DETAIL__HOST_VEHICLE_STATE2805__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ibeo_msgs/msg/detail/host_vehicle_state2805__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'ibeo_header'
#include "ibeo_msgs/msg/detail/ibeo_data_header__traits.hpp"
// Member 'timestamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace ibeo_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const HostVehicleState2805 & msg,
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

  // member: timestamp
  {
    out << "timestamp: ";
    to_flow_style_yaml(msg.timestamp, out);
    out << ", ";
  }

  // member: scan_number
  {
    out << "scan_number: ";
    rosidl_generator_traits::value_to_yaml(msg.scan_number, out);
    out << ", ";
  }

  // member: error_flags
  {
    out << "error_flags: ";
    rosidl_generator_traits::value_to_yaml(msg.error_flags, out);
    out << ", ";
  }

  // member: longitudinal_velocity
  {
    out << "longitudinal_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.longitudinal_velocity, out);
    out << ", ";
  }

  // member: steering_wheel_angle
  {
    out << "steering_wheel_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.steering_wheel_angle, out);
    out << ", ";
  }

  // member: front_wheel_angle
  {
    out << "front_wheel_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.front_wheel_angle, out);
    out << ", ";
  }

  // member: x_position
  {
    out << "x_position: ";
    rosidl_generator_traits::value_to_yaml(msg.x_position, out);
    out << ", ";
  }

  // member: y_position
  {
    out << "y_position: ";
    rosidl_generator_traits::value_to_yaml(msg.y_position, out);
    out << ", ";
  }

  // member: course_angle
  {
    out << "course_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.course_angle, out);
    out << ", ";
  }

  // member: time_difference
  {
    out << "time_difference: ";
    rosidl_generator_traits::value_to_yaml(msg.time_difference, out);
    out << ", ";
  }

  // member: x_difference
  {
    out << "x_difference: ";
    rosidl_generator_traits::value_to_yaml(msg.x_difference, out);
    out << ", ";
  }

  // member: y_difference
  {
    out << "y_difference: ";
    rosidl_generator_traits::value_to_yaml(msg.y_difference, out);
    out << ", ";
  }

  // member: heading_difference
  {
    out << "heading_difference: ";
    rosidl_generator_traits::value_to_yaml(msg.heading_difference, out);
    out << ", ";
  }

  // member: current_yaw_rate
  {
    out << "current_yaw_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.current_yaw_rate, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const HostVehicleState2805 & msg,
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

  // member: timestamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timestamp:\n";
    to_block_style_yaml(msg.timestamp, out, indentation + 2);
  }

  // member: scan_number
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "scan_number: ";
    rosidl_generator_traits::value_to_yaml(msg.scan_number, out);
    out << "\n";
  }

  // member: error_flags
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "error_flags: ";
    rosidl_generator_traits::value_to_yaml(msg.error_flags, out);
    out << "\n";
  }

  // member: longitudinal_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "longitudinal_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.longitudinal_velocity, out);
    out << "\n";
  }

  // member: steering_wheel_angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "steering_wheel_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.steering_wheel_angle, out);
    out << "\n";
  }

  // member: front_wheel_angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "front_wheel_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.front_wheel_angle, out);
    out << "\n";
  }

  // member: x_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x_position: ";
    rosidl_generator_traits::value_to_yaml(msg.x_position, out);
    out << "\n";
  }

  // member: y_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y_position: ";
    rosidl_generator_traits::value_to_yaml(msg.y_position, out);
    out << "\n";
  }

  // member: course_angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "course_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.course_angle, out);
    out << "\n";
  }

  // member: time_difference
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "time_difference: ";
    rosidl_generator_traits::value_to_yaml(msg.time_difference, out);
    out << "\n";
  }

  // member: x_difference
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x_difference: ";
    rosidl_generator_traits::value_to_yaml(msg.x_difference, out);
    out << "\n";
  }

  // member: y_difference
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y_difference: ";
    rosidl_generator_traits::value_to_yaml(msg.y_difference, out);
    out << "\n";
  }

  // member: heading_difference
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "heading_difference: ";
    rosidl_generator_traits::value_to_yaml(msg.heading_difference, out);
    out << "\n";
  }

  // member: current_yaw_rate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_yaw_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.current_yaw_rate, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const HostVehicleState2805 & msg, bool use_flow_style = false)
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
  const ibeo_msgs::msg::HostVehicleState2805 & msg,
  std::ostream & out, size_t indentation = 0)
{
  ibeo_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ibeo_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const ibeo_msgs::msg::HostVehicleState2805 & msg)
{
  return ibeo_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ibeo_msgs::msg::HostVehicleState2805>()
{
  return "ibeo_msgs::msg::HostVehicleState2805";
}

template<>
inline const char * name<ibeo_msgs::msg::HostVehicleState2805>()
{
  return "ibeo_msgs/msg/HostVehicleState2805";
}

template<>
struct has_fixed_size<ibeo_msgs::msg::HostVehicleState2805>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value && has_fixed_size<ibeo_msgs::msg::IbeoDataHeader>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<ibeo_msgs::msg::HostVehicleState2805>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value && has_bounded_size<ibeo_msgs::msg::IbeoDataHeader>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<ibeo_msgs::msg::HostVehicleState2805>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // IBEO_MSGS__MSG__DETAIL__HOST_VEHICLE_STATE2805__TRAITS_HPP_

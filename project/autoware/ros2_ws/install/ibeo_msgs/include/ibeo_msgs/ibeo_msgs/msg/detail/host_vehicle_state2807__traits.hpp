// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ibeo_msgs:msg/HostVehicleState2807.idl
// generated code does not contain a copyright notice

#ifndef IBEO_MSGS__MSG__DETAIL__HOST_VEHICLE_STATE2807__TRAITS_HPP_
#define IBEO_MSGS__MSG__DETAIL__HOST_VEHICLE_STATE2807__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ibeo_msgs/msg/detail/host_vehicle_state2807__struct.hpp"
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
  const HostVehicleState2807 & msg,
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

  // member: distance_x
  {
    out << "distance_x: ";
    rosidl_generator_traits::value_to_yaml(msg.distance_x, out);
    out << ", ";
  }

  // member: distance_y
  {
    out << "distance_y: ";
    rosidl_generator_traits::value_to_yaml(msg.distance_y, out);
    out << ", ";
  }

  // member: course_angle
  {
    out << "course_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.course_angle, out);
    out << ", ";
  }

  // member: longitudinal_velocity
  {
    out << "longitudinal_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.longitudinal_velocity, out);
    out << ", ";
  }

  // member: yaw_rate
  {
    out << "yaw_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw_rate, out);
    out << ", ";
  }

  // member: steering_wheel_angle
  {
    out << "steering_wheel_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.steering_wheel_angle, out);
    out << ", ";
  }

  // member: cross_acceleration
  {
    out << "cross_acceleration: ";
    rosidl_generator_traits::value_to_yaml(msg.cross_acceleration, out);
    out << ", ";
  }

  // member: front_wheel_angle
  {
    out << "front_wheel_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.front_wheel_angle, out);
    out << ", ";
  }

  // member: vehicle_width
  {
    out << "vehicle_width: ";
    rosidl_generator_traits::value_to_yaml(msg.vehicle_width, out);
    out << ", ";
  }

  // member: vehicle_front_to_front_axle
  {
    out << "vehicle_front_to_front_axle: ";
    rosidl_generator_traits::value_to_yaml(msg.vehicle_front_to_front_axle, out);
    out << ", ";
  }

  // member: rear_axle_to_front_axle
  {
    out << "rear_axle_to_front_axle: ";
    rosidl_generator_traits::value_to_yaml(msg.rear_axle_to_front_axle, out);
    out << ", ";
  }

  // member: rear_axle_to_vehicle_rear
  {
    out << "rear_axle_to_vehicle_rear: ";
    rosidl_generator_traits::value_to_yaml(msg.rear_axle_to_vehicle_rear, out);
    out << ", ";
  }

  // member: steer_ratio_poly_0
  {
    out << "steer_ratio_poly_0: ";
    rosidl_generator_traits::value_to_yaml(msg.steer_ratio_poly_0, out);
    out << ", ";
  }

  // member: steer_ratio_poly_1
  {
    out << "steer_ratio_poly_1: ";
    rosidl_generator_traits::value_to_yaml(msg.steer_ratio_poly_1, out);
    out << ", ";
  }

  // member: steer_ratio_poly_2
  {
    out << "steer_ratio_poly_2: ";
    rosidl_generator_traits::value_to_yaml(msg.steer_ratio_poly_2, out);
    out << ", ";
  }

  // member: steer_ratio_poly_3
  {
    out << "steer_ratio_poly_3: ";
    rosidl_generator_traits::value_to_yaml(msg.steer_ratio_poly_3, out);
    out << ", ";
  }

  // member: longitudinal_acceleration
  {
    out << "longitudinal_acceleration: ";
    rosidl_generator_traits::value_to_yaml(msg.longitudinal_acceleration, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const HostVehicleState2807 & msg,
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

  // member: distance_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "distance_x: ";
    rosidl_generator_traits::value_to_yaml(msg.distance_x, out);
    out << "\n";
  }

  // member: distance_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "distance_y: ";
    rosidl_generator_traits::value_to_yaml(msg.distance_y, out);
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

  // member: longitudinal_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "longitudinal_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.longitudinal_velocity, out);
    out << "\n";
  }

  // member: yaw_rate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yaw_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw_rate, out);
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

  // member: cross_acceleration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cross_acceleration: ";
    rosidl_generator_traits::value_to_yaml(msg.cross_acceleration, out);
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

  // member: vehicle_width
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vehicle_width: ";
    rosidl_generator_traits::value_to_yaml(msg.vehicle_width, out);
    out << "\n";
  }

  // member: vehicle_front_to_front_axle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vehicle_front_to_front_axle: ";
    rosidl_generator_traits::value_to_yaml(msg.vehicle_front_to_front_axle, out);
    out << "\n";
  }

  // member: rear_axle_to_front_axle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rear_axle_to_front_axle: ";
    rosidl_generator_traits::value_to_yaml(msg.rear_axle_to_front_axle, out);
    out << "\n";
  }

  // member: rear_axle_to_vehicle_rear
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rear_axle_to_vehicle_rear: ";
    rosidl_generator_traits::value_to_yaml(msg.rear_axle_to_vehicle_rear, out);
    out << "\n";
  }

  // member: steer_ratio_poly_0
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "steer_ratio_poly_0: ";
    rosidl_generator_traits::value_to_yaml(msg.steer_ratio_poly_0, out);
    out << "\n";
  }

  // member: steer_ratio_poly_1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "steer_ratio_poly_1: ";
    rosidl_generator_traits::value_to_yaml(msg.steer_ratio_poly_1, out);
    out << "\n";
  }

  // member: steer_ratio_poly_2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "steer_ratio_poly_2: ";
    rosidl_generator_traits::value_to_yaml(msg.steer_ratio_poly_2, out);
    out << "\n";
  }

  // member: steer_ratio_poly_3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "steer_ratio_poly_3: ";
    rosidl_generator_traits::value_to_yaml(msg.steer_ratio_poly_3, out);
    out << "\n";
  }

  // member: longitudinal_acceleration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "longitudinal_acceleration: ";
    rosidl_generator_traits::value_to_yaml(msg.longitudinal_acceleration, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const HostVehicleState2807 & msg, bool use_flow_style = false)
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
  const ibeo_msgs::msg::HostVehicleState2807 & msg,
  std::ostream & out, size_t indentation = 0)
{
  ibeo_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ibeo_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const ibeo_msgs::msg::HostVehicleState2807 & msg)
{
  return ibeo_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ibeo_msgs::msg::HostVehicleState2807>()
{
  return "ibeo_msgs::msg::HostVehicleState2807";
}

template<>
inline const char * name<ibeo_msgs::msg::HostVehicleState2807>()
{
  return "ibeo_msgs/msg/HostVehicleState2807";
}

template<>
struct has_fixed_size<ibeo_msgs::msg::HostVehicleState2807>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value && has_fixed_size<ibeo_msgs::msg::IbeoDataHeader>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<ibeo_msgs::msg::HostVehicleState2807>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value && has_bounded_size<ibeo_msgs::msg::IbeoDataHeader>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<ibeo_msgs::msg::HostVehicleState2807>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // IBEO_MSGS__MSG__DETAIL__HOST_VEHICLE_STATE2807__TRAITS_HPP_

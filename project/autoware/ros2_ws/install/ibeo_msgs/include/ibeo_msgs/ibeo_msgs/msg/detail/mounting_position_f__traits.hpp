// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ibeo_msgs:msg/MountingPositionF.idl
// generated code does not contain a copyright notice

#ifndef IBEO_MSGS__MSG__DETAIL__MOUNTING_POSITION_F__TRAITS_HPP_
#define IBEO_MSGS__MSG__DETAIL__MOUNTING_POSITION_F__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ibeo_msgs/msg/detail/mounting_position_f__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace ibeo_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const MountingPositionF & msg,
  std::ostream & out)
{
  out << "{";
  // member: yaw_angle
  {
    out << "yaw_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw_angle, out);
    out << ", ";
  }

  // member: pitch_angle
  {
    out << "pitch_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.pitch_angle, out);
    out << ", ";
  }

  // member: roll_angle
  {
    out << "roll_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.roll_angle, out);
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

  // member: z_position
  {
    out << "z_position: ";
    rosidl_generator_traits::value_to_yaml(msg.z_position, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MountingPositionF & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: yaw_angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yaw_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw_angle, out);
    out << "\n";
  }

  // member: pitch_angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pitch_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.pitch_angle, out);
    out << "\n";
  }

  // member: roll_angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "roll_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.roll_angle, out);
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

  // member: z_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "z_position: ";
    rosidl_generator_traits::value_to_yaml(msg.z_position, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MountingPositionF & msg, bool use_flow_style = false)
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
  const ibeo_msgs::msg::MountingPositionF & msg,
  std::ostream & out, size_t indentation = 0)
{
  ibeo_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ibeo_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const ibeo_msgs::msg::MountingPositionF & msg)
{
  return ibeo_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ibeo_msgs::msg::MountingPositionF>()
{
  return "ibeo_msgs::msg::MountingPositionF";
}

template<>
inline const char * name<ibeo_msgs::msg::MountingPositionF>()
{
  return "ibeo_msgs/msg/MountingPositionF";
}

template<>
struct has_fixed_size<ibeo_msgs::msg::MountingPositionF>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<ibeo_msgs::msg::MountingPositionF>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<ibeo_msgs::msg::MountingPositionF>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // IBEO_MSGS__MSG__DETAIL__MOUNTING_POSITION_F__TRAITS_HPP_

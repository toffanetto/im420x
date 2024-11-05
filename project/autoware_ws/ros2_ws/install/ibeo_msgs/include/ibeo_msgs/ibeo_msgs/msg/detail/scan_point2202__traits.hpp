// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ibeo_msgs:msg/ScanPoint2202.idl
// generated code does not contain a copyright notice

#ifndef IBEO_MSGS__MSG__DETAIL__SCAN_POINT2202__TRAITS_HPP_
#define IBEO_MSGS__MSG__DETAIL__SCAN_POINT2202__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ibeo_msgs/msg/detail/scan_point2202__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace ibeo_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ScanPoint2202 & msg,
  std::ostream & out)
{
  out << "{";
  // member: layer
  {
    out << "layer: ";
    rosidl_generator_traits::value_to_yaml(msg.layer, out);
    out << ", ";
  }

  // member: echo
  {
    out << "echo: ";
    rosidl_generator_traits::value_to_yaml(msg.echo, out);
    out << ", ";
  }

  // member: transparent_point
  {
    out << "transparent_point: ";
    rosidl_generator_traits::value_to_yaml(msg.transparent_point, out);
    out << ", ";
  }

  // member: clutter_atmospheric
  {
    out << "clutter_atmospheric: ";
    rosidl_generator_traits::value_to_yaml(msg.clutter_atmospheric, out);
    out << ", ";
  }

  // member: ground
  {
    out << "ground: ";
    rosidl_generator_traits::value_to_yaml(msg.ground, out);
    out << ", ";
  }

  // member: dirt
  {
    out << "dirt: ";
    rosidl_generator_traits::value_to_yaml(msg.dirt, out);
    out << ", ";
  }

  // member: horizontal_angle
  {
    out << "horizontal_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.horizontal_angle, out);
    out << ", ";
  }

  // member: radial_distance
  {
    out << "radial_distance: ";
    rosidl_generator_traits::value_to_yaml(msg.radial_distance, out);
    out << ", ";
  }

  // member: echo_pulse_width
  {
    out << "echo_pulse_width: ";
    rosidl_generator_traits::value_to_yaml(msg.echo_pulse_width, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ScanPoint2202 & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: layer
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "layer: ";
    rosidl_generator_traits::value_to_yaml(msg.layer, out);
    out << "\n";
  }

  // member: echo
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "echo: ";
    rosidl_generator_traits::value_to_yaml(msg.echo, out);
    out << "\n";
  }

  // member: transparent_point
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "transparent_point: ";
    rosidl_generator_traits::value_to_yaml(msg.transparent_point, out);
    out << "\n";
  }

  // member: clutter_atmospheric
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "clutter_atmospheric: ";
    rosidl_generator_traits::value_to_yaml(msg.clutter_atmospheric, out);
    out << "\n";
  }

  // member: ground
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ground: ";
    rosidl_generator_traits::value_to_yaml(msg.ground, out);
    out << "\n";
  }

  // member: dirt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dirt: ";
    rosidl_generator_traits::value_to_yaml(msg.dirt, out);
    out << "\n";
  }

  // member: horizontal_angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "horizontal_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.horizontal_angle, out);
    out << "\n";
  }

  // member: radial_distance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "radial_distance: ";
    rosidl_generator_traits::value_to_yaml(msg.radial_distance, out);
    out << "\n";
  }

  // member: echo_pulse_width
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "echo_pulse_width: ";
    rosidl_generator_traits::value_to_yaml(msg.echo_pulse_width, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ScanPoint2202 & msg, bool use_flow_style = false)
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
  const ibeo_msgs::msg::ScanPoint2202 & msg,
  std::ostream & out, size_t indentation = 0)
{
  ibeo_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ibeo_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const ibeo_msgs::msg::ScanPoint2202 & msg)
{
  return ibeo_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ibeo_msgs::msg::ScanPoint2202>()
{
  return "ibeo_msgs::msg::ScanPoint2202";
}

template<>
inline const char * name<ibeo_msgs::msg::ScanPoint2202>()
{
  return "ibeo_msgs/msg/ScanPoint2202";
}

template<>
struct has_fixed_size<ibeo_msgs::msg::ScanPoint2202>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<ibeo_msgs::msg::ScanPoint2202>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<ibeo_msgs::msg::ScanPoint2202>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // IBEO_MSGS__MSG__DETAIL__SCAN_POINT2202__TRAITS_HPP_

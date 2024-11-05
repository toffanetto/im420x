// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ibeo_msgs:msg/ScanPoint2204.idl
// generated code does not contain a copyright notice

#ifndef IBEO_MSGS__MSG__DETAIL__SCAN_POINT2204__TRAITS_HPP_
#define IBEO_MSGS__MSG__DETAIL__SCAN_POINT2204__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ibeo_msgs/msg/detail/scan_point2204__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace ibeo_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ScanPoint2204 & msg,
  std::ostream & out)
{
  out << "{";
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
    out << ", ";
  }

  // member: echo_width
  {
    out << "echo_width: ";
    rosidl_generator_traits::value_to_yaml(msg.echo_width, out);
    out << ", ";
  }

  // member: device_id
  {
    out << "device_id: ";
    rosidl_generator_traits::value_to_yaml(msg.device_id, out);
    out << ", ";
  }

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

  // member: time_offset
  {
    out << "time_offset: ";
    rosidl_generator_traits::value_to_yaml(msg.time_offset, out);
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

  // member: precipitation
  {
    out << "precipitation: ";
    rosidl_generator_traits::value_to_yaml(msg.precipitation, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ScanPoint2204 & msg,
  std::ostream & out, size_t indentation = 0)
{
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

  // member: echo_width
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "echo_width: ";
    rosidl_generator_traits::value_to_yaml(msg.echo_width, out);
    out << "\n";
  }

  // member: device_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "device_id: ";
    rosidl_generator_traits::value_to_yaml(msg.device_id, out);
    out << "\n";
  }

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

  // member: time_offset
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "time_offset: ";
    rosidl_generator_traits::value_to_yaml(msg.time_offset, out);
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

  // member: precipitation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "precipitation: ";
    rosidl_generator_traits::value_to_yaml(msg.precipitation, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ScanPoint2204 & msg, bool use_flow_style = false)
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
  const ibeo_msgs::msg::ScanPoint2204 & msg,
  std::ostream & out, size_t indentation = 0)
{
  ibeo_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ibeo_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const ibeo_msgs::msg::ScanPoint2204 & msg)
{
  return ibeo_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ibeo_msgs::msg::ScanPoint2204>()
{
  return "ibeo_msgs::msg::ScanPoint2204";
}

template<>
inline const char * name<ibeo_msgs::msg::ScanPoint2204>()
{
  return "ibeo_msgs/msg/ScanPoint2204";
}

template<>
struct has_fixed_size<ibeo_msgs::msg::ScanPoint2204>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<ibeo_msgs::msg::ScanPoint2204>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<ibeo_msgs::msg::ScanPoint2204>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // IBEO_MSGS__MSG__DETAIL__SCAN_POINT2204__TRAITS_HPP_

// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ibeo_msgs:msg/ResolutionInfo.idl
// generated code does not contain a copyright notice

#ifndef IBEO_MSGS__MSG__DETAIL__RESOLUTION_INFO__TRAITS_HPP_
#define IBEO_MSGS__MSG__DETAIL__RESOLUTION_INFO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ibeo_msgs/msg/detail/resolution_info__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace ibeo_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ResolutionInfo & msg,
  std::ostream & out)
{
  out << "{";
  // member: resolution_start_angle
  {
    out << "resolution_start_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.resolution_start_angle, out);
    out << ", ";
  }

  // member: resolution
  {
    out << "resolution: ";
    rosidl_generator_traits::value_to_yaml(msg.resolution, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ResolutionInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: resolution_start_angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "resolution_start_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.resolution_start_angle, out);
    out << "\n";
  }

  // member: resolution
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "resolution: ";
    rosidl_generator_traits::value_to_yaml(msg.resolution, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ResolutionInfo & msg, bool use_flow_style = false)
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
  const ibeo_msgs::msg::ResolutionInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  ibeo_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ibeo_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const ibeo_msgs::msg::ResolutionInfo & msg)
{
  return ibeo_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ibeo_msgs::msg::ResolutionInfo>()
{
  return "ibeo_msgs::msg::ResolutionInfo";
}

template<>
inline const char * name<ibeo_msgs::msg::ResolutionInfo>()
{
  return "ibeo_msgs/msg/ResolutionInfo";
}

template<>
struct has_fixed_size<ibeo_msgs::msg::ResolutionInfo>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<ibeo_msgs::msg::ResolutionInfo>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<ibeo_msgs::msg::ResolutionInfo>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // IBEO_MSGS__MSG__DETAIL__RESOLUTION_INFO__TRAITS_HPP_

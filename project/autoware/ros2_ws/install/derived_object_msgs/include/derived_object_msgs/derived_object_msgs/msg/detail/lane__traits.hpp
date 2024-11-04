// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from derived_object_msgs:msg/Lane.idl
// generated code does not contain a copyright notice

#ifndef DERIVED_OBJECT_MSGS__MSG__DETAIL__LANE__TRAITS_HPP_
#define DERIVED_OBJECT_MSGS__MSG__DETAIL__LANE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "derived_object_msgs/msg/detail/lane__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace derived_object_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Lane & msg,
  std::ostream & out)
{
  out << "{";
  // member: quality
  {
    out << "quality: ";
    rosidl_generator_traits::value_to_yaml(msg.quality, out);
    out << ", ";
  }

  // member: marker_kind
  {
    out << "marker_kind: ";
    rosidl_generator_traits::value_to_yaml(msg.marker_kind, out);
    out << ", ";
  }

  // member: curve_model_kind
  {
    out << "curve_model_kind: ";
    rosidl_generator_traits::value_to_yaml(msg.curve_model_kind, out);
    out << ", ";
  }

  // member: marker_offset
  {
    out << "marker_offset: ";
    rosidl_generator_traits::value_to_yaml(msg.marker_offset, out);
    out << ", ";
  }

  // member: heading_angle
  {
    out << "heading_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.heading_angle, out);
    out << ", ";
  }

  // member: curvature
  {
    out << "curvature: ";
    rosidl_generator_traits::value_to_yaml(msg.curvature, out);
    out << ", ";
  }

  // member: curvature_derivative
  {
    out << "curvature_derivative: ";
    rosidl_generator_traits::value_to_yaml(msg.curvature_derivative, out);
    out << ", ";
  }

  // member: marker_width
  {
    out << "marker_width: ";
    rosidl_generator_traits::value_to_yaml(msg.marker_width, out);
    out << ", ";
  }

  // member: view_range
  {
    out << "view_range: ";
    rosidl_generator_traits::value_to_yaml(msg.view_range, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Lane & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: quality
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "quality: ";
    rosidl_generator_traits::value_to_yaml(msg.quality, out);
    out << "\n";
  }

  // member: marker_kind
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "marker_kind: ";
    rosidl_generator_traits::value_to_yaml(msg.marker_kind, out);
    out << "\n";
  }

  // member: curve_model_kind
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "curve_model_kind: ";
    rosidl_generator_traits::value_to_yaml(msg.curve_model_kind, out);
    out << "\n";
  }

  // member: marker_offset
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "marker_offset: ";
    rosidl_generator_traits::value_to_yaml(msg.marker_offset, out);
    out << "\n";
  }

  // member: heading_angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "heading_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.heading_angle, out);
    out << "\n";
  }

  // member: curvature
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "curvature: ";
    rosidl_generator_traits::value_to_yaml(msg.curvature, out);
    out << "\n";
  }

  // member: curvature_derivative
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "curvature_derivative: ";
    rosidl_generator_traits::value_to_yaml(msg.curvature_derivative, out);
    out << "\n";
  }

  // member: marker_width
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "marker_width: ";
    rosidl_generator_traits::value_to_yaml(msg.marker_width, out);
    out << "\n";
  }

  // member: view_range
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "view_range: ";
    rosidl_generator_traits::value_to_yaml(msg.view_range, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Lane & msg, bool use_flow_style = false)
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

}  // namespace derived_object_msgs

namespace rosidl_generator_traits
{

[[deprecated("use derived_object_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const derived_object_msgs::msg::Lane & msg,
  std::ostream & out, size_t indentation = 0)
{
  derived_object_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use derived_object_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const derived_object_msgs::msg::Lane & msg)
{
  return derived_object_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<derived_object_msgs::msg::Lane>()
{
  return "derived_object_msgs::msg::Lane";
}

template<>
inline const char * name<derived_object_msgs::msg::Lane>()
{
  return "derived_object_msgs/msg/Lane";
}

template<>
struct has_fixed_size<derived_object_msgs::msg::Lane>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<derived_object_msgs::msg::Lane>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<derived_object_msgs::msg::Lane>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DERIVED_OBJECT_MSGS__MSG__DETAIL__LANE__TRAITS_HPP_

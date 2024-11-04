// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from derived_object_msgs:msg/ObjectWithCovariance.idl
// generated code does not contain a copyright notice

#ifndef DERIVED_OBJECT_MSGS__MSG__DETAIL__OBJECT_WITH_COVARIANCE__TRAITS_HPP_
#define DERIVED_OBJECT_MSGS__MSG__DETAIL__OBJECT_WITH_COVARIANCE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "derived_object_msgs/msg/detail/object_with_covariance__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'pose'
#include "geometry_msgs/msg/detail/pose_with_covariance__traits.hpp"
// Member 'twist'
#include "geometry_msgs/msg/detail/twist_with_covariance__traits.hpp"
// Member 'accel'
#include "geometry_msgs/msg/detail/accel_with_covariance__traits.hpp"
// Member 'polygon'
#include "geometry_msgs/msg/detail/polygon__traits.hpp"
// Member 'shape'
#include "derived_object_msgs/msg/detail/solid_primitive_with_covariance__traits.hpp"

namespace derived_object_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ObjectWithCovariance & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: id
  {
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << ", ";
  }

  // member: detection_level
  {
    out << "detection_level: ";
    rosidl_generator_traits::value_to_yaml(msg.detection_level, out);
    out << ", ";
  }

  // member: object_classified
  {
    out << "object_classified: ";
    rosidl_generator_traits::value_to_yaml(msg.object_classified, out);
    out << ", ";
  }

  // member: pose
  {
    out << "pose: ";
    to_flow_style_yaml(msg.pose, out);
    out << ", ";
  }

  // member: twist
  {
    out << "twist: ";
    to_flow_style_yaml(msg.twist, out);
    out << ", ";
  }

  // member: accel
  {
    out << "accel: ";
    to_flow_style_yaml(msg.accel, out);
    out << ", ";
  }

  // member: polygon
  {
    out << "polygon: ";
    to_flow_style_yaml(msg.polygon, out);
    out << ", ";
  }

  // member: shape
  {
    out << "shape: ";
    to_flow_style_yaml(msg.shape, out);
    out << ", ";
  }

  // member: classification
  {
    out << "classification: ";
    rosidl_generator_traits::value_to_yaml(msg.classification, out);
    out << ", ";
  }

  // member: classification_certainty
  {
    out << "classification_certainty: ";
    rosidl_generator_traits::value_to_yaml(msg.classification_certainty, out);
    out << ", ";
  }

  // member: classification_age
  {
    out << "classification_age: ";
    rosidl_generator_traits::value_to_yaml(msg.classification_age, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ObjectWithCovariance & msg,
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

  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << "\n";
  }

  // member: detection_level
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "detection_level: ";
    rosidl_generator_traits::value_to_yaml(msg.detection_level, out);
    out << "\n";
  }

  // member: object_classified
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "object_classified: ";
    rosidl_generator_traits::value_to_yaml(msg.object_classified, out);
    out << "\n";
  }

  // member: pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pose:\n";
    to_block_style_yaml(msg.pose, out, indentation + 2);
  }

  // member: twist
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "twist:\n";
    to_block_style_yaml(msg.twist, out, indentation + 2);
  }

  // member: accel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accel:\n";
    to_block_style_yaml(msg.accel, out, indentation + 2);
  }

  // member: polygon
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "polygon:\n";
    to_block_style_yaml(msg.polygon, out, indentation + 2);
  }

  // member: shape
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "shape:\n";
    to_block_style_yaml(msg.shape, out, indentation + 2);
  }

  // member: classification
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "classification: ";
    rosidl_generator_traits::value_to_yaml(msg.classification, out);
    out << "\n";
  }

  // member: classification_certainty
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "classification_certainty: ";
    rosidl_generator_traits::value_to_yaml(msg.classification_certainty, out);
    out << "\n";
  }

  // member: classification_age
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "classification_age: ";
    rosidl_generator_traits::value_to_yaml(msg.classification_age, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ObjectWithCovariance & msg, bool use_flow_style = false)
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
  const derived_object_msgs::msg::ObjectWithCovariance & msg,
  std::ostream & out, size_t indentation = 0)
{
  derived_object_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use derived_object_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const derived_object_msgs::msg::ObjectWithCovariance & msg)
{
  return derived_object_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<derived_object_msgs::msg::ObjectWithCovariance>()
{
  return "derived_object_msgs::msg::ObjectWithCovariance";
}

template<>
inline const char * name<derived_object_msgs::msg::ObjectWithCovariance>()
{
  return "derived_object_msgs/msg/ObjectWithCovariance";
}

template<>
struct has_fixed_size<derived_object_msgs::msg::ObjectWithCovariance>
  : std::integral_constant<bool, has_fixed_size<derived_object_msgs::msg::SolidPrimitiveWithCovariance>::value && has_fixed_size<geometry_msgs::msg::AccelWithCovariance>::value && has_fixed_size<geometry_msgs::msg::Polygon>::value && has_fixed_size<geometry_msgs::msg::PoseWithCovariance>::value && has_fixed_size<geometry_msgs::msg::TwistWithCovariance>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<derived_object_msgs::msg::ObjectWithCovariance>
  : std::integral_constant<bool, has_bounded_size<derived_object_msgs::msg::SolidPrimitiveWithCovariance>::value && has_bounded_size<geometry_msgs::msg::AccelWithCovariance>::value && has_bounded_size<geometry_msgs::msg::Polygon>::value && has_bounded_size<geometry_msgs::msg::PoseWithCovariance>::value && has_bounded_size<geometry_msgs::msg::TwistWithCovariance>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<derived_object_msgs::msg::ObjectWithCovariance>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DERIVED_OBJECT_MSGS__MSG__DETAIL__OBJECT_WITH_COVARIANCE__TRAITS_HPP_

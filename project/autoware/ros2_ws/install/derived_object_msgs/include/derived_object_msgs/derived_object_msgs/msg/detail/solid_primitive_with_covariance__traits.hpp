// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from derived_object_msgs:msg/SolidPrimitiveWithCovariance.idl
// generated code does not contain a copyright notice

#ifndef DERIVED_OBJECT_MSGS__MSG__DETAIL__SOLID_PRIMITIVE_WITH_COVARIANCE__TRAITS_HPP_
#define DERIVED_OBJECT_MSGS__MSG__DETAIL__SOLID_PRIMITIVE_WITH_COVARIANCE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "derived_object_msgs/msg/detail/solid_primitive_with_covariance__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace derived_object_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const SolidPrimitiveWithCovariance & msg,
  std::ostream & out)
{
  out << "{";
  // member: type
  {
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << ", ";
  }

  // member: dimensions
  {
    if (msg.dimensions.size() == 0) {
      out << "dimensions: []";
    } else {
      out << "dimensions: [";
      size_t pending_items = msg.dimensions.size();
      for (auto item : msg.dimensions) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: covariance
  {
    if (msg.covariance.size() == 0) {
      out << "covariance: []";
    } else {
      out << "covariance: [";
      size_t pending_items = msg.covariance.size();
      for (auto item : msg.covariance) {
        rosidl_generator_traits::value_to_yaml(item, out);
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
  const SolidPrimitiveWithCovariance & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << "\n";
  }

  // member: dimensions
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.dimensions.size() == 0) {
      out << "dimensions: []\n";
    } else {
      out << "dimensions:\n";
      for (auto item : msg.dimensions) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: covariance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.covariance.size() == 0) {
      out << "covariance: []\n";
    } else {
      out << "covariance:\n";
      for (auto item : msg.covariance) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SolidPrimitiveWithCovariance & msg, bool use_flow_style = false)
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
  const derived_object_msgs::msg::SolidPrimitiveWithCovariance & msg,
  std::ostream & out, size_t indentation = 0)
{
  derived_object_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use derived_object_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const derived_object_msgs::msg::SolidPrimitiveWithCovariance & msg)
{
  return derived_object_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<derived_object_msgs::msg::SolidPrimitiveWithCovariance>()
{
  return "derived_object_msgs::msg::SolidPrimitiveWithCovariance";
}

template<>
inline const char * name<derived_object_msgs::msg::SolidPrimitiveWithCovariance>()
{
  return "derived_object_msgs/msg/SolidPrimitiveWithCovariance";
}

template<>
struct has_fixed_size<derived_object_msgs::msg::SolidPrimitiveWithCovariance>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<derived_object_msgs::msg::SolidPrimitiveWithCovariance>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<derived_object_msgs::msg::SolidPrimitiveWithCovariance>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DERIVED_OBJECT_MSGS__MSG__DETAIL__SOLID_PRIMITIVE_WITH_COVARIANCE__TRAITS_HPP_

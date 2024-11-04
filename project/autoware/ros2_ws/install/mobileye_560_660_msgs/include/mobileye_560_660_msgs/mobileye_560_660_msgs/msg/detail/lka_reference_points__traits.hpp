// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mobileye_560_660_msgs:msg/LkaReferencePoints.idl
// generated code does not contain a copyright notice

#ifndef MOBILEYE_560_660_MSGS__MSG__DETAIL__LKA_REFERENCE_POINTS__TRAITS_HPP_
#define MOBILEYE_560_660_MSGS__MSG__DETAIL__LKA_REFERENCE_POINTS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mobileye_560_660_msgs/msg/detail/lka_reference_points__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace mobileye_560_660_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const LkaReferencePoints & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: ref_point_1_position
  {
    out << "ref_point_1_position: ";
    rosidl_generator_traits::value_to_yaml(msg.ref_point_1_position, out);
    out << ", ";
  }

  // member: ref_point_1_distance
  {
    out << "ref_point_1_distance: ";
    rosidl_generator_traits::value_to_yaml(msg.ref_point_1_distance, out);
    out << ", ";
  }

  // member: ref_point_1_validity
  {
    out << "ref_point_1_validity: ";
    rosidl_generator_traits::value_to_yaml(msg.ref_point_1_validity, out);
    out << ", ";
  }

  // member: ref_point_2_position
  {
    out << "ref_point_2_position: ";
    rosidl_generator_traits::value_to_yaml(msg.ref_point_2_position, out);
    out << ", ";
  }

  // member: ref_point_2_distance
  {
    out << "ref_point_2_distance: ";
    rosidl_generator_traits::value_to_yaml(msg.ref_point_2_distance, out);
    out << ", ";
  }

  // member: ref_point_2_validity
  {
    out << "ref_point_2_validity: ";
    rosidl_generator_traits::value_to_yaml(msg.ref_point_2_validity, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LkaReferencePoints & msg,
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

  // member: ref_point_1_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ref_point_1_position: ";
    rosidl_generator_traits::value_to_yaml(msg.ref_point_1_position, out);
    out << "\n";
  }

  // member: ref_point_1_distance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ref_point_1_distance: ";
    rosidl_generator_traits::value_to_yaml(msg.ref_point_1_distance, out);
    out << "\n";
  }

  // member: ref_point_1_validity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ref_point_1_validity: ";
    rosidl_generator_traits::value_to_yaml(msg.ref_point_1_validity, out);
    out << "\n";
  }

  // member: ref_point_2_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ref_point_2_position: ";
    rosidl_generator_traits::value_to_yaml(msg.ref_point_2_position, out);
    out << "\n";
  }

  // member: ref_point_2_distance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ref_point_2_distance: ";
    rosidl_generator_traits::value_to_yaml(msg.ref_point_2_distance, out);
    out << "\n";
  }

  // member: ref_point_2_validity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ref_point_2_validity: ";
    rosidl_generator_traits::value_to_yaml(msg.ref_point_2_validity, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LkaReferencePoints & msg, bool use_flow_style = false)
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
  const mobileye_560_660_msgs::msg::LkaReferencePoints & msg,
  std::ostream & out, size_t indentation = 0)
{
  mobileye_560_660_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mobileye_560_660_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const mobileye_560_660_msgs::msg::LkaReferencePoints & msg)
{
  return mobileye_560_660_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<mobileye_560_660_msgs::msg::LkaReferencePoints>()
{
  return "mobileye_560_660_msgs::msg::LkaReferencePoints";
}

template<>
inline const char * name<mobileye_560_660_msgs::msg::LkaReferencePoints>()
{
  return "mobileye_560_660_msgs/msg/LkaReferencePoints";
}

template<>
struct has_fixed_size<mobileye_560_660_msgs::msg::LkaReferencePoints>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<mobileye_560_660_msgs::msg::LkaReferencePoints>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<mobileye_560_660_msgs::msg::LkaReferencePoints>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MOBILEYE_560_660_MSGS__MSG__DETAIL__LKA_REFERENCE_POINTS__TRAITS_HPP_

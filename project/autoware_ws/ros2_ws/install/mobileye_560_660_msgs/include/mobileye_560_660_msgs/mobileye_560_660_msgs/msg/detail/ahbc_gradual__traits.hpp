// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mobileye_560_660_msgs:msg/AhbcGradual.idl
// generated code does not contain a copyright notice

#ifndef MOBILEYE_560_660_MSGS__MSG__DETAIL__AHBC_GRADUAL__TRAITS_HPP_
#define MOBILEYE_560_660_MSGS__MSG__DETAIL__AHBC_GRADUAL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mobileye_560_660_msgs/msg/detail/ahbc_gradual__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace mobileye_560_660_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const AhbcGradual & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: boundary_domain_bottom_non_glare_hlb
  {
    out << "boundary_domain_bottom_non_glare_hlb: ";
    rosidl_generator_traits::value_to_yaml(msg.boundary_domain_bottom_non_glare_hlb, out);
    out << ", ";
  }

  // member: boundary_domain_non_glare_left_hand_hlb
  {
    out << "boundary_domain_non_glare_left_hand_hlb: ";
    rosidl_generator_traits::value_to_yaml(msg.boundary_domain_non_glare_left_hand_hlb, out);
    out << ", ";
  }

  // member: boundary_domain_non_glare_right_hand_hlb
  {
    out << "boundary_domain_non_glare_right_hand_hlb: ";
    rosidl_generator_traits::value_to_yaml(msg.boundary_domain_non_glare_right_hand_hlb, out);
    out << ", ";
  }

  // member: object_distance_hlb
  {
    out << "object_distance_hlb: ";
    rosidl_generator_traits::value_to_yaml(msg.object_distance_hlb, out);
    out << ", ";
  }

  // member: status_boundary_domain_bottom_non_glare_hlb
  {
    out << "status_boundary_domain_bottom_non_glare_hlb: ";
    rosidl_generator_traits::value_to_yaml(msg.status_boundary_domain_bottom_non_glare_hlb, out);
    out << ", ";
  }

  // member: status_boundary_domain_non_glare_left_hand_hlb
  {
    out << "status_boundary_domain_non_glare_left_hand_hlb: ";
    rosidl_generator_traits::value_to_yaml(msg.status_boundary_domain_non_glare_left_hand_hlb, out);
    out << ", ";
  }

  // member: status_boundary_domain_non_glare_right_hand_hlb
  {
    out << "status_boundary_domain_non_glare_right_hand_hlb: ";
    rosidl_generator_traits::value_to_yaml(msg.status_boundary_domain_non_glare_right_hand_hlb, out);
    out << ", ";
  }

  // member: status_object_distance_hlb
  {
    out << "status_object_distance_hlb: ";
    rosidl_generator_traits::value_to_yaml(msg.status_object_distance_hlb, out);
    out << ", ";
  }

  // member: left_target_change
  {
    out << "left_target_change: ";
    rosidl_generator_traits::value_to_yaml(msg.left_target_change, out);
    out << ", ";
  }

  // member: right_target_change
  {
    out << "right_target_change: ";
    rosidl_generator_traits::value_to_yaml(msg.right_target_change, out);
    out << ", ";
  }

  // member: too_many_cars
  {
    out << "too_many_cars: ";
    rosidl_generator_traits::value_to_yaml(msg.too_many_cars, out);
    out << ", ";
  }

  // member: busy_scene
  {
    out << "busy_scene: ";
    rosidl_generator_traits::value_to_yaml(msg.busy_scene, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AhbcGradual & msg,
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

  // member: boundary_domain_bottom_non_glare_hlb
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "boundary_domain_bottom_non_glare_hlb: ";
    rosidl_generator_traits::value_to_yaml(msg.boundary_domain_bottom_non_glare_hlb, out);
    out << "\n";
  }

  // member: boundary_domain_non_glare_left_hand_hlb
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "boundary_domain_non_glare_left_hand_hlb: ";
    rosidl_generator_traits::value_to_yaml(msg.boundary_domain_non_glare_left_hand_hlb, out);
    out << "\n";
  }

  // member: boundary_domain_non_glare_right_hand_hlb
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "boundary_domain_non_glare_right_hand_hlb: ";
    rosidl_generator_traits::value_to_yaml(msg.boundary_domain_non_glare_right_hand_hlb, out);
    out << "\n";
  }

  // member: object_distance_hlb
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "object_distance_hlb: ";
    rosidl_generator_traits::value_to_yaml(msg.object_distance_hlb, out);
    out << "\n";
  }

  // member: status_boundary_domain_bottom_non_glare_hlb
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status_boundary_domain_bottom_non_glare_hlb: ";
    rosidl_generator_traits::value_to_yaml(msg.status_boundary_domain_bottom_non_glare_hlb, out);
    out << "\n";
  }

  // member: status_boundary_domain_non_glare_left_hand_hlb
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status_boundary_domain_non_glare_left_hand_hlb: ";
    rosidl_generator_traits::value_to_yaml(msg.status_boundary_domain_non_glare_left_hand_hlb, out);
    out << "\n";
  }

  // member: status_boundary_domain_non_glare_right_hand_hlb
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status_boundary_domain_non_glare_right_hand_hlb: ";
    rosidl_generator_traits::value_to_yaml(msg.status_boundary_domain_non_glare_right_hand_hlb, out);
    out << "\n";
  }

  // member: status_object_distance_hlb
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status_object_distance_hlb: ";
    rosidl_generator_traits::value_to_yaml(msg.status_object_distance_hlb, out);
    out << "\n";
  }

  // member: left_target_change
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "left_target_change: ";
    rosidl_generator_traits::value_to_yaml(msg.left_target_change, out);
    out << "\n";
  }

  // member: right_target_change
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "right_target_change: ";
    rosidl_generator_traits::value_to_yaml(msg.right_target_change, out);
    out << "\n";
  }

  // member: too_many_cars
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "too_many_cars: ";
    rosidl_generator_traits::value_to_yaml(msg.too_many_cars, out);
    out << "\n";
  }

  // member: busy_scene
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "busy_scene: ";
    rosidl_generator_traits::value_to_yaml(msg.busy_scene, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AhbcGradual & msg, bool use_flow_style = false)
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
  const mobileye_560_660_msgs::msg::AhbcGradual & msg,
  std::ostream & out, size_t indentation = 0)
{
  mobileye_560_660_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mobileye_560_660_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const mobileye_560_660_msgs::msg::AhbcGradual & msg)
{
  return mobileye_560_660_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<mobileye_560_660_msgs::msg::AhbcGradual>()
{
  return "mobileye_560_660_msgs::msg::AhbcGradual";
}

template<>
inline const char * name<mobileye_560_660_msgs::msg::AhbcGradual>()
{
  return "mobileye_560_660_msgs/msg/AhbcGradual";
}

template<>
struct has_fixed_size<mobileye_560_660_msgs::msg::AhbcGradual>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<mobileye_560_660_msgs::msg::AhbcGradual>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<mobileye_560_660_msgs::msg::AhbcGradual>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MOBILEYE_560_660_MSGS__MSG__DETAIL__AHBC_GRADUAL__TRAITS_HPP_

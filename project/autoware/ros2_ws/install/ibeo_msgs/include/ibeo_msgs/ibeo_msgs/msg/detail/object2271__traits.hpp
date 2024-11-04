// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ibeo_msgs:msg/Object2271.idl
// generated code does not contain a copyright notice

#ifndef IBEO_MSGS__MSG__DETAIL__OBJECT2271__TRAITS_HPP_
#define IBEO_MSGS__MSG__DETAIL__OBJECT2271__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ibeo_msgs/msg/detail/object2271__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'tracked_properties'
#include "ibeo_msgs/msg/detail/tracked_properties__traits.hpp"
// Member 'untracked_properties'
#include "ibeo_msgs/msg/detail/untracked_properties__traits.hpp"

namespace ibeo_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Object2271 & msg,
  std::ostream & out)
{
  out << "{";
  // member: id
  {
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << ", ";
  }

  // member: tracked_properties_available
  {
    out << "tracked_properties_available: ";
    rosidl_generator_traits::value_to_yaml(msg.tracked_properties_available, out);
    out << ", ";
  }

  // member: untracked_properties_available
  {
    out << "untracked_properties_available: ";
    rosidl_generator_traits::value_to_yaml(msg.untracked_properties_available, out);
    out << ", ";
  }

  // member: tracked_properties
  {
    out << "tracked_properties: ";
    to_flow_style_yaml(msg.tracked_properties, out);
    out << ", ";
  }

  // member: untracked_properties
  {
    out << "untracked_properties: ";
    to_flow_style_yaml(msg.untracked_properties, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Object2271 & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << "\n";
  }

  // member: tracked_properties_available
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tracked_properties_available: ";
    rosidl_generator_traits::value_to_yaml(msg.tracked_properties_available, out);
    out << "\n";
  }

  // member: untracked_properties_available
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "untracked_properties_available: ";
    rosidl_generator_traits::value_to_yaml(msg.untracked_properties_available, out);
    out << "\n";
  }

  // member: tracked_properties
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tracked_properties:\n";
    to_block_style_yaml(msg.tracked_properties, out, indentation + 2);
  }

  // member: untracked_properties
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "untracked_properties:\n";
    to_block_style_yaml(msg.untracked_properties, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Object2271 & msg, bool use_flow_style = false)
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
  const ibeo_msgs::msg::Object2271 & msg,
  std::ostream & out, size_t indentation = 0)
{
  ibeo_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ibeo_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const ibeo_msgs::msg::Object2271 & msg)
{
  return ibeo_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ibeo_msgs::msg::Object2271>()
{
  return "ibeo_msgs::msg::Object2271";
}

template<>
inline const char * name<ibeo_msgs::msg::Object2271>()
{
  return "ibeo_msgs/msg/Object2271";
}

template<>
struct has_fixed_size<ibeo_msgs::msg::Object2271>
  : std::integral_constant<bool, has_fixed_size<ibeo_msgs::msg::TrackedProperties>::value && has_fixed_size<ibeo_msgs::msg::UntrackedProperties>::value> {};

template<>
struct has_bounded_size<ibeo_msgs::msg::Object2271>
  : std::integral_constant<bool, has_bounded_size<ibeo_msgs::msg::TrackedProperties>::value && has_bounded_size<ibeo_msgs::msg::UntrackedProperties>::value> {};

template<>
struct is_message<ibeo_msgs::msg::Object2271>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // IBEO_MSGS__MSG__DETAIL__OBJECT2271__TRAITS_HPP_

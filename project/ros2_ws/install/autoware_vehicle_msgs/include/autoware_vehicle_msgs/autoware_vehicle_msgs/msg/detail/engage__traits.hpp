// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from autoware_vehicle_msgs:msg/Engage.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_VEHICLE_MSGS__MSG__DETAIL__ENGAGE__TRAITS_HPP_
#define AUTOWARE_VEHICLE_MSGS__MSG__DETAIL__ENGAGE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "autoware_vehicle_msgs/msg/detail/engage__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace autoware_vehicle_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Engage & msg,
  std::ostream & out)
{
  out << "{";
  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
    out << ", ";
  }

  // member: engage
  {
    out << "engage: ";
    rosidl_generator_traits::value_to_yaml(msg.engage, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Engage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }

  // member: engage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "engage: ";
    rosidl_generator_traits::value_to_yaml(msg.engage, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Engage & msg, bool use_flow_style = false)
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

}  // namespace autoware_vehicle_msgs

namespace rosidl_generator_traits
{

[[deprecated("use autoware_vehicle_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const autoware_vehicle_msgs::msg::Engage & msg,
  std::ostream & out, size_t indentation = 0)
{
  autoware_vehicle_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use autoware_vehicle_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const autoware_vehicle_msgs::msg::Engage & msg)
{
  return autoware_vehicle_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<autoware_vehicle_msgs::msg::Engage>()
{
  return "autoware_vehicle_msgs::msg::Engage";
}

template<>
inline const char * name<autoware_vehicle_msgs::msg::Engage>()
{
  return "autoware_vehicle_msgs/msg/Engage";
}

template<>
struct has_fixed_size<autoware_vehicle_msgs::msg::Engage>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<autoware_vehicle_msgs::msg::Engage>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<autoware_vehicle_msgs::msg::Engage>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AUTOWARE_VEHICLE_MSGS__MSG__DETAIL__ENGAGE__TRAITS_HPP_

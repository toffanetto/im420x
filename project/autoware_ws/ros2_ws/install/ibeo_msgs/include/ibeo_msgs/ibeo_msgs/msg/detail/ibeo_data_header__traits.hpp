// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ibeo_msgs:msg/IbeoDataHeader.idl
// generated code does not contain a copyright notice

#ifndef IBEO_MSGS__MSG__DETAIL__IBEO_DATA_HEADER__TRAITS_HPP_
#define IBEO_MSGS__MSG__DETAIL__IBEO_DATA_HEADER__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ibeo_msgs/msg/detail/ibeo_data_header__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace ibeo_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const IbeoDataHeader & msg,
  std::ostream & out)
{
  out << "{";
  // member: previous_message_size
  {
    out << "previous_message_size: ";
    rosidl_generator_traits::value_to_yaml(msg.previous_message_size, out);
    out << ", ";
  }

  // member: message_size
  {
    out << "message_size: ";
    rosidl_generator_traits::value_to_yaml(msg.message_size, out);
    out << ", ";
  }

  // member: device_id
  {
    out << "device_id: ";
    rosidl_generator_traits::value_to_yaml(msg.device_id, out);
    out << ", ";
  }

  // member: data_type_id
  {
    out << "data_type_id: ";
    rosidl_generator_traits::value_to_yaml(msg.data_type_id, out);
    out << ", ";
  }

  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const IbeoDataHeader & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: previous_message_size
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "previous_message_size: ";
    rosidl_generator_traits::value_to_yaml(msg.previous_message_size, out);
    out << "\n";
  }

  // member: message_size
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message_size: ";
    rosidl_generator_traits::value_to_yaml(msg.message_size, out);
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

  // member: data_type_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "data_type_id: ";
    rosidl_generator_traits::value_to_yaml(msg.data_type_id, out);
    out << "\n";
  }

  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const IbeoDataHeader & msg, bool use_flow_style = false)
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
  const ibeo_msgs::msg::IbeoDataHeader & msg,
  std::ostream & out, size_t indentation = 0)
{
  ibeo_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ibeo_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const ibeo_msgs::msg::IbeoDataHeader & msg)
{
  return ibeo_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ibeo_msgs::msg::IbeoDataHeader>()
{
  return "ibeo_msgs::msg::IbeoDataHeader";
}

template<>
inline const char * name<ibeo_msgs::msg::IbeoDataHeader>()
{
  return "ibeo_msgs/msg/IbeoDataHeader";
}

template<>
struct has_fixed_size<ibeo_msgs::msg::IbeoDataHeader>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<ibeo_msgs::msg::IbeoDataHeader>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<ibeo_msgs::msg::IbeoDataHeader>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // IBEO_MSGS__MSG__DETAIL__IBEO_DATA_HEADER__TRAITS_HPP_

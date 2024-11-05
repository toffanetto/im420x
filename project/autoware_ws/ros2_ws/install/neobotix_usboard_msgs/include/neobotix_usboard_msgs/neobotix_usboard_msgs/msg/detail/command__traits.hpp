// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from neobotix_usboard_msgs:msg/Command.idl
// generated code does not contain a copyright notice

#ifndef NEOBOTIX_USBOARD_MSGS__MSG__DETAIL__COMMAND__TRAITS_HPP_
#define NEOBOTIX_USBOARD_MSGS__MSG__DETAIL__COMMAND__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "neobotix_usboard_msgs/msg/detail/command__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace neobotix_usboard_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Command & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: command
  {
    out << "command: ";
    rosidl_generator_traits::value_to_yaml(msg.command, out);
    out << ", ";
  }

  // member: command_data
  {
    out << "command_data: ";
    rosidl_generator_traits::value_to_yaml(msg.command_data, out);
    out << ", ";
  }

  // member: set_num
  {
    out << "set_num: ";
    rosidl_generator_traits::value_to_yaml(msg.set_num, out);
    out << ", ";
  }

  // member: paraset_byte6
  {
    out << "paraset_byte6: ";
    rosidl_generator_traits::value_to_yaml(msg.paraset_byte6, out);
    out << ", ";
  }

  // member: paraset_byte5
  {
    out << "paraset_byte5: ";
    rosidl_generator_traits::value_to_yaml(msg.paraset_byte5, out);
    out << ", ";
  }

  // member: paraset_byte4
  {
    out << "paraset_byte4: ";
    rosidl_generator_traits::value_to_yaml(msg.paraset_byte4, out);
    out << ", ";
  }

  // member: paraset_byte3
  {
    out << "paraset_byte3: ";
    rosidl_generator_traits::value_to_yaml(msg.paraset_byte3, out);
    out << ", ";
  }

  // member: paraset_byte2
  {
    out << "paraset_byte2: ";
    rosidl_generator_traits::value_to_yaml(msg.paraset_byte2, out);
    out << ", ";
  }

  // member: paraset_byte1
  {
    out << "paraset_byte1: ";
    rosidl_generator_traits::value_to_yaml(msg.paraset_byte1, out);
    out << ", ";
  }

  // member: set_active_9to16
  {
    out << "set_active_9to16: ";
    rosidl_generator_traits::value_to_yaml(msg.set_active_9to16, out);
    out << ", ";
  }

  // member: set_active_1to8
  {
    out << "set_active_1to8: ";
    rosidl_generator_traits::value_to_yaml(msg.set_active_1to8, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Command & msg,
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

  // member: command
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "command: ";
    rosidl_generator_traits::value_to_yaml(msg.command, out);
    out << "\n";
  }

  // member: command_data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "command_data: ";
    rosidl_generator_traits::value_to_yaml(msg.command_data, out);
    out << "\n";
  }

  // member: set_num
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "set_num: ";
    rosidl_generator_traits::value_to_yaml(msg.set_num, out);
    out << "\n";
  }

  // member: paraset_byte6
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "paraset_byte6: ";
    rosidl_generator_traits::value_to_yaml(msg.paraset_byte6, out);
    out << "\n";
  }

  // member: paraset_byte5
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "paraset_byte5: ";
    rosidl_generator_traits::value_to_yaml(msg.paraset_byte5, out);
    out << "\n";
  }

  // member: paraset_byte4
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "paraset_byte4: ";
    rosidl_generator_traits::value_to_yaml(msg.paraset_byte4, out);
    out << "\n";
  }

  // member: paraset_byte3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "paraset_byte3: ";
    rosidl_generator_traits::value_to_yaml(msg.paraset_byte3, out);
    out << "\n";
  }

  // member: paraset_byte2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "paraset_byte2: ";
    rosidl_generator_traits::value_to_yaml(msg.paraset_byte2, out);
    out << "\n";
  }

  // member: paraset_byte1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "paraset_byte1: ";
    rosidl_generator_traits::value_to_yaml(msg.paraset_byte1, out);
    out << "\n";
  }

  // member: set_active_9to16
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "set_active_9to16: ";
    rosidl_generator_traits::value_to_yaml(msg.set_active_9to16, out);
    out << "\n";
  }

  // member: set_active_1to8
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "set_active_1to8: ";
    rosidl_generator_traits::value_to_yaml(msg.set_active_1to8, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Command & msg, bool use_flow_style = false)
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

}  // namespace neobotix_usboard_msgs

namespace rosidl_generator_traits
{

[[deprecated("use neobotix_usboard_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const neobotix_usboard_msgs::msg::Command & msg,
  std::ostream & out, size_t indentation = 0)
{
  neobotix_usboard_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use neobotix_usboard_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const neobotix_usboard_msgs::msg::Command & msg)
{
  return neobotix_usboard_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<neobotix_usboard_msgs::msg::Command>()
{
  return "neobotix_usboard_msgs::msg::Command";
}

template<>
inline const char * name<neobotix_usboard_msgs::msg::Command>()
{
  return "neobotix_usboard_msgs/msg/Command";
}

template<>
struct has_fixed_size<neobotix_usboard_msgs::msg::Command>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<neobotix_usboard_msgs::msg::Command>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<neobotix_usboard_msgs::msg::Command>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // NEOBOTIX_USBOARD_MSGS__MSG__DETAIL__COMMAND__TRAITS_HPP_

// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from delphi_srr_msgs:msg/SrrStatus3.idl
// generated code does not contain a copyright notice

#ifndef DELPHI_SRR_MSGS__MSG__DETAIL__SRR_STATUS3__TRAITS_HPP_
#define DELPHI_SRR_MSGS__MSG__DETAIL__SRR_STATUS3__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "delphi_srr_msgs/msg/detail/srr_status3__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace delphi_srr_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const SrrStatus3 & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: can_tx_alignment_state
  {
    out << "can_tx_alignment_state: ";
    rosidl_generator_traits::value_to_yaml(msg.can_tx_alignment_state, out);
    out << ", ";
  }

  // member: can_tx_interface_ver_minor
  {
    out << "can_tx_interface_ver_minor: ";
    rosidl_generator_traits::value_to_yaml(msg.can_tx_interface_ver_minor, out);
    out << ", ";
  }

  // member: can_tx_sw_version_arm
  {
    out << "can_tx_sw_version_arm: ";
    rosidl_generator_traits::value_to_yaml(msg.can_tx_sw_version_arm, out);
    out << ", ";
  }

  // member: can_tx_hw_version
  {
    out << "can_tx_hw_version: ";
    rosidl_generator_traits::value_to_yaml(msg.can_tx_hw_version, out);
    out << ", ";
  }

  // member: can_tx_interface_version
  {
    out << "can_tx_interface_version: ";
    rosidl_generator_traits::value_to_yaml(msg.can_tx_interface_version, out);
    out << ", ";
  }

  // member: can_tx_serial_num
  {
    out << "can_tx_serial_num: ";
    rosidl_generator_traits::value_to_yaml(msg.can_tx_serial_num, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SrrStatus3 & msg,
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

  // member: can_tx_alignment_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "can_tx_alignment_state: ";
    rosidl_generator_traits::value_to_yaml(msg.can_tx_alignment_state, out);
    out << "\n";
  }

  // member: can_tx_interface_ver_minor
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "can_tx_interface_ver_minor: ";
    rosidl_generator_traits::value_to_yaml(msg.can_tx_interface_ver_minor, out);
    out << "\n";
  }

  // member: can_tx_sw_version_arm
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "can_tx_sw_version_arm: ";
    rosidl_generator_traits::value_to_yaml(msg.can_tx_sw_version_arm, out);
    out << "\n";
  }

  // member: can_tx_hw_version
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "can_tx_hw_version: ";
    rosidl_generator_traits::value_to_yaml(msg.can_tx_hw_version, out);
    out << "\n";
  }

  // member: can_tx_interface_version
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "can_tx_interface_version: ";
    rosidl_generator_traits::value_to_yaml(msg.can_tx_interface_version, out);
    out << "\n";
  }

  // member: can_tx_serial_num
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "can_tx_serial_num: ";
    rosidl_generator_traits::value_to_yaml(msg.can_tx_serial_num, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SrrStatus3 & msg, bool use_flow_style = false)
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

}  // namespace delphi_srr_msgs

namespace rosidl_generator_traits
{

[[deprecated("use delphi_srr_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const delphi_srr_msgs::msg::SrrStatus3 & msg,
  std::ostream & out, size_t indentation = 0)
{
  delphi_srr_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use delphi_srr_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const delphi_srr_msgs::msg::SrrStatus3 & msg)
{
  return delphi_srr_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<delphi_srr_msgs::msg::SrrStatus3>()
{
  return "delphi_srr_msgs::msg::SrrStatus3";
}

template<>
inline const char * name<delphi_srr_msgs::msg::SrrStatus3>()
{
  return "delphi_srr_msgs/msg/SrrStatus3";
}

template<>
struct has_fixed_size<delphi_srr_msgs::msg::SrrStatus3>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<delphi_srr_msgs::msg::SrrStatus3>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<delphi_srr_msgs::msg::SrrStatus3>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DELPHI_SRR_MSGS__MSG__DETAIL__SRR_STATUS3__TRAITS_HPP_

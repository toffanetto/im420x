// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from delphi_esr_msgs:msg/EsrValid1.idl
// generated code does not contain a copyright notice

#ifndef DELPHI_ESR_MSGS__MSG__DETAIL__ESR_VALID1__TRAITS_HPP_
#define DELPHI_ESR_MSGS__MSG__DETAIL__ESR_VALID1__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "delphi_esr_msgs/msg/detail/esr_valid1__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace delphi_esr_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const EsrValid1 & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: canmsg
  {
    out << "canmsg: ";
    rosidl_generator_traits::value_to_yaml(msg.canmsg, out);
    out << ", ";
  }

  // member: lr_sn
  {
    out << "lr_sn: ";
    rosidl_generator_traits::value_to_yaml(msg.lr_sn, out);
    out << ", ";
  }

  // member: lr_range
  {
    out << "lr_range: ";
    rosidl_generator_traits::value_to_yaml(msg.lr_range, out);
    out << ", ";
  }

  // member: lr_range_rate
  {
    out << "lr_range_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.lr_range_rate, out);
    out << ", ";
  }

  // member: lr_angle
  {
    out << "lr_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.lr_angle, out);
    out << ", ";
  }

  // member: lr_power
  {
    out << "lr_power: ";
    rosidl_generator_traits::value_to_yaml(msg.lr_power, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const EsrValid1 & msg,
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

  // member: canmsg
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "canmsg: ";
    rosidl_generator_traits::value_to_yaml(msg.canmsg, out);
    out << "\n";
  }

  // member: lr_sn
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lr_sn: ";
    rosidl_generator_traits::value_to_yaml(msg.lr_sn, out);
    out << "\n";
  }

  // member: lr_range
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lr_range: ";
    rosidl_generator_traits::value_to_yaml(msg.lr_range, out);
    out << "\n";
  }

  // member: lr_range_rate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lr_range_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.lr_range_rate, out);
    out << "\n";
  }

  // member: lr_angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lr_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.lr_angle, out);
    out << "\n";
  }

  // member: lr_power
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lr_power: ";
    rosidl_generator_traits::value_to_yaml(msg.lr_power, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const EsrValid1 & msg, bool use_flow_style = false)
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

}  // namespace delphi_esr_msgs

namespace rosidl_generator_traits
{

[[deprecated("use delphi_esr_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const delphi_esr_msgs::msg::EsrValid1 & msg,
  std::ostream & out, size_t indentation = 0)
{
  delphi_esr_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use delphi_esr_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const delphi_esr_msgs::msg::EsrValid1 & msg)
{
  return delphi_esr_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<delphi_esr_msgs::msg::EsrValid1>()
{
  return "delphi_esr_msgs::msg::EsrValid1";
}

template<>
inline const char * name<delphi_esr_msgs::msg::EsrValid1>()
{
  return "delphi_esr_msgs/msg/EsrValid1";
}

template<>
struct has_fixed_size<delphi_esr_msgs::msg::EsrValid1>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<delphi_esr_msgs::msg::EsrValid1>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<delphi_esr_msgs::msg::EsrValid1>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DELPHI_ESR_MSGS__MSG__DETAIL__ESR_VALID1__TRAITS_HPP_

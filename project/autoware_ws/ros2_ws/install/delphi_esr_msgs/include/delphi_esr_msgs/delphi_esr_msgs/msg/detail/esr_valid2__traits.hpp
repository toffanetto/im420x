// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from delphi_esr_msgs:msg/EsrValid2.idl
// generated code does not contain a copyright notice

#ifndef DELPHI_ESR_MSGS__MSG__DETAIL__ESR_VALID2__TRAITS_HPP_
#define DELPHI_ESR_MSGS__MSG__DETAIL__ESR_VALID2__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "delphi_esr_msgs/msg/detail/esr_valid2__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace delphi_esr_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const EsrValid2 & msg,
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

  // member: mr_sn
  {
    out << "mr_sn: ";
    rosidl_generator_traits::value_to_yaml(msg.mr_sn, out);
    out << ", ";
  }

  // member: mr_range
  {
    out << "mr_range: ";
    rosidl_generator_traits::value_to_yaml(msg.mr_range, out);
    out << ", ";
  }

  // member: mr_range_rate
  {
    out << "mr_range_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.mr_range_rate, out);
    out << ", ";
  }

  // member: mr_angle
  {
    out << "mr_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.mr_angle, out);
    out << ", ";
  }

  // member: mr_power
  {
    out << "mr_power: ";
    rosidl_generator_traits::value_to_yaml(msg.mr_power, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const EsrValid2 & msg,
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

  // member: mr_sn
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mr_sn: ";
    rosidl_generator_traits::value_to_yaml(msg.mr_sn, out);
    out << "\n";
  }

  // member: mr_range
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mr_range: ";
    rosidl_generator_traits::value_to_yaml(msg.mr_range, out);
    out << "\n";
  }

  // member: mr_range_rate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mr_range_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.mr_range_rate, out);
    out << "\n";
  }

  // member: mr_angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mr_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.mr_angle, out);
    out << "\n";
  }

  // member: mr_power
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mr_power: ";
    rosidl_generator_traits::value_to_yaml(msg.mr_power, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const EsrValid2 & msg, bool use_flow_style = false)
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
  const delphi_esr_msgs::msg::EsrValid2 & msg,
  std::ostream & out, size_t indentation = 0)
{
  delphi_esr_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use delphi_esr_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const delphi_esr_msgs::msg::EsrValid2 & msg)
{
  return delphi_esr_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<delphi_esr_msgs::msg::EsrValid2>()
{
  return "delphi_esr_msgs::msg::EsrValid2";
}

template<>
inline const char * name<delphi_esr_msgs::msg::EsrValid2>()
{
  return "delphi_esr_msgs/msg/EsrValid2";
}

template<>
struct has_fixed_size<delphi_esr_msgs::msg::EsrValid2>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<delphi_esr_msgs::msg::EsrValid2>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<delphi_esr_msgs::msg::EsrValid2>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DELPHI_ESR_MSGS__MSG__DETAIL__ESR_VALID2__TRAITS_HPP_

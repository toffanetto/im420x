// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from delphi_esr_msgs:msg/EsrStatus7.idl
// generated code does not contain a copyright notice

#ifndef DELPHI_ESR_MSGS__MSG__DETAIL__ESR_STATUS7__TRAITS_HPP_
#define DELPHI_ESR_MSGS__MSG__DETAIL__ESR_STATUS7__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "delphi_esr_msgs/msg/detail/esr_status7__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace delphi_esr_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const EsrStatus7 & msg,
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

  // member: active_fault_0
  {
    out << "active_fault_0: ";
    rosidl_generator_traits::value_to_yaml(msg.active_fault_0, out);
    out << ", ";
  }

  // member: active_fault_1
  {
    out << "active_fault_1: ";
    rosidl_generator_traits::value_to_yaml(msg.active_fault_1, out);
    out << ", ";
  }

  // member: active_fault_2
  {
    out << "active_fault_2: ";
    rosidl_generator_traits::value_to_yaml(msg.active_fault_2, out);
    out << ", ";
  }

  // member: active_fault_3
  {
    out << "active_fault_3: ";
    rosidl_generator_traits::value_to_yaml(msg.active_fault_3, out);
    out << ", ";
  }

  // member: active_fault_4
  {
    out << "active_fault_4: ";
    rosidl_generator_traits::value_to_yaml(msg.active_fault_4, out);
    out << ", ";
  }

  // member: active_fault_5
  {
    out << "active_fault_5: ";
    rosidl_generator_traits::value_to_yaml(msg.active_fault_5, out);
    out << ", ";
  }

  // member: active_fault_6
  {
    out << "active_fault_6: ";
    rosidl_generator_traits::value_to_yaml(msg.active_fault_6, out);
    out << ", ";
  }

  // member: active_fault_7
  {
    out << "active_fault_7: ";
    rosidl_generator_traits::value_to_yaml(msg.active_fault_7, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const EsrStatus7 & msg,
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

  // member: active_fault_0
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "active_fault_0: ";
    rosidl_generator_traits::value_to_yaml(msg.active_fault_0, out);
    out << "\n";
  }

  // member: active_fault_1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "active_fault_1: ";
    rosidl_generator_traits::value_to_yaml(msg.active_fault_1, out);
    out << "\n";
  }

  // member: active_fault_2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "active_fault_2: ";
    rosidl_generator_traits::value_to_yaml(msg.active_fault_2, out);
    out << "\n";
  }

  // member: active_fault_3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "active_fault_3: ";
    rosidl_generator_traits::value_to_yaml(msg.active_fault_3, out);
    out << "\n";
  }

  // member: active_fault_4
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "active_fault_4: ";
    rosidl_generator_traits::value_to_yaml(msg.active_fault_4, out);
    out << "\n";
  }

  // member: active_fault_5
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "active_fault_5: ";
    rosidl_generator_traits::value_to_yaml(msg.active_fault_5, out);
    out << "\n";
  }

  // member: active_fault_6
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "active_fault_6: ";
    rosidl_generator_traits::value_to_yaml(msg.active_fault_6, out);
    out << "\n";
  }

  // member: active_fault_7
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "active_fault_7: ";
    rosidl_generator_traits::value_to_yaml(msg.active_fault_7, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const EsrStatus7 & msg, bool use_flow_style = false)
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
  const delphi_esr_msgs::msg::EsrStatus7 & msg,
  std::ostream & out, size_t indentation = 0)
{
  delphi_esr_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use delphi_esr_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const delphi_esr_msgs::msg::EsrStatus7 & msg)
{
  return delphi_esr_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<delphi_esr_msgs::msg::EsrStatus7>()
{
  return "delphi_esr_msgs::msg::EsrStatus7";
}

template<>
inline const char * name<delphi_esr_msgs::msg::EsrStatus7>()
{
  return "delphi_esr_msgs/msg/EsrStatus7";
}

template<>
struct has_fixed_size<delphi_esr_msgs::msg::EsrStatus7>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<delphi_esr_msgs::msg::EsrStatus7>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<delphi_esr_msgs::msg::EsrStatus7>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DELPHI_ESR_MSGS__MSG__DETAIL__ESR_STATUS7__TRAITS_HPP_

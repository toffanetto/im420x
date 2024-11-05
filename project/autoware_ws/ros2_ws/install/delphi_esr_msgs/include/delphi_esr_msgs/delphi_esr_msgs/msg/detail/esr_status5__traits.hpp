// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from delphi_esr_msgs:msg/EsrStatus5.idl
// generated code does not contain a copyright notice

#ifndef DELPHI_ESR_MSGS__MSG__DETAIL__ESR_STATUS5__TRAITS_HPP_
#define DELPHI_ESR_MSGS__MSG__DETAIL__ESR_STATUS5__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "delphi_esr_msgs/msg/detail/esr_status5__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace delphi_esr_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const EsrStatus5 & msg,
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

  // member: swbatt_a2d
  {
    out << "swbatt_a2d: ";
    rosidl_generator_traits::value_to_yaml(msg.swbatt_a2d, out);
    out << ", ";
  }

  // member: ignp_a2d
  {
    out << "ignp_a2d: ";
    rosidl_generator_traits::value_to_yaml(msg.ignp_a2d, out);
    out << ", ";
  }

  // member: temp1_a2d
  {
    out << "temp1_a2d: ";
    rosidl_generator_traits::value_to_yaml(msg.temp1_a2d, out);
    out << ", ";
  }

  // member: temp2_a2d
  {
    out << "temp2_a2d: ";
    rosidl_generator_traits::value_to_yaml(msg.temp2_a2d, out);
    out << ", ";
  }

  // member: supply_5va_a2d
  {
    out << "supply_5va_a2d: ";
    rosidl_generator_traits::value_to_yaml(msg.supply_5va_a2d, out);
    out << ", ";
  }

  // member: supply_5vdx_a2d
  {
    out << "supply_5vdx_a2d: ";
    rosidl_generator_traits::value_to_yaml(msg.supply_5vdx_a2d, out);
    out << ", ";
  }

  // member: supply_3p3v_a2d
  {
    out << "supply_3p3v_a2d: ";
    rosidl_generator_traits::value_to_yaml(msg.supply_3p3v_a2d, out);
    out << ", ";
  }

  // member: supply_10v_a2d
  {
    out << "supply_10v_a2d: ";
    rosidl_generator_traits::value_to_yaml(msg.supply_10v_a2d, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const EsrStatus5 & msg,
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

  // member: swbatt_a2d
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "swbatt_a2d: ";
    rosidl_generator_traits::value_to_yaml(msg.swbatt_a2d, out);
    out << "\n";
  }

  // member: ignp_a2d
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ignp_a2d: ";
    rosidl_generator_traits::value_to_yaml(msg.ignp_a2d, out);
    out << "\n";
  }

  // member: temp1_a2d
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "temp1_a2d: ";
    rosidl_generator_traits::value_to_yaml(msg.temp1_a2d, out);
    out << "\n";
  }

  // member: temp2_a2d
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "temp2_a2d: ";
    rosidl_generator_traits::value_to_yaml(msg.temp2_a2d, out);
    out << "\n";
  }

  // member: supply_5va_a2d
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "supply_5va_a2d: ";
    rosidl_generator_traits::value_to_yaml(msg.supply_5va_a2d, out);
    out << "\n";
  }

  // member: supply_5vdx_a2d
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "supply_5vdx_a2d: ";
    rosidl_generator_traits::value_to_yaml(msg.supply_5vdx_a2d, out);
    out << "\n";
  }

  // member: supply_3p3v_a2d
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "supply_3p3v_a2d: ";
    rosidl_generator_traits::value_to_yaml(msg.supply_3p3v_a2d, out);
    out << "\n";
  }

  // member: supply_10v_a2d
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "supply_10v_a2d: ";
    rosidl_generator_traits::value_to_yaml(msg.supply_10v_a2d, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const EsrStatus5 & msg, bool use_flow_style = false)
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
  const delphi_esr_msgs::msg::EsrStatus5 & msg,
  std::ostream & out, size_t indentation = 0)
{
  delphi_esr_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use delphi_esr_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const delphi_esr_msgs::msg::EsrStatus5 & msg)
{
  return delphi_esr_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<delphi_esr_msgs::msg::EsrStatus5>()
{
  return "delphi_esr_msgs::msg::EsrStatus5";
}

template<>
inline const char * name<delphi_esr_msgs::msg::EsrStatus5>()
{
  return "delphi_esr_msgs/msg/EsrStatus5";
}

template<>
struct has_fixed_size<delphi_esr_msgs::msg::EsrStatus5>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<delphi_esr_msgs::msg::EsrStatus5>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<delphi_esr_msgs::msg::EsrStatus5>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DELPHI_ESR_MSGS__MSG__DETAIL__ESR_STATUS5__TRAITS_HPP_

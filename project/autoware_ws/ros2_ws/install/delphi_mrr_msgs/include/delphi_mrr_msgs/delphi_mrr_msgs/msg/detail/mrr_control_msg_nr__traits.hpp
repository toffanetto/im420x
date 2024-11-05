// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from delphi_mrr_msgs:msg/MrrControlMsgNR.idl
// generated code does not contain a copyright notice

#ifndef DELPHI_MRR_MSGS__MSG__DETAIL__MRR_CONTROL_MSG_NR__TRAITS_HPP_
#define DELPHI_MRR_MSGS__MSG__DETAIL__MRR_CONTROL_MSG_NR__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "delphi_mrr_msgs/msg/detail/mrr_control_msg_nr__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace delphi_mrr_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const MrrControlMsgNR & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: can_stop_frequency_nrml
  {
    out << "can_stop_frequency_nrml: ";
    rosidl_generator_traits::value_to_yaml(msg.can_stop_frequency_nrml, out);
    out << ", ";
  }

  // member: can_prp_factor_nrml
  {
    out << "can_prp_factor_nrml: ";
    rosidl_generator_traits::value_to_yaml(msg.can_prp_factor_nrml, out);
    out << ", ";
  }

  // member: can_desired_sweep_bw_nrml
  {
    out << "can_desired_sweep_bw_nrml: ";
    rosidl_generator_traits::value_to_yaml(msg.can_desired_sweep_bw_nrml, out);
    out << ", ";
  }

  // member: can_radiation_ctrl
  {
    out << "can_radiation_ctrl: ";
    rosidl_generator_traits::value_to_yaml(msg.can_radiation_ctrl, out);
    out << ", ";
  }

  // member: can_stop_frequency_nrll
  {
    out << "can_stop_frequency_nrll: ";
    rosidl_generator_traits::value_to_yaml(msg.can_stop_frequency_nrll, out);
    out << ", ";
  }

  // member: can_prp_factor_nrll
  {
    out << "can_prp_factor_nrll: ";
    rosidl_generator_traits::value_to_yaml(msg.can_prp_factor_nrll, out);
    out << ", ";
  }

  // member: can_desired_sweep_bw_nrll
  {
    out << "can_desired_sweep_bw_nrll: ";
    rosidl_generator_traits::value_to_yaml(msg.can_desired_sweep_bw_nrll, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MrrControlMsgNR & msg,
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

  // member: can_stop_frequency_nrml
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "can_stop_frequency_nrml: ";
    rosidl_generator_traits::value_to_yaml(msg.can_stop_frequency_nrml, out);
    out << "\n";
  }

  // member: can_prp_factor_nrml
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "can_prp_factor_nrml: ";
    rosidl_generator_traits::value_to_yaml(msg.can_prp_factor_nrml, out);
    out << "\n";
  }

  // member: can_desired_sweep_bw_nrml
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "can_desired_sweep_bw_nrml: ";
    rosidl_generator_traits::value_to_yaml(msg.can_desired_sweep_bw_nrml, out);
    out << "\n";
  }

  // member: can_radiation_ctrl
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "can_radiation_ctrl: ";
    rosidl_generator_traits::value_to_yaml(msg.can_radiation_ctrl, out);
    out << "\n";
  }

  // member: can_stop_frequency_nrll
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "can_stop_frequency_nrll: ";
    rosidl_generator_traits::value_to_yaml(msg.can_stop_frequency_nrll, out);
    out << "\n";
  }

  // member: can_prp_factor_nrll
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "can_prp_factor_nrll: ";
    rosidl_generator_traits::value_to_yaml(msg.can_prp_factor_nrll, out);
    out << "\n";
  }

  // member: can_desired_sweep_bw_nrll
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "can_desired_sweep_bw_nrll: ";
    rosidl_generator_traits::value_to_yaml(msg.can_desired_sweep_bw_nrll, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MrrControlMsgNR & msg, bool use_flow_style = false)
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

}  // namespace delphi_mrr_msgs

namespace rosidl_generator_traits
{

[[deprecated("use delphi_mrr_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const delphi_mrr_msgs::msg::MrrControlMsgNR & msg,
  std::ostream & out, size_t indentation = 0)
{
  delphi_mrr_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use delphi_mrr_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const delphi_mrr_msgs::msg::MrrControlMsgNR & msg)
{
  return delphi_mrr_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<delphi_mrr_msgs::msg::MrrControlMsgNR>()
{
  return "delphi_mrr_msgs::msg::MrrControlMsgNR";
}

template<>
inline const char * name<delphi_mrr_msgs::msg::MrrControlMsgNR>()
{
  return "delphi_mrr_msgs/msg/MrrControlMsgNR";
}

template<>
struct has_fixed_size<delphi_mrr_msgs::msg::MrrControlMsgNR>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<delphi_mrr_msgs::msg::MrrControlMsgNR>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<delphi_mrr_msgs::msg::MrrControlMsgNR>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DELPHI_MRR_MSGS__MSG__DETAIL__MRR_CONTROL_MSG_NR__TRAITS_HPP_

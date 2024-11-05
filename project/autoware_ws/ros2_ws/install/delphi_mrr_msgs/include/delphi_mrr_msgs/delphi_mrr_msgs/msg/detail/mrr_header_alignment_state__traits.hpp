// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from delphi_mrr_msgs:msg/MrrHeaderAlignmentState.idl
// generated code does not contain a copyright notice

#ifndef DELPHI_MRR_MSGS__MSG__DETAIL__MRR_HEADER_ALIGNMENT_STATE__TRAITS_HPP_
#define DELPHI_MRR_MSGS__MSG__DETAIL__MRR_HEADER_ALIGNMENT_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "delphi_mrr_msgs/msg/detail/mrr_header_alignment_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace delphi_mrr_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const MrrHeaderAlignmentState & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: can_auto_align_hangle_qf
  {
    out << "can_auto_align_hangle_qf: ";
    rosidl_generator_traits::value_to_yaml(msg.can_auto_align_hangle_qf, out);
    out << ", ";
  }

  // member: can_alignment_status
  {
    out << "can_alignment_status: ";
    rosidl_generator_traits::value_to_yaml(msg.can_alignment_status, out);
    out << ", ";
  }

  // member: can_alignment_state
  {
    out << "can_alignment_state: ";
    rosidl_generator_traits::value_to_yaml(msg.can_alignment_state, out);
    out << ", ";
  }

  // member: can_auto_align_hangle_ref
  {
    out << "can_auto_align_hangle_ref: ";
    rosidl_generator_traits::value_to_yaml(msg.can_auto_align_hangle_ref, out);
    out << ", ";
  }

  // member: can_auto_align_hangle
  {
    out << "can_auto_align_hangle: ";
    rosidl_generator_traits::value_to_yaml(msg.can_auto_align_hangle, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MrrHeaderAlignmentState & msg,
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

  // member: can_auto_align_hangle_qf
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "can_auto_align_hangle_qf: ";
    rosidl_generator_traits::value_to_yaml(msg.can_auto_align_hangle_qf, out);
    out << "\n";
  }

  // member: can_alignment_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "can_alignment_status: ";
    rosidl_generator_traits::value_to_yaml(msg.can_alignment_status, out);
    out << "\n";
  }

  // member: can_alignment_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "can_alignment_state: ";
    rosidl_generator_traits::value_to_yaml(msg.can_alignment_state, out);
    out << "\n";
  }

  // member: can_auto_align_hangle_ref
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "can_auto_align_hangle_ref: ";
    rosidl_generator_traits::value_to_yaml(msg.can_auto_align_hangle_ref, out);
    out << "\n";
  }

  // member: can_auto_align_hangle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "can_auto_align_hangle: ";
    rosidl_generator_traits::value_to_yaml(msg.can_auto_align_hangle, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MrrHeaderAlignmentState & msg, bool use_flow_style = false)
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
  const delphi_mrr_msgs::msg::MrrHeaderAlignmentState & msg,
  std::ostream & out, size_t indentation = 0)
{
  delphi_mrr_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use delphi_mrr_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const delphi_mrr_msgs::msg::MrrHeaderAlignmentState & msg)
{
  return delphi_mrr_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<delphi_mrr_msgs::msg::MrrHeaderAlignmentState>()
{
  return "delphi_mrr_msgs::msg::MrrHeaderAlignmentState";
}

template<>
inline const char * name<delphi_mrr_msgs::msg::MrrHeaderAlignmentState>()
{
  return "delphi_mrr_msgs/msg/MrrHeaderAlignmentState";
}

template<>
struct has_fixed_size<delphi_mrr_msgs::msg::MrrHeaderAlignmentState>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<delphi_mrr_msgs::msg::MrrHeaderAlignmentState>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<delphi_mrr_msgs::msg::MrrHeaderAlignmentState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DELPHI_MRR_MSGS__MSG__DETAIL__MRR_HEADER_ALIGNMENT_STATE__TRAITS_HPP_

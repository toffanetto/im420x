// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from delphi_srr_msgs:msg/SrrFeatureSwVersion.idl
// generated code does not contain a copyright notice

#ifndef DELPHI_SRR_MSGS__MSG__DETAIL__SRR_FEATURE_SW_VERSION__TRAITS_HPP_
#define DELPHI_SRR_MSGS__MSG__DETAIL__SRR_FEATURE_SW_VERSION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "delphi_srr_msgs/msg/detail/srr_feature_sw_version__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace delphi_srr_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const SrrFeatureSwVersion & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: lcma_sw_version
  {
    out << "lcma_sw_version: ";
    rosidl_generator_traits::value_to_yaml(msg.lcma_sw_version, out);
    out << ", ";
  }

  // member: cta_sw_version
  {
    out << "cta_sw_version: ";
    rosidl_generator_traits::value_to_yaml(msg.cta_sw_version, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SrrFeatureSwVersion & msg,
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

  // member: lcma_sw_version
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lcma_sw_version: ";
    rosidl_generator_traits::value_to_yaml(msg.lcma_sw_version, out);
    out << "\n";
  }

  // member: cta_sw_version
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cta_sw_version: ";
    rosidl_generator_traits::value_to_yaml(msg.cta_sw_version, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SrrFeatureSwVersion & msg, bool use_flow_style = false)
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
  const delphi_srr_msgs::msg::SrrFeatureSwVersion & msg,
  std::ostream & out, size_t indentation = 0)
{
  delphi_srr_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use delphi_srr_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const delphi_srr_msgs::msg::SrrFeatureSwVersion & msg)
{
  return delphi_srr_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<delphi_srr_msgs::msg::SrrFeatureSwVersion>()
{
  return "delphi_srr_msgs::msg::SrrFeatureSwVersion";
}

template<>
inline const char * name<delphi_srr_msgs::msg::SrrFeatureSwVersion>()
{
  return "delphi_srr_msgs/msg/SrrFeatureSwVersion";
}

template<>
struct has_fixed_size<delphi_srr_msgs::msg::SrrFeatureSwVersion>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<delphi_srr_msgs::msg::SrrFeatureSwVersion>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<delphi_srr_msgs::msg::SrrFeatureSwVersion>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DELPHI_SRR_MSGS__MSG__DETAIL__SRR_FEATURE_SW_VERSION__TRAITS_HPP_

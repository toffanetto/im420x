// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from delphi_mrr_msgs:msg/MrrDetection.idl
// generated code does not contain a copyright notice

#ifndef DELPHI_MRR_MSGS__MSG__DETAIL__MRR_DETECTION__TRAITS_HPP_
#define DELPHI_MRR_MSGS__MSG__DETAIL__MRR_DETECTION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "delphi_mrr_msgs/msg/detail/mrr_detection__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace delphi_mrr_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const MrrDetection & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: detection_id
  {
    out << "detection_id: ";
    rosidl_generator_traits::value_to_yaml(msg.detection_id, out);
    out << ", ";
  }

  // member: confid_azimuth
  {
    out << "confid_azimuth: ";
    rosidl_generator_traits::value_to_yaml(msg.confid_azimuth, out);
    out << ", ";
  }

  // member: super_res_target
  {
    out << "super_res_target: ";
    rosidl_generator_traits::value_to_yaml(msg.super_res_target, out);
    out << ", ";
  }

  // member: nd_target
  {
    out << "nd_target: ";
    rosidl_generator_traits::value_to_yaml(msg.nd_target, out);
    out << ", ";
  }

  // member: host_veh_clutter
  {
    out << "host_veh_clutter: ";
    rosidl_generator_traits::value_to_yaml(msg.host_veh_clutter, out);
    out << ", ";
  }

  // member: valid_level
  {
    out << "valid_level: ";
    rosidl_generator_traits::value_to_yaml(msg.valid_level, out);
    out << ", ";
  }

  // member: azimuth
  {
    out << "azimuth: ";
    rosidl_generator_traits::value_to_yaml(msg.azimuth, out);
    out << ", ";
  }

  // member: range
  {
    out << "range: ";
    rosidl_generator_traits::value_to_yaml(msg.range, out);
    out << ", ";
  }

  // member: range_rate
  {
    out << "range_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.range_rate, out);
    out << ", ";
  }

  // member: amplitude
  {
    out << "amplitude: ";
    rosidl_generator_traits::value_to_yaml(msg.amplitude, out);
    out << ", ";
  }

  // member: index_2lsb
  {
    out << "index_2lsb: ";
    rosidl_generator_traits::value_to_yaml(msg.index_2lsb, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MrrDetection & msg,
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

  // member: detection_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "detection_id: ";
    rosidl_generator_traits::value_to_yaml(msg.detection_id, out);
    out << "\n";
  }

  // member: confid_azimuth
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "confid_azimuth: ";
    rosidl_generator_traits::value_to_yaml(msg.confid_azimuth, out);
    out << "\n";
  }

  // member: super_res_target
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "super_res_target: ";
    rosidl_generator_traits::value_to_yaml(msg.super_res_target, out);
    out << "\n";
  }

  // member: nd_target
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "nd_target: ";
    rosidl_generator_traits::value_to_yaml(msg.nd_target, out);
    out << "\n";
  }

  // member: host_veh_clutter
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "host_veh_clutter: ";
    rosidl_generator_traits::value_to_yaml(msg.host_veh_clutter, out);
    out << "\n";
  }

  // member: valid_level
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "valid_level: ";
    rosidl_generator_traits::value_to_yaml(msg.valid_level, out);
    out << "\n";
  }

  // member: azimuth
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "azimuth: ";
    rosidl_generator_traits::value_to_yaml(msg.azimuth, out);
    out << "\n";
  }

  // member: range
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "range: ";
    rosidl_generator_traits::value_to_yaml(msg.range, out);
    out << "\n";
  }

  // member: range_rate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "range_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.range_rate, out);
    out << "\n";
  }

  // member: amplitude
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "amplitude: ";
    rosidl_generator_traits::value_to_yaml(msg.amplitude, out);
    out << "\n";
  }

  // member: index_2lsb
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "index_2lsb: ";
    rosidl_generator_traits::value_to_yaml(msg.index_2lsb, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MrrDetection & msg, bool use_flow_style = false)
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
  const delphi_mrr_msgs::msg::MrrDetection & msg,
  std::ostream & out, size_t indentation = 0)
{
  delphi_mrr_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use delphi_mrr_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const delphi_mrr_msgs::msg::MrrDetection & msg)
{
  return delphi_mrr_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<delphi_mrr_msgs::msg::MrrDetection>()
{
  return "delphi_mrr_msgs::msg::MrrDetection";
}

template<>
inline const char * name<delphi_mrr_msgs::msg::MrrDetection>()
{
  return "delphi_mrr_msgs/msg/MrrDetection";
}

template<>
struct has_fixed_size<delphi_mrr_msgs::msg::MrrDetection>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<delphi_mrr_msgs::msg::MrrDetection>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<delphi_mrr_msgs::msg::MrrDetection>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DELPHI_MRR_MSGS__MSG__DETAIL__MRR_DETECTION__TRAITS_HPP_

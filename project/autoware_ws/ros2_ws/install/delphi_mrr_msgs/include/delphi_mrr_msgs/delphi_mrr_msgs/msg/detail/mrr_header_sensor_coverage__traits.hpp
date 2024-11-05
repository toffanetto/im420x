// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from delphi_mrr_msgs:msg/MrrHeaderSensorCoverage.idl
// generated code does not contain a copyright notice

#ifndef DELPHI_MRR_MSGS__MSG__DETAIL__MRR_HEADER_SENSOR_COVERAGE__TRAITS_HPP_
#define DELPHI_MRR_MSGS__MSG__DETAIL__MRR_HEADER_SENSOR_COVERAGE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "delphi_mrr_msgs/msg/detail/mrr_header_sensor_coverage__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace delphi_mrr_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const MrrHeaderSensorCoverage & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: can_sensor_fov_hor
  {
    out << "can_sensor_fov_hor: ";
    rosidl_generator_traits::value_to_yaml(msg.can_sensor_fov_hor, out);
    out << ", ";
  }

  // member: can_doppler_coverage
  {
    out << "can_doppler_coverage: ";
    rosidl_generator_traits::value_to_yaml(msg.can_doppler_coverage, out);
    out << ", ";
  }

  // member: can_range_coverage
  {
    out << "can_range_coverage: ";
    rosidl_generator_traits::value_to_yaml(msg.can_range_coverage, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MrrHeaderSensorCoverage & msg,
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

  // member: can_sensor_fov_hor
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "can_sensor_fov_hor: ";
    rosidl_generator_traits::value_to_yaml(msg.can_sensor_fov_hor, out);
    out << "\n";
  }

  // member: can_doppler_coverage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "can_doppler_coverage: ";
    rosidl_generator_traits::value_to_yaml(msg.can_doppler_coverage, out);
    out << "\n";
  }

  // member: can_range_coverage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "can_range_coverage: ";
    rosidl_generator_traits::value_to_yaml(msg.can_range_coverage, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MrrHeaderSensorCoverage & msg, bool use_flow_style = false)
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
  const delphi_mrr_msgs::msg::MrrHeaderSensorCoverage & msg,
  std::ostream & out, size_t indentation = 0)
{
  delphi_mrr_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use delphi_mrr_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const delphi_mrr_msgs::msg::MrrHeaderSensorCoverage & msg)
{
  return delphi_mrr_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<delphi_mrr_msgs::msg::MrrHeaderSensorCoverage>()
{
  return "delphi_mrr_msgs::msg::MrrHeaderSensorCoverage";
}

template<>
inline const char * name<delphi_mrr_msgs::msg::MrrHeaderSensorCoverage>()
{
  return "delphi_mrr_msgs/msg/MrrHeaderSensorCoverage";
}

template<>
struct has_fixed_size<delphi_mrr_msgs::msg::MrrHeaderSensorCoverage>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<delphi_mrr_msgs::msg::MrrHeaderSensorCoverage>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<delphi_mrr_msgs::msg::MrrHeaderSensorCoverage>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DELPHI_MRR_MSGS__MSG__DETAIL__MRR_HEADER_SENSOR_COVERAGE__TRAITS_HPP_

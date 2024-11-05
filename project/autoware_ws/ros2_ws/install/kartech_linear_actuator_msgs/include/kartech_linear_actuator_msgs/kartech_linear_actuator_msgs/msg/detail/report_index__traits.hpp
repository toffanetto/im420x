// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from kartech_linear_actuator_msgs:msg/ReportIndex.idl
// generated code does not contain a copyright notice

#ifndef KARTECH_LINEAR_ACTUATOR_MSGS__MSG__DETAIL__REPORT_INDEX__TRAITS_HPP_
#define KARTECH_LINEAR_ACTUATOR_MSGS__MSG__DETAIL__REPORT_INDEX__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "kartech_linear_actuator_msgs/msg/detail/report_index__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace kartech_linear_actuator_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ReportIndex & msg,
  std::ostream & out)
{
  out << "{";
  // member: report_index
  {
    out << "report_index: ";
    rosidl_generator_traits::value_to_yaml(msg.report_index, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ReportIndex & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: report_index
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "report_index: ";
    rosidl_generator_traits::value_to_yaml(msg.report_index, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ReportIndex & msg, bool use_flow_style = false)
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

}  // namespace kartech_linear_actuator_msgs

namespace rosidl_generator_traits
{

[[deprecated("use kartech_linear_actuator_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const kartech_linear_actuator_msgs::msg::ReportIndex & msg,
  std::ostream & out, size_t indentation = 0)
{
  kartech_linear_actuator_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use kartech_linear_actuator_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const kartech_linear_actuator_msgs::msg::ReportIndex & msg)
{
  return kartech_linear_actuator_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<kartech_linear_actuator_msgs::msg::ReportIndex>()
{
  return "kartech_linear_actuator_msgs::msg::ReportIndex";
}

template<>
inline const char * name<kartech_linear_actuator_msgs::msg::ReportIndex>()
{
  return "kartech_linear_actuator_msgs/msg/ReportIndex";
}

template<>
struct has_fixed_size<kartech_linear_actuator_msgs::msg::ReportIndex>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<kartech_linear_actuator_msgs::msg::ReportIndex>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<kartech_linear_actuator_msgs::msg::ReportIndex>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // KARTECH_LINEAR_ACTUATOR_MSGS__MSG__DETAIL__REPORT_INDEX__TRAITS_HPP_

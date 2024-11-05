// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from kartech_linear_actuator_msgs:msg/ReassignReportIdCmd.idl
// generated code does not contain a copyright notice

#ifndef KARTECH_LINEAR_ACTUATOR_MSGS__MSG__DETAIL__REASSIGN_REPORT_ID_CMD__TRAITS_HPP_
#define KARTECH_LINEAR_ACTUATOR_MSGS__MSG__DETAIL__REASSIGN_REPORT_ID_CMD__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "kartech_linear_actuator_msgs/msg/detail/reassign_report_id_cmd__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace kartech_linear_actuator_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ReassignReportIdCmd & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: confirm
  {
    out << "confirm: ";
    rosidl_generator_traits::value_to_yaml(msg.confirm, out);
    out << ", ";
  }

  // member: user_report_id
  {
    out << "user_report_id: ";
    rosidl_generator_traits::value_to_yaml(msg.user_report_id, out);
    out << ", ";
  }

  // member: use_user_report_id
  {
    out << "use_user_report_id: ";
    rosidl_generator_traits::value_to_yaml(msg.use_user_report_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ReassignReportIdCmd & msg,
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

  // member: confirm
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "confirm: ";
    rosidl_generator_traits::value_to_yaml(msg.confirm, out);
    out << "\n";
  }

  // member: user_report_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "user_report_id: ";
    rosidl_generator_traits::value_to_yaml(msg.user_report_id, out);
    out << "\n";
  }

  // member: use_user_report_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "use_user_report_id: ";
    rosidl_generator_traits::value_to_yaml(msg.use_user_report_id, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ReassignReportIdCmd & msg, bool use_flow_style = false)
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
  const kartech_linear_actuator_msgs::msg::ReassignReportIdCmd & msg,
  std::ostream & out, size_t indentation = 0)
{
  kartech_linear_actuator_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use kartech_linear_actuator_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const kartech_linear_actuator_msgs::msg::ReassignReportIdCmd & msg)
{
  return kartech_linear_actuator_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<kartech_linear_actuator_msgs::msg::ReassignReportIdCmd>()
{
  return "kartech_linear_actuator_msgs::msg::ReassignReportIdCmd";
}

template<>
inline const char * name<kartech_linear_actuator_msgs::msg::ReassignReportIdCmd>()
{
  return "kartech_linear_actuator_msgs/msg/ReassignReportIdCmd";
}

template<>
struct has_fixed_size<kartech_linear_actuator_msgs::msg::ReassignReportIdCmd>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<kartech_linear_actuator_msgs::msg::ReassignReportIdCmd>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<kartech_linear_actuator_msgs::msg::ReassignReportIdCmd>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // KARTECH_LINEAR_ACTUATOR_MSGS__MSG__DETAIL__REASSIGN_REPORT_ID_CMD__TRAITS_HPP_
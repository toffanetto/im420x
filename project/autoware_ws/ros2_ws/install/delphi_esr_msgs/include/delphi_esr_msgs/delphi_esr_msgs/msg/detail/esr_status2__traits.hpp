// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from delphi_esr_msgs:msg/EsrStatus2.idl
// generated code does not contain a copyright notice

#ifndef DELPHI_ESR_MSGS__MSG__DETAIL__ESR_STATUS2__TRAITS_HPP_
#define DELPHI_ESR_MSGS__MSG__DETAIL__ESR_STATUS2__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "delphi_esr_msgs/msg/detail/esr_status2__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace delphi_esr_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const EsrStatus2 & msg,
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

  // member: maximum_tracks_ack
  {
    out << "maximum_tracks_ack: ";
    rosidl_generator_traits::value_to_yaml(msg.maximum_tracks_ack, out);
    out << ", ";
  }

  // member: rolling_count_2
  {
    out << "rolling_count_2: ";
    rosidl_generator_traits::value_to_yaml(msg.rolling_count_2, out);
    out << ", ";
  }

  // member: overheat_error
  {
    out << "overheat_error: ";
    rosidl_generator_traits::value_to_yaml(msg.overheat_error, out);
    out << ", ";
  }

  // member: range_perf_error
  {
    out << "range_perf_error: ";
    rosidl_generator_traits::value_to_yaml(msg.range_perf_error, out);
    out << ", ";
  }

  // member: internal_error
  {
    out << "internal_error: ";
    rosidl_generator_traits::value_to_yaml(msg.internal_error, out);
    out << ", ";
  }

  // member: xcvr_operational
  {
    out << "xcvr_operational: ";
    rosidl_generator_traits::value_to_yaml(msg.xcvr_operational, out);
    out << ", ";
  }

  // member: raw_data_mode
  {
    out << "raw_data_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.raw_data_mode, out);
    out << ", ";
  }

  // member: steering_angle_ack
  {
    out << "steering_angle_ack: ";
    rosidl_generator_traits::value_to_yaml(msg.steering_angle_ack, out);
    out << ", ";
  }

  // member: temperature
  {
    out << "temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.temperature, out);
    out << ", ";
  }

  // member: veh_spd_comp_factor
  {
    out << "veh_spd_comp_factor: ";
    rosidl_generator_traits::value_to_yaml(msg.veh_spd_comp_factor, out);
    out << ", ";
  }

  // member: grouping_mode
  {
    out << "grouping_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.grouping_mode, out);
    out << ", ";
  }

  // member: yaw_rate_bias
  {
    out << "yaw_rate_bias: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw_rate_bias, out);
    out << ", ";
  }

  // member: sw_version_dsp
  {
    out << "sw_version_dsp: ";
    rosidl_generator_traits::value_to_yaml(msg.sw_version_dsp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const EsrStatus2 & msg,
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

  // member: maximum_tracks_ack
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "maximum_tracks_ack: ";
    rosidl_generator_traits::value_to_yaml(msg.maximum_tracks_ack, out);
    out << "\n";
  }

  // member: rolling_count_2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rolling_count_2: ";
    rosidl_generator_traits::value_to_yaml(msg.rolling_count_2, out);
    out << "\n";
  }

  // member: overheat_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "overheat_error: ";
    rosidl_generator_traits::value_to_yaml(msg.overheat_error, out);
    out << "\n";
  }

  // member: range_perf_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "range_perf_error: ";
    rosidl_generator_traits::value_to_yaml(msg.range_perf_error, out);
    out << "\n";
  }

  // member: internal_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "internal_error: ";
    rosidl_generator_traits::value_to_yaml(msg.internal_error, out);
    out << "\n";
  }

  // member: xcvr_operational
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "xcvr_operational: ";
    rosidl_generator_traits::value_to_yaml(msg.xcvr_operational, out);
    out << "\n";
  }

  // member: raw_data_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "raw_data_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.raw_data_mode, out);
    out << "\n";
  }

  // member: steering_angle_ack
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "steering_angle_ack: ";
    rosidl_generator_traits::value_to_yaml(msg.steering_angle_ack, out);
    out << "\n";
  }

  // member: temperature
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.temperature, out);
    out << "\n";
  }

  // member: veh_spd_comp_factor
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "veh_spd_comp_factor: ";
    rosidl_generator_traits::value_to_yaml(msg.veh_spd_comp_factor, out);
    out << "\n";
  }

  // member: grouping_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "grouping_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.grouping_mode, out);
    out << "\n";
  }

  // member: yaw_rate_bias
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yaw_rate_bias: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw_rate_bias, out);
    out << "\n";
  }

  // member: sw_version_dsp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sw_version_dsp: ";
    rosidl_generator_traits::value_to_yaml(msg.sw_version_dsp, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const EsrStatus2 & msg, bool use_flow_style = false)
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
  const delphi_esr_msgs::msg::EsrStatus2 & msg,
  std::ostream & out, size_t indentation = 0)
{
  delphi_esr_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use delphi_esr_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const delphi_esr_msgs::msg::EsrStatus2 & msg)
{
  return delphi_esr_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<delphi_esr_msgs::msg::EsrStatus2>()
{
  return "delphi_esr_msgs::msg::EsrStatus2";
}

template<>
inline const char * name<delphi_esr_msgs::msg::EsrStatus2>()
{
  return "delphi_esr_msgs/msg/EsrStatus2";
}

template<>
struct has_fixed_size<delphi_esr_msgs::msg::EsrStatus2>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<delphi_esr_msgs::msg::EsrStatus2>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<delphi_esr_msgs::msg::EsrStatus2>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DELPHI_ESR_MSGS__MSG__DETAIL__ESR_STATUS2__TRAITS_HPP_

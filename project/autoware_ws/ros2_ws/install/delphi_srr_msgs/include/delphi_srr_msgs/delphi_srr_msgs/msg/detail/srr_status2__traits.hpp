// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from delphi_srr_msgs:msg/SrrStatus2.idl
// generated code does not contain a copyright notice

#ifndef DELPHI_SRR_MSGS__MSG__DETAIL__SRR_STATUS2__TRAITS_HPP_
#define DELPHI_SRR_MSGS__MSG__DETAIL__SRR_STATUS2__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "delphi_srr_msgs/msg/detail/srr_status2__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace delphi_srr_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const SrrStatus2 & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: can_tx_alignment_status
  {
    out << "can_tx_alignment_status: ";
    rosidl_generator_traits::value_to_yaml(msg.can_tx_alignment_status, out);
    out << ", ";
  }

  // member: can_tx_comm_error
  {
    out << "can_tx_comm_error: ";
    rosidl_generator_traits::value_to_yaml(msg.can_tx_comm_error, out);
    out << ", ";
  }

  // member: can_tx_steering_angle_sign
  {
    out << "can_tx_steering_angle_sign: ";
    rosidl_generator_traits::value_to_yaml(msg.can_tx_steering_angle_sign, out);
    out << ", ";
  }

  // member: can_tx_yaw_rate_bias
  {
    out << "can_tx_yaw_rate_bias: ";
    rosidl_generator_traits::value_to_yaml(msg.can_tx_yaw_rate_bias, out);
    out << ", ";
  }

  // member: can_tx_veh_spd_comp_factor
  {
    out << "can_tx_veh_spd_comp_factor: ";
    rosidl_generator_traits::value_to_yaml(msg.can_tx_veh_spd_comp_factor, out);
    out << ", ";
  }

  // member: can_tx_sw_version_dsp
  {
    out << "can_tx_sw_version_dsp: ";
    rosidl_generator_traits::value_to_yaml(msg.can_tx_sw_version_dsp, out);
    out << ", ";
  }

  // member: can_tx_temperature
  {
    out << "can_tx_temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.can_tx_temperature, out);
    out << ", ";
  }

  // member: can_tx_range_perf_error
  {
    out << "can_tx_range_perf_error: ";
    rosidl_generator_traits::value_to_yaml(msg.can_tx_range_perf_error, out);
    out << ", ";
  }

  // member: can_tx_overheat_error
  {
    out << "can_tx_overheat_error: ";
    rosidl_generator_traits::value_to_yaml(msg.can_tx_overheat_error, out);
    out << ", ";
  }

  // member: can_tx_internal_error
  {
    out << "can_tx_internal_error: ";
    rosidl_generator_traits::value_to_yaml(msg.can_tx_internal_error, out);
    out << ", ";
  }

  // member: can_tx_xcvr_operational
  {
    out << "can_tx_xcvr_operational: ";
    rosidl_generator_traits::value_to_yaml(msg.can_tx_xcvr_operational, out);
    out << ", ";
  }

  // member: can_tx_steering_angle
  {
    out << "can_tx_steering_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.can_tx_steering_angle, out);
    out << ", ";
  }

  // member: can_tx_rolling_count_2
  {
    out << "can_tx_rolling_count_2: ";
    rosidl_generator_traits::value_to_yaml(msg.can_tx_rolling_count_2, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SrrStatus2 & msg,
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

  // member: can_tx_alignment_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "can_tx_alignment_status: ";
    rosidl_generator_traits::value_to_yaml(msg.can_tx_alignment_status, out);
    out << "\n";
  }

  // member: can_tx_comm_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "can_tx_comm_error: ";
    rosidl_generator_traits::value_to_yaml(msg.can_tx_comm_error, out);
    out << "\n";
  }

  // member: can_tx_steering_angle_sign
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "can_tx_steering_angle_sign: ";
    rosidl_generator_traits::value_to_yaml(msg.can_tx_steering_angle_sign, out);
    out << "\n";
  }

  // member: can_tx_yaw_rate_bias
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "can_tx_yaw_rate_bias: ";
    rosidl_generator_traits::value_to_yaml(msg.can_tx_yaw_rate_bias, out);
    out << "\n";
  }

  // member: can_tx_veh_spd_comp_factor
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "can_tx_veh_spd_comp_factor: ";
    rosidl_generator_traits::value_to_yaml(msg.can_tx_veh_spd_comp_factor, out);
    out << "\n";
  }

  // member: can_tx_sw_version_dsp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "can_tx_sw_version_dsp: ";
    rosidl_generator_traits::value_to_yaml(msg.can_tx_sw_version_dsp, out);
    out << "\n";
  }

  // member: can_tx_temperature
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "can_tx_temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.can_tx_temperature, out);
    out << "\n";
  }

  // member: can_tx_range_perf_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "can_tx_range_perf_error: ";
    rosidl_generator_traits::value_to_yaml(msg.can_tx_range_perf_error, out);
    out << "\n";
  }

  // member: can_tx_overheat_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "can_tx_overheat_error: ";
    rosidl_generator_traits::value_to_yaml(msg.can_tx_overheat_error, out);
    out << "\n";
  }

  // member: can_tx_internal_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "can_tx_internal_error: ";
    rosidl_generator_traits::value_to_yaml(msg.can_tx_internal_error, out);
    out << "\n";
  }

  // member: can_tx_xcvr_operational
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "can_tx_xcvr_operational: ";
    rosidl_generator_traits::value_to_yaml(msg.can_tx_xcvr_operational, out);
    out << "\n";
  }

  // member: can_tx_steering_angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "can_tx_steering_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.can_tx_steering_angle, out);
    out << "\n";
  }

  // member: can_tx_rolling_count_2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "can_tx_rolling_count_2: ";
    rosidl_generator_traits::value_to_yaml(msg.can_tx_rolling_count_2, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SrrStatus2 & msg, bool use_flow_style = false)
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
  const delphi_srr_msgs::msg::SrrStatus2 & msg,
  std::ostream & out, size_t indentation = 0)
{
  delphi_srr_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use delphi_srr_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const delphi_srr_msgs::msg::SrrStatus2 & msg)
{
  return delphi_srr_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<delphi_srr_msgs::msg::SrrStatus2>()
{
  return "delphi_srr_msgs::msg::SrrStatus2";
}

template<>
inline const char * name<delphi_srr_msgs::msg::SrrStatus2>()
{
  return "delphi_srr_msgs/msg/SrrStatus2";
}

template<>
struct has_fixed_size<delphi_srr_msgs::msg::SrrStatus2>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<delphi_srr_msgs::msg::SrrStatus2>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<delphi_srr_msgs::msg::SrrStatus2>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DELPHI_SRR_MSGS__MSG__DETAIL__SRR_STATUS2__TRAITS_HPP_

// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from delphi_mrr_msgs:msg/VehicleStateMsg3.idl
// generated code does not contain a copyright notice

#ifndef DELPHI_MRR_MSGS__MSG__DETAIL__VEHICLE_STATE_MSG3__TRAITS_HPP_
#define DELPHI_MRR_MSGS__MSG__DETAIL__VEHICLE_STATE_MSG3__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "delphi_mrr_msgs/msg/detail/vehicle_state_msg3__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace delphi_mrr_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const VehicleStateMsg3 & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: yaw_rate_reference_valid
  {
    out << "yaw_rate_reference_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw_rate_reference_valid, out);
    out << ", ";
  }

  // member: yaw_rate_reference
  {
    out << "yaw_rate_reference: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw_rate_reference, out);
    out << ", ";
  }

  // member: can_veh_long_accel_qf
  {
    out << "can_veh_long_accel_qf: ";
    rosidl_generator_traits::value_to_yaml(msg.can_veh_long_accel_qf, out);
    out << ", ";
  }

  // member: can_veh_long_accel
  {
    out << "can_veh_long_accel: ";
    rosidl_generator_traits::value_to_yaml(msg.can_veh_long_accel, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const VehicleStateMsg3 & msg,
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

  // member: yaw_rate_reference_valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yaw_rate_reference_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw_rate_reference_valid, out);
    out << "\n";
  }

  // member: yaw_rate_reference
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yaw_rate_reference: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw_rate_reference, out);
    out << "\n";
  }

  // member: can_veh_long_accel_qf
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "can_veh_long_accel_qf: ";
    rosidl_generator_traits::value_to_yaml(msg.can_veh_long_accel_qf, out);
    out << "\n";
  }

  // member: can_veh_long_accel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "can_veh_long_accel: ";
    rosidl_generator_traits::value_to_yaml(msg.can_veh_long_accel, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const VehicleStateMsg3 & msg, bool use_flow_style = false)
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
  const delphi_mrr_msgs::msg::VehicleStateMsg3 & msg,
  std::ostream & out, size_t indentation = 0)
{
  delphi_mrr_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use delphi_mrr_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const delphi_mrr_msgs::msg::VehicleStateMsg3 & msg)
{
  return delphi_mrr_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<delphi_mrr_msgs::msg::VehicleStateMsg3>()
{
  return "delphi_mrr_msgs::msg::VehicleStateMsg3";
}

template<>
inline const char * name<delphi_mrr_msgs::msg::VehicleStateMsg3>()
{
  return "delphi_mrr_msgs/msg/VehicleStateMsg3";
}

template<>
struct has_fixed_size<delphi_mrr_msgs::msg::VehicleStateMsg3>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<delphi_mrr_msgs::msg::VehicleStateMsg3>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<delphi_mrr_msgs::msg::VehicleStateMsg3>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DELPHI_MRR_MSGS__MSG__DETAIL__VEHICLE_STATE_MSG3__TRAITS_HPP_

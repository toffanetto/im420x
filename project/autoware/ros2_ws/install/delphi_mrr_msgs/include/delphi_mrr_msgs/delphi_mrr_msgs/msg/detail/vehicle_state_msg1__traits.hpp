// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from delphi_mrr_msgs:msg/VehicleStateMsg1.idl
// generated code does not contain a copyright notice

#ifndef DELPHI_MRR_MSGS__MSG__DETAIL__VEHICLE_STATE_MSG1__TRAITS_HPP_
#define DELPHI_MRR_MSGS__MSG__DETAIL__VEHICLE_STATE_MSG1__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "delphi_mrr_msgs/msg/detail/vehicle_state_msg1__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace delphi_mrr_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const VehicleStateMsg1 & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: can_fcw_sensitivity_level
  {
    out << "can_fcw_sensitivity_level: ";
    rosidl_generator_traits::value_to_yaml(msg.can_fcw_sensitivity_level, out);
    out << ", ";
  }

  // member: can_vehicle_stationary
  {
    out << "can_vehicle_stationary: ";
    rosidl_generator_traits::value_to_yaml(msg.can_vehicle_stationary, out);
    out << ", ";
  }

  // member: can_intf_minor_version
  {
    out << "can_intf_minor_version: ";
    rosidl_generator_traits::value_to_yaml(msg.can_intf_minor_version, out);
    out << ", ";
  }

  // member: can_intf_major_version
  {
    out << "can_intf_major_version: ";
    rosidl_generator_traits::value_to_yaml(msg.can_intf_major_version, out);
    out << ", ";
  }

  // member: can_brake_pedal
  {
    out << "can_brake_pedal: ";
    rosidl_generator_traits::value_to_yaml(msg.can_brake_pedal, out);
    out << ", ";
  }

  // member: can_high_wheel_slip
  {
    out << "can_high_wheel_slip: ";
    rosidl_generator_traits::value_to_yaml(msg.can_high_wheel_slip, out);
    out << ", ";
  }

  // member: can_turn_signal_status
  {
    out << "can_turn_signal_status: ";
    rosidl_generator_traits::value_to_yaml(msg.can_turn_signal_status, out);
    out << ", ";
  }

  // member: can_washer_front_cmd
  {
    out << "can_washer_front_cmd: ";
    rosidl_generator_traits::value_to_yaml(msg.can_washer_front_cmd, out);
    out << ", ";
  }

  // member: can_wiper_front_cmd
  {
    out << "can_wiper_front_cmd: ";
    rosidl_generator_traits::value_to_yaml(msg.can_wiper_front_cmd, out);
    out << ", ";
  }

  // member: can_wiper_speed_info
  {
    out << "can_wiper_speed_info: ";
    rosidl_generator_traits::value_to_yaml(msg.can_wiper_speed_info, out);
    out << ", ";
  }

  // member: can_reverse_gear
  {
    out << "can_reverse_gear: ";
    rosidl_generator_traits::value_to_yaml(msg.can_reverse_gear, out);
    out << ", ";
  }

  // member: can_beam_shape_actual_right
  {
    out << "can_beam_shape_actual_right: ";
    rosidl_generator_traits::value_to_yaml(msg.can_beam_shape_actual_right, out);
    out << ", ";
  }

  // member: can_beam_shape_actual_left
  {
    out << "can_beam_shape_actual_left: ";
    rosidl_generator_traits::value_to_yaml(msg.can_beam_shape_actual_left, out);
    out << ", ";
  }

  // member: can_main_beam_indication
  {
    out << "can_main_beam_indication: ";
    rosidl_generator_traits::value_to_yaml(msg.can_main_beam_indication, out);
    out << ", ";
  }

  // member: can_vehicle_index
  {
    out << "can_vehicle_index: ";
    rosidl_generator_traits::value_to_yaml(msg.can_vehicle_index, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const VehicleStateMsg1 & msg,
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

  // member: can_fcw_sensitivity_level
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "can_fcw_sensitivity_level: ";
    rosidl_generator_traits::value_to_yaml(msg.can_fcw_sensitivity_level, out);
    out << "\n";
  }

  // member: can_vehicle_stationary
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "can_vehicle_stationary: ";
    rosidl_generator_traits::value_to_yaml(msg.can_vehicle_stationary, out);
    out << "\n";
  }

  // member: can_intf_minor_version
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "can_intf_minor_version: ";
    rosidl_generator_traits::value_to_yaml(msg.can_intf_minor_version, out);
    out << "\n";
  }

  // member: can_intf_major_version
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "can_intf_major_version: ";
    rosidl_generator_traits::value_to_yaml(msg.can_intf_major_version, out);
    out << "\n";
  }

  // member: can_brake_pedal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "can_brake_pedal: ";
    rosidl_generator_traits::value_to_yaml(msg.can_brake_pedal, out);
    out << "\n";
  }

  // member: can_high_wheel_slip
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "can_high_wheel_slip: ";
    rosidl_generator_traits::value_to_yaml(msg.can_high_wheel_slip, out);
    out << "\n";
  }

  // member: can_turn_signal_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "can_turn_signal_status: ";
    rosidl_generator_traits::value_to_yaml(msg.can_turn_signal_status, out);
    out << "\n";
  }

  // member: can_washer_front_cmd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "can_washer_front_cmd: ";
    rosidl_generator_traits::value_to_yaml(msg.can_washer_front_cmd, out);
    out << "\n";
  }

  // member: can_wiper_front_cmd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "can_wiper_front_cmd: ";
    rosidl_generator_traits::value_to_yaml(msg.can_wiper_front_cmd, out);
    out << "\n";
  }

  // member: can_wiper_speed_info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "can_wiper_speed_info: ";
    rosidl_generator_traits::value_to_yaml(msg.can_wiper_speed_info, out);
    out << "\n";
  }

  // member: can_reverse_gear
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "can_reverse_gear: ";
    rosidl_generator_traits::value_to_yaml(msg.can_reverse_gear, out);
    out << "\n";
  }

  // member: can_beam_shape_actual_right
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "can_beam_shape_actual_right: ";
    rosidl_generator_traits::value_to_yaml(msg.can_beam_shape_actual_right, out);
    out << "\n";
  }

  // member: can_beam_shape_actual_left
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "can_beam_shape_actual_left: ";
    rosidl_generator_traits::value_to_yaml(msg.can_beam_shape_actual_left, out);
    out << "\n";
  }

  // member: can_main_beam_indication
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "can_main_beam_indication: ";
    rosidl_generator_traits::value_to_yaml(msg.can_main_beam_indication, out);
    out << "\n";
  }

  // member: can_vehicle_index
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "can_vehicle_index: ";
    rosidl_generator_traits::value_to_yaml(msg.can_vehicle_index, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const VehicleStateMsg1 & msg, bool use_flow_style = false)
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
  const delphi_mrr_msgs::msg::VehicleStateMsg1 & msg,
  std::ostream & out, size_t indentation = 0)
{
  delphi_mrr_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use delphi_mrr_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const delphi_mrr_msgs::msg::VehicleStateMsg1 & msg)
{
  return delphi_mrr_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<delphi_mrr_msgs::msg::VehicleStateMsg1>()
{
  return "delphi_mrr_msgs::msg::VehicleStateMsg1";
}

template<>
inline const char * name<delphi_mrr_msgs::msg::VehicleStateMsg1>()
{
  return "delphi_mrr_msgs/msg/VehicleStateMsg1";
}

template<>
struct has_fixed_size<delphi_mrr_msgs::msg::VehicleStateMsg1>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<delphi_mrr_msgs::msg::VehicleStateMsg1>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<delphi_mrr_msgs::msg::VehicleStateMsg1>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DELPHI_MRR_MSGS__MSG__DETAIL__VEHICLE_STATE_MSG1__TRAITS_HPP_

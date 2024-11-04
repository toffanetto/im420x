// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from delphi_esr_msgs:msg/EsrStatus4.idl
// generated code does not contain a copyright notice

#ifndef DELPHI_ESR_MSGS__MSG__DETAIL__ESR_STATUS4__TRAITS_HPP_
#define DELPHI_ESR_MSGS__MSG__DETAIL__ESR_STATUS4__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "delphi_esr_msgs/msg/detail/esr_status4__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace delphi_esr_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const EsrStatus4 & msg,
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

  // member: truck_target_det
  {
    out << "truck_target_det: ";
    rosidl_generator_traits::value_to_yaml(msg.truck_target_det, out);
    out << ", ";
  }

  // member: lr_only_grating_lobe_det
  {
    out << "lr_only_grating_lobe_det: ";
    rosidl_generator_traits::value_to_yaml(msg.lr_only_grating_lobe_det, out);
    out << ", ";
  }

  // member: sidelobe_blockage
  {
    out << "sidelobe_blockage: ";
    rosidl_generator_traits::value_to_yaml(msg.sidelobe_blockage, out);
    out << ", ";
  }

  // member: partial_blockage
  {
    out << "partial_blockage: ";
    rosidl_generator_traits::value_to_yaml(msg.partial_blockage, out);
    out << ", ";
  }

  // member: mr_lr_mode
  {
    out << "mr_lr_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.mr_lr_mode, out);
    out << ", ";
  }

  // member: rolling_count_3
  {
    out << "rolling_count_3: ";
    rosidl_generator_traits::value_to_yaml(msg.rolling_count_3, out);
    out << ", ";
  }

  // member: path_id_acc
  {
    out << "path_id_acc: ";
    rosidl_generator_traits::value_to_yaml(msg.path_id_acc, out);
    out << ", ";
  }

  // member: path_id_cmbb_move
  {
    out << "path_id_cmbb_move: ";
    rosidl_generator_traits::value_to_yaml(msg.path_id_cmbb_move, out);
    out << ", ";
  }

  // member: path_id_cmbb_stat
  {
    out << "path_id_cmbb_stat: ";
    rosidl_generator_traits::value_to_yaml(msg.path_id_cmbb_stat, out);
    out << ", ";
  }

  // member: path_id_fcw_move
  {
    out << "path_id_fcw_move: ";
    rosidl_generator_traits::value_to_yaml(msg.path_id_fcw_move, out);
    out << ", ";
  }

  // member: path_id_fcw_stat
  {
    out << "path_id_fcw_stat: ";
    rosidl_generator_traits::value_to_yaml(msg.path_id_fcw_stat, out);
    out << ", ";
  }

  // member: auto_align_angle
  {
    out << "auto_align_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.auto_align_angle, out);
    out << ", ";
  }

  // member: path_id_acc_stat
  {
    out << "path_id_acc_stat: ";
    rosidl_generator_traits::value_to_yaml(msg.path_id_acc_stat, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const EsrStatus4 & msg,
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

  // member: truck_target_det
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "truck_target_det: ";
    rosidl_generator_traits::value_to_yaml(msg.truck_target_det, out);
    out << "\n";
  }

  // member: lr_only_grating_lobe_det
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lr_only_grating_lobe_det: ";
    rosidl_generator_traits::value_to_yaml(msg.lr_only_grating_lobe_det, out);
    out << "\n";
  }

  // member: sidelobe_blockage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sidelobe_blockage: ";
    rosidl_generator_traits::value_to_yaml(msg.sidelobe_blockage, out);
    out << "\n";
  }

  // member: partial_blockage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "partial_blockage: ";
    rosidl_generator_traits::value_to_yaml(msg.partial_blockage, out);
    out << "\n";
  }

  // member: mr_lr_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mr_lr_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.mr_lr_mode, out);
    out << "\n";
  }

  // member: rolling_count_3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rolling_count_3: ";
    rosidl_generator_traits::value_to_yaml(msg.rolling_count_3, out);
    out << "\n";
  }

  // member: path_id_acc
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "path_id_acc: ";
    rosidl_generator_traits::value_to_yaml(msg.path_id_acc, out);
    out << "\n";
  }

  // member: path_id_cmbb_move
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "path_id_cmbb_move: ";
    rosidl_generator_traits::value_to_yaml(msg.path_id_cmbb_move, out);
    out << "\n";
  }

  // member: path_id_cmbb_stat
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "path_id_cmbb_stat: ";
    rosidl_generator_traits::value_to_yaml(msg.path_id_cmbb_stat, out);
    out << "\n";
  }

  // member: path_id_fcw_move
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "path_id_fcw_move: ";
    rosidl_generator_traits::value_to_yaml(msg.path_id_fcw_move, out);
    out << "\n";
  }

  // member: path_id_fcw_stat
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "path_id_fcw_stat: ";
    rosidl_generator_traits::value_to_yaml(msg.path_id_fcw_stat, out);
    out << "\n";
  }

  // member: auto_align_angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "auto_align_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.auto_align_angle, out);
    out << "\n";
  }

  // member: path_id_acc_stat
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "path_id_acc_stat: ";
    rosidl_generator_traits::value_to_yaml(msg.path_id_acc_stat, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const EsrStatus4 & msg, bool use_flow_style = false)
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
  const delphi_esr_msgs::msg::EsrStatus4 & msg,
  std::ostream & out, size_t indentation = 0)
{
  delphi_esr_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use delphi_esr_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const delphi_esr_msgs::msg::EsrStatus4 & msg)
{
  return delphi_esr_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<delphi_esr_msgs::msg::EsrStatus4>()
{
  return "delphi_esr_msgs::msg::EsrStatus4";
}

template<>
inline const char * name<delphi_esr_msgs::msg::EsrStatus4>()
{
  return "delphi_esr_msgs/msg/EsrStatus4";
}

template<>
struct has_fixed_size<delphi_esr_msgs::msg::EsrStatus4>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<delphi_esr_msgs::msg::EsrStatus4>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<delphi_esr_msgs::msg::EsrStatus4>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DELPHI_ESR_MSGS__MSG__DETAIL__ESR_STATUS4__TRAITS_HPP_

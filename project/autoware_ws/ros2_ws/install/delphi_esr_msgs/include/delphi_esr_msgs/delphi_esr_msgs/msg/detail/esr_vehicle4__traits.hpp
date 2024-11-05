// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from delphi_esr_msgs:msg/EsrVehicle4.idl
// generated code does not contain a copyright notice

#ifndef DELPHI_ESR_MSGS__MSG__DETAIL__ESR_VEHICLE4__TRAITS_HPP_
#define DELPHI_ESR_MSGS__MSG__DETAIL__ESR_VEHICLE4__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "delphi_esr_msgs/msg/detail/esr_vehicle4__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace delphi_esr_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const EsrVehicle4 & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: fac_align_cmd_1
  {
    out << "fac_align_cmd_1: ";
    rosidl_generator_traits::value_to_yaml(msg.fac_align_cmd_1, out);
    out << ", ";
  }

  // member: fac_align_cmd_2
  {
    out << "fac_align_cmd_2: ";
    rosidl_generator_traits::value_to_yaml(msg.fac_align_cmd_2, out);
    out << ", ";
  }

  // member: fac_align_max_nt
  {
    out << "fac_align_max_nt: ";
    rosidl_generator_traits::value_to_yaml(msg.fac_align_max_nt, out);
    out << ", ";
  }

  // member: fac_align_samp_req
  {
    out << "fac_align_samp_req: ";
    rosidl_generator_traits::value_to_yaml(msg.fac_align_samp_req, out);
    out << ", ";
  }

  // member: fac_tgt_mtg_offset
  {
    out << "fac_tgt_mtg_offset: ";
    rosidl_generator_traits::value_to_yaml(msg.fac_tgt_mtg_offset, out);
    out << ", ";
  }

  // member: fac_tgt_mtg_space_hor
  {
    out << "fac_tgt_mtg_space_hor: ";
    rosidl_generator_traits::value_to_yaml(msg.fac_tgt_mtg_space_hor, out);
    out << ", ";
  }

  // member: fac_tgt_mtg_space_ver
  {
    out << "fac_tgt_mtg_space_ver: ";
    rosidl_generator_traits::value_to_yaml(msg.fac_tgt_mtg_space_ver, out);
    out << ", ";
  }

  // member: fac_tgt_range_1
  {
    out << "fac_tgt_range_1: ";
    rosidl_generator_traits::value_to_yaml(msg.fac_tgt_range_1, out);
    out << ", ";
  }

  // member: fac_tgt_range_r2m
  {
    out << "fac_tgt_range_r2m: ";
    rosidl_generator_traits::value_to_yaml(msg.fac_tgt_range_r2m, out);
    out << ", ";
  }

  // member: fac_tgt_range_m2t
  {
    out << "fac_tgt_range_m2t: ";
    rosidl_generator_traits::value_to_yaml(msg.fac_tgt_range_m2t, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const EsrVehicle4 & msg,
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

  // member: fac_align_cmd_1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fac_align_cmd_1: ";
    rosidl_generator_traits::value_to_yaml(msg.fac_align_cmd_1, out);
    out << "\n";
  }

  // member: fac_align_cmd_2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fac_align_cmd_2: ";
    rosidl_generator_traits::value_to_yaml(msg.fac_align_cmd_2, out);
    out << "\n";
  }

  // member: fac_align_max_nt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fac_align_max_nt: ";
    rosidl_generator_traits::value_to_yaml(msg.fac_align_max_nt, out);
    out << "\n";
  }

  // member: fac_align_samp_req
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fac_align_samp_req: ";
    rosidl_generator_traits::value_to_yaml(msg.fac_align_samp_req, out);
    out << "\n";
  }

  // member: fac_tgt_mtg_offset
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fac_tgt_mtg_offset: ";
    rosidl_generator_traits::value_to_yaml(msg.fac_tgt_mtg_offset, out);
    out << "\n";
  }

  // member: fac_tgt_mtg_space_hor
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fac_tgt_mtg_space_hor: ";
    rosidl_generator_traits::value_to_yaml(msg.fac_tgt_mtg_space_hor, out);
    out << "\n";
  }

  // member: fac_tgt_mtg_space_ver
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fac_tgt_mtg_space_ver: ";
    rosidl_generator_traits::value_to_yaml(msg.fac_tgt_mtg_space_ver, out);
    out << "\n";
  }

  // member: fac_tgt_range_1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fac_tgt_range_1: ";
    rosidl_generator_traits::value_to_yaml(msg.fac_tgt_range_1, out);
    out << "\n";
  }

  // member: fac_tgt_range_r2m
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fac_tgt_range_r2m: ";
    rosidl_generator_traits::value_to_yaml(msg.fac_tgt_range_r2m, out);
    out << "\n";
  }

  // member: fac_tgt_range_m2t
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fac_tgt_range_m2t: ";
    rosidl_generator_traits::value_to_yaml(msg.fac_tgt_range_m2t, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const EsrVehicle4 & msg, bool use_flow_style = false)
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
  const delphi_esr_msgs::msg::EsrVehicle4 & msg,
  std::ostream & out, size_t indentation = 0)
{
  delphi_esr_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use delphi_esr_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const delphi_esr_msgs::msg::EsrVehicle4 & msg)
{
  return delphi_esr_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<delphi_esr_msgs::msg::EsrVehicle4>()
{
  return "delphi_esr_msgs::msg::EsrVehicle4";
}

template<>
inline const char * name<delphi_esr_msgs::msg::EsrVehicle4>()
{
  return "delphi_esr_msgs/msg/EsrVehicle4";
}

template<>
struct has_fixed_size<delphi_esr_msgs::msg::EsrVehicle4>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<delphi_esr_msgs::msg::EsrVehicle4>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<delphi_esr_msgs::msg::EsrVehicle4>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DELPHI_ESR_MSGS__MSG__DETAIL__ESR_VEHICLE4__TRAITS_HPP_

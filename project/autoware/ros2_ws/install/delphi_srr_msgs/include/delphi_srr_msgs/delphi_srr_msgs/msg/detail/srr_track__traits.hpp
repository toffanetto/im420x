// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from delphi_srr_msgs:msg/SrrTrack.idl
// generated code does not contain a copyright notice

#ifndef DELPHI_SRR_MSGS__MSG__DETAIL__SRR_TRACK__TRAITS_HPP_
#define DELPHI_SRR_MSGS__MSG__DETAIL__SRR_TRACK__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "delphi_srr_msgs/msg/detail/srr_track__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace delphi_srr_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const SrrTrack & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: can_tx_detect_valid_level
  {
    out << "can_tx_detect_valid_level: ";
    rosidl_generator_traits::value_to_yaml(msg.can_tx_detect_valid_level, out);
    out << ", ";
  }

  // member: can_tx_detect_status
  {
    out << "can_tx_detect_status: ";
    rosidl_generator_traits::value_to_yaml(msg.can_tx_detect_status, out);
    out << ", ";
  }

  // member: can_tx_detect_range_rate
  {
    out << "can_tx_detect_range_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.can_tx_detect_range_rate, out);
    out << ", ";
  }

  // member: can_tx_detect_range
  {
    out << "can_tx_detect_range: ";
    rosidl_generator_traits::value_to_yaml(msg.can_tx_detect_range, out);
    out << ", ";
  }

  // member: can_tx_detect_angle
  {
    out << "can_tx_detect_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.can_tx_detect_angle, out);
    out << ", ";
  }

  // member: can_tx_detect_amplitude
  {
    out << "can_tx_detect_amplitude: ";
    rosidl_generator_traits::value_to_yaml(msg.can_tx_detect_amplitude, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SrrTrack & msg,
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

  // member: can_tx_detect_valid_level
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "can_tx_detect_valid_level: ";
    rosidl_generator_traits::value_to_yaml(msg.can_tx_detect_valid_level, out);
    out << "\n";
  }

  // member: can_tx_detect_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "can_tx_detect_status: ";
    rosidl_generator_traits::value_to_yaml(msg.can_tx_detect_status, out);
    out << "\n";
  }

  // member: can_tx_detect_range_rate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "can_tx_detect_range_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.can_tx_detect_range_rate, out);
    out << "\n";
  }

  // member: can_tx_detect_range
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "can_tx_detect_range: ";
    rosidl_generator_traits::value_to_yaml(msg.can_tx_detect_range, out);
    out << "\n";
  }

  // member: can_tx_detect_angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "can_tx_detect_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.can_tx_detect_angle, out);
    out << "\n";
  }

  // member: can_tx_detect_amplitude
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "can_tx_detect_amplitude: ";
    rosidl_generator_traits::value_to_yaml(msg.can_tx_detect_amplitude, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SrrTrack & msg, bool use_flow_style = false)
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
  const delphi_srr_msgs::msg::SrrTrack & msg,
  std::ostream & out, size_t indentation = 0)
{
  delphi_srr_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use delphi_srr_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const delphi_srr_msgs::msg::SrrTrack & msg)
{
  return delphi_srr_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<delphi_srr_msgs::msg::SrrTrack>()
{
  return "delphi_srr_msgs::msg::SrrTrack";
}

template<>
inline const char * name<delphi_srr_msgs::msg::SrrTrack>()
{
  return "delphi_srr_msgs/msg/SrrTrack";
}

template<>
struct has_fixed_size<delphi_srr_msgs::msg::SrrTrack>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<delphi_srr_msgs::msg::SrrTrack>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<delphi_srr_msgs::msg::SrrTrack>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DELPHI_SRR_MSGS__MSG__DETAIL__SRR_TRACK__TRAITS_HPP_

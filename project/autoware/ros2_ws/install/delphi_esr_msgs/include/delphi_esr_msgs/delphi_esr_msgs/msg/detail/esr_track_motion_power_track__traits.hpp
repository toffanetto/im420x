// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from delphi_esr_msgs:msg/EsrTrackMotionPowerTrack.idl
// generated code does not contain a copyright notice

#ifndef DELPHI_ESR_MSGS__MSG__DETAIL__ESR_TRACK_MOTION_POWER_TRACK__TRAITS_HPP_
#define DELPHI_ESR_MSGS__MSG__DETAIL__ESR_TRACK_MOTION_POWER_TRACK__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "delphi_esr_msgs/msg/detail/esr_track_motion_power_track__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace delphi_esr_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const EsrTrackMotionPowerTrack & msg,
  std::ostream & out)
{
  out << "{";
  // member: id
  {
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << ", ";
  }

  // member: movable_fast
  {
    out << "movable_fast: ";
    rosidl_generator_traits::value_to_yaml(msg.movable_fast, out);
    out << ", ";
  }

  // member: movable_slow
  {
    out << "movable_slow: ";
    rosidl_generator_traits::value_to_yaml(msg.movable_slow, out);
    out << ", ";
  }

  // member: moving
  {
    out << "moving: ";
    rosidl_generator_traits::value_to_yaml(msg.moving, out);
    out << ", ";
  }

  // member: power
  {
    out << "power: ";
    rosidl_generator_traits::value_to_yaml(msg.power, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const EsrTrackMotionPowerTrack & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << "\n";
  }

  // member: movable_fast
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "movable_fast: ";
    rosidl_generator_traits::value_to_yaml(msg.movable_fast, out);
    out << "\n";
  }

  // member: movable_slow
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "movable_slow: ";
    rosidl_generator_traits::value_to_yaml(msg.movable_slow, out);
    out << "\n";
  }

  // member: moving
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "moving: ";
    rosidl_generator_traits::value_to_yaml(msg.moving, out);
    out << "\n";
  }

  // member: power
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "power: ";
    rosidl_generator_traits::value_to_yaml(msg.power, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const EsrTrackMotionPowerTrack & msg, bool use_flow_style = false)
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
  const delphi_esr_msgs::msg::EsrTrackMotionPowerTrack & msg,
  std::ostream & out, size_t indentation = 0)
{
  delphi_esr_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use delphi_esr_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const delphi_esr_msgs::msg::EsrTrackMotionPowerTrack & msg)
{
  return delphi_esr_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<delphi_esr_msgs::msg::EsrTrackMotionPowerTrack>()
{
  return "delphi_esr_msgs::msg::EsrTrackMotionPowerTrack";
}

template<>
inline const char * name<delphi_esr_msgs::msg::EsrTrackMotionPowerTrack>()
{
  return "delphi_esr_msgs/msg/EsrTrackMotionPowerTrack";
}

template<>
struct has_fixed_size<delphi_esr_msgs::msg::EsrTrackMotionPowerTrack>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<delphi_esr_msgs::msg::EsrTrackMotionPowerTrack>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<delphi_esr_msgs::msg::EsrTrackMotionPowerTrack>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DELPHI_ESR_MSGS__MSG__DETAIL__ESR_TRACK_MOTION_POWER_TRACK__TRAITS_HPP_

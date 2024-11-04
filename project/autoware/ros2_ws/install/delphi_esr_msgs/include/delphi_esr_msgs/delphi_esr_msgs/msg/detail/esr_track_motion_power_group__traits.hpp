// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from delphi_esr_msgs:msg/EsrTrackMotionPowerGroup.idl
// generated code does not contain a copyright notice

#ifndef DELPHI_ESR_MSGS__MSG__DETAIL__ESR_TRACK_MOTION_POWER_GROUP__TRAITS_HPP_
#define DELPHI_ESR_MSGS__MSG__DETAIL__ESR_TRACK_MOTION_POWER_GROUP__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "delphi_esr_msgs/msg/detail/esr_track_motion_power_group__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'tracks'
#include "delphi_esr_msgs/msg/detail/esr_track_motion_power_track__traits.hpp"

namespace delphi_esr_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const EsrTrackMotionPowerGroup & msg,
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

  // member: rolling_count_2
  {
    out << "rolling_count_2: ";
    rosidl_generator_traits::value_to_yaml(msg.rolling_count_2, out);
    out << ", ";
  }

  // member: can_id_group
  {
    out << "can_id_group: ";
    rosidl_generator_traits::value_to_yaml(msg.can_id_group, out);
    out << ", ";
  }

  // member: tracks
  {
    if (msg.tracks.size() == 0) {
      out << "tracks: []";
    } else {
      out << "tracks: [";
      size_t pending_items = msg.tracks.size();
      for (auto item : msg.tracks) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const EsrTrackMotionPowerGroup & msg,
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

  // member: rolling_count_2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rolling_count_2: ";
    rosidl_generator_traits::value_to_yaml(msg.rolling_count_2, out);
    out << "\n";
  }

  // member: can_id_group
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "can_id_group: ";
    rosidl_generator_traits::value_to_yaml(msg.can_id_group, out);
    out << "\n";
  }

  // member: tracks
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.tracks.size() == 0) {
      out << "tracks: []\n";
    } else {
      out << "tracks:\n";
      for (auto item : msg.tracks) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const EsrTrackMotionPowerGroup & msg, bool use_flow_style = false)
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
  const delphi_esr_msgs::msg::EsrTrackMotionPowerGroup & msg,
  std::ostream & out, size_t indentation = 0)
{
  delphi_esr_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use delphi_esr_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const delphi_esr_msgs::msg::EsrTrackMotionPowerGroup & msg)
{
  return delphi_esr_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<delphi_esr_msgs::msg::EsrTrackMotionPowerGroup>()
{
  return "delphi_esr_msgs::msg::EsrTrackMotionPowerGroup";
}

template<>
inline const char * name<delphi_esr_msgs::msg::EsrTrackMotionPowerGroup>()
{
  return "delphi_esr_msgs/msg/EsrTrackMotionPowerGroup";
}

template<>
struct has_fixed_size<delphi_esr_msgs::msg::EsrTrackMotionPowerGroup>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<delphi_esr_msgs::msg::EsrTrackMotionPowerGroup>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<delphi_esr_msgs::msg::EsrTrackMotionPowerGroup>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DELPHI_ESR_MSGS__MSG__DETAIL__ESR_TRACK_MOTION_POWER_GROUP__TRAITS_HPP_

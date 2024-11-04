// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mobileye_560_660_msgs:msg/ObstacleData.idl
// generated code does not contain a copyright notice

#ifndef MOBILEYE_560_660_MSGS__MSG__DETAIL__OBSTACLE_DATA__TRAITS_HPP_
#define MOBILEYE_560_660_MSGS__MSG__DETAIL__OBSTACLE_DATA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mobileye_560_660_msgs/msg/detail/obstacle_data__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace mobileye_560_660_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ObstacleData & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: obstacle_id
  {
    out << "obstacle_id: ";
    rosidl_generator_traits::value_to_yaml(msg.obstacle_id, out);
    out << ", ";
  }

  // member: obstacle_pos_x
  {
    out << "obstacle_pos_x: ";
    rosidl_generator_traits::value_to_yaml(msg.obstacle_pos_x, out);
    out << ", ";
  }

  // member: obstacle_pos_y
  {
    out << "obstacle_pos_y: ";
    rosidl_generator_traits::value_to_yaml(msg.obstacle_pos_y, out);
    out << ", ";
  }

  // member: blinker_info
  {
    out << "blinker_info: ";
    rosidl_generator_traits::value_to_yaml(msg.blinker_info, out);
    out << ", ";
  }

  // member: cut_in_and_out
  {
    out << "cut_in_and_out: ";
    rosidl_generator_traits::value_to_yaml(msg.cut_in_and_out, out);
    out << ", ";
  }

  // member: obstacle_rel_vel_x
  {
    out << "obstacle_rel_vel_x: ";
    rosidl_generator_traits::value_to_yaml(msg.obstacle_rel_vel_x, out);
    out << ", ";
  }

  // member: obstacle_type
  {
    out << "obstacle_type: ";
    rosidl_generator_traits::value_to_yaml(msg.obstacle_type, out);
    out << ", ";
  }

  // member: obstacle_status
  {
    out << "obstacle_status: ";
    rosidl_generator_traits::value_to_yaml(msg.obstacle_status, out);
    out << ", ";
  }

  // member: obstacle_brake_lights
  {
    out << "obstacle_brake_lights: ";
    rosidl_generator_traits::value_to_yaml(msg.obstacle_brake_lights, out);
    out << ", ";
  }

  // member: obstacle_valid
  {
    out << "obstacle_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.obstacle_valid, out);
    out << ", ";
  }

  // member: obstacle_length
  {
    out << "obstacle_length: ";
    rosidl_generator_traits::value_to_yaml(msg.obstacle_length, out);
    out << ", ";
  }

  // member: obstacle_width
  {
    out << "obstacle_width: ";
    rosidl_generator_traits::value_to_yaml(msg.obstacle_width, out);
    out << ", ";
  }

  // member: obstacle_age
  {
    out << "obstacle_age: ";
    rosidl_generator_traits::value_to_yaml(msg.obstacle_age, out);
    out << ", ";
  }

  // member: obstacle_lane
  {
    out << "obstacle_lane: ";
    rosidl_generator_traits::value_to_yaml(msg.obstacle_lane, out);
    out << ", ";
  }

  // member: cipv_flag
  {
    out << "cipv_flag: ";
    rosidl_generator_traits::value_to_yaml(msg.cipv_flag, out);
    out << ", ";
  }

  // member: radar_pos_x
  {
    out << "radar_pos_x: ";
    rosidl_generator_traits::value_to_yaml(msg.radar_pos_x, out);
    out << ", ";
  }

  // member: radar_vel_x
  {
    out << "radar_vel_x: ";
    rosidl_generator_traits::value_to_yaml(msg.radar_vel_x, out);
    out << ", ";
  }

  // member: radar_match_confidence
  {
    out << "radar_match_confidence: ";
    rosidl_generator_traits::value_to_yaml(msg.radar_match_confidence, out);
    out << ", ";
  }

  // member: matched_radar_id
  {
    out << "matched_radar_id: ";
    rosidl_generator_traits::value_to_yaml(msg.matched_radar_id, out);
    out << ", ";
  }

  // member: obstacle_angle_rate
  {
    out << "obstacle_angle_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.obstacle_angle_rate, out);
    out << ", ";
  }

  // member: obstacle_scale_change
  {
    out << "obstacle_scale_change: ";
    rosidl_generator_traits::value_to_yaml(msg.obstacle_scale_change, out);
    out << ", ";
  }

  // member: object_accel_x
  {
    out << "object_accel_x: ";
    rosidl_generator_traits::value_to_yaml(msg.object_accel_x, out);
    out << ", ";
  }

  // member: obstacle_replaced
  {
    out << "obstacle_replaced: ";
    rosidl_generator_traits::value_to_yaml(msg.obstacle_replaced, out);
    out << ", ";
  }

  // member: obstacle_angle
  {
    out << "obstacle_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.obstacle_angle, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ObstacleData & msg,
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

  // member: obstacle_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "obstacle_id: ";
    rosidl_generator_traits::value_to_yaml(msg.obstacle_id, out);
    out << "\n";
  }

  // member: obstacle_pos_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "obstacle_pos_x: ";
    rosidl_generator_traits::value_to_yaml(msg.obstacle_pos_x, out);
    out << "\n";
  }

  // member: obstacle_pos_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "obstacle_pos_y: ";
    rosidl_generator_traits::value_to_yaml(msg.obstacle_pos_y, out);
    out << "\n";
  }

  // member: blinker_info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "blinker_info: ";
    rosidl_generator_traits::value_to_yaml(msg.blinker_info, out);
    out << "\n";
  }

  // member: cut_in_and_out
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cut_in_and_out: ";
    rosidl_generator_traits::value_to_yaml(msg.cut_in_and_out, out);
    out << "\n";
  }

  // member: obstacle_rel_vel_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "obstacle_rel_vel_x: ";
    rosidl_generator_traits::value_to_yaml(msg.obstacle_rel_vel_x, out);
    out << "\n";
  }

  // member: obstacle_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "obstacle_type: ";
    rosidl_generator_traits::value_to_yaml(msg.obstacle_type, out);
    out << "\n";
  }

  // member: obstacle_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "obstacle_status: ";
    rosidl_generator_traits::value_to_yaml(msg.obstacle_status, out);
    out << "\n";
  }

  // member: obstacle_brake_lights
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "obstacle_brake_lights: ";
    rosidl_generator_traits::value_to_yaml(msg.obstacle_brake_lights, out);
    out << "\n";
  }

  // member: obstacle_valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "obstacle_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.obstacle_valid, out);
    out << "\n";
  }

  // member: obstacle_length
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "obstacle_length: ";
    rosidl_generator_traits::value_to_yaml(msg.obstacle_length, out);
    out << "\n";
  }

  // member: obstacle_width
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "obstacle_width: ";
    rosidl_generator_traits::value_to_yaml(msg.obstacle_width, out);
    out << "\n";
  }

  // member: obstacle_age
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "obstacle_age: ";
    rosidl_generator_traits::value_to_yaml(msg.obstacle_age, out);
    out << "\n";
  }

  // member: obstacle_lane
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "obstacle_lane: ";
    rosidl_generator_traits::value_to_yaml(msg.obstacle_lane, out);
    out << "\n";
  }

  // member: cipv_flag
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cipv_flag: ";
    rosidl_generator_traits::value_to_yaml(msg.cipv_flag, out);
    out << "\n";
  }

  // member: radar_pos_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "radar_pos_x: ";
    rosidl_generator_traits::value_to_yaml(msg.radar_pos_x, out);
    out << "\n";
  }

  // member: radar_vel_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "radar_vel_x: ";
    rosidl_generator_traits::value_to_yaml(msg.radar_vel_x, out);
    out << "\n";
  }

  // member: radar_match_confidence
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "radar_match_confidence: ";
    rosidl_generator_traits::value_to_yaml(msg.radar_match_confidence, out);
    out << "\n";
  }

  // member: matched_radar_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "matched_radar_id: ";
    rosidl_generator_traits::value_to_yaml(msg.matched_radar_id, out);
    out << "\n";
  }

  // member: obstacle_angle_rate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "obstacle_angle_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.obstacle_angle_rate, out);
    out << "\n";
  }

  // member: obstacle_scale_change
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "obstacle_scale_change: ";
    rosidl_generator_traits::value_to_yaml(msg.obstacle_scale_change, out);
    out << "\n";
  }

  // member: object_accel_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "object_accel_x: ";
    rosidl_generator_traits::value_to_yaml(msg.object_accel_x, out);
    out << "\n";
  }

  // member: obstacle_replaced
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "obstacle_replaced: ";
    rosidl_generator_traits::value_to_yaml(msg.obstacle_replaced, out);
    out << "\n";
  }

  // member: obstacle_angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "obstacle_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.obstacle_angle, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ObstacleData & msg, bool use_flow_style = false)
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

}  // namespace mobileye_560_660_msgs

namespace rosidl_generator_traits
{

[[deprecated("use mobileye_560_660_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const mobileye_560_660_msgs::msg::ObstacleData & msg,
  std::ostream & out, size_t indentation = 0)
{
  mobileye_560_660_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mobileye_560_660_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const mobileye_560_660_msgs::msg::ObstacleData & msg)
{
  return mobileye_560_660_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<mobileye_560_660_msgs::msg::ObstacleData>()
{
  return "mobileye_560_660_msgs::msg::ObstacleData";
}

template<>
inline const char * name<mobileye_560_660_msgs::msg::ObstacleData>()
{
  return "mobileye_560_660_msgs/msg/ObstacleData";
}

template<>
struct has_fixed_size<mobileye_560_660_msgs::msg::ObstacleData>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<mobileye_560_660_msgs::msg::ObstacleData>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<mobileye_560_660_msgs::msg::ObstacleData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MOBILEYE_560_660_MSGS__MSG__DETAIL__OBSTACLE_DATA__TRAITS_HPP_

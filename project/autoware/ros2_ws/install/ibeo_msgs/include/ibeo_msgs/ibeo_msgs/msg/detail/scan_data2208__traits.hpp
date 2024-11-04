// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ibeo_msgs:msg/ScanData2208.idl
// generated code does not contain a copyright notice

#ifndef IBEO_MSGS__MSG__DETAIL__SCAN_DATA2208__TRAITS_HPP_
#define IBEO_MSGS__MSG__DETAIL__SCAN_DATA2208__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ibeo_msgs/msg/detail/scan_data2208__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'ibeo_header'
#include "ibeo_msgs/msg/detail/ibeo_data_header__traits.hpp"
// Member 'scan_start_time'
// Member 'scan_end_time'
#include "builtin_interfaces/msg/detail/time__traits.hpp"
// Member 'scan_point_list'
#include "ibeo_msgs/msg/detail/scan_point2208__traits.hpp"

namespace ibeo_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ScanData2208 & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: ibeo_header
  {
    out << "ibeo_header: ";
    to_flow_style_yaml(msg.ibeo_header, out);
    out << ", ";
  }

  // member: scan_number
  {
    out << "scan_number: ";
    rosidl_generator_traits::value_to_yaml(msg.scan_number, out);
    out << ", ";
  }

  // member: scanner_type
  {
    out << "scanner_type: ";
    rosidl_generator_traits::value_to_yaml(msg.scanner_type, out);
    out << ", ";
  }

  // member: motor_on
  {
    out << "motor_on: ";
    rosidl_generator_traits::value_to_yaml(msg.motor_on, out);
    out << ", ";
  }

  // member: laser_on
  {
    out << "laser_on: ";
    rosidl_generator_traits::value_to_yaml(msg.laser_on, out);
    out << ", ";
  }

  // member: frequency_locked
  {
    out << "frequency_locked: ";
    rosidl_generator_traits::value_to_yaml(msg.frequency_locked, out);
    out << ", ";
  }

  // member: motor_rotating_direction
  {
    out << "motor_rotating_direction: ";
    rosidl_generator_traits::value_to_yaml(msg.motor_rotating_direction, out);
    out << ", ";
  }

  // member: angle_ticks_per_rotation
  {
    out << "angle_ticks_per_rotation: ";
    rosidl_generator_traits::value_to_yaml(msg.angle_ticks_per_rotation, out);
    out << ", ";
  }

  // member: scan_flags
  {
    out << "scan_flags: ";
    rosidl_generator_traits::value_to_yaml(msg.scan_flags, out);
    out << ", ";
  }

  // member: mounting_yaw_angle_ticks
  {
    out << "mounting_yaw_angle_ticks: ";
    rosidl_generator_traits::value_to_yaml(msg.mounting_yaw_angle_ticks, out);
    out << ", ";
  }

  // member: mounting_pitch_angle_ticks
  {
    out << "mounting_pitch_angle_ticks: ";
    rosidl_generator_traits::value_to_yaml(msg.mounting_pitch_angle_ticks, out);
    out << ", ";
  }

  // member: mounting_roll_angle_ticks
  {
    out << "mounting_roll_angle_ticks: ";
    rosidl_generator_traits::value_to_yaml(msg.mounting_roll_angle_ticks, out);
    out << ", ";
  }

  // member: mounting_position_x
  {
    out << "mounting_position_x: ";
    rosidl_generator_traits::value_to_yaml(msg.mounting_position_x, out);
    out << ", ";
  }

  // member: mounting_position_y
  {
    out << "mounting_position_y: ";
    rosidl_generator_traits::value_to_yaml(msg.mounting_position_y, out);
    out << ", ";
  }

  // member: mounting_position_z
  {
    out << "mounting_position_z: ";
    rosidl_generator_traits::value_to_yaml(msg.mounting_position_z, out);
    out << ", ";
  }

  // member: device_id
  {
    out << "device_id: ";
    rosidl_generator_traits::value_to_yaml(msg.device_id, out);
    out << ", ";
  }

  // member: scan_start_time
  {
    out << "scan_start_time: ";
    to_flow_style_yaml(msg.scan_start_time, out);
    out << ", ";
  }

  // member: scan_end_time
  {
    out << "scan_end_time: ";
    to_flow_style_yaml(msg.scan_end_time, out);
    out << ", ";
  }

  // member: start_angle_ticks
  {
    out << "start_angle_ticks: ";
    rosidl_generator_traits::value_to_yaml(msg.start_angle_ticks, out);
    out << ", ";
  }

  // member: end_angle_ticks
  {
    out << "end_angle_ticks: ";
    rosidl_generator_traits::value_to_yaml(msg.end_angle_ticks, out);
    out << ", ";
  }

  // member: mirror_side
  {
    out << "mirror_side: ";
    rosidl_generator_traits::value_to_yaml(msg.mirror_side, out);
    out << ", ";
  }

  // member: mirror_tilt
  {
    out << "mirror_tilt: ";
    rosidl_generator_traits::value_to_yaml(msg.mirror_tilt, out);
    out << ", ";
  }

  // member: scan_point_list
  {
    if (msg.scan_point_list.size() == 0) {
      out << "scan_point_list: []";
    } else {
      out << "scan_point_list: [";
      size_t pending_items = msg.scan_point_list.size();
      for (auto item : msg.scan_point_list) {
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
  const ScanData2208 & msg,
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

  // member: ibeo_header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ibeo_header:\n";
    to_block_style_yaml(msg.ibeo_header, out, indentation + 2);
  }

  // member: scan_number
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "scan_number: ";
    rosidl_generator_traits::value_to_yaml(msg.scan_number, out);
    out << "\n";
  }

  // member: scanner_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "scanner_type: ";
    rosidl_generator_traits::value_to_yaml(msg.scanner_type, out);
    out << "\n";
  }

  // member: motor_on
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "motor_on: ";
    rosidl_generator_traits::value_to_yaml(msg.motor_on, out);
    out << "\n";
  }

  // member: laser_on
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "laser_on: ";
    rosidl_generator_traits::value_to_yaml(msg.laser_on, out);
    out << "\n";
  }

  // member: frequency_locked
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "frequency_locked: ";
    rosidl_generator_traits::value_to_yaml(msg.frequency_locked, out);
    out << "\n";
  }

  // member: motor_rotating_direction
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "motor_rotating_direction: ";
    rosidl_generator_traits::value_to_yaml(msg.motor_rotating_direction, out);
    out << "\n";
  }

  // member: angle_ticks_per_rotation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "angle_ticks_per_rotation: ";
    rosidl_generator_traits::value_to_yaml(msg.angle_ticks_per_rotation, out);
    out << "\n";
  }

  // member: scan_flags
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "scan_flags: ";
    rosidl_generator_traits::value_to_yaml(msg.scan_flags, out);
    out << "\n";
  }

  // member: mounting_yaw_angle_ticks
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mounting_yaw_angle_ticks: ";
    rosidl_generator_traits::value_to_yaml(msg.mounting_yaw_angle_ticks, out);
    out << "\n";
  }

  // member: mounting_pitch_angle_ticks
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mounting_pitch_angle_ticks: ";
    rosidl_generator_traits::value_to_yaml(msg.mounting_pitch_angle_ticks, out);
    out << "\n";
  }

  // member: mounting_roll_angle_ticks
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mounting_roll_angle_ticks: ";
    rosidl_generator_traits::value_to_yaml(msg.mounting_roll_angle_ticks, out);
    out << "\n";
  }

  // member: mounting_position_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mounting_position_x: ";
    rosidl_generator_traits::value_to_yaml(msg.mounting_position_x, out);
    out << "\n";
  }

  // member: mounting_position_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mounting_position_y: ";
    rosidl_generator_traits::value_to_yaml(msg.mounting_position_y, out);
    out << "\n";
  }

  // member: mounting_position_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mounting_position_z: ";
    rosidl_generator_traits::value_to_yaml(msg.mounting_position_z, out);
    out << "\n";
  }

  // member: device_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "device_id: ";
    rosidl_generator_traits::value_to_yaml(msg.device_id, out);
    out << "\n";
  }

  // member: scan_start_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "scan_start_time:\n";
    to_block_style_yaml(msg.scan_start_time, out, indentation + 2);
  }

  // member: scan_end_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "scan_end_time:\n";
    to_block_style_yaml(msg.scan_end_time, out, indentation + 2);
  }

  // member: start_angle_ticks
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "start_angle_ticks: ";
    rosidl_generator_traits::value_to_yaml(msg.start_angle_ticks, out);
    out << "\n";
  }

  // member: end_angle_ticks
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "end_angle_ticks: ";
    rosidl_generator_traits::value_to_yaml(msg.end_angle_ticks, out);
    out << "\n";
  }

  // member: mirror_side
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mirror_side: ";
    rosidl_generator_traits::value_to_yaml(msg.mirror_side, out);
    out << "\n";
  }

  // member: mirror_tilt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mirror_tilt: ";
    rosidl_generator_traits::value_to_yaml(msg.mirror_tilt, out);
    out << "\n";
  }

  // member: scan_point_list
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.scan_point_list.size() == 0) {
      out << "scan_point_list: []\n";
    } else {
      out << "scan_point_list:\n";
      for (auto item : msg.scan_point_list) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ScanData2208 & msg, bool use_flow_style = false)
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

}  // namespace ibeo_msgs

namespace rosidl_generator_traits
{

[[deprecated("use ibeo_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ibeo_msgs::msg::ScanData2208 & msg,
  std::ostream & out, size_t indentation = 0)
{
  ibeo_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ibeo_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const ibeo_msgs::msg::ScanData2208 & msg)
{
  return ibeo_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ibeo_msgs::msg::ScanData2208>()
{
  return "ibeo_msgs::msg::ScanData2208";
}

template<>
inline const char * name<ibeo_msgs::msg::ScanData2208>()
{
  return "ibeo_msgs/msg/ScanData2208";
}

template<>
struct has_fixed_size<ibeo_msgs::msg::ScanData2208>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ibeo_msgs::msg::ScanData2208>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ibeo_msgs::msg::ScanData2208>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // IBEO_MSGS__MSG__DETAIL__SCAN_DATA2208__TRAITS_HPP_

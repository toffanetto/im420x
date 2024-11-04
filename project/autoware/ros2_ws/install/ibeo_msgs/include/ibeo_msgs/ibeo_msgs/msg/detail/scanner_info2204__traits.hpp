// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ibeo_msgs:msg/ScannerInfo2204.idl
// generated code does not contain a copyright notice

#ifndef IBEO_MSGS__MSG__DETAIL__SCANNER_INFO2204__TRAITS_HPP_
#define IBEO_MSGS__MSG__DETAIL__SCANNER_INFO2204__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ibeo_msgs/msg/detail/scanner_info2204__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace ibeo_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ScannerInfo2204 & msg,
  std::ostream & out)
{
  out << "{";
  // member: device_id
  {
    out << "device_id: ";
    rosidl_generator_traits::value_to_yaml(msg.device_id, out);
    out << ", ";
  }

  // member: scanner_type
  {
    out << "scanner_type: ";
    rosidl_generator_traits::value_to_yaml(msg.scanner_type, out);
    out << ", ";
  }

  // member: scan_number
  {
    out << "scan_number: ";
    rosidl_generator_traits::value_to_yaml(msg.scan_number, out);
    out << ", ";
  }

  // member: start_angle
  {
    out << "start_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.start_angle, out);
    out << ", ";
  }

  // member: end_angle
  {
    out << "end_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.end_angle, out);
    out << ", ";
  }

  // member: yaw_angle
  {
    out << "yaw_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw_angle, out);
    out << ", ";
  }

  // member: pitch_angle
  {
    out << "pitch_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.pitch_angle, out);
    out << ", ";
  }

  // member: roll_angle
  {
    out << "roll_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.roll_angle, out);
    out << ", ";
  }

  // member: offset_x
  {
    out << "offset_x: ";
    rosidl_generator_traits::value_to_yaml(msg.offset_x, out);
    out << ", ";
  }

  // member: offset_y
  {
    out << "offset_y: ";
    rosidl_generator_traits::value_to_yaml(msg.offset_y, out);
    out << ", ";
  }

  // member: offset_z
  {
    out << "offset_z: ";
    rosidl_generator_traits::value_to_yaml(msg.offset_z, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ScannerInfo2204 & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: device_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "device_id: ";
    rosidl_generator_traits::value_to_yaml(msg.device_id, out);
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

  // member: scan_number
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "scan_number: ";
    rosidl_generator_traits::value_to_yaml(msg.scan_number, out);
    out << "\n";
  }

  // member: start_angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "start_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.start_angle, out);
    out << "\n";
  }

  // member: end_angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "end_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.end_angle, out);
    out << "\n";
  }

  // member: yaw_angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yaw_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw_angle, out);
    out << "\n";
  }

  // member: pitch_angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pitch_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.pitch_angle, out);
    out << "\n";
  }

  // member: roll_angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "roll_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.roll_angle, out);
    out << "\n";
  }

  // member: offset_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "offset_x: ";
    rosidl_generator_traits::value_to_yaml(msg.offset_x, out);
    out << "\n";
  }

  // member: offset_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "offset_y: ";
    rosidl_generator_traits::value_to_yaml(msg.offset_y, out);
    out << "\n";
  }

  // member: offset_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "offset_z: ";
    rosidl_generator_traits::value_to_yaml(msg.offset_z, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ScannerInfo2204 & msg, bool use_flow_style = false)
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
  const ibeo_msgs::msg::ScannerInfo2204 & msg,
  std::ostream & out, size_t indentation = 0)
{
  ibeo_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ibeo_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const ibeo_msgs::msg::ScannerInfo2204 & msg)
{
  return ibeo_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ibeo_msgs::msg::ScannerInfo2204>()
{
  return "ibeo_msgs::msg::ScannerInfo2204";
}

template<>
inline const char * name<ibeo_msgs::msg::ScannerInfo2204>()
{
  return "ibeo_msgs/msg/ScannerInfo2204";
}

template<>
struct has_fixed_size<ibeo_msgs::msg::ScannerInfo2204>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<ibeo_msgs::msg::ScannerInfo2204>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<ibeo_msgs::msg::ScannerInfo2204>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // IBEO_MSGS__MSG__DETAIL__SCANNER_INFO2204__TRAITS_HPP_

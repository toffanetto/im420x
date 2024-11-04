// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ibeo_msgs:msg/CameraImage.idl
// generated code does not contain a copyright notice

#ifndef IBEO_MSGS__MSG__DETAIL__CAMERA_IMAGE__TRAITS_HPP_
#define IBEO_MSGS__MSG__DETAIL__CAMERA_IMAGE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ibeo_msgs/msg/detail/camera_image__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'ibeo_header'
#include "ibeo_msgs/msg/detail/ibeo_data_header__traits.hpp"
// Member 'timestamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"
// Member 'mounting_position'
#include "ibeo_msgs/msg/detail/mounting_position_f__traits.hpp"

namespace ibeo_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const CameraImage & msg,
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

  // member: image_format
  {
    out << "image_format: ";
    rosidl_generator_traits::value_to_yaml(msg.image_format, out);
    out << ", ";
  }

  // member: us_since_power_on
  {
    out << "us_since_power_on: ";
    rosidl_generator_traits::value_to_yaml(msg.us_since_power_on, out);
    out << ", ";
  }

  // member: timestamp
  {
    out << "timestamp: ";
    to_flow_style_yaml(msg.timestamp, out);
    out << ", ";
  }

  // member: device_id
  {
    out << "device_id: ";
    rosidl_generator_traits::value_to_yaml(msg.device_id, out);
    out << ", ";
  }

  // member: mounting_position
  {
    out << "mounting_position: ";
    to_flow_style_yaml(msg.mounting_position, out);
    out << ", ";
  }

  // member: horizontal_opening_angle
  {
    out << "horizontal_opening_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.horizontal_opening_angle, out);
    out << ", ";
  }

  // member: vertical_opening_angle
  {
    out << "vertical_opening_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.vertical_opening_angle, out);
    out << ", ";
  }

  // member: image_width
  {
    out << "image_width: ";
    rosidl_generator_traits::value_to_yaml(msg.image_width, out);
    out << ", ";
  }

  // member: image_height
  {
    out << "image_height: ";
    rosidl_generator_traits::value_to_yaml(msg.image_height, out);
    out << ", ";
  }

  // member: compressed_size
  {
    out << "compressed_size: ";
    rosidl_generator_traits::value_to_yaml(msg.compressed_size, out);
    out << ", ";
  }

  // member: image_buffer
  {
    if (msg.image_buffer.size() == 0) {
      out << "image_buffer: []";
    } else {
      out << "image_buffer: [";
      size_t pending_items = msg.image_buffer.size();
      for (auto item : msg.image_buffer) {
        rosidl_generator_traits::value_to_yaml(item, out);
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
  const CameraImage & msg,
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

  // member: image_format
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "image_format: ";
    rosidl_generator_traits::value_to_yaml(msg.image_format, out);
    out << "\n";
  }

  // member: us_since_power_on
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "us_since_power_on: ";
    rosidl_generator_traits::value_to_yaml(msg.us_since_power_on, out);
    out << "\n";
  }

  // member: timestamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timestamp:\n";
    to_block_style_yaml(msg.timestamp, out, indentation + 2);
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

  // member: mounting_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mounting_position:\n";
    to_block_style_yaml(msg.mounting_position, out, indentation + 2);
  }

  // member: horizontal_opening_angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "horizontal_opening_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.horizontal_opening_angle, out);
    out << "\n";
  }

  // member: vertical_opening_angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vertical_opening_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.vertical_opening_angle, out);
    out << "\n";
  }

  // member: image_width
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "image_width: ";
    rosidl_generator_traits::value_to_yaml(msg.image_width, out);
    out << "\n";
  }

  // member: image_height
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "image_height: ";
    rosidl_generator_traits::value_to_yaml(msg.image_height, out);
    out << "\n";
  }

  // member: compressed_size
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "compressed_size: ";
    rosidl_generator_traits::value_to_yaml(msg.compressed_size, out);
    out << "\n";
  }

  // member: image_buffer
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.image_buffer.size() == 0) {
      out << "image_buffer: []\n";
    } else {
      out << "image_buffer:\n";
      for (auto item : msg.image_buffer) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CameraImage & msg, bool use_flow_style = false)
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
  const ibeo_msgs::msg::CameraImage & msg,
  std::ostream & out, size_t indentation = 0)
{
  ibeo_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ibeo_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const ibeo_msgs::msg::CameraImage & msg)
{
  return ibeo_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ibeo_msgs::msg::CameraImage>()
{
  return "ibeo_msgs::msg::CameraImage";
}

template<>
inline const char * name<ibeo_msgs::msg::CameraImage>()
{
  return "ibeo_msgs/msg/CameraImage";
}

template<>
struct has_fixed_size<ibeo_msgs::msg::CameraImage>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ibeo_msgs::msg::CameraImage>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ibeo_msgs::msg::CameraImage>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // IBEO_MSGS__MSG__DETAIL__CAMERA_IMAGE__TRAITS_HPP_

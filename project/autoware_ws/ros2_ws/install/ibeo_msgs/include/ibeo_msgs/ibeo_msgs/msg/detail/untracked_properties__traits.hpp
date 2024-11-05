// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ibeo_msgs:msg/UntrackedProperties.idl
// generated code does not contain a copyright notice

#ifndef IBEO_MSGS__MSG__DETAIL__UNTRACKED_PROPERTIES__TRAITS_HPP_
#define IBEO_MSGS__MSG__DETAIL__UNTRACKED_PROPERTIES__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ibeo_msgs/msg/detail/untracked_properties__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'position_closest_point'
// Member 'object_box_size'
// Member 'tracking_point_coordinate'
#include "ibeo_msgs/msg/detail/point2_di__traits.hpp"
// Member 'object_box_size_sigma'
// Member 'tracking_point_coordinate_sigma'
#include "ibeo_msgs/msg/detail/point2_dui__traits.hpp"
// Member 'contour_point_list'
#include "ibeo_msgs/msg/detail/contour_point_sigma__traits.hpp"

namespace ibeo_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const UntrackedProperties & msg,
  std::ostream & out)
{
  out << "{";
  // member: relative_time_of_measurement
  {
    out << "relative_time_of_measurement: ";
    rosidl_generator_traits::value_to_yaml(msg.relative_time_of_measurement, out);
    out << ", ";
  }

  // member: position_closest_point
  {
    out << "position_closest_point: ";
    to_flow_style_yaml(msg.position_closest_point, out);
    out << ", ";
  }

  // member: object_box_size
  {
    out << "object_box_size: ";
    to_flow_style_yaml(msg.object_box_size, out);
    out << ", ";
  }

  // member: object_box_size_sigma
  {
    out << "object_box_size_sigma: ";
    to_flow_style_yaml(msg.object_box_size_sigma, out);
    out << ", ";
  }

  // member: object_box_orientation
  {
    out << "object_box_orientation: ";
    rosidl_generator_traits::value_to_yaml(msg.object_box_orientation, out);
    out << ", ";
  }

  // member: object_box_orientation_sigma
  {
    out << "object_box_orientation_sigma: ";
    rosidl_generator_traits::value_to_yaml(msg.object_box_orientation_sigma, out);
    out << ", ";
  }

  // member: tracking_point_coordinate
  {
    out << "tracking_point_coordinate: ";
    to_flow_style_yaml(msg.tracking_point_coordinate, out);
    out << ", ";
  }

  // member: tracking_point_coordinate_sigma
  {
    out << "tracking_point_coordinate_sigma: ";
    to_flow_style_yaml(msg.tracking_point_coordinate_sigma, out);
    out << ", ";
  }

  // member: number_of_contour_points
  {
    out << "number_of_contour_points: ";
    rosidl_generator_traits::value_to_yaml(msg.number_of_contour_points, out);
    out << ", ";
  }

  // member: contour_point_list
  {
    if (msg.contour_point_list.size() == 0) {
      out << "contour_point_list: []";
    } else {
      out << "contour_point_list: [";
      size_t pending_items = msg.contour_point_list.size();
      for (auto item : msg.contour_point_list) {
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
  const UntrackedProperties & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: relative_time_of_measurement
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "relative_time_of_measurement: ";
    rosidl_generator_traits::value_to_yaml(msg.relative_time_of_measurement, out);
    out << "\n";
  }

  // member: position_closest_point
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position_closest_point:\n";
    to_block_style_yaml(msg.position_closest_point, out, indentation + 2);
  }

  // member: object_box_size
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "object_box_size:\n";
    to_block_style_yaml(msg.object_box_size, out, indentation + 2);
  }

  // member: object_box_size_sigma
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "object_box_size_sigma:\n";
    to_block_style_yaml(msg.object_box_size_sigma, out, indentation + 2);
  }

  // member: object_box_orientation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "object_box_orientation: ";
    rosidl_generator_traits::value_to_yaml(msg.object_box_orientation, out);
    out << "\n";
  }

  // member: object_box_orientation_sigma
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "object_box_orientation_sigma: ";
    rosidl_generator_traits::value_to_yaml(msg.object_box_orientation_sigma, out);
    out << "\n";
  }

  // member: tracking_point_coordinate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tracking_point_coordinate:\n";
    to_block_style_yaml(msg.tracking_point_coordinate, out, indentation + 2);
  }

  // member: tracking_point_coordinate_sigma
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tracking_point_coordinate_sigma:\n";
    to_block_style_yaml(msg.tracking_point_coordinate_sigma, out, indentation + 2);
  }

  // member: number_of_contour_points
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "number_of_contour_points: ";
    rosidl_generator_traits::value_to_yaml(msg.number_of_contour_points, out);
    out << "\n";
  }

  // member: contour_point_list
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.contour_point_list.size() == 0) {
      out << "contour_point_list: []\n";
    } else {
      out << "contour_point_list:\n";
      for (auto item : msg.contour_point_list) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const UntrackedProperties & msg, bool use_flow_style = false)
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
  const ibeo_msgs::msg::UntrackedProperties & msg,
  std::ostream & out, size_t indentation = 0)
{
  ibeo_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ibeo_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const ibeo_msgs::msg::UntrackedProperties & msg)
{
  return ibeo_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ibeo_msgs::msg::UntrackedProperties>()
{
  return "ibeo_msgs::msg::UntrackedProperties";
}

template<>
inline const char * name<ibeo_msgs::msg::UntrackedProperties>()
{
  return "ibeo_msgs/msg/UntrackedProperties";
}

template<>
struct has_fixed_size<ibeo_msgs::msg::UntrackedProperties>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ibeo_msgs::msg::UntrackedProperties>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ibeo_msgs::msg::UntrackedProperties>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // IBEO_MSGS__MSG__DETAIL__UNTRACKED_PROPERTIES__TRAITS_HPP_

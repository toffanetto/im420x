// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ibeo_msgs:msg/Object2270.idl
// generated code does not contain a copyright notice

#ifndef IBEO_MSGS__MSG__DETAIL__OBJECT2270__TRAITS_HPP_
#define IBEO_MSGS__MSG__DETAIL__OBJECT2270__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ibeo_msgs/msg/detail/object2270__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'contour_point_list'
#include "ibeo_msgs/msg/detail/point2_di__traits.hpp"

namespace ibeo_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Object2270 & msg,
  std::ostream & out)
{
  out << "{";
  // member: id
  {
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << ", ";
  }

  // member: age
  {
    out << "age: ";
    rosidl_generator_traits::value_to_yaml(msg.age, out);
    out << ", ";
  }

  // member: prediction_age
  {
    out << "prediction_age: ";
    rosidl_generator_traits::value_to_yaml(msg.prediction_age, out);
    out << ", ";
  }

  // member: relative_moment_of_measurement
  {
    out << "relative_moment_of_measurement: ";
    rosidl_generator_traits::value_to_yaml(msg.relative_moment_of_measurement, out);
    out << ", ";
  }

  // member: reference_point_location
  {
    out << "reference_point_location: ";
    rosidl_generator_traits::value_to_yaml(msg.reference_point_location, out);
    out << ", ";
  }

  // member: reference_point_position_x
  {
    out << "reference_point_position_x: ";
    rosidl_generator_traits::value_to_yaml(msg.reference_point_position_x, out);
    out << ", ";
  }

  // member: reference_point_position_y
  {
    out << "reference_point_position_y: ";
    rosidl_generator_traits::value_to_yaml(msg.reference_point_position_y, out);
    out << ", ";
  }

  // member: reference_point_position_sigma_x
  {
    out << "reference_point_position_sigma_x: ";
    rosidl_generator_traits::value_to_yaml(msg.reference_point_position_sigma_x, out);
    out << ", ";
  }

  // member: reference_point_position_sigma_y
  {
    out << "reference_point_position_sigma_y: ";
    rosidl_generator_traits::value_to_yaml(msg.reference_point_position_sigma_y, out);
    out << ", ";
  }

  // member: contour_points_cog_x
  {
    out << "contour_points_cog_x: ";
    rosidl_generator_traits::value_to_yaml(msg.contour_points_cog_x, out);
    out << ", ";
  }

  // member: contour_points_cog_y
  {
    out << "contour_points_cog_y: ";
    rosidl_generator_traits::value_to_yaml(msg.contour_points_cog_y, out);
    out << ", ";
  }

  // member: object_box_length
  {
    out << "object_box_length: ";
    rosidl_generator_traits::value_to_yaml(msg.object_box_length, out);
    out << ", ";
  }

  // member: object_box_width
  {
    out << "object_box_width: ";
    rosidl_generator_traits::value_to_yaml(msg.object_box_width, out);
    out << ", ";
  }

  // member: object_box_orientation_angle
  {
    out << "object_box_orientation_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.object_box_orientation_angle, out);
    out << ", ";
  }

  // member: object_box_orientation_angle_sigma
  {
    out << "object_box_orientation_angle_sigma: ";
    rosidl_generator_traits::value_to_yaml(msg.object_box_orientation_angle_sigma, out);
    out << ", ";
  }

  // member: absolute_velocity_x
  {
    out << "absolute_velocity_x: ";
    rosidl_generator_traits::value_to_yaml(msg.absolute_velocity_x, out);
    out << ", ";
  }

  // member: absolute_velocity_y
  {
    out << "absolute_velocity_y: ";
    rosidl_generator_traits::value_to_yaml(msg.absolute_velocity_y, out);
    out << ", ";
  }

  // member: absolute_velocity_sigma_x
  {
    out << "absolute_velocity_sigma_x: ";
    rosidl_generator_traits::value_to_yaml(msg.absolute_velocity_sigma_x, out);
    out << ", ";
  }

  // member: absolute_velocity_sigma_y
  {
    out << "absolute_velocity_sigma_y: ";
    rosidl_generator_traits::value_to_yaml(msg.absolute_velocity_sigma_y, out);
    out << ", ";
  }

  // member: relative_velocity_x
  {
    out << "relative_velocity_x: ";
    rosidl_generator_traits::value_to_yaml(msg.relative_velocity_x, out);
    out << ", ";
  }

  // member: relative_velocity_y
  {
    out << "relative_velocity_y: ";
    rosidl_generator_traits::value_to_yaml(msg.relative_velocity_y, out);
    out << ", ";
  }

  // member: relative_velocity_sigma_x
  {
    out << "relative_velocity_sigma_x: ";
    rosidl_generator_traits::value_to_yaml(msg.relative_velocity_sigma_x, out);
    out << ", ";
  }

  // member: relative_velocity_sigma_y
  {
    out << "relative_velocity_sigma_y: ";
    rosidl_generator_traits::value_to_yaml(msg.relative_velocity_sigma_y, out);
    out << ", ";
  }

  // member: classification
  {
    out << "classification: ";
    rosidl_generator_traits::value_to_yaml(msg.classification, out);
    out << ", ";
  }

  // member: tracking_model
  {
    out << "tracking_model: ";
    rosidl_generator_traits::value_to_yaml(msg.tracking_model, out);
    out << ", ";
  }

  // member: mobile_detected
  {
    out << "mobile_detected: ";
    rosidl_generator_traits::value_to_yaml(msg.mobile_detected, out);
    out << ", ";
  }

  // member: track_valid
  {
    out << "track_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.track_valid, out);
    out << ", ";
  }

  // member: classification_age
  {
    out << "classification_age: ";
    rosidl_generator_traits::value_to_yaml(msg.classification_age, out);
    out << ", ";
  }

  // member: classification_confidence
  {
    out << "classification_confidence: ";
    rosidl_generator_traits::value_to_yaml(msg.classification_confidence, out);
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
  const Object2270 & msg,
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

  // member: age
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "age: ";
    rosidl_generator_traits::value_to_yaml(msg.age, out);
    out << "\n";
  }

  // member: prediction_age
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "prediction_age: ";
    rosidl_generator_traits::value_to_yaml(msg.prediction_age, out);
    out << "\n";
  }

  // member: relative_moment_of_measurement
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "relative_moment_of_measurement: ";
    rosidl_generator_traits::value_to_yaml(msg.relative_moment_of_measurement, out);
    out << "\n";
  }

  // member: reference_point_location
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reference_point_location: ";
    rosidl_generator_traits::value_to_yaml(msg.reference_point_location, out);
    out << "\n";
  }

  // member: reference_point_position_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reference_point_position_x: ";
    rosidl_generator_traits::value_to_yaml(msg.reference_point_position_x, out);
    out << "\n";
  }

  // member: reference_point_position_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reference_point_position_y: ";
    rosidl_generator_traits::value_to_yaml(msg.reference_point_position_y, out);
    out << "\n";
  }

  // member: reference_point_position_sigma_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reference_point_position_sigma_x: ";
    rosidl_generator_traits::value_to_yaml(msg.reference_point_position_sigma_x, out);
    out << "\n";
  }

  // member: reference_point_position_sigma_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reference_point_position_sigma_y: ";
    rosidl_generator_traits::value_to_yaml(msg.reference_point_position_sigma_y, out);
    out << "\n";
  }

  // member: contour_points_cog_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "contour_points_cog_x: ";
    rosidl_generator_traits::value_to_yaml(msg.contour_points_cog_x, out);
    out << "\n";
  }

  // member: contour_points_cog_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "contour_points_cog_y: ";
    rosidl_generator_traits::value_to_yaml(msg.contour_points_cog_y, out);
    out << "\n";
  }

  // member: object_box_length
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "object_box_length: ";
    rosidl_generator_traits::value_to_yaml(msg.object_box_length, out);
    out << "\n";
  }

  // member: object_box_width
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "object_box_width: ";
    rosidl_generator_traits::value_to_yaml(msg.object_box_width, out);
    out << "\n";
  }

  // member: object_box_orientation_angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "object_box_orientation_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.object_box_orientation_angle, out);
    out << "\n";
  }

  // member: object_box_orientation_angle_sigma
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "object_box_orientation_angle_sigma: ";
    rosidl_generator_traits::value_to_yaml(msg.object_box_orientation_angle_sigma, out);
    out << "\n";
  }

  // member: absolute_velocity_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "absolute_velocity_x: ";
    rosidl_generator_traits::value_to_yaml(msg.absolute_velocity_x, out);
    out << "\n";
  }

  // member: absolute_velocity_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "absolute_velocity_y: ";
    rosidl_generator_traits::value_to_yaml(msg.absolute_velocity_y, out);
    out << "\n";
  }

  // member: absolute_velocity_sigma_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "absolute_velocity_sigma_x: ";
    rosidl_generator_traits::value_to_yaml(msg.absolute_velocity_sigma_x, out);
    out << "\n";
  }

  // member: absolute_velocity_sigma_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "absolute_velocity_sigma_y: ";
    rosidl_generator_traits::value_to_yaml(msg.absolute_velocity_sigma_y, out);
    out << "\n";
  }

  // member: relative_velocity_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "relative_velocity_x: ";
    rosidl_generator_traits::value_to_yaml(msg.relative_velocity_x, out);
    out << "\n";
  }

  // member: relative_velocity_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "relative_velocity_y: ";
    rosidl_generator_traits::value_to_yaml(msg.relative_velocity_y, out);
    out << "\n";
  }

  // member: relative_velocity_sigma_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "relative_velocity_sigma_x: ";
    rosidl_generator_traits::value_to_yaml(msg.relative_velocity_sigma_x, out);
    out << "\n";
  }

  // member: relative_velocity_sigma_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "relative_velocity_sigma_y: ";
    rosidl_generator_traits::value_to_yaml(msg.relative_velocity_sigma_y, out);
    out << "\n";
  }

  // member: classification
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "classification: ";
    rosidl_generator_traits::value_to_yaml(msg.classification, out);
    out << "\n";
  }

  // member: tracking_model
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tracking_model: ";
    rosidl_generator_traits::value_to_yaml(msg.tracking_model, out);
    out << "\n";
  }

  // member: mobile_detected
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mobile_detected: ";
    rosidl_generator_traits::value_to_yaml(msg.mobile_detected, out);
    out << "\n";
  }

  // member: track_valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "track_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.track_valid, out);
    out << "\n";
  }

  // member: classification_age
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "classification_age: ";
    rosidl_generator_traits::value_to_yaml(msg.classification_age, out);
    out << "\n";
  }

  // member: classification_confidence
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "classification_confidence: ";
    rosidl_generator_traits::value_to_yaml(msg.classification_confidence, out);
    out << "\n";
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

inline std::string to_yaml(const Object2270 & msg, bool use_flow_style = false)
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
  const ibeo_msgs::msg::Object2270 & msg,
  std::ostream & out, size_t indentation = 0)
{
  ibeo_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ibeo_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const ibeo_msgs::msg::Object2270 & msg)
{
  return ibeo_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ibeo_msgs::msg::Object2270>()
{
  return "ibeo_msgs::msg::Object2270";
}

template<>
inline const char * name<ibeo_msgs::msg::Object2270>()
{
  return "ibeo_msgs/msg/Object2270";
}

template<>
struct has_fixed_size<ibeo_msgs::msg::Object2270>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ibeo_msgs::msg::Object2270>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ibeo_msgs::msg::Object2270>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // IBEO_MSGS__MSG__DETAIL__OBJECT2270__TRAITS_HPP_

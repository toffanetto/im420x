// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ibeo_msgs:msg/Object2280.idl
// generated code does not contain a copyright notice

#ifndef IBEO_MSGS__MSG__DETAIL__OBJECT2280__TRAITS_HPP_
#define IBEO_MSGS__MSG__DETAIL__OBJECT2280__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ibeo_msgs/msg/detail/object2280__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'timestamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"
// Member 'object_box_center'
// Member 'object_box_center_sigma'
// Member 'object_box_size'
// Member 'relative_velocity'
// Member 'relative_velocity_sigma'
// Member 'absolute_velocity'
// Member 'absolute_velocity_sigma'
// Member 'reference_point_coordinate'
// Member 'reference_point_coordinate_sigma'
// Member 'contour_point_list'
#include "ibeo_msgs/msg/detail/point2_df__traits.hpp"

namespace ibeo_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Object2280 & msg,
  std::ostream & out)
{
  out << "{";
  // member: id
  {
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << ", ";
  }

  // member: tracking_model
  {
    out << "tracking_model: ";
    rosidl_generator_traits::value_to_yaml(msg.tracking_model, out);
    out << ", ";
  }

  // member: mobility_of_dyn_object_detected
  {
    out << "mobility_of_dyn_object_detected: ";
    rosidl_generator_traits::value_to_yaml(msg.mobility_of_dyn_object_detected, out);
    out << ", ";
  }

  // member: motion_model_validated
  {
    out << "motion_model_validated: ";
    rosidl_generator_traits::value_to_yaml(msg.motion_model_validated, out);
    out << ", ";
  }

  // member: object_age
  {
    out << "object_age: ";
    rosidl_generator_traits::value_to_yaml(msg.object_age, out);
    out << ", ";
  }

  // member: timestamp
  {
    out << "timestamp: ";
    to_flow_style_yaml(msg.timestamp, out);
    out << ", ";
  }

  // member: object_prediction_age
  {
    out << "object_prediction_age: ";
    rosidl_generator_traits::value_to_yaml(msg.object_prediction_age, out);
    out << ", ";
  }

  // member: classification
  {
    out << "classification: ";
    rosidl_generator_traits::value_to_yaml(msg.classification, out);
    out << ", ";
  }

  // member: classification_certainty
  {
    out << "classification_certainty: ";
    rosidl_generator_traits::value_to_yaml(msg.classification_certainty, out);
    out << ", ";
  }

  // member: classification_age
  {
    out << "classification_age: ";
    rosidl_generator_traits::value_to_yaml(msg.classification_age, out);
    out << ", ";
  }

  // member: object_box_center
  {
    out << "object_box_center: ";
    to_flow_style_yaml(msg.object_box_center, out);
    out << ", ";
  }

  // member: object_box_center_sigma
  {
    out << "object_box_center_sigma: ";
    to_flow_style_yaml(msg.object_box_center_sigma, out);
    out << ", ";
  }

  // member: object_box_size
  {
    out << "object_box_size: ";
    to_flow_style_yaml(msg.object_box_size, out);
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

  // member: relative_velocity
  {
    out << "relative_velocity: ";
    to_flow_style_yaml(msg.relative_velocity, out);
    out << ", ";
  }

  // member: relative_velocity_sigma
  {
    out << "relative_velocity_sigma: ";
    to_flow_style_yaml(msg.relative_velocity_sigma, out);
    out << ", ";
  }

  // member: absolute_velocity
  {
    out << "absolute_velocity: ";
    to_flow_style_yaml(msg.absolute_velocity, out);
    out << ", ";
  }

  // member: absolute_velocity_sigma
  {
    out << "absolute_velocity_sigma: ";
    to_flow_style_yaml(msg.absolute_velocity_sigma, out);
    out << ", ";
  }

  // member: number_of_contour_points
  {
    out << "number_of_contour_points: ";
    rosidl_generator_traits::value_to_yaml(msg.number_of_contour_points, out);
    out << ", ";
  }

  // member: closest_point_index
  {
    out << "closest_point_index: ";
    rosidl_generator_traits::value_to_yaml(msg.closest_point_index, out);
    out << ", ";
  }

  // member: reference_point_location
  {
    out << "reference_point_location: ";
    rosidl_generator_traits::value_to_yaml(msg.reference_point_location, out);
    out << ", ";
  }

  // member: reference_point_coordinate
  {
    out << "reference_point_coordinate: ";
    to_flow_style_yaml(msg.reference_point_coordinate, out);
    out << ", ";
  }

  // member: reference_point_coordinate_sigma
  {
    out << "reference_point_coordinate_sigma: ";
    to_flow_style_yaml(msg.reference_point_coordinate_sigma, out);
    out << ", ";
  }

  // member: reference_point_position_correction_coefficient
  {
    out << "reference_point_position_correction_coefficient: ";
    rosidl_generator_traits::value_to_yaml(msg.reference_point_position_correction_coefficient, out);
    out << ", ";
  }

  // member: object_priority
  {
    out << "object_priority: ";
    rosidl_generator_traits::value_to_yaml(msg.object_priority, out);
    out << ", ";
  }

  // member: object_existence_measurement
  {
    out << "object_existence_measurement: ";
    rosidl_generator_traits::value_to_yaml(msg.object_existence_measurement, out);
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
  const Object2280 & msg,
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

  // member: tracking_model
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tracking_model: ";
    rosidl_generator_traits::value_to_yaml(msg.tracking_model, out);
    out << "\n";
  }

  // member: mobility_of_dyn_object_detected
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mobility_of_dyn_object_detected: ";
    rosidl_generator_traits::value_to_yaml(msg.mobility_of_dyn_object_detected, out);
    out << "\n";
  }

  // member: motion_model_validated
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "motion_model_validated: ";
    rosidl_generator_traits::value_to_yaml(msg.motion_model_validated, out);
    out << "\n";
  }

  // member: object_age
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "object_age: ";
    rosidl_generator_traits::value_to_yaml(msg.object_age, out);
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

  // member: object_prediction_age
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "object_prediction_age: ";
    rosidl_generator_traits::value_to_yaml(msg.object_prediction_age, out);
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

  // member: classification_certainty
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "classification_certainty: ";
    rosidl_generator_traits::value_to_yaml(msg.classification_certainty, out);
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

  // member: object_box_center
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "object_box_center:\n";
    to_block_style_yaml(msg.object_box_center, out, indentation + 2);
  }

  // member: object_box_center_sigma
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "object_box_center_sigma:\n";
    to_block_style_yaml(msg.object_box_center_sigma, out, indentation + 2);
  }

  // member: object_box_size
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "object_box_size:\n";
    to_block_style_yaml(msg.object_box_size, out, indentation + 2);
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

  // member: relative_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "relative_velocity:\n";
    to_block_style_yaml(msg.relative_velocity, out, indentation + 2);
  }

  // member: relative_velocity_sigma
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "relative_velocity_sigma:\n";
    to_block_style_yaml(msg.relative_velocity_sigma, out, indentation + 2);
  }

  // member: absolute_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "absolute_velocity:\n";
    to_block_style_yaml(msg.absolute_velocity, out, indentation + 2);
  }

  // member: absolute_velocity_sigma
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "absolute_velocity_sigma:\n";
    to_block_style_yaml(msg.absolute_velocity_sigma, out, indentation + 2);
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

  // member: closest_point_index
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "closest_point_index: ";
    rosidl_generator_traits::value_to_yaml(msg.closest_point_index, out);
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

  // member: reference_point_coordinate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reference_point_coordinate:\n";
    to_block_style_yaml(msg.reference_point_coordinate, out, indentation + 2);
  }

  // member: reference_point_coordinate_sigma
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reference_point_coordinate_sigma:\n";
    to_block_style_yaml(msg.reference_point_coordinate_sigma, out, indentation + 2);
  }

  // member: reference_point_position_correction_coefficient
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reference_point_position_correction_coefficient: ";
    rosidl_generator_traits::value_to_yaml(msg.reference_point_position_correction_coefficient, out);
    out << "\n";
  }

  // member: object_priority
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "object_priority: ";
    rosidl_generator_traits::value_to_yaml(msg.object_priority, out);
    out << "\n";
  }

  // member: object_existence_measurement
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "object_existence_measurement: ";
    rosidl_generator_traits::value_to_yaml(msg.object_existence_measurement, out);
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

inline std::string to_yaml(const Object2280 & msg, bool use_flow_style = false)
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
  const ibeo_msgs::msg::Object2280 & msg,
  std::ostream & out, size_t indentation = 0)
{
  ibeo_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ibeo_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const ibeo_msgs::msg::Object2280 & msg)
{
  return ibeo_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ibeo_msgs::msg::Object2280>()
{
  return "ibeo_msgs::msg::Object2280";
}

template<>
inline const char * name<ibeo_msgs::msg::Object2280>()
{
  return "ibeo_msgs/msg/Object2280";
}

template<>
struct has_fixed_size<ibeo_msgs::msg::Object2280>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ibeo_msgs::msg::Object2280>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ibeo_msgs::msg::Object2280>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // IBEO_MSGS__MSG__DETAIL__OBJECT2280__TRAITS_HPP_

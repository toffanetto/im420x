// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ibeo_msgs:msg/Object2221.idl
// generated code does not contain a copyright notice

#ifndef IBEO_MSGS__MSG__DETAIL__OBJECT2221__TRAITS_HPP_
#define IBEO_MSGS__MSG__DETAIL__OBJECT2221__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ibeo_msgs/msg/detail/object2221__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'reference_point'
// Member 'reference_point_sigma'
// Member 'closest_point'
// Member 'bounding_box_center'
// Member 'object_box_center'
// Member 'absolute_velocity'
// Member 'relative_velocity'
// Member 'contour_point_list'
#include "ibeo_msgs/msg/detail/point2_di__traits.hpp"
// Member 'object_box_size'
// Member 'absolute_velocity_sigma'
#include "ibeo_msgs/msg/detail/size2_d__traits.hpp"

namespace ibeo_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Object2221 & msg,
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

  // member: relative_timestamp
  {
    out << "relative_timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.relative_timestamp, out);
    out << ", ";
  }

  // member: reference_point
  {
    out << "reference_point: ";
    to_flow_style_yaml(msg.reference_point, out);
    out << ", ";
  }

  // member: reference_point_sigma
  {
    out << "reference_point_sigma: ";
    to_flow_style_yaml(msg.reference_point_sigma, out);
    out << ", ";
  }

  // member: closest_point
  {
    out << "closest_point: ";
    to_flow_style_yaml(msg.closest_point, out);
    out << ", ";
  }

  // member: bounding_box_center
  {
    out << "bounding_box_center: ";
    to_flow_style_yaml(msg.bounding_box_center, out);
    out << ", ";
  }

  // member: bounding_box_width
  {
    out << "bounding_box_width: ";
    rosidl_generator_traits::value_to_yaml(msg.bounding_box_width, out);
    out << ", ";
  }

  // member: bounding_box_length
  {
    out << "bounding_box_length: ";
    rosidl_generator_traits::value_to_yaml(msg.bounding_box_length, out);
    out << ", ";
  }

  // member: object_box_center
  {
    out << "object_box_center: ";
    to_flow_style_yaml(msg.object_box_center, out);
    out << ", ";
  }

  // member: object_box_size
  {
    out << "object_box_size: ";
    to_flow_style_yaml(msg.object_box_size, out);
    out << ", ";
  }

  // member: object_box_orientation
  {
    out << "object_box_orientation: ";
    rosidl_generator_traits::value_to_yaml(msg.object_box_orientation, out);
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

  // member: relative_velocity
  {
    out << "relative_velocity: ";
    to_flow_style_yaml(msg.relative_velocity, out);
    out << ", ";
  }

  // member: classification
  {
    out << "classification: ";
    rosidl_generator_traits::value_to_yaml(msg.classification, out);
    out << ", ";
  }

  // member: classification_age
  {
    out << "classification_age: ";
    rosidl_generator_traits::value_to_yaml(msg.classification_age, out);
    out << ", ";
  }

  // member: classification_certainty
  {
    out << "classification_certainty: ";
    rosidl_generator_traits::value_to_yaml(msg.classification_certainty, out);
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
  const Object2221 & msg,
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

  // member: relative_timestamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "relative_timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.relative_timestamp, out);
    out << "\n";
  }

  // member: reference_point
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reference_point:\n";
    to_block_style_yaml(msg.reference_point, out, indentation + 2);
  }

  // member: reference_point_sigma
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reference_point_sigma:\n";
    to_block_style_yaml(msg.reference_point_sigma, out, indentation + 2);
  }

  // member: closest_point
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "closest_point:\n";
    to_block_style_yaml(msg.closest_point, out, indentation + 2);
  }

  // member: bounding_box_center
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bounding_box_center:\n";
    to_block_style_yaml(msg.bounding_box_center, out, indentation + 2);
  }

  // member: bounding_box_width
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bounding_box_width: ";
    rosidl_generator_traits::value_to_yaml(msg.bounding_box_width, out);
    out << "\n";
  }

  // member: bounding_box_length
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bounding_box_length: ";
    rosidl_generator_traits::value_to_yaml(msg.bounding_box_length, out);
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

  // member: object_box_size
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "object_box_size:\n";
    to_block_style_yaml(msg.object_box_size, out, indentation + 2);
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

  // member: relative_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "relative_velocity:\n";
    to_block_style_yaml(msg.relative_velocity, out, indentation + 2);
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

  // member: classification_age
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "classification_age: ";
    rosidl_generator_traits::value_to_yaml(msg.classification_age, out);
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

inline std::string to_yaml(const Object2221 & msg, bool use_flow_style = false)
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
  const ibeo_msgs::msg::Object2221 & msg,
  std::ostream & out, size_t indentation = 0)
{
  ibeo_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ibeo_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const ibeo_msgs::msg::Object2221 & msg)
{
  return ibeo_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ibeo_msgs::msg::Object2221>()
{
  return "ibeo_msgs::msg::Object2221";
}

template<>
inline const char * name<ibeo_msgs::msg::Object2221>()
{
  return "ibeo_msgs/msg/Object2221";
}

template<>
struct has_fixed_size<ibeo_msgs::msg::Object2221>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ibeo_msgs::msg::Object2221>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ibeo_msgs::msg::Object2221>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // IBEO_MSGS__MSG__DETAIL__OBJECT2221__TRAITS_HPP_

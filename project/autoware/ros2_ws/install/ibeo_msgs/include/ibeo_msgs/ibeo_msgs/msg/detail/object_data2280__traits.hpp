// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ibeo_msgs:msg/ObjectData2280.idl
// generated code does not contain a copyright notice

#ifndef IBEO_MSGS__MSG__DETAIL__OBJECT_DATA2280__TRAITS_HPP_
#define IBEO_MSGS__MSG__DETAIL__OBJECT_DATA2280__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ibeo_msgs/msg/detail/object_data2280__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'ibeo_header'
#include "ibeo_msgs/msg/detail/ibeo_data_header__traits.hpp"
// Member 'mid_scan_timestamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"
// Member 'objects'
#include "ibeo_msgs/msg/detail/object2280__traits.hpp"

namespace ibeo_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ObjectData2280 & msg,
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

  // member: mid_scan_timestamp
  {
    out << "mid_scan_timestamp: ";
    to_flow_style_yaml(msg.mid_scan_timestamp, out);
    out << ", ";
  }

  // member: number_of_objects
  {
    out << "number_of_objects: ";
    rosidl_generator_traits::value_to_yaml(msg.number_of_objects, out);
    out << ", ";
  }

  // member: objects
  {
    if (msg.objects.size() == 0) {
      out << "objects: []";
    } else {
      out << "objects: [";
      size_t pending_items = msg.objects.size();
      for (auto item : msg.objects) {
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
  const ObjectData2280 & msg,
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

  // member: mid_scan_timestamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mid_scan_timestamp:\n";
    to_block_style_yaml(msg.mid_scan_timestamp, out, indentation + 2);
  }

  // member: number_of_objects
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "number_of_objects: ";
    rosidl_generator_traits::value_to_yaml(msg.number_of_objects, out);
    out << "\n";
  }

  // member: objects
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.objects.size() == 0) {
      out << "objects: []\n";
    } else {
      out << "objects:\n";
      for (auto item : msg.objects) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ObjectData2280 & msg, bool use_flow_style = false)
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
  const ibeo_msgs::msg::ObjectData2280 & msg,
  std::ostream & out, size_t indentation = 0)
{
  ibeo_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ibeo_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const ibeo_msgs::msg::ObjectData2280 & msg)
{
  return ibeo_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ibeo_msgs::msg::ObjectData2280>()
{
  return "ibeo_msgs::msg::ObjectData2280";
}

template<>
inline const char * name<ibeo_msgs::msg::ObjectData2280>()
{
  return "ibeo_msgs/msg/ObjectData2280";
}

template<>
struct has_fixed_size<ibeo_msgs::msg::ObjectData2280>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ibeo_msgs::msg::ObjectData2280>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ibeo_msgs::msg::ObjectData2280>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // IBEO_MSGS__MSG__DETAIL__OBJECT_DATA2280__TRAITS_HPP_

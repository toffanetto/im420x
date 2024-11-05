// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ibeo_msgs:msg/ObjectData2271.idl
// generated code does not contain a copyright notice

#ifndef IBEO_MSGS__MSG__DETAIL__OBJECT_DATA2271__TRAITS_HPP_
#define IBEO_MSGS__MSG__DETAIL__OBJECT_DATA2271__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ibeo_msgs/msg/detail/object_data2271__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'ibeo_header'
#include "ibeo_msgs/msg/detail/ibeo_data_header__traits.hpp"
// Member 'start_scan_timestamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"
// Member 'object_list'
#include "ibeo_msgs/msg/detail/object2271__traits.hpp"

namespace ibeo_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ObjectData2271 & msg,
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

  // member: start_scan_timestamp
  {
    out << "start_scan_timestamp: ";
    to_flow_style_yaml(msg.start_scan_timestamp, out);
    out << ", ";
  }

  // member: scan_number
  {
    out << "scan_number: ";
    rosidl_generator_traits::value_to_yaml(msg.scan_number, out);
    out << ", ";
  }

  // member: number_of_objects
  {
    out << "number_of_objects: ";
    rosidl_generator_traits::value_to_yaml(msg.number_of_objects, out);
    out << ", ";
  }

  // member: object_list
  {
    if (msg.object_list.size() == 0) {
      out << "object_list: []";
    } else {
      out << "object_list: [";
      size_t pending_items = msg.object_list.size();
      for (auto item : msg.object_list) {
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
  const ObjectData2271 & msg,
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

  // member: start_scan_timestamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "start_scan_timestamp:\n";
    to_block_style_yaml(msg.start_scan_timestamp, out, indentation + 2);
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

  // member: number_of_objects
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "number_of_objects: ";
    rosidl_generator_traits::value_to_yaml(msg.number_of_objects, out);
    out << "\n";
  }

  // member: object_list
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.object_list.size() == 0) {
      out << "object_list: []\n";
    } else {
      out << "object_list:\n";
      for (auto item : msg.object_list) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ObjectData2271 & msg, bool use_flow_style = false)
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
  const ibeo_msgs::msg::ObjectData2271 & msg,
  std::ostream & out, size_t indentation = 0)
{
  ibeo_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ibeo_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const ibeo_msgs::msg::ObjectData2271 & msg)
{
  return ibeo_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ibeo_msgs::msg::ObjectData2271>()
{
  return "ibeo_msgs::msg::ObjectData2271";
}

template<>
inline const char * name<ibeo_msgs::msg::ObjectData2271>()
{
  return "ibeo_msgs/msg/ObjectData2271";
}

template<>
struct has_fixed_size<ibeo_msgs::msg::ObjectData2271>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ibeo_msgs::msg::ObjectData2271>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ibeo_msgs::msg::ObjectData2271>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // IBEO_MSGS__MSG__DETAIL__OBJECT_DATA2271__TRAITS_HPP_

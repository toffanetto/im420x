// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ibeo_msgs:msg/ContourPointSigma.idl
// generated code does not contain a copyright notice

#ifndef IBEO_MSGS__MSG__DETAIL__CONTOUR_POINT_SIGMA__TRAITS_HPP_
#define IBEO_MSGS__MSG__DETAIL__CONTOUR_POINT_SIGMA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ibeo_msgs/msg/detail/contour_point_sigma__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace ibeo_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ContourPointSigma & msg,
  std::ostream & out)
{
  out << "{";
  // member: x
  {
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << ", ";
  }

  // member: y
  {
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << ", ";
  }

  // member: x_sigma
  {
    out << "x_sigma: ";
    rosidl_generator_traits::value_to_yaml(msg.x_sigma, out);
    out << ", ";
  }

  // member: y_sigma
  {
    out << "y_sigma: ";
    rosidl_generator_traits::value_to_yaml(msg.y_sigma, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ContourPointSigma & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << "\n";
  }

  // member: y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << "\n";
  }

  // member: x_sigma
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x_sigma: ";
    rosidl_generator_traits::value_to_yaml(msg.x_sigma, out);
    out << "\n";
  }

  // member: y_sigma
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y_sigma: ";
    rosidl_generator_traits::value_to_yaml(msg.y_sigma, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ContourPointSigma & msg, bool use_flow_style = false)
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
  const ibeo_msgs::msg::ContourPointSigma & msg,
  std::ostream & out, size_t indentation = 0)
{
  ibeo_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ibeo_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const ibeo_msgs::msg::ContourPointSigma & msg)
{
  return ibeo_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ibeo_msgs::msg::ContourPointSigma>()
{
  return "ibeo_msgs::msg::ContourPointSigma";
}

template<>
inline const char * name<ibeo_msgs::msg::ContourPointSigma>()
{
  return "ibeo_msgs/msg/ContourPointSigma";
}

template<>
struct has_fixed_size<ibeo_msgs::msg::ContourPointSigma>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<ibeo_msgs::msg::ContourPointSigma>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<ibeo_msgs::msg::ContourPointSigma>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // IBEO_MSGS__MSG__DETAIL__CONTOUR_POINT_SIGMA__TRAITS_HPP_

// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ibeo_msgs:msg/Sigma2D.idl
// generated code does not contain a copyright notice

#ifndef IBEO_MSGS__MSG__DETAIL__SIGMA2_D__TRAITS_HPP_
#define IBEO_MSGS__MSG__DETAIL__SIGMA2_D__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ibeo_msgs/msg/detail/sigma2_d__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace ibeo_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Sigma2D & msg,
  std::ostream & out)
{
  out << "{";
  // member: sigma_x
  {
    out << "sigma_x: ";
    rosidl_generator_traits::value_to_yaml(msg.sigma_x, out);
    out << ", ";
  }

  // member: sigma_y
  {
    out << "sigma_y: ";
    rosidl_generator_traits::value_to_yaml(msg.sigma_y, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Sigma2D & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: sigma_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sigma_x: ";
    rosidl_generator_traits::value_to_yaml(msg.sigma_x, out);
    out << "\n";
  }

  // member: sigma_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sigma_y: ";
    rosidl_generator_traits::value_to_yaml(msg.sigma_y, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Sigma2D & msg, bool use_flow_style = false)
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
  const ibeo_msgs::msg::Sigma2D & msg,
  std::ostream & out, size_t indentation = 0)
{
  ibeo_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ibeo_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const ibeo_msgs::msg::Sigma2D & msg)
{
  return ibeo_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ibeo_msgs::msg::Sigma2D>()
{
  return "ibeo_msgs::msg::Sigma2D";
}

template<>
inline const char * name<ibeo_msgs::msg::Sigma2D>()
{
  return "ibeo_msgs/msg/Sigma2D";
}

template<>
struct has_fixed_size<ibeo_msgs::msg::Sigma2D>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<ibeo_msgs::msg::Sigma2D>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<ibeo_msgs::msg::Sigma2D>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // IBEO_MSGS__MSG__DETAIL__SIGMA2_D__TRAITS_HPP_

// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from delphi_mrr_msgs:msg/MrrStatusRadar.idl
// generated code does not contain a copyright notice

#ifndef DELPHI_MRR_MSGS__MSG__DETAIL__MRR_STATUS_RADAR__TRAITS_HPP_
#define DELPHI_MRR_MSGS__MSG__DETAIL__MRR_STATUS_RADAR__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "delphi_mrr_msgs/msg/detail/mrr_status_radar__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace delphi_mrr_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const MrrStatusRadar & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: can_interference_type
  {
    out << "can_interference_type: ";
    rosidl_generator_traits::value_to_yaml(msg.can_interference_type, out);
    out << ", ";
  }

  // member: can_recommend_unconverge
  {
    out << "can_recommend_unconverge: ";
    rosidl_generator_traits::value_to_yaml(msg.can_recommend_unconverge, out);
    out << ", ";
  }

  // member: can_blockage_sidelobe_filter_val
  {
    out << "can_blockage_sidelobe_filter_val: ";
    rosidl_generator_traits::value_to_yaml(msg.can_blockage_sidelobe_filter_val, out);
    out << ", ";
  }

  // member: can_radar_align_incomplete
  {
    out << "can_radar_align_incomplete: ";
    rosidl_generator_traits::value_to_yaml(msg.can_radar_align_incomplete, out);
    out << ", ";
  }

  // member: can_blockage_sidelobe
  {
    out << "can_blockage_sidelobe: ";
    rosidl_generator_traits::value_to_yaml(msg.can_blockage_sidelobe, out);
    out << ", ";
  }

  // member: can_blockage_mnr
  {
    out << "can_blockage_mnr: ";
    rosidl_generator_traits::value_to_yaml(msg.can_blockage_mnr, out);
    out << ", ";
  }

  // member: can_radar_ext_cond_nok
  {
    out << "can_radar_ext_cond_nok: ";
    rosidl_generator_traits::value_to_yaml(msg.can_radar_ext_cond_nok, out);
    out << ", ";
  }

  // member: can_radar_align_out_range
  {
    out << "can_radar_align_out_range: ";
    rosidl_generator_traits::value_to_yaml(msg.can_radar_align_out_range, out);
    out << ", ";
  }

  // member: can_radar_align_not_start
  {
    out << "can_radar_align_not_start: ";
    rosidl_generator_traits::value_to_yaml(msg.can_radar_align_not_start, out);
    out << ", ";
  }

  // member: can_radar_overheat_error
  {
    out << "can_radar_overheat_error: ";
    rosidl_generator_traits::value_to_yaml(msg.can_radar_overheat_error, out);
    out << ", ";
  }

  // member: can_radar_not_op
  {
    out << "can_radar_not_op: ";
    rosidl_generator_traits::value_to_yaml(msg.can_radar_not_op, out);
    out << ", ";
  }

  // member: can_xcvr_operational
  {
    out << "can_xcvr_operational: ";
    rosidl_generator_traits::value_to_yaml(msg.can_xcvr_operational, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MrrStatusRadar & msg,
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

  // member: can_interference_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "can_interference_type: ";
    rosidl_generator_traits::value_to_yaml(msg.can_interference_type, out);
    out << "\n";
  }

  // member: can_recommend_unconverge
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "can_recommend_unconverge: ";
    rosidl_generator_traits::value_to_yaml(msg.can_recommend_unconverge, out);
    out << "\n";
  }

  // member: can_blockage_sidelobe_filter_val
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "can_blockage_sidelobe_filter_val: ";
    rosidl_generator_traits::value_to_yaml(msg.can_blockage_sidelobe_filter_val, out);
    out << "\n";
  }

  // member: can_radar_align_incomplete
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "can_radar_align_incomplete: ";
    rosidl_generator_traits::value_to_yaml(msg.can_radar_align_incomplete, out);
    out << "\n";
  }

  // member: can_blockage_sidelobe
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "can_blockage_sidelobe: ";
    rosidl_generator_traits::value_to_yaml(msg.can_blockage_sidelobe, out);
    out << "\n";
  }

  // member: can_blockage_mnr
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "can_blockage_mnr: ";
    rosidl_generator_traits::value_to_yaml(msg.can_blockage_mnr, out);
    out << "\n";
  }

  // member: can_radar_ext_cond_nok
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "can_radar_ext_cond_nok: ";
    rosidl_generator_traits::value_to_yaml(msg.can_radar_ext_cond_nok, out);
    out << "\n";
  }

  // member: can_radar_align_out_range
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "can_radar_align_out_range: ";
    rosidl_generator_traits::value_to_yaml(msg.can_radar_align_out_range, out);
    out << "\n";
  }

  // member: can_radar_align_not_start
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "can_radar_align_not_start: ";
    rosidl_generator_traits::value_to_yaml(msg.can_radar_align_not_start, out);
    out << "\n";
  }

  // member: can_radar_overheat_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "can_radar_overheat_error: ";
    rosidl_generator_traits::value_to_yaml(msg.can_radar_overheat_error, out);
    out << "\n";
  }

  // member: can_radar_not_op
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "can_radar_not_op: ";
    rosidl_generator_traits::value_to_yaml(msg.can_radar_not_op, out);
    out << "\n";
  }

  // member: can_xcvr_operational
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "can_xcvr_operational: ";
    rosidl_generator_traits::value_to_yaml(msg.can_xcvr_operational, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MrrStatusRadar & msg, bool use_flow_style = false)
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

}  // namespace delphi_mrr_msgs

namespace rosidl_generator_traits
{

[[deprecated("use delphi_mrr_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const delphi_mrr_msgs::msg::MrrStatusRadar & msg,
  std::ostream & out, size_t indentation = 0)
{
  delphi_mrr_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use delphi_mrr_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const delphi_mrr_msgs::msg::MrrStatusRadar & msg)
{
  return delphi_mrr_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<delphi_mrr_msgs::msg::MrrStatusRadar>()
{
  return "delphi_mrr_msgs::msg::MrrStatusRadar";
}

template<>
inline const char * name<delphi_mrr_msgs::msg::MrrStatusRadar>()
{
  return "delphi_mrr_msgs/msg/MrrStatusRadar";
}

template<>
struct has_fixed_size<delphi_mrr_msgs::msg::MrrStatusRadar>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<delphi_mrr_msgs::msg::MrrStatusRadar>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<delphi_mrr_msgs::msg::MrrStatusRadar>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DELPHI_MRR_MSGS__MSG__DETAIL__MRR_STATUS_RADAR__TRAITS_HPP_

// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from delphi_esr_msgs:msg/EsrEthTx.idl
// generated code does not contain a copyright notice

#ifndef DELPHI_ESR_MSGS__MSG__DETAIL__ESR_ETH_TX__TRAITS_HPP_
#define DELPHI_ESR_MSGS__MSG__DETAIL__ESR_ETH_TX__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "delphi_esr_msgs/msg/detail/esr_eth_tx__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace delphi_esr_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const EsrEthTx & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: xcp_format_version
  {
    out << "xcp_format_version: ";
    rosidl_generator_traits::value_to_yaml(msg.xcp_format_version, out);
    out << ", ";
  }

  // member: scan_index
  {
    out << "scan_index: ";
    rosidl_generator_traits::value_to_yaml(msg.scan_index, out);
    out << ", ";
  }

  // member: tcp_size
  {
    out << "tcp_size: ";
    rosidl_generator_traits::value_to_yaml(msg.tcp_size, out);
    out << ", ";
  }

  // member: xcp_scan_type
  {
    out << "xcp_scan_type: ";
    rosidl_generator_traits::value_to_yaml(msg.xcp_scan_type, out);
    out << ", ";
  }

  // member: look_index
  {
    out << "look_index: ";
    rosidl_generator_traits::value_to_yaml(msg.look_index, out);
    out << ", ";
  }

  // member: mmr_scan_index
  {
    out << "mmr_scan_index: ";
    rosidl_generator_traits::value_to_yaml(msg.mmr_scan_index, out);
    out << ", ";
  }

  // member: target_report_host_speed
  {
    out << "target_report_host_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.target_report_host_speed, out);
    out << ", ";
  }

  // member: target_report_host_yaw_rate
  {
    out << "target_report_host_yaw_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.target_report_host_yaw_rate, out);
    out << ", ";
  }

  // member: xcp_timestamp
  {
    out << "xcp_timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.xcp_timestamp, out);
    out << ", ";
  }

  // member: release_revision
  {
    out << "release_revision: ";
    rosidl_generator_traits::value_to_yaml(msg.release_revision, out);
    out << ", ";
  }

  // member: promote_revision
  {
    out << "promote_revision: ";
    rosidl_generator_traits::value_to_yaml(msg.promote_revision, out);
    out << ", ";
  }

  // member: field_revision
  {
    out << "field_revision: ";
    rosidl_generator_traits::value_to_yaml(msg.field_revision, out);
    out << ", ";
  }

  // member: target_report_count
  {
    out << "target_report_count: ";
    rosidl_generator_traits::value_to_yaml(msg.target_report_count, out);
    out << ", ";
  }

  // member: target_report_range
  {
    if (msg.target_report_range.size() == 0) {
      out << "target_report_range: []";
    } else {
      out << "target_report_range: [";
      size_t pending_items = msg.target_report_range.size();
      for (auto item : msg.target_report_range) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: target_report_range_rate
  {
    if (msg.target_report_range_rate.size() == 0) {
      out << "target_report_range_rate: []";
    } else {
      out << "target_report_range_rate: [";
      size_t pending_items = msg.target_report_range_rate.size();
      for (auto item : msg.target_report_range_rate) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: target_report_theta
  {
    if (msg.target_report_theta.size() == 0) {
      out << "target_report_theta: []";
    } else {
      out << "target_report_theta: [";
      size_t pending_items = msg.target_report_theta.size();
      for (auto item : msg.target_report_theta) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: target_report_amplitude
  {
    if (msg.target_report_amplitude.size() == 0) {
      out << "target_report_amplitude: []";
    } else {
      out << "target_report_amplitude: [";
      size_t pending_items = msg.target_report_amplitude.size();
      for (auto item : msg.target_report_amplitude) {
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
  const EsrEthTx & msg,
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

  // member: xcp_format_version
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "xcp_format_version: ";
    rosidl_generator_traits::value_to_yaml(msg.xcp_format_version, out);
    out << "\n";
  }

  // member: scan_index
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "scan_index: ";
    rosidl_generator_traits::value_to_yaml(msg.scan_index, out);
    out << "\n";
  }

  // member: tcp_size
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tcp_size: ";
    rosidl_generator_traits::value_to_yaml(msg.tcp_size, out);
    out << "\n";
  }

  // member: xcp_scan_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "xcp_scan_type: ";
    rosidl_generator_traits::value_to_yaml(msg.xcp_scan_type, out);
    out << "\n";
  }

  // member: look_index
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "look_index: ";
    rosidl_generator_traits::value_to_yaml(msg.look_index, out);
    out << "\n";
  }

  // member: mmr_scan_index
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mmr_scan_index: ";
    rosidl_generator_traits::value_to_yaml(msg.mmr_scan_index, out);
    out << "\n";
  }

  // member: target_report_host_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target_report_host_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.target_report_host_speed, out);
    out << "\n";
  }

  // member: target_report_host_yaw_rate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target_report_host_yaw_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.target_report_host_yaw_rate, out);
    out << "\n";
  }

  // member: xcp_timestamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "xcp_timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.xcp_timestamp, out);
    out << "\n";
  }

  // member: release_revision
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "release_revision: ";
    rosidl_generator_traits::value_to_yaml(msg.release_revision, out);
    out << "\n";
  }

  // member: promote_revision
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "promote_revision: ";
    rosidl_generator_traits::value_to_yaml(msg.promote_revision, out);
    out << "\n";
  }

  // member: field_revision
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "field_revision: ";
    rosidl_generator_traits::value_to_yaml(msg.field_revision, out);
    out << "\n";
  }

  // member: target_report_count
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target_report_count: ";
    rosidl_generator_traits::value_to_yaml(msg.target_report_count, out);
    out << "\n";
  }

  // member: target_report_range
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.target_report_range.size() == 0) {
      out << "target_report_range: []\n";
    } else {
      out << "target_report_range:\n";
      for (auto item : msg.target_report_range) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: target_report_range_rate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.target_report_range_rate.size() == 0) {
      out << "target_report_range_rate: []\n";
    } else {
      out << "target_report_range_rate:\n";
      for (auto item : msg.target_report_range_rate) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: target_report_theta
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.target_report_theta.size() == 0) {
      out << "target_report_theta: []\n";
    } else {
      out << "target_report_theta:\n";
      for (auto item : msg.target_report_theta) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: target_report_amplitude
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.target_report_amplitude.size() == 0) {
      out << "target_report_amplitude: []\n";
    } else {
      out << "target_report_amplitude:\n";
      for (auto item : msg.target_report_amplitude) {
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

inline std::string to_yaml(const EsrEthTx & msg, bool use_flow_style = false)
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

}  // namespace delphi_esr_msgs

namespace rosidl_generator_traits
{

[[deprecated("use delphi_esr_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const delphi_esr_msgs::msg::EsrEthTx & msg,
  std::ostream & out, size_t indentation = 0)
{
  delphi_esr_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use delphi_esr_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const delphi_esr_msgs::msg::EsrEthTx & msg)
{
  return delphi_esr_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<delphi_esr_msgs::msg::EsrEthTx>()
{
  return "delphi_esr_msgs::msg::EsrEthTx";
}

template<>
inline const char * name<delphi_esr_msgs::msg::EsrEthTx>()
{
  return "delphi_esr_msgs/msg/EsrEthTx";
}

template<>
struct has_fixed_size<delphi_esr_msgs::msg::EsrEthTx>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<delphi_esr_msgs::msg::EsrEthTx>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<delphi_esr_msgs::msg::EsrEthTx>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DELPHI_ESR_MSGS__MSG__DETAIL__ESR_ETH_TX__TRAITS_HPP_

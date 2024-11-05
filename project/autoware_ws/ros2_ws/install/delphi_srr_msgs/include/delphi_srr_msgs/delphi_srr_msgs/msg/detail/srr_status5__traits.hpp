// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from delphi_srr_msgs:msg/SrrStatus5.idl
// generated code does not contain a copyright notice

#ifndef DELPHI_SRR_MSGS__MSG__DETAIL__SRR_STATUS5__TRAITS_HPP_
#define DELPHI_SRR_MSGS__MSG__DETAIL__SRR_STATUS5__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "delphi_srr_msgs/msg/detail/srr_status5__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace delphi_srr_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const SrrStatus5 & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: disable_auto_align
  {
    out << "disable_auto_align: ";
    rosidl_generator_traits::value_to_yaml(msg.disable_auto_align, out);
    out << ", ";
  }

  // member: can_tx_yaw_rate_ref_qf
  {
    out << "can_tx_yaw_rate_ref_qf: ";
    rosidl_generator_traits::value_to_yaml(msg.can_tx_yaw_rate_ref_qf, out);
    out << ", ";
  }

  // member: can_tx_yaw_rate_raw_qf
  {
    out << "can_tx_yaw_rate_raw_qf: ";
    rosidl_generator_traits::value_to_yaml(msg.can_tx_yaw_rate_raw_qf, out);
    out << ", ";
  }

  // member: can_tx_yaw_rate_reference
  {
    out << "can_tx_yaw_rate_reference: ";
    rosidl_generator_traits::value_to_yaml(msg.can_tx_yaw_rate_reference, out);
    out << ", ";
  }

  // member: can_tx_yaw_rate_raw
  {
    out << "can_tx_yaw_rate_raw: ";
    rosidl_generator_traits::value_to_yaml(msg.can_tx_yaw_rate_raw, out);
    out << ", ";
  }

  // member: can_tx_system_status
  {
    out << "can_tx_system_status: ";
    rosidl_generator_traits::value_to_yaml(msg.can_tx_system_status, out);
    out << ", ";
  }

  // member: can_tx_outside_temperature
  {
    out << "can_tx_outside_temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.can_tx_outside_temperature, out);
    out << ", ";
  }

  // member: can_blockage_mnr_blocked
  {
    out << "can_blockage_mnr_blocked: ";
    rosidl_generator_traits::value_to_yaml(msg.can_blockage_mnr_blocked, out);
    out << ", ";
  }

  // member: can_blockage_bb_blocked
  {
    out << "can_blockage_bb_blocked: ";
    rosidl_generator_traits::value_to_yaml(msg.can_blockage_bb_blocked, out);
    out << ", ";
  }

  // member: can_blockage_radar_blocked
  {
    out << "can_blockage_radar_blocked: ";
    rosidl_generator_traits::value_to_yaml(msg.can_blockage_radar_blocked, out);
    out << ", ";
  }

  // member: can_td_blocked
  {
    out << "can_td_blocked: ";
    rosidl_generator_traits::value_to_yaml(msg.can_td_blocked, out);
    out << ", ";
  }

  // member: radar_tx_power_error
  {
    out << "radar_tx_power_error: ";
    rosidl_generator_traits::value_to_yaml(msg.radar_tx_power_error, out);
    out << ", ";
  }

  // member: radar_lo_power_error
  {
    out << "radar_lo_power_error: ";
    rosidl_generator_traits::value_to_yaml(msg.radar_lo_power_error, out);
    out << ", ";
  }

  // member: radar_data_sync_error
  {
    out << "radar_data_sync_error: ";
    rosidl_generator_traits::value_to_yaml(msg.radar_data_sync_error, out);
    out << ", ";
  }

  // member: linearizer_spi_transfer_error
  {
    out << "linearizer_spi_transfer_error: ";
    rosidl_generator_traits::value_to_yaml(msg.linearizer_spi_transfer_error, out);
    out << ", ";
  }

  // member: saturated_tuning_freq_error
  {
    out << "saturated_tuning_freq_error: ";
    rosidl_generator_traits::value_to_yaml(msg.saturated_tuning_freq_error, out);
    out << ", ";
  }

  // member: rtn_spi_transfer_error
  {
    out << "rtn_spi_transfer_error: ";
    rosidl_generator_traits::value_to_yaml(msg.rtn_spi_transfer_error, out);
    out << ", ";
  }

  // member: rrn_spi_transfer_error
  {
    out << "rrn_spi_transfer_error: ";
    rosidl_generator_traits::value_to_yaml(msg.rrn_spi_transfer_error, out);
    out << ", ";
  }

  // member: video_port_capture_error
  {
    out << "video_port_capture_error: ";
    rosidl_generator_traits::value_to_yaml(msg.video_port_capture_error, out);
    out << ", ";
  }

  // member: vertical_misalignment_error
  {
    out << "vertical_misalignment_error: ";
    rosidl_generator_traits::value_to_yaml(msg.vertical_misalignment_error, out);
    out << ", ";
  }

  // member: tx_temperature_fault
  {
    out << "tx_temperature_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.tx_temperature_fault, out);
    out << ", ";
  }

  // member: transmitter_id_error
  {
    out << "transmitter_id_error: ";
    rosidl_generator_traits::value_to_yaml(msg.transmitter_id_error, out);
    out << ", ";
  }

  // member: dsp_unit_cal_checksum_error
  {
    out << "dsp_unit_cal_checksum_error: ";
    rosidl_generator_traits::value_to_yaml(msg.dsp_unit_cal_checksum_error, out);
    out << ", ";
  }

  // member: dsp_unit_cal_block_chcksm_error
  {
    out << "dsp_unit_cal_block_chcksm_error: ";
    rosidl_generator_traits::value_to_yaml(msg.dsp_unit_cal_block_chcksm_error, out);
    out << ", ";
  }

  // member: dsp_tuning_sensitivity_error
  {
    out << "dsp_tuning_sensitivity_error: ";
    rosidl_generator_traits::value_to_yaml(msg.dsp_tuning_sensitivity_error, out);
    out << ", ";
  }

  // member: dsp_loop_overrun_error
  {
    out << "dsp_loop_overrun_error: ";
    rosidl_generator_traits::value_to_yaml(msg.dsp_loop_overrun_error, out);
    out << ", ";
  }

  // member: adc_spi_transfer_error
  {
    out << "adc_spi_transfer_error: ";
    rosidl_generator_traits::value_to_yaml(msg.adc_spi_transfer_error, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SrrStatus5 & msg,
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

  // member: disable_auto_align
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "disable_auto_align: ";
    rosidl_generator_traits::value_to_yaml(msg.disable_auto_align, out);
    out << "\n";
  }

  // member: can_tx_yaw_rate_ref_qf
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "can_tx_yaw_rate_ref_qf: ";
    rosidl_generator_traits::value_to_yaml(msg.can_tx_yaw_rate_ref_qf, out);
    out << "\n";
  }

  // member: can_tx_yaw_rate_raw_qf
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "can_tx_yaw_rate_raw_qf: ";
    rosidl_generator_traits::value_to_yaml(msg.can_tx_yaw_rate_raw_qf, out);
    out << "\n";
  }

  // member: can_tx_yaw_rate_reference
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "can_tx_yaw_rate_reference: ";
    rosidl_generator_traits::value_to_yaml(msg.can_tx_yaw_rate_reference, out);
    out << "\n";
  }

  // member: can_tx_yaw_rate_raw
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "can_tx_yaw_rate_raw: ";
    rosidl_generator_traits::value_to_yaml(msg.can_tx_yaw_rate_raw, out);
    out << "\n";
  }

  // member: can_tx_system_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "can_tx_system_status: ";
    rosidl_generator_traits::value_to_yaml(msg.can_tx_system_status, out);
    out << "\n";
  }

  // member: can_tx_outside_temperature
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "can_tx_outside_temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.can_tx_outside_temperature, out);
    out << "\n";
  }

  // member: can_blockage_mnr_blocked
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "can_blockage_mnr_blocked: ";
    rosidl_generator_traits::value_to_yaml(msg.can_blockage_mnr_blocked, out);
    out << "\n";
  }

  // member: can_blockage_bb_blocked
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "can_blockage_bb_blocked: ";
    rosidl_generator_traits::value_to_yaml(msg.can_blockage_bb_blocked, out);
    out << "\n";
  }

  // member: can_blockage_radar_blocked
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "can_blockage_radar_blocked: ";
    rosidl_generator_traits::value_to_yaml(msg.can_blockage_radar_blocked, out);
    out << "\n";
  }

  // member: can_td_blocked
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "can_td_blocked: ";
    rosidl_generator_traits::value_to_yaml(msg.can_td_blocked, out);
    out << "\n";
  }

  // member: radar_tx_power_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "radar_tx_power_error: ";
    rosidl_generator_traits::value_to_yaml(msg.radar_tx_power_error, out);
    out << "\n";
  }

  // member: radar_lo_power_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "radar_lo_power_error: ";
    rosidl_generator_traits::value_to_yaml(msg.radar_lo_power_error, out);
    out << "\n";
  }

  // member: radar_data_sync_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "radar_data_sync_error: ";
    rosidl_generator_traits::value_to_yaml(msg.radar_data_sync_error, out);
    out << "\n";
  }

  // member: linearizer_spi_transfer_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "linearizer_spi_transfer_error: ";
    rosidl_generator_traits::value_to_yaml(msg.linearizer_spi_transfer_error, out);
    out << "\n";
  }

  // member: saturated_tuning_freq_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "saturated_tuning_freq_error: ";
    rosidl_generator_traits::value_to_yaml(msg.saturated_tuning_freq_error, out);
    out << "\n";
  }

  // member: rtn_spi_transfer_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rtn_spi_transfer_error: ";
    rosidl_generator_traits::value_to_yaml(msg.rtn_spi_transfer_error, out);
    out << "\n";
  }

  // member: rrn_spi_transfer_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rrn_spi_transfer_error: ";
    rosidl_generator_traits::value_to_yaml(msg.rrn_spi_transfer_error, out);
    out << "\n";
  }

  // member: video_port_capture_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "video_port_capture_error: ";
    rosidl_generator_traits::value_to_yaml(msg.video_port_capture_error, out);
    out << "\n";
  }

  // member: vertical_misalignment_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vertical_misalignment_error: ";
    rosidl_generator_traits::value_to_yaml(msg.vertical_misalignment_error, out);
    out << "\n";
  }

  // member: tx_temperature_fault
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tx_temperature_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.tx_temperature_fault, out);
    out << "\n";
  }

  // member: transmitter_id_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "transmitter_id_error: ";
    rosidl_generator_traits::value_to_yaml(msg.transmitter_id_error, out);
    out << "\n";
  }

  // member: dsp_unit_cal_checksum_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dsp_unit_cal_checksum_error: ";
    rosidl_generator_traits::value_to_yaml(msg.dsp_unit_cal_checksum_error, out);
    out << "\n";
  }

  // member: dsp_unit_cal_block_chcksm_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dsp_unit_cal_block_chcksm_error: ";
    rosidl_generator_traits::value_to_yaml(msg.dsp_unit_cal_block_chcksm_error, out);
    out << "\n";
  }

  // member: dsp_tuning_sensitivity_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dsp_tuning_sensitivity_error: ";
    rosidl_generator_traits::value_to_yaml(msg.dsp_tuning_sensitivity_error, out);
    out << "\n";
  }

  // member: dsp_loop_overrun_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dsp_loop_overrun_error: ";
    rosidl_generator_traits::value_to_yaml(msg.dsp_loop_overrun_error, out);
    out << "\n";
  }

  // member: adc_spi_transfer_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "adc_spi_transfer_error: ";
    rosidl_generator_traits::value_to_yaml(msg.adc_spi_transfer_error, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SrrStatus5 & msg, bool use_flow_style = false)
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

}  // namespace delphi_srr_msgs

namespace rosidl_generator_traits
{

[[deprecated("use delphi_srr_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const delphi_srr_msgs::msg::SrrStatus5 & msg,
  std::ostream & out, size_t indentation = 0)
{
  delphi_srr_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use delphi_srr_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const delphi_srr_msgs::msg::SrrStatus5 & msg)
{
  return delphi_srr_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<delphi_srr_msgs::msg::SrrStatus5>()
{
  return "delphi_srr_msgs::msg::SrrStatus5";
}

template<>
inline const char * name<delphi_srr_msgs::msg::SrrStatus5>()
{
  return "delphi_srr_msgs/msg/SrrStatus5";
}

template<>
struct has_fixed_size<delphi_srr_msgs::msg::SrrStatus5>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<delphi_srr_msgs::msg::SrrStatus5>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<delphi_srr_msgs::msg::SrrStatus5>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DELPHI_SRR_MSGS__MSG__DETAIL__SRR_STATUS5__TRAITS_HPP_

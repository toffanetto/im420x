// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from delphi_srr_msgs:msg/SrrDebug3.idl
// generated code does not contain a copyright notice

#ifndef DELPHI_SRR_MSGS__MSG__DETAIL__SRR_DEBUG3__TRAITS_HPP_
#define DELPHI_SRR_MSGS__MSG__DETAIL__SRR_DEBUG3__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "delphi_srr_msgs/msg/detail/srr_debug3__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace delphi_srr_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const SrrDebug3 & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: timer_create_error
  {
    out << "timer_create_error: ";
    rosidl_generator_traits::value_to_yaml(msg.timer_create_error, out);
    out << ", ";
  }

  // member: thread_create_error
  {
    out << "thread_create_error: ";
    rosidl_generator_traits::value_to_yaml(msg.thread_create_error, out);
    out << ", ";
  }

  // member: arm_calibration_error
  {
    out << "arm_calibration_error: ";
    rosidl_generator_traits::value_to_yaml(msg.arm_calibration_error, out);
    out << ", ";
  }

  // member: spi_fee_error
  {
    out << "spi_fee_error: ";
    rosidl_generator_traits::value_to_yaml(msg.spi_fee_error, out);
    out << ", ";
  }

  // member: spi_comm_error
  {
    out << "spi_comm_error: ";
    rosidl_generator_traits::value_to_yaml(msg.spi_comm_error, out);
    out << ", ";
  }

  // member: socket_write_error
  {
    out << "socket_write_error: ";
    rosidl_generator_traits::value_to_yaml(msg.socket_write_error, out);
    out << ", ";
  }

  // member: dsp_cal_obsolete_62_error
  {
    out << "dsp_cal_obsolete_62_error: ";
    rosidl_generator_traits::value_to_yaml(msg.dsp_cal_obsolete_62_error, out);
    out << ", ";
  }

  // member: socket_read_error
  {
    out << "socket_read_error: ";
    rosidl_generator_traits::value_to_yaml(msg.socket_read_error, out);
    out << ", ";
  }

  // member: socket_init_error
  {
    out << "socket_init_error: ";
    rosidl_generator_traits::value_to_yaml(msg.socket_init_error, out);
    out << ", ";
  }

  // member: signal_wait_error
  {
    out << "signal_wait_error: ";
    rosidl_generator_traits::value_to_yaml(msg.signal_wait_error, out);
    out << ", ";
  }

  // member: signal_send_error
  {
    out << "signal_send_error: ";
    rosidl_generator_traits::value_to_yaml(msg.signal_send_error, out);
    out << ", ";
  }

  // member: signal_create_error
  {
    out << "signal_create_error: ";
    rosidl_generator_traits::value_to_yaml(msg.signal_create_error, out);
    out << ", ";
  }

  // member: shared_mem_write_error
  {
    out << "shared_mem_write_error: ";
    rosidl_generator_traits::value_to_yaml(msg.shared_mem_write_error, out);
    out << ", ";
  }

  // member: shared_mem_read_error
  {
    out << "shared_mem_read_error: ";
    rosidl_generator_traits::value_to_yaml(msg.shared_mem_read_error, out);
    out << ", ";
  }

  // member: shared_mem_config_error
  {
    out << "shared_mem_config_error: ";
    rosidl_generator_traits::value_to_yaml(msg.shared_mem_config_error, out);
    out << ", ";
  }

  // member: share_mem_init_error
  {
    out << "share_mem_init_error: ";
    rosidl_generator_traits::value_to_yaml(msg.share_mem_init_error, out);
    out << ", ";
  }

  // member: ram_test_error
  {
    out << "ram_test_error: ";
    rosidl_generator_traits::value_to_yaml(msg.ram_test_error, out);
    out << ", ";
  }

  // member: num_errors
  {
    out << "num_errors: ";
    rosidl_generator_traits::value_to_yaml(msg.num_errors, out);
    out << ", ";
  }

  // member: mmap_memory_error
  {
    out << "mmap_memory_error: ";
    rosidl_generator_traits::value_to_yaml(msg.mmap_memory_error, out);
    out << ", ";
  }

  // member: isr_attach_error
  {
    out << "isr_attach_error: ";
    rosidl_generator_traits::value_to_yaml(msg.isr_attach_error, out);
    out << ", ";
  }

  // member: ipc_drv_write_error
  {
    out << "ipc_drv_write_error: ";
    rosidl_generator_traits::value_to_yaml(msg.ipc_drv_write_error, out);
    out << ", ";
  }

  // member: ipc_drv_trigger_error
  {
    out << "ipc_drv_trigger_error: ";
    rosidl_generator_traits::value_to_yaml(msg.ipc_drv_trigger_error, out);
    out << ", ";
  }

  // member: ipc_drv_sync_error
  {
    out << "ipc_drv_sync_error: ";
    rosidl_generator_traits::value_to_yaml(msg.ipc_drv_sync_error, out);
    out << ", ";
  }

  // member: ipc_drv_read_error
  {
    out << "ipc_drv_read_error: ";
    rosidl_generator_traits::value_to_yaml(msg.ipc_drv_read_error, out);
    out << ", ";
  }

  // member: ipc_drv_init_error
  {
    out << "ipc_drv_init_error: ";
    rosidl_generator_traits::value_to_yaml(msg.ipc_drv_init_error, out);
    out << ", ";
  }

  // member: interrupt_enable_error
  {
    out << "interrupt_enable_error: ";
    rosidl_generator_traits::value_to_yaml(msg.interrupt_enable_error, out);
    out << ", ";
  }

  // member: hil_format_error
  {
    out << "hil_format_error: ";
    rosidl_generator_traits::value_to_yaml(msg.hil_format_error, out);
    out << ", ";
  }

  // member: flash_filesystem_error
  {
    out << "flash_filesystem_error: ";
    rosidl_generator_traits::value_to_yaml(msg.flash_filesystem_error, out);
    out << ", ";
  }

  // member: error_none
  {
    out << "error_none: ";
    rosidl_generator_traits::value_to_yaml(msg.error_none, out);
    out << ", ";
  }

  // member: dsp_load_read_error
  {
    out << "dsp_load_read_error: ";
    rosidl_generator_traits::value_to_yaml(msg.dsp_load_read_error, out);
    out << ", ";
  }

  // member: dsp_load_open_error
  {
    out << "dsp_load_open_error: ";
    rosidl_generator_traits::value_to_yaml(msg.dsp_load_open_error, out);
    out << ", ";
  }

  // member: dsp_load_address_error
  {
    out << "dsp_load_address_error: ";
    rosidl_generator_traits::value_to_yaml(msg.dsp_load_address_error, out);
    out << ", ";
  }

  // member: dsp_isp_write_error
  {
    out << "dsp_isp_write_error: ";
    rosidl_generator_traits::value_to_yaml(msg.dsp_isp_write_error, out);
    out << ", ";
  }

  // member: dsp_ipc_read_error
  {
    out << "dsp_ipc_read_error: ";
    rosidl_generator_traits::value_to_yaml(msg.dsp_ipc_read_error, out);
    out << ", ";
  }

  // member: dsp_ipc_init
  {
    out << "dsp_ipc_init: ";
    rosidl_generator_traits::value_to_yaml(msg.dsp_ipc_init, out);
    out << ", ";
  }

  // member: dsp_init_error
  {
    out << "dsp_init_error: ";
    rosidl_generator_traits::value_to_yaml(msg.dsp_init_error, out);
    out << ", ";
  }

  // member: dsp_drv_start_error
  {
    out << "dsp_drv_start_error: ";
    rosidl_generator_traits::value_to_yaml(msg.dsp_drv_start_error, out);
    out << ", ";
  }

  // member: dsp_drv_load_error
  {
    out << "dsp_drv_load_error: ";
    rosidl_generator_traits::value_to_yaml(msg.dsp_drv_load_error, out);
    out << ", ";
  }

  // member: dsp_drv_init_error
  {
    out << "dsp_drv_init_error: ";
    rosidl_generator_traits::value_to_yaml(msg.dsp_drv_init_error, out);
    out << ", ";
  }

  // member: dsp_drv_init2_error
  {
    out << "dsp_drv_init2_error: ";
    rosidl_generator_traits::value_to_yaml(msg.dsp_drv_init2_error, out);
    out << ", ";
  }

  // member: dsp_drv_init1_error
  {
    out << "dsp_drv_init1_error: ";
    rosidl_generator_traits::value_to_yaml(msg.dsp_drv_init1_error, out);
    out << ", ";
  }

  // member: dsp_calibration_error
  {
    out << "dsp_calibration_error: ";
    rosidl_generator_traits::value_to_yaml(msg.dsp_calibration_error, out);
    out << ", ";
  }

  // member: can_xmt_error
  {
    out << "can_xmt_error: ";
    rosidl_generator_traits::value_to_yaml(msg.can_xmt_error, out);
    out << ", ";
  }

  // member: can_rcv_error
  {
    out << "can_rcv_error: ";
    rosidl_generator_traits::value_to_yaml(msg.can_rcv_error, out);
    out << ", ";
  }

  // member: can_hardware_error
  {
    out << "can_hardware_error: ";
    rosidl_generator_traits::value_to_yaml(msg.can_hardware_error, out);
    out << ", ";
  }

  // member: always_true
  {
    out << "always_true: ";
    rosidl_generator_traits::value_to_yaml(msg.always_true, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SrrDebug3 & msg,
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

  // member: timer_create_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timer_create_error: ";
    rosidl_generator_traits::value_to_yaml(msg.timer_create_error, out);
    out << "\n";
  }

  // member: thread_create_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "thread_create_error: ";
    rosidl_generator_traits::value_to_yaml(msg.thread_create_error, out);
    out << "\n";
  }

  // member: arm_calibration_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "arm_calibration_error: ";
    rosidl_generator_traits::value_to_yaml(msg.arm_calibration_error, out);
    out << "\n";
  }

  // member: spi_fee_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "spi_fee_error: ";
    rosidl_generator_traits::value_to_yaml(msg.spi_fee_error, out);
    out << "\n";
  }

  // member: spi_comm_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "spi_comm_error: ";
    rosidl_generator_traits::value_to_yaml(msg.spi_comm_error, out);
    out << "\n";
  }

  // member: socket_write_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "socket_write_error: ";
    rosidl_generator_traits::value_to_yaml(msg.socket_write_error, out);
    out << "\n";
  }

  // member: dsp_cal_obsolete_62_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dsp_cal_obsolete_62_error: ";
    rosidl_generator_traits::value_to_yaml(msg.dsp_cal_obsolete_62_error, out);
    out << "\n";
  }

  // member: socket_read_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "socket_read_error: ";
    rosidl_generator_traits::value_to_yaml(msg.socket_read_error, out);
    out << "\n";
  }

  // member: socket_init_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "socket_init_error: ";
    rosidl_generator_traits::value_to_yaml(msg.socket_init_error, out);
    out << "\n";
  }

  // member: signal_wait_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "signal_wait_error: ";
    rosidl_generator_traits::value_to_yaml(msg.signal_wait_error, out);
    out << "\n";
  }

  // member: signal_send_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "signal_send_error: ";
    rosidl_generator_traits::value_to_yaml(msg.signal_send_error, out);
    out << "\n";
  }

  // member: signal_create_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "signal_create_error: ";
    rosidl_generator_traits::value_to_yaml(msg.signal_create_error, out);
    out << "\n";
  }

  // member: shared_mem_write_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "shared_mem_write_error: ";
    rosidl_generator_traits::value_to_yaml(msg.shared_mem_write_error, out);
    out << "\n";
  }

  // member: shared_mem_read_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "shared_mem_read_error: ";
    rosidl_generator_traits::value_to_yaml(msg.shared_mem_read_error, out);
    out << "\n";
  }

  // member: shared_mem_config_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "shared_mem_config_error: ";
    rosidl_generator_traits::value_to_yaml(msg.shared_mem_config_error, out);
    out << "\n";
  }

  // member: share_mem_init_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "share_mem_init_error: ";
    rosidl_generator_traits::value_to_yaml(msg.share_mem_init_error, out);
    out << "\n";
  }

  // member: ram_test_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ram_test_error: ";
    rosidl_generator_traits::value_to_yaml(msg.ram_test_error, out);
    out << "\n";
  }

  // member: num_errors
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "num_errors: ";
    rosidl_generator_traits::value_to_yaml(msg.num_errors, out);
    out << "\n";
  }

  // member: mmap_memory_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mmap_memory_error: ";
    rosidl_generator_traits::value_to_yaml(msg.mmap_memory_error, out);
    out << "\n";
  }

  // member: isr_attach_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "isr_attach_error: ";
    rosidl_generator_traits::value_to_yaml(msg.isr_attach_error, out);
    out << "\n";
  }

  // member: ipc_drv_write_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ipc_drv_write_error: ";
    rosidl_generator_traits::value_to_yaml(msg.ipc_drv_write_error, out);
    out << "\n";
  }

  // member: ipc_drv_trigger_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ipc_drv_trigger_error: ";
    rosidl_generator_traits::value_to_yaml(msg.ipc_drv_trigger_error, out);
    out << "\n";
  }

  // member: ipc_drv_sync_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ipc_drv_sync_error: ";
    rosidl_generator_traits::value_to_yaml(msg.ipc_drv_sync_error, out);
    out << "\n";
  }

  // member: ipc_drv_read_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ipc_drv_read_error: ";
    rosidl_generator_traits::value_to_yaml(msg.ipc_drv_read_error, out);
    out << "\n";
  }

  // member: ipc_drv_init_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ipc_drv_init_error: ";
    rosidl_generator_traits::value_to_yaml(msg.ipc_drv_init_error, out);
    out << "\n";
  }

  // member: interrupt_enable_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "interrupt_enable_error: ";
    rosidl_generator_traits::value_to_yaml(msg.interrupt_enable_error, out);
    out << "\n";
  }

  // member: hil_format_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hil_format_error: ";
    rosidl_generator_traits::value_to_yaml(msg.hil_format_error, out);
    out << "\n";
  }

  // member: flash_filesystem_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "flash_filesystem_error: ";
    rosidl_generator_traits::value_to_yaml(msg.flash_filesystem_error, out);
    out << "\n";
  }

  // member: error_none
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "error_none: ";
    rosidl_generator_traits::value_to_yaml(msg.error_none, out);
    out << "\n";
  }

  // member: dsp_load_read_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dsp_load_read_error: ";
    rosidl_generator_traits::value_to_yaml(msg.dsp_load_read_error, out);
    out << "\n";
  }

  // member: dsp_load_open_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dsp_load_open_error: ";
    rosidl_generator_traits::value_to_yaml(msg.dsp_load_open_error, out);
    out << "\n";
  }

  // member: dsp_load_address_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dsp_load_address_error: ";
    rosidl_generator_traits::value_to_yaml(msg.dsp_load_address_error, out);
    out << "\n";
  }

  // member: dsp_isp_write_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dsp_isp_write_error: ";
    rosidl_generator_traits::value_to_yaml(msg.dsp_isp_write_error, out);
    out << "\n";
  }

  // member: dsp_ipc_read_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dsp_ipc_read_error: ";
    rosidl_generator_traits::value_to_yaml(msg.dsp_ipc_read_error, out);
    out << "\n";
  }

  // member: dsp_ipc_init
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dsp_ipc_init: ";
    rosidl_generator_traits::value_to_yaml(msg.dsp_ipc_init, out);
    out << "\n";
  }

  // member: dsp_init_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dsp_init_error: ";
    rosidl_generator_traits::value_to_yaml(msg.dsp_init_error, out);
    out << "\n";
  }

  // member: dsp_drv_start_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dsp_drv_start_error: ";
    rosidl_generator_traits::value_to_yaml(msg.dsp_drv_start_error, out);
    out << "\n";
  }

  // member: dsp_drv_load_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dsp_drv_load_error: ";
    rosidl_generator_traits::value_to_yaml(msg.dsp_drv_load_error, out);
    out << "\n";
  }

  // member: dsp_drv_init_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dsp_drv_init_error: ";
    rosidl_generator_traits::value_to_yaml(msg.dsp_drv_init_error, out);
    out << "\n";
  }

  // member: dsp_drv_init2_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dsp_drv_init2_error: ";
    rosidl_generator_traits::value_to_yaml(msg.dsp_drv_init2_error, out);
    out << "\n";
  }

  // member: dsp_drv_init1_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dsp_drv_init1_error: ";
    rosidl_generator_traits::value_to_yaml(msg.dsp_drv_init1_error, out);
    out << "\n";
  }

  // member: dsp_calibration_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dsp_calibration_error: ";
    rosidl_generator_traits::value_to_yaml(msg.dsp_calibration_error, out);
    out << "\n";
  }

  // member: can_xmt_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "can_xmt_error: ";
    rosidl_generator_traits::value_to_yaml(msg.can_xmt_error, out);
    out << "\n";
  }

  // member: can_rcv_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "can_rcv_error: ";
    rosidl_generator_traits::value_to_yaml(msg.can_rcv_error, out);
    out << "\n";
  }

  // member: can_hardware_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "can_hardware_error: ";
    rosidl_generator_traits::value_to_yaml(msg.can_hardware_error, out);
    out << "\n";
  }

  // member: always_true
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "always_true: ";
    rosidl_generator_traits::value_to_yaml(msg.always_true, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SrrDebug3 & msg, bool use_flow_style = false)
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
  const delphi_srr_msgs::msg::SrrDebug3 & msg,
  std::ostream & out, size_t indentation = 0)
{
  delphi_srr_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use delphi_srr_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const delphi_srr_msgs::msg::SrrDebug3 & msg)
{
  return delphi_srr_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<delphi_srr_msgs::msg::SrrDebug3>()
{
  return "delphi_srr_msgs::msg::SrrDebug3";
}

template<>
inline const char * name<delphi_srr_msgs::msg::SrrDebug3>()
{
  return "delphi_srr_msgs/msg/SrrDebug3";
}

template<>
struct has_fixed_size<delphi_srr_msgs::msg::SrrDebug3>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<delphi_srr_msgs::msg::SrrDebug3>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<delphi_srr_msgs::msg::SrrDebug3>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DELPHI_SRR_MSGS__MSG__DETAIL__SRR_DEBUG3__TRAITS_HPP_

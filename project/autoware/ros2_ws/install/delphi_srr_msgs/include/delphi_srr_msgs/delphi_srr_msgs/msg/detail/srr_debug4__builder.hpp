// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from delphi_srr_msgs:msg/SrrDebug4.idl
// generated code does not contain a copyright notice

#ifndef DELPHI_SRR_MSGS__MSG__DETAIL__SRR_DEBUG4__BUILDER_HPP_
#define DELPHI_SRR_MSGS__MSG__DETAIL__SRR_DEBUG4__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "delphi_srr_msgs/msg/detail/srr_debug4__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace delphi_srr_msgs
{

namespace msg
{

namespace builder
{

class Init_SrrDebug4_always_true
{
public:
  explicit Init_SrrDebug4_always_true(::delphi_srr_msgs::msg::SrrDebug4 & msg)
  : msg_(msg)
  {}
  ::delphi_srr_msgs::msg::SrrDebug4 always_true(::delphi_srr_msgs::msg::SrrDebug4::_always_true_type arg)
  {
    msg_.always_true = std::move(arg);
    return std::move(msg_);
  }

private:
  ::delphi_srr_msgs::msg::SrrDebug4 msg_;
};

class Init_SrrDebug4_can_hardware_error
{
public:
  explicit Init_SrrDebug4_can_hardware_error(::delphi_srr_msgs::msg::SrrDebug4 & msg)
  : msg_(msg)
  {}
  Init_SrrDebug4_always_true can_hardware_error(::delphi_srr_msgs::msg::SrrDebug4::_can_hardware_error_type arg)
  {
    msg_.can_hardware_error = std::move(arg);
    return Init_SrrDebug4_always_true(msg_);
  }

private:
  ::delphi_srr_msgs::msg::SrrDebug4 msg_;
};

class Init_SrrDebug4_can_rcv_error
{
public:
  explicit Init_SrrDebug4_can_rcv_error(::delphi_srr_msgs::msg::SrrDebug4 & msg)
  : msg_(msg)
  {}
  Init_SrrDebug4_can_hardware_error can_rcv_error(::delphi_srr_msgs::msg::SrrDebug4::_can_rcv_error_type arg)
  {
    msg_.can_rcv_error = std::move(arg);
    return Init_SrrDebug4_can_hardware_error(msg_);
  }

private:
  ::delphi_srr_msgs::msg::SrrDebug4 msg_;
};

class Init_SrrDebug4_can_xmt_error
{
public:
  explicit Init_SrrDebug4_can_xmt_error(::delphi_srr_msgs::msg::SrrDebug4 & msg)
  : msg_(msg)
  {}
  Init_SrrDebug4_can_rcv_error can_xmt_error(::delphi_srr_msgs::msg::SrrDebug4::_can_xmt_error_type arg)
  {
    msg_.can_xmt_error = std::move(arg);
    return Init_SrrDebug4_can_rcv_error(msg_);
  }

private:
  ::delphi_srr_msgs::msg::SrrDebug4 msg_;
};

class Init_SrrDebug4_dsp_calibration_error
{
public:
  explicit Init_SrrDebug4_dsp_calibration_error(::delphi_srr_msgs::msg::SrrDebug4 & msg)
  : msg_(msg)
  {}
  Init_SrrDebug4_can_xmt_error dsp_calibration_error(::delphi_srr_msgs::msg::SrrDebug4::_dsp_calibration_error_type arg)
  {
    msg_.dsp_calibration_error = std::move(arg);
    return Init_SrrDebug4_can_xmt_error(msg_);
  }

private:
  ::delphi_srr_msgs::msg::SrrDebug4 msg_;
};

class Init_SrrDebug4_dsp_drv_init1_error
{
public:
  explicit Init_SrrDebug4_dsp_drv_init1_error(::delphi_srr_msgs::msg::SrrDebug4 & msg)
  : msg_(msg)
  {}
  Init_SrrDebug4_dsp_calibration_error dsp_drv_init1_error(::delphi_srr_msgs::msg::SrrDebug4::_dsp_drv_init1_error_type arg)
  {
    msg_.dsp_drv_init1_error = std::move(arg);
    return Init_SrrDebug4_dsp_calibration_error(msg_);
  }

private:
  ::delphi_srr_msgs::msg::SrrDebug4 msg_;
};

class Init_SrrDebug4_dsp_drv_init2_error
{
public:
  explicit Init_SrrDebug4_dsp_drv_init2_error(::delphi_srr_msgs::msg::SrrDebug4 & msg)
  : msg_(msg)
  {}
  Init_SrrDebug4_dsp_drv_init1_error dsp_drv_init2_error(::delphi_srr_msgs::msg::SrrDebug4::_dsp_drv_init2_error_type arg)
  {
    msg_.dsp_drv_init2_error = std::move(arg);
    return Init_SrrDebug4_dsp_drv_init1_error(msg_);
  }

private:
  ::delphi_srr_msgs::msg::SrrDebug4 msg_;
};

class Init_SrrDebug4_dsp_drv_init_error
{
public:
  explicit Init_SrrDebug4_dsp_drv_init_error(::delphi_srr_msgs::msg::SrrDebug4 & msg)
  : msg_(msg)
  {}
  Init_SrrDebug4_dsp_drv_init2_error dsp_drv_init_error(::delphi_srr_msgs::msg::SrrDebug4::_dsp_drv_init_error_type arg)
  {
    msg_.dsp_drv_init_error = std::move(arg);
    return Init_SrrDebug4_dsp_drv_init2_error(msg_);
  }

private:
  ::delphi_srr_msgs::msg::SrrDebug4 msg_;
};

class Init_SrrDebug4_dsp_drv_load_error
{
public:
  explicit Init_SrrDebug4_dsp_drv_load_error(::delphi_srr_msgs::msg::SrrDebug4 & msg)
  : msg_(msg)
  {}
  Init_SrrDebug4_dsp_drv_init_error dsp_drv_load_error(::delphi_srr_msgs::msg::SrrDebug4::_dsp_drv_load_error_type arg)
  {
    msg_.dsp_drv_load_error = std::move(arg);
    return Init_SrrDebug4_dsp_drv_init_error(msg_);
  }

private:
  ::delphi_srr_msgs::msg::SrrDebug4 msg_;
};

class Init_SrrDebug4_dsp_drv_start_error
{
public:
  explicit Init_SrrDebug4_dsp_drv_start_error(::delphi_srr_msgs::msg::SrrDebug4 & msg)
  : msg_(msg)
  {}
  Init_SrrDebug4_dsp_drv_load_error dsp_drv_start_error(::delphi_srr_msgs::msg::SrrDebug4::_dsp_drv_start_error_type arg)
  {
    msg_.dsp_drv_start_error = std::move(arg);
    return Init_SrrDebug4_dsp_drv_load_error(msg_);
  }

private:
  ::delphi_srr_msgs::msg::SrrDebug4 msg_;
};

class Init_SrrDebug4_dsp_init_error
{
public:
  explicit Init_SrrDebug4_dsp_init_error(::delphi_srr_msgs::msg::SrrDebug4 & msg)
  : msg_(msg)
  {}
  Init_SrrDebug4_dsp_drv_start_error dsp_init_error(::delphi_srr_msgs::msg::SrrDebug4::_dsp_init_error_type arg)
  {
    msg_.dsp_init_error = std::move(arg);
    return Init_SrrDebug4_dsp_drv_start_error(msg_);
  }

private:
  ::delphi_srr_msgs::msg::SrrDebug4 msg_;
};

class Init_SrrDebug4_dsp_ipc_init
{
public:
  explicit Init_SrrDebug4_dsp_ipc_init(::delphi_srr_msgs::msg::SrrDebug4 & msg)
  : msg_(msg)
  {}
  Init_SrrDebug4_dsp_init_error dsp_ipc_init(::delphi_srr_msgs::msg::SrrDebug4::_dsp_ipc_init_type arg)
  {
    msg_.dsp_ipc_init = std::move(arg);
    return Init_SrrDebug4_dsp_init_error(msg_);
  }

private:
  ::delphi_srr_msgs::msg::SrrDebug4 msg_;
};

class Init_SrrDebug4_dsp_ipc_read_error
{
public:
  explicit Init_SrrDebug4_dsp_ipc_read_error(::delphi_srr_msgs::msg::SrrDebug4 & msg)
  : msg_(msg)
  {}
  Init_SrrDebug4_dsp_ipc_init dsp_ipc_read_error(::delphi_srr_msgs::msg::SrrDebug4::_dsp_ipc_read_error_type arg)
  {
    msg_.dsp_ipc_read_error = std::move(arg);
    return Init_SrrDebug4_dsp_ipc_init(msg_);
  }

private:
  ::delphi_srr_msgs::msg::SrrDebug4 msg_;
};

class Init_SrrDebug4_dsp_isp_write_error
{
public:
  explicit Init_SrrDebug4_dsp_isp_write_error(::delphi_srr_msgs::msg::SrrDebug4 & msg)
  : msg_(msg)
  {}
  Init_SrrDebug4_dsp_ipc_read_error dsp_isp_write_error(::delphi_srr_msgs::msg::SrrDebug4::_dsp_isp_write_error_type arg)
  {
    msg_.dsp_isp_write_error = std::move(arg);
    return Init_SrrDebug4_dsp_ipc_read_error(msg_);
  }

private:
  ::delphi_srr_msgs::msg::SrrDebug4 msg_;
};

class Init_SrrDebug4_dsp_load_address_error
{
public:
  explicit Init_SrrDebug4_dsp_load_address_error(::delphi_srr_msgs::msg::SrrDebug4 & msg)
  : msg_(msg)
  {}
  Init_SrrDebug4_dsp_isp_write_error dsp_load_address_error(::delphi_srr_msgs::msg::SrrDebug4::_dsp_load_address_error_type arg)
  {
    msg_.dsp_load_address_error = std::move(arg);
    return Init_SrrDebug4_dsp_isp_write_error(msg_);
  }

private:
  ::delphi_srr_msgs::msg::SrrDebug4 msg_;
};

class Init_SrrDebug4_dsp_load_open_error
{
public:
  explicit Init_SrrDebug4_dsp_load_open_error(::delphi_srr_msgs::msg::SrrDebug4 & msg)
  : msg_(msg)
  {}
  Init_SrrDebug4_dsp_load_address_error dsp_load_open_error(::delphi_srr_msgs::msg::SrrDebug4::_dsp_load_open_error_type arg)
  {
    msg_.dsp_load_open_error = std::move(arg);
    return Init_SrrDebug4_dsp_load_address_error(msg_);
  }

private:
  ::delphi_srr_msgs::msg::SrrDebug4 msg_;
};

class Init_SrrDebug4_dsp_load_read_error
{
public:
  explicit Init_SrrDebug4_dsp_load_read_error(::delphi_srr_msgs::msg::SrrDebug4 & msg)
  : msg_(msg)
  {}
  Init_SrrDebug4_dsp_load_open_error dsp_load_read_error(::delphi_srr_msgs::msg::SrrDebug4::_dsp_load_read_error_type arg)
  {
    msg_.dsp_load_read_error = std::move(arg);
    return Init_SrrDebug4_dsp_load_open_error(msg_);
  }

private:
  ::delphi_srr_msgs::msg::SrrDebug4 msg_;
};

class Init_SrrDebug4_error_none
{
public:
  explicit Init_SrrDebug4_error_none(::delphi_srr_msgs::msg::SrrDebug4 & msg)
  : msg_(msg)
  {}
  Init_SrrDebug4_dsp_load_read_error error_none(::delphi_srr_msgs::msg::SrrDebug4::_error_none_type arg)
  {
    msg_.error_none = std::move(arg);
    return Init_SrrDebug4_dsp_load_read_error(msg_);
  }

private:
  ::delphi_srr_msgs::msg::SrrDebug4 msg_;
};

class Init_SrrDebug4_flash_filesystem_error
{
public:
  explicit Init_SrrDebug4_flash_filesystem_error(::delphi_srr_msgs::msg::SrrDebug4 & msg)
  : msg_(msg)
  {}
  Init_SrrDebug4_error_none flash_filesystem_error(::delphi_srr_msgs::msg::SrrDebug4::_flash_filesystem_error_type arg)
  {
    msg_.flash_filesystem_error = std::move(arg);
    return Init_SrrDebug4_error_none(msg_);
  }

private:
  ::delphi_srr_msgs::msg::SrrDebug4 msg_;
};

class Init_SrrDebug4_hil_format_error
{
public:
  explicit Init_SrrDebug4_hil_format_error(::delphi_srr_msgs::msg::SrrDebug4 & msg)
  : msg_(msg)
  {}
  Init_SrrDebug4_flash_filesystem_error hil_format_error(::delphi_srr_msgs::msg::SrrDebug4::_hil_format_error_type arg)
  {
    msg_.hil_format_error = std::move(arg);
    return Init_SrrDebug4_flash_filesystem_error(msg_);
  }

private:
  ::delphi_srr_msgs::msg::SrrDebug4 msg_;
};

class Init_SrrDebug4_interrupt_enable_error
{
public:
  explicit Init_SrrDebug4_interrupt_enable_error(::delphi_srr_msgs::msg::SrrDebug4 & msg)
  : msg_(msg)
  {}
  Init_SrrDebug4_hil_format_error interrupt_enable_error(::delphi_srr_msgs::msg::SrrDebug4::_interrupt_enable_error_type arg)
  {
    msg_.interrupt_enable_error = std::move(arg);
    return Init_SrrDebug4_hil_format_error(msg_);
  }

private:
  ::delphi_srr_msgs::msg::SrrDebug4 msg_;
};

class Init_SrrDebug4_ipc_drv_init_error
{
public:
  explicit Init_SrrDebug4_ipc_drv_init_error(::delphi_srr_msgs::msg::SrrDebug4 & msg)
  : msg_(msg)
  {}
  Init_SrrDebug4_interrupt_enable_error ipc_drv_init_error(::delphi_srr_msgs::msg::SrrDebug4::_ipc_drv_init_error_type arg)
  {
    msg_.ipc_drv_init_error = std::move(arg);
    return Init_SrrDebug4_interrupt_enable_error(msg_);
  }

private:
  ::delphi_srr_msgs::msg::SrrDebug4 msg_;
};

class Init_SrrDebug4_ipc_drv_read_error
{
public:
  explicit Init_SrrDebug4_ipc_drv_read_error(::delphi_srr_msgs::msg::SrrDebug4 & msg)
  : msg_(msg)
  {}
  Init_SrrDebug4_ipc_drv_init_error ipc_drv_read_error(::delphi_srr_msgs::msg::SrrDebug4::_ipc_drv_read_error_type arg)
  {
    msg_.ipc_drv_read_error = std::move(arg);
    return Init_SrrDebug4_ipc_drv_init_error(msg_);
  }

private:
  ::delphi_srr_msgs::msg::SrrDebug4 msg_;
};

class Init_SrrDebug4_ipc_drv_sync_error
{
public:
  explicit Init_SrrDebug4_ipc_drv_sync_error(::delphi_srr_msgs::msg::SrrDebug4 & msg)
  : msg_(msg)
  {}
  Init_SrrDebug4_ipc_drv_read_error ipc_drv_sync_error(::delphi_srr_msgs::msg::SrrDebug4::_ipc_drv_sync_error_type arg)
  {
    msg_.ipc_drv_sync_error = std::move(arg);
    return Init_SrrDebug4_ipc_drv_read_error(msg_);
  }

private:
  ::delphi_srr_msgs::msg::SrrDebug4 msg_;
};

class Init_SrrDebug4_ipc_drv_trigger_error
{
public:
  explicit Init_SrrDebug4_ipc_drv_trigger_error(::delphi_srr_msgs::msg::SrrDebug4 & msg)
  : msg_(msg)
  {}
  Init_SrrDebug4_ipc_drv_sync_error ipc_drv_trigger_error(::delphi_srr_msgs::msg::SrrDebug4::_ipc_drv_trigger_error_type arg)
  {
    msg_.ipc_drv_trigger_error = std::move(arg);
    return Init_SrrDebug4_ipc_drv_sync_error(msg_);
  }

private:
  ::delphi_srr_msgs::msg::SrrDebug4 msg_;
};

class Init_SrrDebug4_ipc_drv_write_error
{
public:
  explicit Init_SrrDebug4_ipc_drv_write_error(::delphi_srr_msgs::msg::SrrDebug4 & msg)
  : msg_(msg)
  {}
  Init_SrrDebug4_ipc_drv_trigger_error ipc_drv_write_error(::delphi_srr_msgs::msg::SrrDebug4::_ipc_drv_write_error_type arg)
  {
    msg_.ipc_drv_write_error = std::move(arg);
    return Init_SrrDebug4_ipc_drv_trigger_error(msg_);
  }

private:
  ::delphi_srr_msgs::msg::SrrDebug4 msg_;
};

class Init_SrrDebug4_isr_attach_error
{
public:
  explicit Init_SrrDebug4_isr_attach_error(::delphi_srr_msgs::msg::SrrDebug4 & msg)
  : msg_(msg)
  {}
  Init_SrrDebug4_ipc_drv_write_error isr_attach_error(::delphi_srr_msgs::msg::SrrDebug4::_isr_attach_error_type arg)
  {
    msg_.isr_attach_error = std::move(arg);
    return Init_SrrDebug4_ipc_drv_write_error(msg_);
  }

private:
  ::delphi_srr_msgs::msg::SrrDebug4 msg_;
};

class Init_SrrDebug4_mmap_memory_error
{
public:
  explicit Init_SrrDebug4_mmap_memory_error(::delphi_srr_msgs::msg::SrrDebug4 & msg)
  : msg_(msg)
  {}
  Init_SrrDebug4_isr_attach_error mmap_memory_error(::delphi_srr_msgs::msg::SrrDebug4::_mmap_memory_error_type arg)
  {
    msg_.mmap_memory_error = std::move(arg);
    return Init_SrrDebug4_isr_attach_error(msg_);
  }

private:
  ::delphi_srr_msgs::msg::SrrDebug4 msg_;
};

class Init_SrrDebug4_num_errors
{
public:
  explicit Init_SrrDebug4_num_errors(::delphi_srr_msgs::msg::SrrDebug4 & msg)
  : msg_(msg)
  {}
  Init_SrrDebug4_mmap_memory_error num_errors(::delphi_srr_msgs::msg::SrrDebug4::_num_errors_type arg)
  {
    msg_.num_errors = std::move(arg);
    return Init_SrrDebug4_mmap_memory_error(msg_);
  }

private:
  ::delphi_srr_msgs::msg::SrrDebug4 msg_;
};

class Init_SrrDebug4_ram_test_error
{
public:
  explicit Init_SrrDebug4_ram_test_error(::delphi_srr_msgs::msg::SrrDebug4 & msg)
  : msg_(msg)
  {}
  Init_SrrDebug4_num_errors ram_test_error(::delphi_srr_msgs::msg::SrrDebug4::_ram_test_error_type arg)
  {
    msg_.ram_test_error = std::move(arg);
    return Init_SrrDebug4_num_errors(msg_);
  }

private:
  ::delphi_srr_msgs::msg::SrrDebug4 msg_;
};

class Init_SrrDebug4_share_mem_init_error
{
public:
  explicit Init_SrrDebug4_share_mem_init_error(::delphi_srr_msgs::msg::SrrDebug4 & msg)
  : msg_(msg)
  {}
  Init_SrrDebug4_ram_test_error share_mem_init_error(::delphi_srr_msgs::msg::SrrDebug4::_share_mem_init_error_type arg)
  {
    msg_.share_mem_init_error = std::move(arg);
    return Init_SrrDebug4_ram_test_error(msg_);
  }

private:
  ::delphi_srr_msgs::msg::SrrDebug4 msg_;
};

class Init_SrrDebug4_shared_mem_config_error
{
public:
  explicit Init_SrrDebug4_shared_mem_config_error(::delphi_srr_msgs::msg::SrrDebug4 & msg)
  : msg_(msg)
  {}
  Init_SrrDebug4_share_mem_init_error shared_mem_config_error(::delphi_srr_msgs::msg::SrrDebug4::_shared_mem_config_error_type arg)
  {
    msg_.shared_mem_config_error = std::move(arg);
    return Init_SrrDebug4_share_mem_init_error(msg_);
  }

private:
  ::delphi_srr_msgs::msg::SrrDebug4 msg_;
};

class Init_SrrDebug4_shared_mem_read_error
{
public:
  explicit Init_SrrDebug4_shared_mem_read_error(::delphi_srr_msgs::msg::SrrDebug4 & msg)
  : msg_(msg)
  {}
  Init_SrrDebug4_shared_mem_config_error shared_mem_read_error(::delphi_srr_msgs::msg::SrrDebug4::_shared_mem_read_error_type arg)
  {
    msg_.shared_mem_read_error = std::move(arg);
    return Init_SrrDebug4_shared_mem_config_error(msg_);
  }

private:
  ::delphi_srr_msgs::msg::SrrDebug4 msg_;
};

class Init_SrrDebug4_shared_mem_write_error
{
public:
  explicit Init_SrrDebug4_shared_mem_write_error(::delphi_srr_msgs::msg::SrrDebug4 & msg)
  : msg_(msg)
  {}
  Init_SrrDebug4_shared_mem_read_error shared_mem_write_error(::delphi_srr_msgs::msg::SrrDebug4::_shared_mem_write_error_type arg)
  {
    msg_.shared_mem_write_error = std::move(arg);
    return Init_SrrDebug4_shared_mem_read_error(msg_);
  }

private:
  ::delphi_srr_msgs::msg::SrrDebug4 msg_;
};

class Init_SrrDebug4_signal_create_error
{
public:
  explicit Init_SrrDebug4_signal_create_error(::delphi_srr_msgs::msg::SrrDebug4 & msg)
  : msg_(msg)
  {}
  Init_SrrDebug4_shared_mem_write_error signal_create_error(::delphi_srr_msgs::msg::SrrDebug4::_signal_create_error_type arg)
  {
    msg_.signal_create_error = std::move(arg);
    return Init_SrrDebug4_shared_mem_write_error(msg_);
  }

private:
  ::delphi_srr_msgs::msg::SrrDebug4 msg_;
};

class Init_SrrDebug4_signal_send_error
{
public:
  explicit Init_SrrDebug4_signal_send_error(::delphi_srr_msgs::msg::SrrDebug4 & msg)
  : msg_(msg)
  {}
  Init_SrrDebug4_signal_create_error signal_send_error(::delphi_srr_msgs::msg::SrrDebug4::_signal_send_error_type arg)
  {
    msg_.signal_send_error = std::move(arg);
    return Init_SrrDebug4_signal_create_error(msg_);
  }

private:
  ::delphi_srr_msgs::msg::SrrDebug4 msg_;
};

class Init_SrrDebug4_signal_wait_error
{
public:
  explicit Init_SrrDebug4_signal_wait_error(::delphi_srr_msgs::msg::SrrDebug4 & msg)
  : msg_(msg)
  {}
  Init_SrrDebug4_signal_send_error signal_wait_error(::delphi_srr_msgs::msg::SrrDebug4::_signal_wait_error_type arg)
  {
    msg_.signal_wait_error = std::move(arg);
    return Init_SrrDebug4_signal_send_error(msg_);
  }

private:
  ::delphi_srr_msgs::msg::SrrDebug4 msg_;
};

class Init_SrrDebug4_socket_init_error
{
public:
  explicit Init_SrrDebug4_socket_init_error(::delphi_srr_msgs::msg::SrrDebug4 & msg)
  : msg_(msg)
  {}
  Init_SrrDebug4_signal_wait_error socket_init_error(::delphi_srr_msgs::msg::SrrDebug4::_socket_init_error_type arg)
  {
    msg_.socket_init_error = std::move(arg);
    return Init_SrrDebug4_signal_wait_error(msg_);
  }

private:
  ::delphi_srr_msgs::msg::SrrDebug4 msg_;
};

class Init_SrrDebug4_socket_read_error
{
public:
  explicit Init_SrrDebug4_socket_read_error(::delphi_srr_msgs::msg::SrrDebug4 & msg)
  : msg_(msg)
  {}
  Init_SrrDebug4_socket_init_error socket_read_error(::delphi_srr_msgs::msg::SrrDebug4::_socket_read_error_type arg)
  {
    msg_.socket_read_error = std::move(arg);
    return Init_SrrDebug4_socket_init_error(msg_);
  }

private:
  ::delphi_srr_msgs::msg::SrrDebug4 msg_;
};

class Init_SrrDebug4_dsp_cal_obsolete_62_error
{
public:
  explicit Init_SrrDebug4_dsp_cal_obsolete_62_error(::delphi_srr_msgs::msg::SrrDebug4 & msg)
  : msg_(msg)
  {}
  Init_SrrDebug4_socket_read_error dsp_cal_obsolete_62_error(::delphi_srr_msgs::msg::SrrDebug4::_dsp_cal_obsolete_62_error_type arg)
  {
    msg_.dsp_cal_obsolete_62_error = std::move(arg);
    return Init_SrrDebug4_socket_read_error(msg_);
  }

private:
  ::delphi_srr_msgs::msg::SrrDebug4 msg_;
};

class Init_SrrDebug4_socket_write_error
{
public:
  explicit Init_SrrDebug4_socket_write_error(::delphi_srr_msgs::msg::SrrDebug4 & msg)
  : msg_(msg)
  {}
  Init_SrrDebug4_dsp_cal_obsolete_62_error socket_write_error(::delphi_srr_msgs::msg::SrrDebug4::_socket_write_error_type arg)
  {
    msg_.socket_write_error = std::move(arg);
    return Init_SrrDebug4_dsp_cal_obsolete_62_error(msg_);
  }

private:
  ::delphi_srr_msgs::msg::SrrDebug4 msg_;
};

class Init_SrrDebug4_spi_comm_error
{
public:
  explicit Init_SrrDebug4_spi_comm_error(::delphi_srr_msgs::msg::SrrDebug4 & msg)
  : msg_(msg)
  {}
  Init_SrrDebug4_socket_write_error spi_comm_error(::delphi_srr_msgs::msg::SrrDebug4::_spi_comm_error_type arg)
  {
    msg_.spi_comm_error = std::move(arg);
    return Init_SrrDebug4_socket_write_error(msg_);
  }

private:
  ::delphi_srr_msgs::msg::SrrDebug4 msg_;
};

class Init_SrrDebug4_spi_fee_error
{
public:
  explicit Init_SrrDebug4_spi_fee_error(::delphi_srr_msgs::msg::SrrDebug4 & msg)
  : msg_(msg)
  {}
  Init_SrrDebug4_spi_comm_error spi_fee_error(::delphi_srr_msgs::msg::SrrDebug4::_spi_fee_error_type arg)
  {
    msg_.spi_fee_error = std::move(arg);
    return Init_SrrDebug4_spi_comm_error(msg_);
  }

private:
  ::delphi_srr_msgs::msg::SrrDebug4 msg_;
};

class Init_SrrDebug4_arm_calibration_error
{
public:
  explicit Init_SrrDebug4_arm_calibration_error(::delphi_srr_msgs::msg::SrrDebug4 & msg)
  : msg_(msg)
  {}
  Init_SrrDebug4_spi_fee_error arm_calibration_error(::delphi_srr_msgs::msg::SrrDebug4::_arm_calibration_error_type arg)
  {
    msg_.arm_calibration_error = std::move(arg);
    return Init_SrrDebug4_spi_fee_error(msg_);
  }

private:
  ::delphi_srr_msgs::msg::SrrDebug4 msg_;
};

class Init_SrrDebug4_thread_create_error
{
public:
  explicit Init_SrrDebug4_thread_create_error(::delphi_srr_msgs::msg::SrrDebug4 & msg)
  : msg_(msg)
  {}
  Init_SrrDebug4_arm_calibration_error thread_create_error(::delphi_srr_msgs::msg::SrrDebug4::_thread_create_error_type arg)
  {
    msg_.thread_create_error = std::move(arg);
    return Init_SrrDebug4_arm_calibration_error(msg_);
  }

private:
  ::delphi_srr_msgs::msg::SrrDebug4 msg_;
};

class Init_SrrDebug4_timer_create_error
{
public:
  explicit Init_SrrDebug4_timer_create_error(::delphi_srr_msgs::msg::SrrDebug4 & msg)
  : msg_(msg)
  {}
  Init_SrrDebug4_thread_create_error timer_create_error(::delphi_srr_msgs::msg::SrrDebug4::_timer_create_error_type arg)
  {
    msg_.timer_create_error = std::move(arg);
    return Init_SrrDebug4_thread_create_error(msg_);
  }

private:
  ::delphi_srr_msgs::msg::SrrDebug4 msg_;
};

class Init_SrrDebug4_header
{
public:
  Init_SrrDebug4_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SrrDebug4_timer_create_error header(::delphi_srr_msgs::msg::SrrDebug4::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_SrrDebug4_timer_create_error(msg_);
  }

private:
  ::delphi_srr_msgs::msg::SrrDebug4 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::delphi_srr_msgs::msg::SrrDebug4>()
{
  return delphi_srr_msgs::msg::builder::Init_SrrDebug4_header();
}

}  // namespace delphi_srr_msgs

#endif  // DELPHI_SRR_MSGS__MSG__DETAIL__SRR_DEBUG4__BUILDER_HPP_

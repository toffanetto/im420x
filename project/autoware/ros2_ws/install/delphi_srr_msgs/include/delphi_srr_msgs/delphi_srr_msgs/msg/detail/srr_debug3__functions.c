// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from delphi_srr_msgs:msg/SrrDebug3.idl
// generated code does not contain a copyright notice
#include "delphi_srr_msgs/msg/detail/srr_debug3__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
delphi_srr_msgs__msg__SrrDebug3__init(delphi_srr_msgs__msg__SrrDebug3 * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    delphi_srr_msgs__msg__SrrDebug3__fini(msg);
    return false;
  }
  // timer_create_error
  // thread_create_error
  // arm_calibration_error
  // spi_fee_error
  // spi_comm_error
  // socket_write_error
  // dsp_cal_obsolete_62_error
  // socket_read_error
  // socket_init_error
  // signal_wait_error
  // signal_send_error
  // signal_create_error
  // shared_mem_write_error
  // shared_mem_read_error
  // shared_mem_config_error
  // share_mem_init_error
  // ram_test_error
  // num_errors
  // mmap_memory_error
  // isr_attach_error
  // ipc_drv_write_error
  // ipc_drv_trigger_error
  // ipc_drv_sync_error
  // ipc_drv_read_error
  // ipc_drv_init_error
  // interrupt_enable_error
  // hil_format_error
  // flash_filesystem_error
  // error_none
  // dsp_load_read_error
  // dsp_load_open_error
  // dsp_load_address_error
  // dsp_isp_write_error
  // dsp_ipc_read_error
  // dsp_ipc_init
  // dsp_init_error
  // dsp_drv_start_error
  // dsp_drv_load_error
  // dsp_drv_init_error
  // dsp_drv_init2_error
  // dsp_drv_init1_error
  // dsp_calibration_error
  // can_xmt_error
  // can_rcv_error
  // can_hardware_error
  // always_true
  return true;
}

void
delphi_srr_msgs__msg__SrrDebug3__fini(delphi_srr_msgs__msg__SrrDebug3 * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // timer_create_error
  // thread_create_error
  // arm_calibration_error
  // spi_fee_error
  // spi_comm_error
  // socket_write_error
  // dsp_cal_obsolete_62_error
  // socket_read_error
  // socket_init_error
  // signal_wait_error
  // signal_send_error
  // signal_create_error
  // shared_mem_write_error
  // shared_mem_read_error
  // shared_mem_config_error
  // share_mem_init_error
  // ram_test_error
  // num_errors
  // mmap_memory_error
  // isr_attach_error
  // ipc_drv_write_error
  // ipc_drv_trigger_error
  // ipc_drv_sync_error
  // ipc_drv_read_error
  // ipc_drv_init_error
  // interrupt_enable_error
  // hil_format_error
  // flash_filesystem_error
  // error_none
  // dsp_load_read_error
  // dsp_load_open_error
  // dsp_load_address_error
  // dsp_isp_write_error
  // dsp_ipc_read_error
  // dsp_ipc_init
  // dsp_init_error
  // dsp_drv_start_error
  // dsp_drv_load_error
  // dsp_drv_init_error
  // dsp_drv_init2_error
  // dsp_drv_init1_error
  // dsp_calibration_error
  // can_xmt_error
  // can_rcv_error
  // can_hardware_error
  // always_true
}

bool
delphi_srr_msgs__msg__SrrDebug3__are_equal(const delphi_srr_msgs__msg__SrrDebug3 * lhs, const delphi_srr_msgs__msg__SrrDebug3 * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // timer_create_error
  if (lhs->timer_create_error != rhs->timer_create_error) {
    return false;
  }
  // thread_create_error
  if (lhs->thread_create_error != rhs->thread_create_error) {
    return false;
  }
  // arm_calibration_error
  if (lhs->arm_calibration_error != rhs->arm_calibration_error) {
    return false;
  }
  // spi_fee_error
  if (lhs->spi_fee_error != rhs->spi_fee_error) {
    return false;
  }
  // spi_comm_error
  if (lhs->spi_comm_error != rhs->spi_comm_error) {
    return false;
  }
  // socket_write_error
  if (lhs->socket_write_error != rhs->socket_write_error) {
    return false;
  }
  // dsp_cal_obsolete_62_error
  if (lhs->dsp_cal_obsolete_62_error != rhs->dsp_cal_obsolete_62_error) {
    return false;
  }
  // socket_read_error
  if (lhs->socket_read_error != rhs->socket_read_error) {
    return false;
  }
  // socket_init_error
  if (lhs->socket_init_error != rhs->socket_init_error) {
    return false;
  }
  // signal_wait_error
  if (lhs->signal_wait_error != rhs->signal_wait_error) {
    return false;
  }
  // signal_send_error
  if (lhs->signal_send_error != rhs->signal_send_error) {
    return false;
  }
  // signal_create_error
  if (lhs->signal_create_error != rhs->signal_create_error) {
    return false;
  }
  // shared_mem_write_error
  if (lhs->shared_mem_write_error != rhs->shared_mem_write_error) {
    return false;
  }
  // shared_mem_read_error
  if (lhs->shared_mem_read_error != rhs->shared_mem_read_error) {
    return false;
  }
  // shared_mem_config_error
  if (lhs->shared_mem_config_error != rhs->shared_mem_config_error) {
    return false;
  }
  // share_mem_init_error
  if (lhs->share_mem_init_error != rhs->share_mem_init_error) {
    return false;
  }
  // ram_test_error
  if (lhs->ram_test_error != rhs->ram_test_error) {
    return false;
  }
  // num_errors
  if (lhs->num_errors != rhs->num_errors) {
    return false;
  }
  // mmap_memory_error
  if (lhs->mmap_memory_error != rhs->mmap_memory_error) {
    return false;
  }
  // isr_attach_error
  if (lhs->isr_attach_error != rhs->isr_attach_error) {
    return false;
  }
  // ipc_drv_write_error
  if (lhs->ipc_drv_write_error != rhs->ipc_drv_write_error) {
    return false;
  }
  // ipc_drv_trigger_error
  if (lhs->ipc_drv_trigger_error != rhs->ipc_drv_trigger_error) {
    return false;
  }
  // ipc_drv_sync_error
  if (lhs->ipc_drv_sync_error != rhs->ipc_drv_sync_error) {
    return false;
  }
  // ipc_drv_read_error
  if (lhs->ipc_drv_read_error != rhs->ipc_drv_read_error) {
    return false;
  }
  // ipc_drv_init_error
  if (lhs->ipc_drv_init_error != rhs->ipc_drv_init_error) {
    return false;
  }
  // interrupt_enable_error
  if (lhs->interrupt_enable_error != rhs->interrupt_enable_error) {
    return false;
  }
  // hil_format_error
  if (lhs->hil_format_error != rhs->hil_format_error) {
    return false;
  }
  // flash_filesystem_error
  if (lhs->flash_filesystem_error != rhs->flash_filesystem_error) {
    return false;
  }
  // error_none
  if (lhs->error_none != rhs->error_none) {
    return false;
  }
  // dsp_load_read_error
  if (lhs->dsp_load_read_error != rhs->dsp_load_read_error) {
    return false;
  }
  // dsp_load_open_error
  if (lhs->dsp_load_open_error != rhs->dsp_load_open_error) {
    return false;
  }
  // dsp_load_address_error
  if (lhs->dsp_load_address_error != rhs->dsp_load_address_error) {
    return false;
  }
  // dsp_isp_write_error
  if (lhs->dsp_isp_write_error != rhs->dsp_isp_write_error) {
    return false;
  }
  // dsp_ipc_read_error
  if (lhs->dsp_ipc_read_error != rhs->dsp_ipc_read_error) {
    return false;
  }
  // dsp_ipc_init
  if (lhs->dsp_ipc_init != rhs->dsp_ipc_init) {
    return false;
  }
  // dsp_init_error
  if (lhs->dsp_init_error != rhs->dsp_init_error) {
    return false;
  }
  // dsp_drv_start_error
  if (lhs->dsp_drv_start_error != rhs->dsp_drv_start_error) {
    return false;
  }
  // dsp_drv_load_error
  if (lhs->dsp_drv_load_error != rhs->dsp_drv_load_error) {
    return false;
  }
  // dsp_drv_init_error
  if (lhs->dsp_drv_init_error != rhs->dsp_drv_init_error) {
    return false;
  }
  // dsp_drv_init2_error
  if (lhs->dsp_drv_init2_error != rhs->dsp_drv_init2_error) {
    return false;
  }
  // dsp_drv_init1_error
  if (lhs->dsp_drv_init1_error != rhs->dsp_drv_init1_error) {
    return false;
  }
  // dsp_calibration_error
  if (lhs->dsp_calibration_error != rhs->dsp_calibration_error) {
    return false;
  }
  // can_xmt_error
  if (lhs->can_xmt_error != rhs->can_xmt_error) {
    return false;
  }
  // can_rcv_error
  if (lhs->can_rcv_error != rhs->can_rcv_error) {
    return false;
  }
  // can_hardware_error
  if (lhs->can_hardware_error != rhs->can_hardware_error) {
    return false;
  }
  // always_true
  if (lhs->always_true != rhs->always_true) {
    return false;
  }
  return true;
}

bool
delphi_srr_msgs__msg__SrrDebug3__copy(
  const delphi_srr_msgs__msg__SrrDebug3 * input,
  delphi_srr_msgs__msg__SrrDebug3 * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // timer_create_error
  output->timer_create_error = input->timer_create_error;
  // thread_create_error
  output->thread_create_error = input->thread_create_error;
  // arm_calibration_error
  output->arm_calibration_error = input->arm_calibration_error;
  // spi_fee_error
  output->spi_fee_error = input->spi_fee_error;
  // spi_comm_error
  output->spi_comm_error = input->spi_comm_error;
  // socket_write_error
  output->socket_write_error = input->socket_write_error;
  // dsp_cal_obsolete_62_error
  output->dsp_cal_obsolete_62_error = input->dsp_cal_obsolete_62_error;
  // socket_read_error
  output->socket_read_error = input->socket_read_error;
  // socket_init_error
  output->socket_init_error = input->socket_init_error;
  // signal_wait_error
  output->signal_wait_error = input->signal_wait_error;
  // signal_send_error
  output->signal_send_error = input->signal_send_error;
  // signal_create_error
  output->signal_create_error = input->signal_create_error;
  // shared_mem_write_error
  output->shared_mem_write_error = input->shared_mem_write_error;
  // shared_mem_read_error
  output->shared_mem_read_error = input->shared_mem_read_error;
  // shared_mem_config_error
  output->shared_mem_config_error = input->shared_mem_config_error;
  // share_mem_init_error
  output->share_mem_init_error = input->share_mem_init_error;
  // ram_test_error
  output->ram_test_error = input->ram_test_error;
  // num_errors
  output->num_errors = input->num_errors;
  // mmap_memory_error
  output->mmap_memory_error = input->mmap_memory_error;
  // isr_attach_error
  output->isr_attach_error = input->isr_attach_error;
  // ipc_drv_write_error
  output->ipc_drv_write_error = input->ipc_drv_write_error;
  // ipc_drv_trigger_error
  output->ipc_drv_trigger_error = input->ipc_drv_trigger_error;
  // ipc_drv_sync_error
  output->ipc_drv_sync_error = input->ipc_drv_sync_error;
  // ipc_drv_read_error
  output->ipc_drv_read_error = input->ipc_drv_read_error;
  // ipc_drv_init_error
  output->ipc_drv_init_error = input->ipc_drv_init_error;
  // interrupt_enable_error
  output->interrupt_enable_error = input->interrupt_enable_error;
  // hil_format_error
  output->hil_format_error = input->hil_format_error;
  // flash_filesystem_error
  output->flash_filesystem_error = input->flash_filesystem_error;
  // error_none
  output->error_none = input->error_none;
  // dsp_load_read_error
  output->dsp_load_read_error = input->dsp_load_read_error;
  // dsp_load_open_error
  output->dsp_load_open_error = input->dsp_load_open_error;
  // dsp_load_address_error
  output->dsp_load_address_error = input->dsp_load_address_error;
  // dsp_isp_write_error
  output->dsp_isp_write_error = input->dsp_isp_write_error;
  // dsp_ipc_read_error
  output->dsp_ipc_read_error = input->dsp_ipc_read_error;
  // dsp_ipc_init
  output->dsp_ipc_init = input->dsp_ipc_init;
  // dsp_init_error
  output->dsp_init_error = input->dsp_init_error;
  // dsp_drv_start_error
  output->dsp_drv_start_error = input->dsp_drv_start_error;
  // dsp_drv_load_error
  output->dsp_drv_load_error = input->dsp_drv_load_error;
  // dsp_drv_init_error
  output->dsp_drv_init_error = input->dsp_drv_init_error;
  // dsp_drv_init2_error
  output->dsp_drv_init2_error = input->dsp_drv_init2_error;
  // dsp_drv_init1_error
  output->dsp_drv_init1_error = input->dsp_drv_init1_error;
  // dsp_calibration_error
  output->dsp_calibration_error = input->dsp_calibration_error;
  // can_xmt_error
  output->can_xmt_error = input->can_xmt_error;
  // can_rcv_error
  output->can_rcv_error = input->can_rcv_error;
  // can_hardware_error
  output->can_hardware_error = input->can_hardware_error;
  // always_true
  output->always_true = input->always_true;
  return true;
}

delphi_srr_msgs__msg__SrrDebug3 *
delphi_srr_msgs__msg__SrrDebug3__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  delphi_srr_msgs__msg__SrrDebug3 * msg = (delphi_srr_msgs__msg__SrrDebug3 *)allocator.allocate(sizeof(delphi_srr_msgs__msg__SrrDebug3), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(delphi_srr_msgs__msg__SrrDebug3));
  bool success = delphi_srr_msgs__msg__SrrDebug3__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
delphi_srr_msgs__msg__SrrDebug3__destroy(delphi_srr_msgs__msg__SrrDebug3 * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    delphi_srr_msgs__msg__SrrDebug3__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
delphi_srr_msgs__msg__SrrDebug3__Sequence__init(delphi_srr_msgs__msg__SrrDebug3__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  delphi_srr_msgs__msg__SrrDebug3 * data = NULL;

  if (size) {
    data = (delphi_srr_msgs__msg__SrrDebug3 *)allocator.zero_allocate(size, sizeof(delphi_srr_msgs__msg__SrrDebug3), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = delphi_srr_msgs__msg__SrrDebug3__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        delphi_srr_msgs__msg__SrrDebug3__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
delphi_srr_msgs__msg__SrrDebug3__Sequence__fini(delphi_srr_msgs__msg__SrrDebug3__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      delphi_srr_msgs__msg__SrrDebug3__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

delphi_srr_msgs__msg__SrrDebug3__Sequence *
delphi_srr_msgs__msg__SrrDebug3__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  delphi_srr_msgs__msg__SrrDebug3__Sequence * array = (delphi_srr_msgs__msg__SrrDebug3__Sequence *)allocator.allocate(sizeof(delphi_srr_msgs__msg__SrrDebug3__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = delphi_srr_msgs__msg__SrrDebug3__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
delphi_srr_msgs__msg__SrrDebug3__Sequence__destroy(delphi_srr_msgs__msg__SrrDebug3__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    delphi_srr_msgs__msg__SrrDebug3__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
delphi_srr_msgs__msg__SrrDebug3__Sequence__are_equal(const delphi_srr_msgs__msg__SrrDebug3__Sequence * lhs, const delphi_srr_msgs__msg__SrrDebug3__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!delphi_srr_msgs__msg__SrrDebug3__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
delphi_srr_msgs__msg__SrrDebug3__Sequence__copy(
  const delphi_srr_msgs__msg__SrrDebug3__Sequence * input,
  delphi_srr_msgs__msg__SrrDebug3__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(delphi_srr_msgs__msg__SrrDebug3);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    delphi_srr_msgs__msg__SrrDebug3 * data =
      (delphi_srr_msgs__msg__SrrDebug3 *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!delphi_srr_msgs__msg__SrrDebug3__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          delphi_srr_msgs__msg__SrrDebug3__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!delphi_srr_msgs__msg__SrrDebug3__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from delphi_srr_msgs:msg/SrrStatus1.idl
// generated code does not contain a copyright notice
#include "delphi_srr_msgs/msg/detail/srr_status1__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
delphi_srr_msgs__msg__SrrStatus1__init(delphi_srr_msgs__msg__SrrStatus1 * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    delphi_srr_msgs__msg__SrrStatus1__fini(msg);
    return false;
  }
  // can_tx_look_type
  // can_tx_dsp_timestamp
  // can_tx_yaw_rate_calc
  // can_tx_vehicle_speed_calc
  // can_tx_scan_index
  // can_tx_curvature
  return true;
}

void
delphi_srr_msgs__msg__SrrStatus1__fini(delphi_srr_msgs__msg__SrrStatus1 * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // can_tx_look_type
  // can_tx_dsp_timestamp
  // can_tx_yaw_rate_calc
  // can_tx_vehicle_speed_calc
  // can_tx_scan_index
  // can_tx_curvature
}

bool
delphi_srr_msgs__msg__SrrStatus1__are_equal(const delphi_srr_msgs__msg__SrrStatus1 * lhs, const delphi_srr_msgs__msg__SrrStatus1 * rhs)
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
  // can_tx_look_type
  if (lhs->can_tx_look_type != rhs->can_tx_look_type) {
    return false;
  }
  // can_tx_dsp_timestamp
  if (lhs->can_tx_dsp_timestamp != rhs->can_tx_dsp_timestamp) {
    return false;
  }
  // can_tx_yaw_rate_calc
  if (lhs->can_tx_yaw_rate_calc != rhs->can_tx_yaw_rate_calc) {
    return false;
  }
  // can_tx_vehicle_speed_calc
  if (lhs->can_tx_vehicle_speed_calc != rhs->can_tx_vehicle_speed_calc) {
    return false;
  }
  // can_tx_scan_index
  if (lhs->can_tx_scan_index != rhs->can_tx_scan_index) {
    return false;
  }
  // can_tx_curvature
  if (lhs->can_tx_curvature != rhs->can_tx_curvature) {
    return false;
  }
  return true;
}

bool
delphi_srr_msgs__msg__SrrStatus1__copy(
  const delphi_srr_msgs__msg__SrrStatus1 * input,
  delphi_srr_msgs__msg__SrrStatus1 * output)
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
  // can_tx_look_type
  output->can_tx_look_type = input->can_tx_look_type;
  // can_tx_dsp_timestamp
  output->can_tx_dsp_timestamp = input->can_tx_dsp_timestamp;
  // can_tx_yaw_rate_calc
  output->can_tx_yaw_rate_calc = input->can_tx_yaw_rate_calc;
  // can_tx_vehicle_speed_calc
  output->can_tx_vehicle_speed_calc = input->can_tx_vehicle_speed_calc;
  // can_tx_scan_index
  output->can_tx_scan_index = input->can_tx_scan_index;
  // can_tx_curvature
  output->can_tx_curvature = input->can_tx_curvature;
  return true;
}

delphi_srr_msgs__msg__SrrStatus1 *
delphi_srr_msgs__msg__SrrStatus1__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  delphi_srr_msgs__msg__SrrStatus1 * msg = (delphi_srr_msgs__msg__SrrStatus1 *)allocator.allocate(sizeof(delphi_srr_msgs__msg__SrrStatus1), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(delphi_srr_msgs__msg__SrrStatus1));
  bool success = delphi_srr_msgs__msg__SrrStatus1__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
delphi_srr_msgs__msg__SrrStatus1__destroy(delphi_srr_msgs__msg__SrrStatus1 * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    delphi_srr_msgs__msg__SrrStatus1__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
delphi_srr_msgs__msg__SrrStatus1__Sequence__init(delphi_srr_msgs__msg__SrrStatus1__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  delphi_srr_msgs__msg__SrrStatus1 * data = NULL;

  if (size) {
    data = (delphi_srr_msgs__msg__SrrStatus1 *)allocator.zero_allocate(size, sizeof(delphi_srr_msgs__msg__SrrStatus1), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = delphi_srr_msgs__msg__SrrStatus1__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        delphi_srr_msgs__msg__SrrStatus1__fini(&data[i - 1]);
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
delphi_srr_msgs__msg__SrrStatus1__Sequence__fini(delphi_srr_msgs__msg__SrrStatus1__Sequence * array)
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
      delphi_srr_msgs__msg__SrrStatus1__fini(&array->data[i]);
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

delphi_srr_msgs__msg__SrrStatus1__Sequence *
delphi_srr_msgs__msg__SrrStatus1__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  delphi_srr_msgs__msg__SrrStatus1__Sequence * array = (delphi_srr_msgs__msg__SrrStatus1__Sequence *)allocator.allocate(sizeof(delphi_srr_msgs__msg__SrrStatus1__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = delphi_srr_msgs__msg__SrrStatus1__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
delphi_srr_msgs__msg__SrrStatus1__Sequence__destroy(delphi_srr_msgs__msg__SrrStatus1__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    delphi_srr_msgs__msg__SrrStatus1__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
delphi_srr_msgs__msg__SrrStatus1__Sequence__are_equal(const delphi_srr_msgs__msg__SrrStatus1__Sequence * lhs, const delphi_srr_msgs__msg__SrrStatus1__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!delphi_srr_msgs__msg__SrrStatus1__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
delphi_srr_msgs__msg__SrrStatus1__Sequence__copy(
  const delphi_srr_msgs__msg__SrrStatus1__Sequence * input,
  delphi_srr_msgs__msg__SrrStatus1__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(delphi_srr_msgs__msg__SrrStatus1);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    delphi_srr_msgs__msg__SrrStatus1 * data =
      (delphi_srr_msgs__msg__SrrStatus1 *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!delphi_srr_msgs__msg__SrrStatus1__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          delphi_srr_msgs__msg__SrrStatus1__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!delphi_srr_msgs__msg__SrrStatus1__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

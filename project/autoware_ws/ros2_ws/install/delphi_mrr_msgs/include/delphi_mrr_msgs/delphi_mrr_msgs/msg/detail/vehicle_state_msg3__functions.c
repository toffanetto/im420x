// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from delphi_mrr_msgs:msg/VehicleStateMsg3.idl
// generated code does not contain a copyright notice
#include "delphi_mrr_msgs/msg/detail/vehicle_state_msg3__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
delphi_mrr_msgs__msg__VehicleStateMsg3__init(delphi_mrr_msgs__msg__VehicleStateMsg3 * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    delphi_mrr_msgs__msg__VehicleStateMsg3__fini(msg);
    return false;
  }
  // yaw_rate_reference_valid
  // yaw_rate_reference
  // can_veh_long_accel_qf
  // can_veh_long_accel
  return true;
}

void
delphi_mrr_msgs__msg__VehicleStateMsg3__fini(delphi_mrr_msgs__msg__VehicleStateMsg3 * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // yaw_rate_reference_valid
  // yaw_rate_reference
  // can_veh_long_accel_qf
  // can_veh_long_accel
}

bool
delphi_mrr_msgs__msg__VehicleStateMsg3__are_equal(const delphi_mrr_msgs__msg__VehicleStateMsg3 * lhs, const delphi_mrr_msgs__msg__VehicleStateMsg3 * rhs)
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
  // yaw_rate_reference_valid
  if (lhs->yaw_rate_reference_valid != rhs->yaw_rate_reference_valid) {
    return false;
  }
  // yaw_rate_reference
  if (lhs->yaw_rate_reference != rhs->yaw_rate_reference) {
    return false;
  }
  // can_veh_long_accel_qf
  if (lhs->can_veh_long_accel_qf != rhs->can_veh_long_accel_qf) {
    return false;
  }
  // can_veh_long_accel
  if (lhs->can_veh_long_accel != rhs->can_veh_long_accel) {
    return false;
  }
  return true;
}

bool
delphi_mrr_msgs__msg__VehicleStateMsg3__copy(
  const delphi_mrr_msgs__msg__VehicleStateMsg3 * input,
  delphi_mrr_msgs__msg__VehicleStateMsg3 * output)
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
  // yaw_rate_reference_valid
  output->yaw_rate_reference_valid = input->yaw_rate_reference_valid;
  // yaw_rate_reference
  output->yaw_rate_reference = input->yaw_rate_reference;
  // can_veh_long_accel_qf
  output->can_veh_long_accel_qf = input->can_veh_long_accel_qf;
  // can_veh_long_accel
  output->can_veh_long_accel = input->can_veh_long_accel;
  return true;
}

delphi_mrr_msgs__msg__VehicleStateMsg3 *
delphi_mrr_msgs__msg__VehicleStateMsg3__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  delphi_mrr_msgs__msg__VehicleStateMsg3 * msg = (delphi_mrr_msgs__msg__VehicleStateMsg3 *)allocator.allocate(sizeof(delphi_mrr_msgs__msg__VehicleStateMsg3), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(delphi_mrr_msgs__msg__VehicleStateMsg3));
  bool success = delphi_mrr_msgs__msg__VehicleStateMsg3__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
delphi_mrr_msgs__msg__VehicleStateMsg3__destroy(delphi_mrr_msgs__msg__VehicleStateMsg3 * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    delphi_mrr_msgs__msg__VehicleStateMsg3__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
delphi_mrr_msgs__msg__VehicleStateMsg3__Sequence__init(delphi_mrr_msgs__msg__VehicleStateMsg3__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  delphi_mrr_msgs__msg__VehicleStateMsg3 * data = NULL;

  if (size) {
    data = (delphi_mrr_msgs__msg__VehicleStateMsg3 *)allocator.zero_allocate(size, sizeof(delphi_mrr_msgs__msg__VehicleStateMsg3), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = delphi_mrr_msgs__msg__VehicleStateMsg3__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        delphi_mrr_msgs__msg__VehicleStateMsg3__fini(&data[i - 1]);
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
delphi_mrr_msgs__msg__VehicleStateMsg3__Sequence__fini(delphi_mrr_msgs__msg__VehicleStateMsg3__Sequence * array)
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
      delphi_mrr_msgs__msg__VehicleStateMsg3__fini(&array->data[i]);
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

delphi_mrr_msgs__msg__VehicleStateMsg3__Sequence *
delphi_mrr_msgs__msg__VehicleStateMsg3__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  delphi_mrr_msgs__msg__VehicleStateMsg3__Sequence * array = (delphi_mrr_msgs__msg__VehicleStateMsg3__Sequence *)allocator.allocate(sizeof(delphi_mrr_msgs__msg__VehicleStateMsg3__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = delphi_mrr_msgs__msg__VehicleStateMsg3__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
delphi_mrr_msgs__msg__VehicleStateMsg3__Sequence__destroy(delphi_mrr_msgs__msg__VehicleStateMsg3__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    delphi_mrr_msgs__msg__VehicleStateMsg3__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
delphi_mrr_msgs__msg__VehicleStateMsg3__Sequence__are_equal(const delphi_mrr_msgs__msg__VehicleStateMsg3__Sequence * lhs, const delphi_mrr_msgs__msg__VehicleStateMsg3__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!delphi_mrr_msgs__msg__VehicleStateMsg3__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
delphi_mrr_msgs__msg__VehicleStateMsg3__Sequence__copy(
  const delphi_mrr_msgs__msg__VehicleStateMsg3__Sequence * input,
  delphi_mrr_msgs__msg__VehicleStateMsg3__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(delphi_mrr_msgs__msg__VehicleStateMsg3);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    delphi_mrr_msgs__msg__VehicleStateMsg3 * data =
      (delphi_mrr_msgs__msg__VehicleStateMsg3 *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!delphi_mrr_msgs__msg__VehicleStateMsg3__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          delphi_mrr_msgs__msg__VehicleStateMsg3__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!delphi_mrr_msgs__msg__VehicleStateMsg3__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

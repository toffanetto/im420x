// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from delphi_mrr_msgs:msg/VehicleStateMsg2.idl
// generated code does not contain a copyright notice
#include "delphi_mrr_msgs/msg/detail/vehicle_state_msg2__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
delphi_mrr_msgs__msg__VehicleStateMsg2__init(delphi_mrr_msgs__msg__VehicleStateMsg2 * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    delphi_mrr_msgs__msg__VehicleStateMsg2__fini(msg);
    return false;
  }
  // fsm_yaw_rate_valid
  // fsm_yaw_rate
  // can_vehicle_index_4fa
  // fsm_vehicle_velocity
  // can_steering_whl_angle_qf
  // fsm_vehicle_velocity_valid
  // can_steering_whl_angle
  return true;
}

void
delphi_mrr_msgs__msg__VehicleStateMsg2__fini(delphi_mrr_msgs__msg__VehicleStateMsg2 * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // fsm_yaw_rate_valid
  // fsm_yaw_rate
  // can_vehicle_index_4fa
  // fsm_vehicle_velocity
  // can_steering_whl_angle_qf
  // fsm_vehicle_velocity_valid
  // can_steering_whl_angle
}

bool
delphi_mrr_msgs__msg__VehicleStateMsg2__are_equal(const delphi_mrr_msgs__msg__VehicleStateMsg2 * lhs, const delphi_mrr_msgs__msg__VehicleStateMsg2 * rhs)
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
  // fsm_yaw_rate_valid
  if (lhs->fsm_yaw_rate_valid != rhs->fsm_yaw_rate_valid) {
    return false;
  }
  // fsm_yaw_rate
  if (lhs->fsm_yaw_rate != rhs->fsm_yaw_rate) {
    return false;
  }
  // can_vehicle_index_4fa
  if (lhs->can_vehicle_index_4fa != rhs->can_vehicle_index_4fa) {
    return false;
  }
  // fsm_vehicle_velocity
  if (lhs->fsm_vehicle_velocity != rhs->fsm_vehicle_velocity) {
    return false;
  }
  // can_steering_whl_angle_qf
  if (lhs->can_steering_whl_angle_qf != rhs->can_steering_whl_angle_qf) {
    return false;
  }
  // fsm_vehicle_velocity_valid
  if (lhs->fsm_vehicle_velocity_valid != rhs->fsm_vehicle_velocity_valid) {
    return false;
  }
  // can_steering_whl_angle
  if (lhs->can_steering_whl_angle != rhs->can_steering_whl_angle) {
    return false;
  }
  return true;
}

bool
delphi_mrr_msgs__msg__VehicleStateMsg2__copy(
  const delphi_mrr_msgs__msg__VehicleStateMsg2 * input,
  delphi_mrr_msgs__msg__VehicleStateMsg2 * output)
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
  // fsm_yaw_rate_valid
  output->fsm_yaw_rate_valid = input->fsm_yaw_rate_valid;
  // fsm_yaw_rate
  output->fsm_yaw_rate = input->fsm_yaw_rate;
  // can_vehicle_index_4fa
  output->can_vehicle_index_4fa = input->can_vehicle_index_4fa;
  // fsm_vehicle_velocity
  output->fsm_vehicle_velocity = input->fsm_vehicle_velocity;
  // can_steering_whl_angle_qf
  output->can_steering_whl_angle_qf = input->can_steering_whl_angle_qf;
  // fsm_vehicle_velocity_valid
  output->fsm_vehicle_velocity_valid = input->fsm_vehicle_velocity_valid;
  // can_steering_whl_angle
  output->can_steering_whl_angle = input->can_steering_whl_angle;
  return true;
}

delphi_mrr_msgs__msg__VehicleStateMsg2 *
delphi_mrr_msgs__msg__VehicleStateMsg2__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  delphi_mrr_msgs__msg__VehicleStateMsg2 * msg = (delphi_mrr_msgs__msg__VehicleStateMsg2 *)allocator.allocate(sizeof(delphi_mrr_msgs__msg__VehicleStateMsg2), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(delphi_mrr_msgs__msg__VehicleStateMsg2));
  bool success = delphi_mrr_msgs__msg__VehicleStateMsg2__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
delphi_mrr_msgs__msg__VehicleStateMsg2__destroy(delphi_mrr_msgs__msg__VehicleStateMsg2 * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    delphi_mrr_msgs__msg__VehicleStateMsg2__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
delphi_mrr_msgs__msg__VehicleStateMsg2__Sequence__init(delphi_mrr_msgs__msg__VehicleStateMsg2__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  delphi_mrr_msgs__msg__VehicleStateMsg2 * data = NULL;

  if (size) {
    data = (delphi_mrr_msgs__msg__VehicleStateMsg2 *)allocator.zero_allocate(size, sizeof(delphi_mrr_msgs__msg__VehicleStateMsg2), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = delphi_mrr_msgs__msg__VehicleStateMsg2__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        delphi_mrr_msgs__msg__VehicleStateMsg2__fini(&data[i - 1]);
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
delphi_mrr_msgs__msg__VehicleStateMsg2__Sequence__fini(delphi_mrr_msgs__msg__VehicleStateMsg2__Sequence * array)
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
      delphi_mrr_msgs__msg__VehicleStateMsg2__fini(&array->data[i]);
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

delphi_mrr_msgs__msg__VehicleStateMsg2__Sequence *
delphi_mrr_msgs__msg__VehicleStateMsg2__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  delphi_mrr_msgs__msg__VehicleStateMsg2__Sequence * array = (delphi_mrr_msgs__msg__VehicleStateMsg2__Sequence *)allocator.allocate(sizeof(delphi_mrr_msgs__msg__VehicleStateMsg2__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = delphi_mrr_msgs__msg__VehicleStateMsg2__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
delphi_mrr_msgs__msg__VehicleStateMsg2__Sequence__destroy(delphi_mrr_msgs__msg__VehicleStateMsg2__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    delphi_mrr_msgs__msg__VehicleStateMsg2__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
delphi_mrr_msgs__msg__VehicleStateMsg2__Sequence__are_equal(const delphi_mrr_msgs__msg__VehicleStateMsg2__Sequence * lhs, const delphi_mrr_msgs__msg__VehicleStateMsg2__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!delphi_mrr_msgs__msg__VehicleStateMsg2__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
delphi_mrr_msgs__msg__VehicleStateMsg2__Sequence__copy(
  const delphi_mrr_msgs__msg__VehicleStateMsg2__Sequence * input,
  delphi_mrr_msgs__msg__VehicleStateMsg2__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(delphi_mrr_msgs__msg__VehicleStateMsg2);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    delphi_mrr_msgs__msg__VehicleStateMsg2 * data =
      (delphi_mrr_msgs__msg__VehicleStateMsg2 *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!delphi_mrr_msgs__msg__VehicleStateMsg2__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          delphi_mrr_msgs__msg__VehicleStateMsg2__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!delphi_mrr_msgs__msg__VehicleStateMsg2__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

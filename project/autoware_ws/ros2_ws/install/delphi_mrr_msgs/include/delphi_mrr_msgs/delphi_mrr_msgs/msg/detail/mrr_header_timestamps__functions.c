// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from delphi_mrr_msgs:msg/MrrHeaderTimestamps.idl
// generated code does not contain a copyright notice
#include "delphi_mrr_msgs/msg/detail/mrr_header_timestamps__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
delphi_mrr_msgs__msg__MrrHeaderTimestamps__init(delphi_mrr_msgs__msg__MrrHeaderTimestamps * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    delphi_mrr_msgs__msg__MrrHeaderTimestamps__fini(msg);
    return false;
  }
  // can_det_time_since_meas
  // can_sensor_time_stamp
  return true;
}

void
delphi_mrr_msgs__msg__MrrHeaderTimestamps__fini(delphi_mrr_msgs__msg__MrrHeaderTimestamps * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // can_det_time_since_meas
  // can_sensor_time_stamp
}

bool
delphi_mrr_msgs__msg__MrrHeaderTimestamps__are_equal(const delphi_mrr_msgs__msg__MrrHeaderTimestamps * lhs, const delphi_mrr_msgs__msg__MrrHeaderTimestamps * rhs)
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
  // can_det_time_since_meas
  if (lhs->can_det_time_since_meas != rhs->can_det_time_since_meas) {
    return false;
  }
  // can_sensor_time_stamp
  if (lhs->can_sensor_time_stamp != rhs->can_sensor_time_stamp) {
    return false;
  }
  return true;
}

bool
delphi_mrr_msgs__msg__MrrHeaderTimestamps__copy(
  const delphi_mrr_msgs__msg__MrrHeaderTimestamps * input,
  delphi_mrr_msgs__msg__MrrHeaderTimestamps * output)
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
  // can_det_time_since_meas
  output->can_det_time_since_meas = input->can_det_time_since_meas;
  // can_sensor_time_stamp
  output->can_sensor_time_stamp = input->can_sensor_time_stamp;
  return true;
}

delphi_mrr_msgs__msg__MrrHeaderTimestamps *
delphi_mrr_msgs__msg__MrrHeaderTimestamps__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  delphi_mrr_msgs__msg__MrrHeaderTimestamps * msg = (delphi_mrr_msgs__msg__MrrHeaderTimestamps *)allocator.allocate(sizeof(delphi_mrr_msgs__msg__MrrHeaderTimestamps), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(delphi_mrr_msgs__msg__MrrHeaderTimestamps));
  bool success = delphi_mrr_msgs__msg__MrrHeaderTimestamps__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
delphi_mrr_msgs__msg__MrrHeaderTimestamps__destroy(delphi_mrr_msgs__msg__MrrHeaderTimestamps * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    delphi_mrr_msgs__msg__MrrHeaderTimestamps__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
delphi_mrr_msgs__msg__MrrHeaderTimestamps__Sequence__init(delphi_mrr_msgs__msg__MrrHeaderTimestamps__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  delphi_mrr_msgs__msg__MrrHeaderTimestamps * data = NULL;

  if (size) {
    data = (delphi_mrr_msgs__msg__MrrHeaderTimestamps *)allocator.zero_allocate(size, sizeof(delphi_mrr_msgs__msg__MrrHeaderTimestamps), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = delphi_mrr_msgs__msg__MrrHeaderTimestamps__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        delphi_mrr_msgs__msg__MrrHeaderTimestamps__fini(&data[i - 1]);
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
delphi_mrr_msgs__msg__MrrHeaderTimestamps__Sequence__fini(delphi_mrr_msgs__msg__MrrHeaderTimestamps__Sequence * array)
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
      delphi_mrr_msgs__msg__MrrHeaderTimestamps__fini(&array->data[i]);
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

delphi_mrr_msgs__msg__MrrHeaderTimestamps__Sequence *
delphi_mrr_msgs__msg__MrrHeaderTimestamps__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  delphi_mrr_msgs__msg__MrrHeaderTimestamps__Sequence * array = (delphi_mrr_msgs__msg__MrrHeaderTimestamps__Sequence *)allocator.allocate(sizeof(delphi_mrr_msgs__msg__MrrHeaderTimestamps__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = delphi_mrr_msgs__msg__MrrHeaderTimestamps__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
delphi_mrr_msgs__msg__MrrHeaderTimestamps__Sequence__destroy(delphi_mrr_msgs__msg__MrrHeaderTimestamps__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    delphi_mrr_msgs__msg__MrrHeaderTimestamps__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
delphi_mrr_msgs__msg__MrrHeaderTimestamps__Sequence__are_equal(const delphi_mrr_msgs__msg__MrrHeaderTimestamps__Sequence * lhs, const delphi_mrr_msgs__msg__MrrHeaderTimestamps__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!delphi_mrr_msgs__msg__MrrHeaderTimestamps__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
delphi_mrr_msgs__msg__MrrHeaderTimestamps__Sequence__copy(
  const delphi_mrr_msgs__msg__MrrHeaderTimestamps__Sequence * input,
  delphi_mrr_msgs__msg__MrrHeaderTimestamps__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(delphi_mrr_msgs__msg__MrrHeaderTimestamps);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    delphi_mrr_msgs__msg__MrrHeaderTimestamps * data =
      (delphi_mrr_msgs__msg__MrrHeaderTimestamps *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!delphi_mrr_msgs__msg__MrrHeaderTimestamps__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          delphi_mrr_msgs__msg__MrrHeaderTimestamps__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!delphi_mrr_msgs__msg__MrrHeaderTimestamps__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from delphi_mrr_msgs:msg/MrrHeaderSensorPosition.idl
// generated code does not contain a copyright notice
#include "delphi_mrr_msgs/msg/detail/mrr_header_sensor_position__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
delphi_mrr_msgs__msg__MrrHeaderSensorPosition__init(delphi_mrr_msgs__msg__MrrHeaderSensorPosition * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    delphi_mrr_msgs__msg__MrrHeaderSensorPosition__fini(msg);
    return false;
  }
  // can_sensor_polarity
  // can_sensor_lat_offset
  // can_sensor_long_offset
  // can_sensor_hangle_offset
  return true;
}

void
delphi_mrr_msgs__msg__MrrHeaderSensorPosition__fini(delphi_mrr_msgs__msg__MrrHeaderSensorPosition * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // can_sensor_polarity
  // can_sensor_lat_offset
  // can_sensor_long_offset
  // can_sensor_hangle_offset
}

bool
delphi_mrr_msgs__msg__MrrHeaderSensorPosition__are_equal(const delphi_mrr_msgs__msg__MrrHeaderSensorPosition * lhs, const delphi_mrr_msgs__msg__MrrHeaderSensorPosition * rhs)
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
  // can_sensor_polarity
  if (lhs->can_sensor_polarity != rhs->can_sensor_polarity) {
    return false;
  }
  // can_sensor_lat_offset
  if (lhs->can_sensor_lat_offset != rhs->can_sensor_lat_offset) {
    return false;
  }
  // can_sensor_long_offset
  if (lhs->can_sensor_long_offset != rhs->can_sensor_long_offset) {
    return false;
  }
  // can_sensor_hangle_offset
  if (lhs->can_sensor_hangle_offset != rhs->can_sensor_hangle_offset) {
    return false;
  }
  return true;
}

bool
delphi_mrr_msgs__msg__MrrHeaderSensorPosition__copy(
  const delphi_mrr_msgs__msg__MrrHeaderSensorPosition * input,
  delphi_mrr_msgs__msg__MrrHeaderSensorPosition * output)
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
  // can_sensor_polarity
  output->can_sensor_polarity = input->can_sensor_polarity;
  // can_sensor_lat_offset
  output->can_sensor_lat_offset = input->can_sensor_lat_offset;
  // can_sensor_long_offset
  output->can_sensor_long_offset = input->can_sensor_long_offset;
  // can_sensor_hangle_offset
  output->can_sensor_hangle_offset = input->can_sensor_hangle_offset;
  return true;
}

delphi_mrr_msgs__msg__MrrHeaderSensorPosition *
delphi_mrr_msgs__msg__MrrHeaderSensorPosition__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  delphi_mrr_msgs__msg__MrrHeaderSensorPosition * msg = (delphi_mrr_msgs__msg__MrrHeaderSensorPosition *)allocator.allocate(sizeof(delphi_mrr_msgs__msg__MrrHeaderSensorPosition), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(delphi_mrr_msgs__msg__MrrHeaderSensorPosition));
  bool success = delphi_mrr_msgs__msg__MrrHeaderSensorPosition__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
delphi_mrr_msgs__msg__MrrHeaderSensorPosition__destroy(delphi_mrr_msgs__msg__MrrHeaderSensorPosition * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    delphi_mrr_msgs__msg__MrrHeaderSensorPosition__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
delphi_mrr_msgs__msg__MrrHeaderSensorPosition__Sequence__init(delphi_mrr_msgs__msg__MrrHeaderSensorPosition__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  delphi_mrr_msgs__msg__MrrHeaderSensorPosition * data = NULL;

  if (size) {
    data = (delphi_mrr_msgs__msg__MrrHeaderSensorPosition *)allocator.zero_allocate(size, sizeof(delphi_mrr_msgs__msg__MrrHeaderSensorPosition), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = delphi_mrr_msgs__msg__MrrHeaderSensorPosition__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        delphi_mrr_msgs__msg__MrrHeaderSensorPosition__fini(&data[i - 1]);
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
delphi_mrr_msgs__msg__MrrHeaderSensorPosition__Sequence__fini(delphi_mrr_msgs__msg__MrrHeaderSensorPosition__Sequence * array)
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
      delphi_mrr_msgs__msg__MrrHeaderSensorPosition__fini(&array->data[i]);
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

delphi_mrr_msgs__msg__MrrHeaderSensorPosition__Sequence *
delphi_mrr_msgs__msg__MrrHeaderSensorPosition__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  delphi_mrr_msgs__msg__MrrHeaderSensorPosition__Sequence * array = (delphi_mrr_msgs__msg__MrrHeaderSensorPosition__Sequence *)allocator.allocate(sizeof(delphi_mrr_msgs__msg__MrrHeaderSensorPosition__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = delphi_mrr_msgs__msg__MrrHeaderSensorPosition__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
delphi_mrr_msgs__msg__MrrHeaderSensorPosition__Sequence__destroy(delphi_mrr_msgs__msg__MrrHeaderSensorPosition__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    delphi_mrr_msgs__msg__MrrHeaderSensorPosition__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
delphi_mrr_msgs__msg__MrrHeaderSensorPosition__Sequence__are_equal(const delphi_mrr_msgs__msg__MrrHeaderSensorPosition__Sequence * lhs, const delphi_mrr_msgs__msg__MrrHeaderSensorPosition__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!delphi_mrr_msgs__msg__MrrHeaderSensorPosition__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
delphi_mrr_msgs__msg__MrrHeaderSensorPosition__Sequence__copy(
  const delphi_mrr_msgs__msg__MrrHeaderSensorPosition__Sequence * input,
  delphi_mrr_msgs__msg__MrrHeaderSensorPosition__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(delphi_mrr_msgs__msg__MrrHeaderSensorPosition);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    delphi_mrr_msgs__msg__MrrHeaderSensorPosition * data =
      (delphi_mrr_msgs__msg__MrrHeaderSensorPosition *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!delphi_mrr_msgs__msg__MrrHeaderSensorPosition__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          delphi_mrr_msgs__msg__MrrHeaderSensorPosition__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!delphi_mrr_msgs__msg__MrrHeaderSensorPosition__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

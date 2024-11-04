// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from neobotix_usboard_msgs:msg/SensorData.idl
// generated code does not contain a copyright notice
#include "neobotix_usboard_msgs/msg/detail/sensor_data__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
neobotix_usboard_msgs__msg__SensorData__init(neobotix_usboard_msgs__msg__SensorData * msg)
{
  if (!msg) {
    return false;
  }
  // distance
  // warn
  // alarm
  // active
  return true;
}

void
neobotix_usboard_msgs__msg__SensorData__fini(neobotix_usboard_msgs__msg__SensorData * msg)
{
  if (!msg) {
    return;
  }
  // distance
  // warn
  // alarm
  // active
}

bool
neobotix_usboard_msgs__msg__SensorData__are_equal(const neobotix_usboard_msgs__msg__SensorData * lhs, const neobotix_usboard_msgs__msg__SensorData * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // distance
  if (lhs->distance != rhs->distance) {
    return false;
  }
  // warn
  if (lhs->warn != rhs->warn) {
    return false;
  }
  // alarm
  if (lhs->alarm != rhs->alarm) {
    return false;
  }
  // active
  if (lhs->active != rhs->active) {
    return false;
  }
  return true;
}

bool
neobotix_usboard_msgs__msg__SensorData__copy(
  const neobotix_usboard_msgs__msg__SensorData * input,
  neobotix_usboard_msgs__msg__SensorData * output)
{
  if (!input || !output) {
    return false;
  }
  // distance
  output->distance = input->distance;
  // warn
  output->warn = input->warn;
  // alarm
  output->alarm = input->alarm;
  // active
  output->active = input->active;
  return true;
}

neobotix_usboard_msgs__msg__SensorData *
neobotix_usboard_msgs__msg__SensorData__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  neobotix_usboard_msgs__msg__SensorData * msg = (neobotix_usboard_msgs__msg__SensorData *)allocator.allocate(sizeof(neobotix_usboard_msgs__msg__SensorData), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(neobotix_usboard_msgs__msg__SensorData));
  bool success = neobotix_usboard_msgs__msg__SensorData__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
neobotix_usboard_msgs__msg__SensorData__destroy(neobotix_usboard_msgs__msg__SensorData * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    neobotix_usboard_msgs__msg__SensorData__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
neobotix_usboard_msgs__msg__SensorData__Sequence__init(neobotix_usboard_msgs__msg__SensorData__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  neobotix_usboard_msgs__msg__SensorData * data = NULL;

  if (size) {
    data = (neobotix_usboard_msgs__msg__SensorData *)allocator.zero_allocate(size, sizeof(neobotix_usboard_msgs__msg__SensorData), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = neobotix_usboard_msgs__msg__SensorData__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        neobotix_usboard_msgs__msg__SensorData__fini(&data[i - 1]);
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
neobotix_usboard_msgs__msg__SensorData__Sequence__fini(neobotix_usboard_msgs__msg__SensorData__Sequence * array)
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
      neobotix_usboard_msgs__msg__SensorData__fini(&array->data[i]);
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

neobotix_usboard_msgs__msg__SensorData__Sequence *
neobotix_usboard_msgs__msg__SensorData__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  neobotix_usboard_msgs__msg__SensorData__Sequence * array = (neobotix_usboard_msgs__msg__SensorData__Sequence *)allocator.allocate(sizeof(neobotix_usboard_msgs__msg__SensorData__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = neobotix_usboard_msgs__msg__SensorData__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
neobotix_usboard_msgs__msg__SensorData__Sequence__destroy(neobotix_usboard_msgs__msg__SensorData__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    neobotix_usboard_msgs__msg__SensorData__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
neobotix_usboard_msgs__msg__SensorData__Sequence__are_equal(const neobotix_usboard_msgs__msg__SensorData__Sequence * lhs, const neobotix_usboard_msgs__msg__SensorData__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!neobotix_usboard_msgs__msg__SensorData__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
neobotix_usboard_msgs__msg__SensorData__Sequence__copy(
  const neobotix_usboard_msgs__msg__SensorData__Sequence * input,
  neobotix_usboard_msgs__msg__SensorData__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(neobotix_usboard_msgs__msg__SensorData);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    neobotix_usboard_msgs__msg__SensorData * data =
      (neobotix_usboard_msgs__msg__SensorData *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!neobotix_usboard_msgs__msg__SensorData__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          neobotix_usboard_msgs__msg__SensorData__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!neobotix_usboard_msgs__msg__SensorData__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from neobotix_usboard_msgs:msg/Sensors.idl
// generated code does not contain a copyright notice
#include "neobotix_usboard_msgs/msg/detail/sensors__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `sensors`
#include "neobotix_usboard_msgs/msg/detail/sensor_data__functions.h"

bool
neobotix_usboard_msgs__msg__Sensors__init(neobotix_usboard_msgs__msg__Sensors * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    neobotix_usboard_msgs__msg__Sensors__fini(msg);
    return false;
  }
  // sensors
  if (!neobotix_usboard_msgs__msg__SensorData__Sequence__init(&msg->sensors, 0)) {
    neobotix_usboard_msgs__msg__Sensors__fini(msg);
    return false;
  }
  return true;
}

void
neobotix_usboard_msgs__msg__Sensors__fini(neobotix_usboard_msgs__msg__Sensors * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // sensors
  neobotix_usboard_msgs__msg__SensorData__Sequence__fini(&msg->sensors);
}

bool
neobotix_usboard_msgs__msg__Sensors__are_equal(const neobotix_usboard_msgs__msg__Sensors * lhs, const neobotix_usboard_msgs__msg__Sensors * rhs)
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
  // sensors
  if (!neobotix_usboard_msgs__msg__SensorData__Sequence__are_equal(
      &(lhs->sensors), &(rhs->sensors)))
  {
    return false;
  }
  return true;
}

bool
neobotix_usboard_msgs__msg__Sensors__copy(
  const neobotix_usboard_msgs__msg__Sensors * input,
  neobotix_usboard_msgs__msg__Sensors * output)
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
  // sensors
  if (!neobotix_usboard_msgs__msg__SensorData__Sequence__copy(
      &(input->sensors), &(output->sensors)))
  {
    return false;
  }
  return true;
}

neobotix_usboard_msgs__msg__Sensors *
neobotix_usboard_msgs__msg__Sensors__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  neobotix_usboard_msgs__msg__Sensors * msg = (neobotix_usboard_msgs__msg__Sensors *)allocator.allocate(sizeof(neobotix_usboard_msgs__msg__Sensors), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(neobotix_usboard_msgs__msg__Sensors));
  bool success = neobotix_usboard_msgs__msg__Sensors__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
neobotix_usboard_msgs__msg__Sensors__destroy(neobotix_usboard_msgs__msg__Sensors * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    neobotix_usboard_msgs__msg__Sensors__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
neobotix_usboard_msgs__msg__Sensors__Sequence__init(neobotix_usboard_msgs__msg__Sensors__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  neobotix_usboard_msgs__msg__Sensors * data = NULL;

  if (size) {
    data = (neobotix_usboard_msgs__msg__Sensors *)allocator.zero_allocate(size, sizeof(neobotix_usboard_msgs__msg__Sensors), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = neobotix_usboard_msgs__msg__Sensors__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        neobotix_usboard_msgs__msg__Sensors__fini(&data[i - 1]);
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
neobotix_usboard_msgs__msg__Sensors__Sequence__fini(neobotix_usboard_msgs__msg__Sensors__Sequence * array)
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
      neobotix_usboard_msgs__msg__Sensors__fini(&array->data[i]);
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

neobotix_usboard_msgs__msg__Sensors__Sequence *
neobotix_usboard_msgs__msg__Sensors__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  neobotix_usboard_msgs__msg__Sensors__Sequence * array = (neobotix_usboard_msgs__msg__Sensors__Sequence *)allocator.allocate(sizeof(neobotix_usboard_msgs__msg__Sensors__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = neobotix_usboard_msgs__msg__Sensors__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
neobotix_usboard_msgs__msg__Sensors__Sequence__destroy(neobotix_usboard_msgs__msg__Sensors__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    neobotix_usboard_msgs__msg__Sensors__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
neobotix_usboard_msgs__msg__Sensors__Sequence__are_equal(const neobotix_usboard_msgs__msg__Sensors__Sequence * lhs, const neobotix_usboard_msgs__msg__Sensors__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!neobotix_usboard_msgs__msg__Sensors__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
neobotix_usboard_msgs__msg__Sensors__Sequence__copy(
  const neobotix_usboard_msgs__msg__Sensors__Sequence * input,
  neobotix_usboard_msgs__msg__Sensors__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(neobotix_usboard_msgs__msg__Sensors);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    neobotix_usboard_msgs__msg__Sensors * data =
      (neobotix_usboard_msgs__msg__Sensors *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!neobotix_usboard_msgs__msg__Sensors__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          neobotix_usboard_msgs__msg__Sensors__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!neobotix_usboard_msgs__msg__Sensors__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

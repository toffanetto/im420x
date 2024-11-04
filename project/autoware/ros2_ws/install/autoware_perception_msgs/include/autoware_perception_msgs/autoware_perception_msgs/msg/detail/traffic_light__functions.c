// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from autoware_perception_msgs:msg/TrafficLight.idl
// generated code does not contain a copyright notice
#include "autoware_perception_msgs/msg/detail/traffic_light__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `elements`
#include "autoware_perception_msgs/msg/detail/traffic_light_element__functions.h"

bool
autoware_perception_msgs__msg__TrafficLight__init(autoware_perception_msgs__msg__TrafficLight * msg)
{
  if (!msg) {
    return false;
  }
  // traffic_light_id
  // elements
  if (!autoware_perception_msgs__msg__TrafficLightElement__Sequence__init(&msg->elements, 0)) {
    autoware_perception_msgs__msg__TrafficLight__fini(msg);
    return false;
  }
  return true;
}

void
autoware_perception_msgs__msg__TrafficLight__fini(autoware_perception_msgs__msg__TrafficLight * msg)
{
  if (!msg) {
    return;
  }
  // traffic_light_id
  // elements
  autoware_perception_msgs__msg__TrafficLightElement__Sequence__fini(&msg->elements);
}

bool
autoware_perception_msgs__msg__TrafficLight__are_equal(const autoware_perception_msgs__msg__TrafficLight * lhs, const autoware_perception_msgs__msg__TrafficLight * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // traffic_light_id
  if (lhs->traffic_light_id != rhs->traffic_light_id) {
    return false;
  }
  // elements
  if (!autoware_perception_msgs__msg__TrafficLightElement__Sequence__are_equal(
      &(lhs->elements), &(rhs->elements)))
  {
    return false;
  }
  return true;
}

bool
autoware_perception_msgs__msg__TrafficLight__copy(
  const autoware_perception_msgs__msg__TrafficLight * input,
  autoware_perception_msgs__msg__TrafficLight * output)
{
  if (!input || !output) {
    return false;
  }
  // traffic_light_id
  output->traffic_light_id = input->traffic_light_id;
  // elements
  if (!autoware_perception_msgs__msg__TrafficLightElement__Sequence__copy(
      &(input->elements), &(output->elements)))
  {
    return false;
  }
  return true;
}

autoware_perception_msgs__msg__TrafficLight *
autoware_perception_msgs__msg__TrafficLight__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_perception_msgs__msg__TrafficLight * msg = (autoware_perception_msgs__msg__TrafficLight *)allocator.allocate(sizeof(autoware_perception_msgs__msg__TrafficLight), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(autoware_perception_msgs__msg__TrafficLight));
  bool success = autoware_perception_msgs__msg__TrafficLight__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
autoware_perception_msgs__msg__TrafficLight__destroy(autoware_perception_msgs__msg__TrafficLight * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    autoware_perception_msgs__msg__TrafficLight__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
autoware_perception_msgs__msg__TrafficLight__Sequence__init(autoware_perception_msgs__msg__TrafficLight__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_perception_msgs__msg__TrafficLight * data = NULL;

  if (size) {
    data = (autoware_perception_msgs__msg__TrafficLight *)allocator.zero_allocate(size, sizeof(autoware_perception_msgs__msg__TrafficLight), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = autoware_perception_msgs__msg__TrafficLight__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        autoware_perception_msgs__msg__TrafficLight__fini(&data[i - 1]);
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
autoware_perception_msgs__msg__TrafficLight__Sequence__fini(autoware_perception_msgs__msg__TrafficLight__Sequence * array)
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
      autoware_perception_msgs__msg__TrafficLight__fini(&array->data[i]);
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

autoware_perception_msgs__msg__TrafficLight__Sequence *
autoware_perception_msgs__msg__TrafficLight__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_perception_msgs__msg__TrafficLight__Sequence * array = (autoware_perception_msgs__msg__TrafficLight__Sequence *)allocator.allocate(sizeof(autoware_perception_msgs__msg__TrafficLight__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = autoware_perception_msgs__msg__TrafficLight__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
autoware_perception_msgs__msg__TrafficLight__Sequence__destroy(autoware_perception_msgs__msg__TrafficLight__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    autoware_perception_msgs__msg__TrafficLight__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
autoware_perception_msgs__msg__TrafficLight__Sequence__are_equal(const autoware_perception_msgs__msg__TrafficLight__Sequence * lhs, const autoware_perception_msgs__msg__TrafficLight__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!autoware_perception_msgs__msg__TrafficLight__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
autoware_perception_msgs__msg__TrafficLight__Sequence__copy(
  const autoware_perception_msgs__msg__TrafficLight__Sequence * input,
  autoware_perception_msgs__msg__TrafficLight__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(autoware_perception_msgs__msg__TrafficLight);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    autoware_perception_msgs__msg__TrafficLight * data =
      (autoware_perception_msgs__msg__TrafficLight *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!autoware_perception_msgs__msg__TrafficLight__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          autoware_perception_msgs__msg__TrafficLight__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!autoware_perception_msgs__msg__TrafficLight__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

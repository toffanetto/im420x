// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from kartech_linear_actuator_msgs:msg/ReassignCommandIdCmd.idl
// generated code does not contain a copyright notice
#include "kartech_linear_actuator_msgs/msg/detail/reassign_command_id_cmd__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
kartech_linear_actuator_msgs__msg__ReassignCommandIdCmd__init(kartech_linear_actuator_msgs__msg__ReassignCommandIdCmd * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    kartech_linear_actuator_msgs__msg__ReassignCommandIdCmd__fini(msg);
    return false;
  }
  // confirm
  // command_id_index
  // user_command_id
  // disable_default_command_id
  return true;
}

void
kartech_linear_actuator_msgs__msg__ReassignCommandIdCmd__fini(kartech_linear_actuator_msgs__msg__ReassignCommandIdCmd * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // confirm
  // command_id_index
  // user_command_id
  // disable_default_command_id
}

bool
kartech_linear_actuator_msgs__msg__ReassignCommandIdCmd__are_equal(const kartech_linear_actuator_msgs__msg__ReassignCommandIdCmd * lhs, const kartech_linear_actuator_msgs__msg__ReassignCommandIdCmd * rhs)
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
  // confirm
  if (lhs->confirm != rhs->confirm) {
    return false;
  }
  // command_id_index
  if (lhs->command_id_index != rhs->command_id_index) {
    return false;
  }
  // user_command_id
  if (lhs->user_command_id != rhs->user_command_id) {
    return false;
  }
  // disable_default_command_id
  if (lhs->disable_default_command_id != rhs->disable_default_command_id) {
    return false;
  }
  return true;
}

bool
kartech_linear_actuator_msgs__msg__ReassignCommandIdCmd__copy(
  const kartech_linear_actuator_msgs__msg__ReassignCommandIdCmd * input,
  kartech_linear_actuator_msgs__msg__ReassignCommandIdCmd * output)
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
  // confirm
  output->confirm = input->confirm;
  // command_id_index
  output->command_id_index = input->command_id_index;
  // user_command_id
  output->user_command_id = input->user_command_id;
  // disable_default_command_id
  output->disable_default_command_id = input->disable_default_command_id;
  return true;
}

kartech_linear_actuator_msgs__msg__ReassignCommandIdCmd *
kartech_linear_actuator_msgs__msg__ReassignCommandIdCmd__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  kartech_linear_actuator_msgs__msg__ReassignCommandIdCmd * msg = (kartech_linear_actuator_msgs__msg__ReassignCommandIdCmd *)allocator.allocate(sizeof(kartech_linear_actuator_msgs__msg__ReassignCommandIdCmd), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(kartech_linear_actuator_msgs__msg__ReassignCommandIdCmd));
  bool success = kartech_linear_actuator_msgs__msg__ReassignCommandIdCmd__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
kartech_linear_actuator_msgs__msg__ReassignCommandIdCmd__destroy(kartech_linear_actuator_msgs__msg__ReassignCommandIdCmd * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    kartech_linear_actuator_msgs__msg__ReassignCommandIdCmd__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
kartech_linear_actuator_msgs__msg__ReassignCommandIdCmd__Sequence__init(kartech_linear_actuator_msgs__msg__ReassignCommandIdCmd__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  kartech_linear_actuator_msgs__msg__ReassignCommandIdCmd * data = NULL;

  if (size) {
    data = (kartech_linear_actuator_msgs__msg__ReassignCommandIdCmd *)allocator.zero_allocate(size, sizeof(kartech_linear_actuator_msgs__msg__ReassignCommandIdCmd), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = kartech_linear_actuator_msgs__msg__ReassignCommandIdCmd__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        kartech_linear_actuator_msgs__msg__ReassignCommandIdCmd__fini(&data[i - 1]);
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
kartech_linear_actuator_msgs__msg__ReassignCommandIdCmd__Sequence__fini(kartech_linear_actuator_msgs__msg__ReassignCommandIdCmd__Sequence * array)
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
      kartech_linear_actuator_msgs__msg__ReassignCommandIdCmd__fini(&array->data[i]);
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

kartech_linear_actuator_msgs__msg__ReassignCommandIdCmd__Sequence *
kartech_linear_actuator_msgs__msg__ReassignCommandIdCmd__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  kartech_linear_actuator_msgs__msg__ReassignCommandIdCmd__Sequence * array = (kartech_linear_actuator_msgs__msg__ReassignCommandIdCmd__Sequence *)allocator.allocate(sizeof(kartech_linear_actuator_msgs__msg__ReassignCommandIdCmd__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = kartech_linear_actuator_msgs__msg__ReassignCommandIdCmd__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
kartech_linear_actuator_msgs__msg__ReassignCommandIdCmd__Sequence__destroy(kartech_linear_actuator_msgs__msg__ReassignCommandIdCmd__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    kartech_linear_actuator_msgs__msg__ReassignCommandIdCmd__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
kartech_linear_actuator_msgs__msg__ReassignCommandIdCmd__Sequence__are_equal(const kartech_linear_actuator_msgs__msg__ReassignCommandIdCmd__Sequence * lhs, const kartech_linear_actuator_msgs__msg__ReassignCommandIdCmd__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!kartech_linear_actuator_msgs__msg__ReassignCommandIdCmd__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
kartech_linear_actuator_msgs__msg__ReassignCommandIdCmd__Sequence__copy(
  const kartech_linear_actuator_msgs__msg__ReassignCommandIdCmd__Sequence * input,
  kartech_linear_actuator_msgs__msg__ReassignCommandIdCmd__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(kartech_linear_actuator_msgs__msg__ReassignCommandIdCmd);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    kartech_linear_actuator_msgs__msg__ReassignCommandIdCmd * data =
      (kartech_linear_actuator_msgs__msg__ReassignCommandIdCmd *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!kartech_linear_actuator_msgs__msg__ReassignCommandIdCmd__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          kartech_linear_actuator_msgs__msg__ReassignCommandIdCmd__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!kartech_linear_actuator_msgs__msg__ReassignCommandIdCmd__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

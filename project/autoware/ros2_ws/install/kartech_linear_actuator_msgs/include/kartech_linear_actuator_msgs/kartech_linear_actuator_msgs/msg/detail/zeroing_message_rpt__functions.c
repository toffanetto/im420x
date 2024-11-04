// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from kartech_linear_actuator_msgs:msg/ZeroingMessageRpt.idl
// generated code does not contain a copyright notice
#include "kartech_linear_actuator_msgs/msg/detail/zeroing_message_rpt__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
kartech_linear_actuator_msgs__msg__ZeroingMessageRpt__init(kartech_linear_actuator_msgs__msg__ZeroingMessageRpt * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    kartech_linear_actuator_msgs__msg__ZeroingMessageRpt__fini(msg);
    return false;
  }
  // chip_1_voltage
  // chip_2_voltage
  // chip_error_1
  // chip_error_2
  return true;
}

void
kartech_linear_actuator_msgs__msg__ZeroingMessageRpt__fini(kartech_linear_actuator_msgs__msg__ZeroingMessageRpt * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // chip_1_voltage
  // chip_2_voltage
  // chip_error_1
  // chip_error_2
}

bool
kartech_linear_actuator_msgs__msg__ZeroingMessageRpt__are_equal(const kartech_linear_actuator_msgs__msg__ZeroingMessageRpt * lhs, const kartech_linear_actuator_msgs__msg__ZeroingMessageRpt * rhs)
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
  // chip_1_voltage
  if (lhs->chip_1_voltage != rhs->chip_1_voltage) {
    return false;
  }
  // chip_2_voltage
  if (lhs->chip_2_voltage != rhs->chip_2_voltage) {
    return false;
  }
  // chip_error_1
  if (lhs->chip_error_1 != rhs->chip_error_1) {
    return false;
  }
  // chip_error_2
  if (lhs->chip_error_2 != rhs->chip_error_2) {
    return false;
  }
  return true;
}

bool
kartech_linear_actuator_msgs__msg__ZeroingMessageRpt__copy(
  const kartech_linear_actuator_msgs__msg__ZeroingMessageRpt * input,
  kartech_linear_actuator_msgs__msg__ZeroingMessageRpt * output)
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
  // chip_1_voltage
  output->chip_1_voltage = input->chip_1_voltage;
  // chip_2_voltage
  output->chip_2_voltage = input->chip_2_voltage;
  // chip_error_1
  output->chip_error_1 = input->chip_error_1;
  // chip_error_2
  output->chip_error_2 = input->chip_error_2;
  return true;
}

kartech_linear_actuator_msgs__msg__ZeroingMessageRpt *
kartech_linear_actuator_msgs__msg__ZeroingMessageRpt__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  kartech_linear_actuator_msgs__msg__ZeroingMessageRpt * msg = (kartech_linear_actuator_msgs__msg__ZeroingMessageRpt *)allocator.allocate(sizeof(kartech_linear_actuator_msgs__msg__ZeroingMessageRpt), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(kartech_linear_actuator_msgs__msg__ZeroingMessageRpt));
  bool success = kartech_linear_actuator_msgs__msg__ZeroingMessageRpt__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
kartech_linear_actuator_msgs__msg__ZeroingMessageRpt__destroy(kartech_linear_actuator_msgs__msg__ZeroingMessageRpt * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    kartech_linear_actuator_msgs__msg__ZeroingMessageRpt__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
kartech_linear_actuator_msgs__msg__ZeroingMessageRpt__Sequence__init(kartech_linear_actuator_msgs__msg__ZeroingMessageRpt__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  kartech_linear_actuator_msgs__msg__ZeroingMessageRpt * data = NULL;

  if (size) {
    data = (kartech_linear_actuator_msgs__msg__ZeroingMessageRpt *)allocator.zero_allocate(size, sizeof(kartech_linear_actuator_msgs__msg__ZeroingMessageRpt), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = kartech_linear_actuator_msgs__msg__ZeroingMessageRpt__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        kartech_linear_actuator_msgs__msg__ZeroingMessageRpt__fini(&data[i - 1]);
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
kartech_linear_actuator_msgs__msg__ZeroingMessageRpt__Sequence__fini(kartech_linear_actuator_msgs__msg__ZeroingMessageRpt__Sequence * array)
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
      kartech_linear_actuator_msgs__msg__ZeroingMessageRpt__fini(&array->data[i]);
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

kartech_linear_actuator_msgs__msg__ZeroingMessageRpt__Sequence *
kartech_linear_actuator_msgs__msg__ZeroingMessageRpt__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  kartech_linear_actuator_msgs__msg__ZeroingMessageRpt__Sequence * array = (kartech_linear_actuator_msgs__msg__ZeroingMessageRpt__Sequence *)allocator.allocate(sizeof(kartech_linear_actuator_msgs__msg__ZeroingMessageRpt__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = kartech_linear_actuator_msgs__msg__ZeroingMessageRpt__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
kartech_linear_actuator_msgs__msg__ZeroingMessageRpt__Sequence__destroy(kartech_linear_actuator_msgs__msg__ZeroingMessageRpt__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    kartech_linear_actuator_msgs__msg__ZeroingMessageRpt__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
kartech_linear_actuator_msgs__msg__ZeroingMessageRpt__Sequence__are_equal(const kartech_linear_actuator_msgs__msg__ZeroingMessageRpt__Sequence * lhs, const kartech_linear_actuator_msgs__msg__ZeroingMessageRpt__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!kartech_linear_actuator_msgs__msg__ZeroingMessageRpt__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
kartech_linear_actuator_msgs__msg__ZeroingMessageRpt__Sequence__copy(
  const kartech_linear_actuator_msgs__msg__ZeroingMessageRpt__Sequence * input,
  kartech_linear_actuator_msgs__msg__ZeroingMessageRpt__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(kartech_linear_actuator_msgs__msg__ZeroingMessageRpt);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    kartech_linear_actuator_msgs__msg__ZeroingMessageRpt * data =
      (kartech_linear_actuator_msgs__msg__ZeroingMessageRpt *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!kartech_linear_actuator_msgs__msg__ZeroingMessageRpt__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          kartech_linear_actuator_msgs__msg__ZeroingMessageRpt__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!kartech_linear_actuator_msgs__msg__ZeroingMessageRpt__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

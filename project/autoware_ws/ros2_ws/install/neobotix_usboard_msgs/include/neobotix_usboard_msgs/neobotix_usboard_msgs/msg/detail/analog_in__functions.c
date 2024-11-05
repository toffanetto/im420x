// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from neobotix_usboard_msgs:msg/AnalogIn.idl
// generated code does not contain a copyright notice
#include "neobotix_usboard_msgs/msg/detail/analog_in__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
neobotix_usboard_msgs__msg__AnalogIn__init(neobotix_usboard_msgs__msg__AnalogIn * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    neobotix_usboard_msgs__msg__AnalogIn__fini(msg);
    return false;
  }
  // command
  // analog_data_ch4_low_byte
  // analog_data_ch4_high_bits
  // analog_data_ch3_low_byte
  // analog_data_ch3_high_bits
  // analog_data_ch2_low_byte
  // analog_data_ch2_high_bits
  // analog_data_ch1_low_byte
  // analog_data_ch1_high_bits
  return true;
}

void
neobotix_usboard_msgs__msg__AnalogIn__fini(neobotix_usboard_msgs__msg__AnalogIn * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // command
  // analog_data_ch4_low_byte
  // analog_data_ch4_high_bits
  // analog_data_ch3_low_byte
  // analog_data_ch3_high_bits
  // analog_data_ch2_low_byte
  // analog_data_ch2_high_bits
  // analog_data_ch1_low_byte
  // analog_data_ch1_high_bits
}

bool
neobotix_usboard_msgs__msg__AnalogIn__are_equal(const neobotix_usboard_msgs__msg__AnalogIn * lhs, const neobotix_usboard_msgs__msg__AnalogIn * rhs)
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
  // command
  if (lhs->command != rhs->command) {
    return false;
  }
  // analog_data_ch4_low_byte
  if (lhs->analog_data_ch4_low_byte != rhs->analog_data_ch4_low_byte) {
    return false;
  }
  // analog_data_ch4_high_bits
  if (lhs->analog_data_ch4_high_bits != rhs->analog_data_ch4_high_bits) {
    return false;
  }
  // analog_data_ch3_low_byte
  if (lhs->analog_data_ch3_low_byte != rhs->analog_data_ch3_low_byte) {
    return false;
  }
  // analog_data_ch3_high_bits
  if (lhs->analog_data_ch3_high_bits != rhs->analog_data_ch3_high_bits) {
    return false;
  }
  // analog_data_ch2_low_byte
  if (lhs->analog_data_ch2_low_byte != rhs->analog_data_ch2_low_byte) {
    return false;
  }
  // analog_data_ch2_high_bits
  if (lhs->analog_data_ch2_high_bits != rhs->analog_data_ch2_high_bits) {
    return false;
  }
  // analog_data_ch1_low_byte
  if (lhs->analog_data_ch1_low_byte != rhs->analog_data_ch1_low_byte) {
    return false;
  }
  // analog_data_ch1_high_bits
  if (lhs->analog_data_ch1_high_bits != rhs->analog_data_ch1_high_bits) {
    return false;
  }
  return true;
}

bool
neobotix_usboard_msgs__msg__AnalogIn__copy(
  const neobotix_usboard_msgs__msg__AnalogIn * input,
  neobotix_usboard_msgs__msg__AnalogIn * output)
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
  // command
  output->command = input->command;
  // analog_data_ch4_low_byte
  output->analog_data_ch4_low_byte = input->analog_data_ch4_low_byte;
  // analog_data_ch4_high_bits
  output->analog_data_ch4_high_bits = input->analog_data_ch4_high_bits;
  // analog_data_ch3_low_byte
  output->analog_data_ch3_low_byte = input->analog_data_ch3_low_byte;
  // analog_data_ch3_high_bits
  output->analog_data_ch3_high_bits = input->analog_data_ch3_high_bits;
  // analog_data_ch2_low_byte
  output->analog_data_ch2_low_byte = input->analog_data_ch2_low_byte;
  // analog_data_ch2_high_bits
  output->analog_data_ch2_high_bits = input->analog_data_ch2_high_bits;
  // analog_data_ch1_low_byte
  output->analog_data_ch1_low_byte = input->analog_data_ch1_low_byte;
  // analog_data_ch1_high_bits
  output->analog_data_ch1_high_bits = input->analog_data_ch1_high_bits;
  return true;
}

neobotix_usboard_msgs__msg__AnalogIn *
neobotix_usboard_msgs__msg__AnalogIn__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  neobotix_usboard_msgs__msg__AnalogIn * msg = (neobotix_usboard_msgs__msg__AnalogIn *)allocator.allocate(sizeof(neobotix_usboard_msgs__msg__AnalogIn), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(neobotix_usboard_msgs__msg__AnalogIn));
  bool success = neobotix_usboard_msgs__msg__AnalogIn__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
neobotix_usboard_msgs__msg__AnalogIn__destroy(neobotix_usboard_msgs__msg__AnalogIn * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    neobotix_usboard_msgs__msg__AnalogIn__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
neobotix_usboard_msgs__msg__AnalogIn__Sequence__init(neobotix_usboard_msgs__msg__AnalogIn__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  neobotix_usboard_msgs__msg__AnalogIn * data = NULL;

  if (size) {
    data = (neobotix_usboard_msgs__msg__AnalogIn *)allocator.zero_allocate(size, sizeof(neobotix_usboard_msgs__msg__AnalogIn), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = neobotix_usboard_msgs__msg__AnalogIn__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        neobotix_usboard_msgs__msg__AnalogIn__fini(&data[i - 1]);
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
neobotix_usboard_msgs__msg__AnalogIn__Sequence__fini(neobotix_usboard_msgs__msg__AnalogIn__Sequence * array)
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
      neobotix_usboard_msgs__msg__AnalogIn__fini(&array->data[i]);
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

neobotix_usboard_msgs__msg__AnalogIn__Sequence *
neobotix_usboard_msgs__msg__AnalogIn__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  neobotix_usboard_msgs__msg__AnalogIn__Sequence * array = (neobotix_usboard_msgs__msg__AnalogIn__Sequence *)allocator.allocate(sizeof(neobotix_usboard_msgs__msg__AnalogIn__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = neobotix_usboard_msgs__msg__AnalogIn__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
neobotix_usboard_msgs__msg__AnalogIn__Sequence__destroy(neobotix_usboard_msgs__msg__AnalogIn__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    neobotix_usboard_msgs__msg__AnalogIn__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
neobotix_usboard_msgs__msg__AnalogIn__Sequence__are_equal(const neobotix_usboard_msgs__msg__AnalogIn__Sequence * lhs, const neobotix_usboard_msgs__msg__AnalogIn__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!neobotix_usboard_msgs__msg__AnalogIn__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
neobotix_usboard_msgs__msg__AnalogIn__Sequence__copy(
  const neobotix_usboard_msgs__msg__AnalogIn__Sequence * input,
  neobotix_usboard_msgs__msg__AnalogIn__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(neobotix_usboard_msgs__msg__AnalogIn);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    neobotix_usboard_msgs__msg__AnalogIn * data =
      (neobotix_usboard_msgs__msg__AnalogIn *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!neobotix_usboard_msgs__msg__AnalogIn__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          neobotix_usboard_msgs__msg__AnalogIn__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!neobotix_usboard_msgs__msg__AnalogIn__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

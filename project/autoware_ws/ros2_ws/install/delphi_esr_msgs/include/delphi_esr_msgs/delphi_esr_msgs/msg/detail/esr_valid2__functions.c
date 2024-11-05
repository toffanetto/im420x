// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from delphi_esr_msgs:msg/EsrValid2.idl
// generated code does not contain a copyright notice
#include "delphi_esr_msgs/msg/detail/esr_valid2__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `canmsg`
#include "rosidl_runtime_c/string_functions.h"

bool
delphi_esr_msgs__msg__EsrValid2__init(delphi_esr_msgs__msg__EsrValid2 * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    delphi_esr_msgs__msg__EsrValid2__fini(msg);
    return false;
  }
  // canmsg
  if (!rosidl_runtime_c__String__init(&msg->canmsg)) {
    delphi_esr_msgs__msg__EsrValid2__fini(msg);
    return false;
  }
  // mr_sn
  // mr_range
  // mr_range_rate
  // mr_angle
  // mr_power
  return true;
}

void
delphi_esr_msgs__msg__EsrValid2__fini(delphi_esr_msgs__msg__EsrValid2 * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // canmsg
  rosidl_runtime_c__String__fini(&msg->canmsg);
  // mr_sn
  // mr_range
  // mr_range_rate
  // mr_angle
  // mr_power
}

bool
delphi_esr_msgs__msg__EsrValid2__are_equal(const delphi_esr_msgs__msg__EsrValid2 * lhs, const delphi_esr_msgs__msg__EsrValid2 * rhs)
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
  // canmsg
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->canmsg), &(rhs->canmsg)))
  {
    return false;
  }
  // mr_sn
  if (lhs->mr_sn != rhs->mr_sn) {
    return false;
  }
  // mr_range
  if (lhs->mr_range != rhs->mr_range) {
    return false;
  }
  // mr_range_rate
  if (lhs->mr_range_rate != rhs->mr_range_rate) {
    return false;
  }
  // mr_angle
  if (lhs->mr_angle != rhs->mr_angle) {
    return false;
  }
  // mr_power
  if (lhs->mr_power != rhs->mr_power) {
    return false;
  }
  return true;
}

bool
delphi_esr_msgs__msg__EsrValid2__copy(
  const delphi_esr_msgs__msg__EsrValid2 * input,
  delphi_esr_msgs__msg__EsrValid2 * output)
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
  // canmsg
  if (!rosidl_runtime_c__String__copy(
      &(input->canmsg), &(output->canmsg)))
  {
    return false;
  }
  // mr_sn
  output->mr_sn = input->mr_sn;
  // mr_range
  output->mr_range = input->mr_range;
  // mr_range_rate
  output->mr_range_rate = input->mr_range_rate;
  // mr_angle
  output->mr_angle = input->mr_angle;
  // mr_power
  output->mr_power = input->mr_power;
  return true;
}

delphi_esr_msgs__msg__EsrValid2 *
delphi_esr_msgs__msg__EsrValid2__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  delphi_esr_msgs__msg__EsrValid2 * msg = (delphi_esr_msgs__msg__EsrValid2 *)allocator.allocate(sizeof(delphi_esr_msgs__msg__EsrValid2), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(delphi_esr_msgs__msg__EsrValid2));
  bool success = delphi_esr_msgs__msg__EsrValid2__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
delphi_esr_msgs__msg__EsrValid2__destroy(delphi_esr_msgs__msg__EsrValid2 * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    delphi_esr_msgs__msg__EsrValid2__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
delphi_esr_msgs__msg__EsrValid2__Sequence__init(delphi_esr_msgs__msg__EsrValid2__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  delphi_esr_msgs__msg__EsrValid2 * data = NULL;

  if (size) {
    data = (delphi_esr_msgs__msg__EsrValid2 *)allocator.zero_allocate(size, sizeof(delphi_esr_msgs__msg__EsrValid2), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = delphi_esr_msgs__msg__EsrValid2__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        delphi_esr_msgs__msg__EsrValid2__fini(&data[i - 1]);
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
delphi_esr_msgs__msg__EsrValid2__Sequence__fini(delphi_esr_msgs__msg__EsrValid2__Sequence * array)
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
      delphi_esr_msgs__msg__EsrValid2__fini(&array->data[i]);
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

delphi_esr_msgs__msg__EsrValid2__Sequence *
delphi_esr_msgs__msg__EsrValid2__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  delphi_esr_msgs__msg__EsrValid2__Sequence * array = (delphi_esr_msgs__msg__EsrValid2__Sequence *)allocator.allocate(sizeof(delphi_esr_msgs__msg__EsrValid2__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = delphi_esr_msgs__msg__EsrValid2__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
delphi_esr_msgs__msg__EsrValid2__Sequence__destroy(delphi_esr_msgs__msg__EsrValid2__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    delphi_esr_msgs__msg__EsrValid2__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
delphi_esr_msgs__msg__EsrValid2__Sequence__are_equal(const delphi_esr_msgs__msg__EsrValid2__Sequence * lhs, const delphi_esr_msgs__msg__EsrValid2__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!delphi_esr_msgs__msg__EsrValid2__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
delphi_esr_msgs__msg__EsrValid2__Sequence__copy(
  const delphi_esr_msgs__msg__EsrValid2__Sequence * input,
  delphi_esr_msgs__msg__EsrValid2__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(delphi_esr_msgs__msg__EsrValid2);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    delphi_esr_msgs__msg__EsrValid2 * data =
      (delphi_esr_msgs__msg__EsrValid2 *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!delphi_esr_msgs__msg__EsrValid2__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          delphi_esr_msgs__msg__EsrValid2__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!delphi_esr_msgs__msg__EsrValid2__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

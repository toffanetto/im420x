// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from delphi_esr_msgs:msg/EsrStatus3.idl
// generated code does not contain a copyright notice
#include "delphi_esr_msgs/msg/detail/esr_status3__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `canmsg`
// Member `sw_version_host`
// Member `serial_num`
#include "rosidl_runtime_c/string_functions.h"

bool
delphi_esr_msgs__msg__EsrStatus3__init(delphi_esr_msgs__msg__EsrStatus3 * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    delphi_esr_msgs__msg__EsrStatus3__fini(msg);
    return false;
  }
  // canmsg
  if (!rosidl_runtime_c__String__init(&msg->canmsg)) {
    delphi_esr_msgs__msg__EsrStatus3__fini(msg);
    return false;
  }
  // interface_version
  // hw_version
  // sw_version_host
  if (!rosidl_runtime_c__String__init(&msg->sw_version_host)) {
    delphi_esr_msgs__msg__EsrStatus3__fini(msg);
    return false;
  }
  // serial_num
  if (!rosidl_runtime_c__String__init(&msg->serial_num)) {
    delphi_esr_msgs__msg__EsrStatus3__fini(msg);
    return false;
  }
  // sw_version_pld
  return true;
}

void
delphi_esr_msgs__msg__EsrStatus3__fini(delphi_esr_msgs__msg__EsrStatus3 * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // canmsg
  rosidl_runtime_c__String__fini(&msg->canmsg);
  // interface_version
  // hw_version
  // sw_version_host
  rosidl_runtime_c__String__fini(&msg->sw_version_host);
  // serial_num
  rosidl_runtime_c__String__fini(&msg->serial_num);
  // sw_version_pld
}

bool
delphi_esr_msgs__msg__EsrStatus3__are_equal(const delphi_esr_msgs__msg__EsrStatus3 * lhs, const delphi_esr_msgs__msg__EsrStatus3 * rhs)
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
  // interface_version
  if (lhs->interface_version != rhs->interface_version) {
    return false;
  }
  // hw_version
  if (lhs->hw_version != rhs->hw_version) {
    return false;
  }
  // sw_version_host
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->sw_version_host), &(rhs->sw_version_host)))
  {
    return false;
  }
  // serial_num
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->serial_num), &(rhs->serial_num)))
  {
    return false;
  }
  // sw_version_pld
  if (lhs->sw_version_pld != rhs->sw_version_pld) {
    return false;
  }
  return true;
}

bool
delphi_esr_msgs__msg__EsrStatus3__copy(
  const delphi_esr_msgs__msg__EsrStatus3 * input,
  delphi_esr_msgs__msg__EsrStatus3 * output)
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
  // interface_version
  output->interface_version = input->interface_version;
  // hw_version
  output->hw_version = input->hw_version;
  // sw_version_host
  if (!rosidl_runtime_c__String__copy(
      &(input->sw_version_host), &(output->sw_version_host)))
  {
    return false;
  }
  // serial_num
  if (!rosidl_runtime_c__String__copy(
      &(input->serial_num), &(output->serial_num)))
  {
    return false;
  }
  // sw_version_pld
  output->sw_version_pld = input->sw_version_pld;
  return true;
}

delphi_esr_msgs__msg__EsrStatus3 *
delphi_esr_msgs__msg__EsrStatus3__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  delphi_esr_msgs__msg__EsrStatus3 * msg = (delphi_esr_msgs__msg__EsrStatus3 *)allocator.allocate(sizeof(delphi_esr_msgs__msg__EsrStatus3), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(delphi_esr_msgs__msg__EsrStatus3));
  bool success = delphi_esr_msgs__msg__EsrStatus3__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
delphi_esr_msgs__msg__EsrStatus3__destroy(delphi_esr_msgs__msg__EsrStatus3 * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    delphi_esr_msgs__msg__EsrStatus3__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
delphi_esr_msgs__msg__EsrStatus3__Sequence__init(delphi_esr_msgs__msg__EsrStatus3__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  delphi_esr_msgs__msg__EsrStatus3 * data = NULL;

  if (size) {
    data = (delphi_esr_msgs__msg__EsrStatus3 *)allocator.zero_allocate(size, sizeof(delphi_esr_msgs__msg__EsrStatus3), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = delphi_esr_msgs__msg__EsrStatus3__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        delphi_esr_msgs__msg__EsrStatus3__fini(&data[i - 1]);
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
delphi_esr_msgs__msg__EsrStatus3__Sequence__fini(delphi_esr_msgs__msg__EsrStatus3__Sequence * array)
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
      delphi_esr_msgs__msg__EsrStatus3__fini(&array->data[i]);
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

delphi_esr_msgs__msg__EsrStatus3__Sequence *
delphi_esr_msgs__msg__EsrStatus3__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  delphi_esr_msgs__msg__EsrStatus3__Sequence * array = (delphi_esr_msgs__msg__EsrStatus3__Sequence *)allocator.allocate(sizeof(delphi_esr_msgs__msg__EsrStatus3__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = delphi_esr_msgs__msg__EsrStatus3__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
delphi_esr_msgs__msg__EsrStatus3__Sequence__destroy(delphi_esr_msgs__msg__EsrStatus3__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    delphi_esr_msgs__msg__EsrStatus3__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
delphi_esr_msgs__msg__EsrStatus3__Sequence__are_equal(const delphi_esr_msgs__msg__EsrStatus3__Sequence * lhs, const delphi_esr_msgs__msg__EsrStatus3__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!delphi_esr_msgs__msg__EsrStatus3__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
delphi_esr_msgs__msg__EsrStatus3__Sequence__copy(
  const delphi_esr_msgs__msg__EsrStatus3__Sequence * input,
  delphi_esr_msgs__msg__EsrStatus3__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(delphi_esr_msgs__msg__EsrStatus3);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    delphi_esr_msgs__msg__EsrStatus3 * data =
      (delphi_esr_msgs__msg__EsrStatus3 *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!delphi_esr_msgs__msg__EsrStatus3__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          delphi_esr_msgs__msg__EsrStatus3__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!delphi_esr_msgs__msg__EsrStatus3__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

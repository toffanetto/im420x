// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from delphi_mrr_msgs:msg/MrrStatusCanVersion.idl
// generated code does not contain a copyright notice
#include "delphi_mrr_msgs/msg/detail/mrr_status_can_version__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
delphi_mrr_msgs__msg__MrrStatusCanVersion__init(delphi_mrr_msgs__msg__MrrStatusCanVersion * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    delphi_mrr_msgs__msg__MrrStatusCanVersion__fini(msg);
    return false;
  }
  // can_usc_section_compatibility
  // can_pcan_minor_mrr
  // can_pcan_major_mrr
  return true;
}

void
delphi_mrr_msgs__msg__MrrStatusCanVersion__fini(delphi_mrr_msgs__msg__MrrStatusCanVersion * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // can_usc_section_compatibility
  // can_pcan_minor_mrr
  // can_pcan_major_mrr
}

bool
delphi_mrr_msgs__msg__MrrStatusCanVersion__are_equal(const delphi_mrr_msgs__msg__MrrStatusCanVersion * lhs, const delphi_mrr_msgs__msg__MrrStatusCanVersion * rhs)
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
  // can_usc_section_compatibility
  if (lhs->can_usc_section_compatibility != rhs->can_usc_section_compatibility) {
    return false;
  }
  // can_pcan_minor_mrr
  if (lhs->can_pcan_minor_mrr != rhs->can_pcan_minor_mrr) {
    return false;
  }
  // can_pcan_major_mrr
  if (lhs->can_pcan_major_mrr != rhs->can_pcan_major_mrr) {
    return false;
  }
  return true;
}

bool
delphi_mrr_msgs__msg__MrrStatusCanVersion__copy(
  const delphi_mrr_msgs__msg__MrrStatusCanVersion * input,
  delphi_mrr_msgs__msg__MrrStatusCanVersion * output)
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
  // can_usc_section_compatibility
  output->can_usc_section_compatibility = input->can_usc_section_compatibility;
  // can_pcan_minor_mrr
  output->can_pcan_minor_mrr = input->can_pcan_minor_mrr;
  // can_pcan_major_mrr
  output->can_pcan_major_mrr = input->can_pcan_major_mrr;
  return true;
}

delphi_mrr_msgs__msg__MrrStatusCanVersion *
delphi_mrr_msgs__msg__MrrStatusCanVersion__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  delphi_mrr_msgs__msg__MrrStatusCanVersion * msg = (delphi_mrr_msgs__msg__MrrStatusCanVersion *)allocator.allocate(sizeof(delphi_mrr_msgs__msg__MrrStatusCanVersion), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(delphi_mrr_msgs__msg__MrrStatusCanVersion));
  bool success = delphi_mrr_msgs__msg__MrrStatusCanVersion__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
delphi_mrr_msgs__msg__MrrStatusCanVersion__destroy(delphi_mrr_msgs__msg__MrrStatusCanVersion * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    delphi_mrr_msgs__msg__MrrStatusCanVersion__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
delphi_mrr_msgs__msg__MrrStatusCanVersion__Sequence__init(delphi_mrr_msgs__msg__MrrStatusCanVersion__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  delphi_mrr_msgs__msg__MrrStatusCanVersion * data = NULL;

  if (size) {
    data = (delphi_mrr_msgs__msg__MrrStatusCanVersion *)allocator.zero_allocate(size, sizeof(delphi_mrr_msgs__msg__MrrStatusCanVersion), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = delphi_mrr_msgs__msg__MrrStatusCanVersion__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        delphi_mrr_msgs__msg__MrrStatusCanVersion__fini(&data[i - 1]);
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
delphi_mrr_msgs__msg__MrrStatusCanVersion__Sequence__fini(delphi_mrr_msgs__msg__MrrStatusCanVersion__Sequence * array)
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
      delphi_mrr_msgs__msg__MrrStatusCanVersion__fini(&array->data[i]);
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

delphi_mrr_msgs__msg__MrrStatusCanVersion__Sequence *
delphi_mrr_msgs__msg__MrrStatusCanVersion__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  delphi_mrr_msgs__msg__MrrStatusCanVersion__Sequence * array = (delphi_mrr_msgs__msg__MrrStatusCanVersion__Sequence *)allocator.allocate(sizeof(delphi_mrr_msgs__msg__MrrStatusCanVersion__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = delphi_mrr_msgs__msg__MrrStatusCanVersion__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
delphi_mrr_msgs__msg__MrrStatusCanVersion__Sequence__destroy(delphi_mrr_msgs__msg__MrrStatusCanVersion__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    delphi_mrr_msgs__msg__MrrStatusCanVersion__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
delphi_mrr_msgs__msg__MrrStatusCanVersion__Sequence__are_equal(const delphi_mrr_msgs__msg__MrrStatusCanVersion__Sequence * lhs, const delphi_mrr_msgs__msg__MrrStatusCanVersion__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!delphi_mrr_msgs__msg__MrrStatusCanVersion__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
delphi_mrr_msgs__msg__MrrStatusCanVersion__Sequence__copy(
  const delphi_mrr_msgs__msg__MrrStatusCanVersion__Sequence * input,
  delphi_mrr_msgs__msg__MrrStatusCanVersion__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(delphi_mrr_msgs__msg__MrrStatusCanVersion);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    delphi_mrr_msgs__msg__MrrStatusCanVersion * data =
      (delphi_mrr_msgs__msg__MrrStatusCanVersion *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!delphi_mrr_msgs__msg__MrrStatusCanVersion__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          delphi_mrr_msgs__msg__MrrStatusCanVersion__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!delphi_mrr_msgs__msg__MrrStatusCanVersion__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

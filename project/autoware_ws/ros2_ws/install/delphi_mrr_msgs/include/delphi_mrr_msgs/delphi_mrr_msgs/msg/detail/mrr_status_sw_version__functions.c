// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from delphi_mrr_msgs:msg/MrrStatusSwVersion.idl
// generated code does not contain a copyright notice
#include "delphi_mrr_msgs/msg/detail/mrr_status_sw_version__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
delphi_mrr_msgs__msg__MrrStatusSwVersion__init(delphi_mrr_msgs__msg__MrrStatusSwVersion * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    delphi_mrr_msgs__msg__MrrStatusSwVersion__fini(msg);
    return false;
  }
  // can_pbl_field_revision
  // can_pbl_promote_revision
  // can_sw_field_revision
  // can_sw_promote_revision
  // can_sw_release_revision
  // can_pbl_release_revision
  return true;
}

void
delphi_mrr_msgs__msg__MrrStatusSwVersion__fini(delphi_mrr_msgs__msg__MrrStatusSwVersion * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // can_pbl_field_revision
  // can_pbl_promote_revision
  // can_sw_field_revision
  // can_sw_promote_revision
  // can_sw_release_revision
  // can_pbl_release_revision
}

bool
delphi_mrr_msgs__msg__MrrStatusSwVersion__are_equal(const delphi_mrr_msgs__msg__MrrStatusSwVersion * lhs, const delphi_mrr_msgs__msg__MrrStatusSwVersion * rhs)
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
  // can_pbl_field_revision
  if (lhs->can_pbl_field_revision != rhs->can_pbl_field_revision) {
    return false;
  }
  // can_pbl_promote_revision
  if (lhs->can_pbl_promote_revision != rhs->can_pbl_promote_revision) {
    return false;
  }
  // can_sw_field_revision
  if (lhs->can_sw_field_revision != rhs->can_sw_field_revision) {
    return false;
  }
  // can_sw_promote_revision
  if (lhs->can_sw_promote_revision != rhs->can_sw_promote_revision) {
    return false;
  }
  // can_sw_release_revision
  if (lhs->can_sw_release_revision != rhs->can_sw_release_revision) {
    return false;
  }
  // can_pbl_release_revision
  if (lhs->can_pbl_release_revision != rhs->can_pbl_release_revision) {
    return false;
  }
  return true;
}

bool
delphi_mrr_msgs__msg__MrrStatusSwVersion__copy(
  const delphi_mrr_msgs__msg__MrrStatusSwVersion * input,
  delphi_mrr_msgs__msg__MrrStatusSwVersion * output)
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
  // can_pbl_field_revision
  output->can_pbl_field_revision = input->can_pbl_field_revision;
  // can_pbl_promote_revision
  output->can_pbl_promote_revision = input->can_pbl_promote_revision;
  // can_sw_field_revision
  output->can_sw_field_revision = input->can_sw_field_revision;
  // can_sw_promote_revision
  output->can_sw_promote_revision = input->can_sw_promote_revision;
  // can_sw_release_revision
  output->can_sw_release_revision = input->can_sw_release_revision;
  // can_pbl_release_revision
  output->can_pbl_release_revision = input->can_pbl_release_revision;
  return true;
}

delphi_mrr_msgs__msg__MrrStatusSwVersion *
delphi_mrr_msgs__msg__MrrStatusSwVersion__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  delphi_mrr_msgs__msg__MrrStatusSwVersion * msg = (delphi_mrr_msgs__msg__MrrStatusSwVersion *)allocator.allocate(sizeof(delphi_mrr_msgs__msg__MrrStatusSwVersion), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(delphi_mrr_msgs__msg__MrrStatusSwVersion));
  bool success = delphi_mrr_msgs__msg__MrrStatusSwVersion__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
delphi_mrr_msgs__msg__MrrStatusSwVersion__destroy(delphi_mrr_msgs__msg__MrrStatusSwVersion * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    delphi_mrr_msgs__msg__MrrStatusSwVersion__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
delphi_mrr_msgs__msg__MrrStatusSwVersion__Sequence__init(delphi_mrr_msgs__msg__MrrStatusSwVersion__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  delphi_mrr_msgs__msg__MrrStatusSwVersion * data = NULL;

  if (size) {
    data = (delphi_mrr_msgs__msg__MrrStatusSwVersion *)allocator.zero_allocate(size, sizeof(delphi_mrr_msgs__msg__MrrStatusSwVersion), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = delphi_mrr_msgs__msg__MrrStatusSwVersion__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        delphi_mrr_msgs__msg__MrrStatusSwVersion__fini(&data[i - 1]);
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
delphi_mrr_msgs__msg__MrrStatusSwVersion__Sequence__fini(delphi_mrr_msgs__msg__MrrStatusSwVersion__Sequence * array)
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
      delphi_mrr_msgs__msg__MrrStatusSwVersion__fini(&array->data[i]);
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

delphi_mrr_msgs__msg__MrrStatusSwVersion__Sequence *
delphi_mrr_msgs__msg__MrrStatusSwVersion__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  delphi_mrr_msgs__msg__MrrStatusSwVersion__Sequence * array = (delphi_mrr_msgs__msg__MrrStatusSwVersion__Sequence *)allocator.allocate(sizeof(delphi_mrr_msgs__msg__MrrStatusSwVersion__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = delphi_mrr_msgs__msg__MrrStatusSwVersion__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
delphi_mrr_msgs__msg__MrrStatusSwVersion__Sequence__destroy(delphi_mrr_msgs__msg__MrrStatusSwVersion__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    delphi_mrr_msgs__msg__MrrStatusSwVersion__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
delphi_mrr_msgs__msg__MrrStatusSwVersion__Sequence__are_equal(const delphi_mrr_msgs__msg__MrrStatusSwVersion__Sequence * lhs, const delphi_mrr_msgs__msg__MrrStatusSwVersion__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!delphi_mrr_msgs__msg__MrrStatusSwVersion__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
delphi_mrr_msgs__msg__MrrStatusSwVersion__Sequence__copy(
  const delphi_mrr_msgs__msg__MrrStatusSwVersion__Sequence * input,
  delphi_mrr_msgs__msg__MrrStatusSwVersion__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(delphi_mrr_msgs__msg__MrrStatusSwVersion);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    delphi_mrr_msgs__msg__MrrStatusSwVersion * data =
      (delphi_mrr_msgs__msg__MrrStatusSwVersion *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!delphi_mrr_msgs__msg__MrrStatusSwVersion__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          delphi_mrr_msgs__msg__MrrStatusSwVersion__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!delphi_mrr_msgs__msg__MrrStatusSwVersion__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

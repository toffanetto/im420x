// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ibeo_msgs:msg/Object2271.idl
// generated code does not contain a copyright notice
#include "ibeo_msgs/msg/detail/object2271__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `tracked_properties`
#include "ibeo_msgs/msg/detail/tracked_properties__functions.h"
// Member `untracked_properties`
#include "ibeo_msgs/msg/detail/untracked_properties__functions.h"

bool
ibeo_msgs__msg__Object2271__init(ibeo_msgs__msg__Object2271 * msg)
{
  if (!msg) {
    return false;
  }
  // id
  // tracked_properties_available
  // untracked_properties_available
  // tracked_properties
  if (!ibeo_msgs__msg__TrackedProperties__init(&msg->tracked_properties)) {
    ibeo_msgs__msg__Object2271__fini(msg);
    return false;
  }
  // untracked_properties
  if (!ibeo_msgs__msg__UntrackedProperties__init(&msg->untracked_properties)) {
    ibeo_msgs__msg__Object2271__fini(msg);
    return false;
  }
  return true;
}

void
ibeo_msgs__msg__Object2271__fini(ibeo_msgs__msg__Object2271 * msg)
{
  if (!msg) {
    return;
  }
  // id
  // tracked_properties_available
  // untracked_properties_available
  // tracked_properties
  ibeo_msgs__msg__TrackedProperties__fini(&msg->tracked_properties);
  // untracked_properties
  ibeo_msgs__msg__UntrackedProperties__fini(&msg->untracked_properties);
}

bool
ibeo_msgs__msg__Object2271__are_equal(const ibeo_msgs__msg__Object2271 * lhs, const ibeo_msgs__msg__Object2271 * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // id
  if (lhs->id != rhs->id) {
    return false;
  }
  // tracked_properties_available
  if (lhs->tracked_properties_available != rhs->tracked_properties_available) {
    return false;
  }
  // untracked_properties_available
  if (lhs->untracked_properties_available != rhs->untracked_properties_available) {
    return false;
  }
  // tracked_properties
  if (!ibeo_msgs__msg__TrackedProperties__are_equal(
      &(lhs->tracked_properties), &(rhs->tracked_properties)))
  {
    return false;
  }
  // untracked_properties
  if (!ibeo_msgs__msg__UntrackedProperties__are_equal(
      &(lhs->untracked_properties), &(rhs->untracked_properties)))
  {
    return false;
  }
  return true;
}

bool
ibeo_msgs__msg__Object2271__copy(
  const ibeo_msgs__msg__Object2271 * input,
  ibeo_msgs__msg__Object2271 * output)
{
  if (!input || !output) {
    return false;
  }
  // id
  output->id = input->id;
  // tracked_properties_available
  output->tracked_properties_available = input->tracked_properties_available;
  // untracked_properties_available
  output->untracked_properties_available = input->untracked_properties_available;
  // tracked_properties
  if (!ibeo_msgs__msg__TrackedProperties__copy(
      &(input->tracked_properties), &(output->tracked_properties)))
  {
    return false;
  }
  // untracked_properties
  if (!ibeo_msgs__msg__UntrackedProperties__copy(
      &(input->untracked_properties), &(output->untracked_properties)))
  {
    return false;
  }
  return true;
}

ibeo_msgs__msg__Object2271 *
ibeo_msgs__msg__Object2271__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ibeo_msgs__msg__Object2271 * msg = (ibeo_msgs__msg__Object2271 *)allocator.allocate(sizeof(ibeo_msgs__msg__Object2271), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ibeo_msgs__msg__Object2271));
  bool success = ibeo_msgs__msg__Object2271__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ibeo_msgs__msg__Object2271__destroy(ibeo_msgs__msg__Object2271 * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ibeo_msgs__msg__Object2271__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ibeo_msgs__msg__Object2271__Sequence__init(ibeo_msgs__msg__Object2271__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ibeo_msgs__msg__Object2271 * data = NULL;

  if (size) {
    data = (ibeo_msgs__msg__Object2271 *)allocator.zero_allocate(size, sizeof(ibeo_msgs__msg__Object2271), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ibeo_msgs__msg__Object2271__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ibeo_msgs__msg__Object2271__fini(&data[i - 1]);
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
ibeo_msgs__msg__Object2271__Sequence__fini(ibeo_msgs__msg__Object2271__Sequence * array)
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
      ibeo_msgs__msg__Object2271__fini(&array->data[i]);
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

ibeo_msgs__msg__Object2271__Sequence *
ibeo_msgs__msg__Object2271__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ibeo_msgs__msg__Object2271__Sequence * array = (ibeo_msgs__msg__Object2271__Sequence *)allocator.allocate(sizeof(ibeo_msgs__msg__Object2271__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ibeo_msgs__msg__Object2271__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ibeo_msgs__msg__Object2271__Sequence__destroy(ibeo_msgs__msg__Object2271__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ibeo_msgs__msg__Object2271__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ibeo_msgs__msg__Object2271__Sequence__are_equal(const ibeo_msgs__msg__Object2271__Sequence * lhs, const ibeo_msgs__msg__Object2271__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ibeo_msgs__msg__Object2271__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ibeo_msgs__msg__Object2271__Sequence__copy(
  const ibeo_msgs__msg__Object2271__Sequence * input,
  ibeo_msgs__msg__Object2271__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ibeo_msgs__msg__Object2271);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ibeo_msgs__msg__Object2271 * data =
      (ibeo_msgs__msg__Object2271 *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ibeo_msgs__msg__Object2271__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ibeo_msgs__msg__Object2271__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ibeo_msgs__msg__Object2271__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

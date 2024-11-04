// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from derived_object_msgs:msg/ObjectWithCovarianceArray.idl
// generated code does not contain a copyright notice
#include "derived_object_msgs/msg/detail/object_with_covariance_array__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `objects`
#include "derived_object_msgs/msg/detail/object_with_covariance__functions.h"

bool
derived_object_msgs__msg__ObjectWithCovarianceArray__init(derived_object_msgs__msg__ObjectWithCovarianceArray * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    derived_object_msgs__msg__ObjectWithCovarianceArray__fini(msg);
    return false;
  }
  // objects
  if (!derived_object_msgs__msg__ObjectWithCovariance__Sequence__init(&msg->objects, 0)) {
    derived_object_msgs__msg__ObjectWithCovarianceArray__fini(msg);
    return false;
  }
  return true;
}

void
derived_object_msgs__msg__ObjectWithCovarianceArray__fini(derived_object_msgs__msg__ObjectWithCovarianceArray * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // objects
  derived_object_msgs__msg__ObjectWithCovariance__Sequence__fini(&msg->objects);
}

bool
derived_object_msgs__msg__ObjectWithCovarianceArray__are_equal(const derived_object_msgs__msg__ObjectWithCovarianceArray * lhs, const derived_object_msgs__msg__ObjectWithCovarianceArray * rhs)
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
  // objects
  if (!derived_object_msgs__msg__ObjectWithCovariance__Sequence__are_equal(
      &(lhs->objects), &(rhs->objects)))
  {
    return false;
  }
  return true;
}

bool
derived_object_msgs__msg__ObjectWithCovarianceArray__copy(
  const derived_object_msgs__msg__ObjectWithCovarianceArray * input,
  derived_object_msgs__msg__ObjectWithCovarianceArray * output)
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
  // objects
  if (!derived_object_msgs__msg__ObjectWithCovariance__Sequence__copy(
      &(input->objects), &(output->objects)))
  {
    return false;
  }
  return true;
}

derived_object_msgs__msg__ObjectWithCovarianceArray *
derived_object_msgs__msg__ObjectWithCovarianceArray__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  derived_object_msgs__msg__ObjectWithCovarianceArray * msg = (derived_object_msgs__msg__ObjectWithCovarianceArray *)allocator.allocate(sizeof(derived_object_msgs__msg__ObjectWithCovarianceArray), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(derived_object_msgs__msg__ObjectWithCovarianceArray));
  bool success = derived_object_msgs__msg__ObjectWithCovarianceArray__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
derived_object_msgs__msg__ObjectWithCovarianceArray__destroy(derived_object_msgs__msg__ObjectWithCovarianceArray * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    derived_object_msgs__msg__ObjectWithCovarianceArray__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
derived_object_msgs__msg__ObjectWithCovarianceArray__Sequence__init(derived_object_msgs__msg__ObjectWithCovarianceArray__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  derived_object_msgs__msg__ObjectWithCovarianceArray * data = NULL;

  if (size) {
    data = (derived_object_msgs__msg__ObjectWithCovarianceArray *)allocator.zero_allocate(size, sizeof(derived_object_msgs__msg__ObjectWithCovarianceArray), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = derived_object_msgs__msg__ObjectWithCovarianceArray__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        derived_object_msgs__msg__ObjectWithCovarianceArray__fini(&data[i - 1]);
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
derived_object_msgs__msg__ObjectWithCovarianceArray__Sequence__fini(derived_object_msgs__msg__ObjectWithCovarianceArray__Sequence * array)
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
      derived_object_msgs__msg__ObjectWithCovarianceArray__fini(&array->data[i]);
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

derived_object_msgs__msg__ObjectWithCovarianceArray__Sequence *
derived_object_msgs__msg__ObjectWithCovarianceArray__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  derived_object_msgs__msg__ObjectWithCovarianceArray__Sequence * array = (derived_object_msgs__msg__ObjectWithCovarianceArray__Sequence *)allocator.allocate(sizeof(derived_object_msgs__msg__ObjectWithCovarianceArray__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = derived_object_msgs__msg__ObjectWithCovarianceArray__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
derived_object_msgs__msg__ObjectWithCovarianceArray__Sequence__destroy(derived_object_msgs__msg__ObjectWithCovarianceArray__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    derived_object_msgs__msg__ObjectWithCovarianceArray__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
derived_object_msgs__msg__ObjectWithCovarianceArray__Sequence__are_equal(const derived_object_msgs__msg__ObjectWithCovarianceArray__Sequence * lhs, const derived_object_msgs__msg__ObjectWithCovarianceArray__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!derived_object_msgs__msg__ObjectWithCovarianceArray__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
derived_object_msgs__msg__ObjectWithCovarianceArray__Sequence__copy(
  const derived_object_msgs__msg__ObjectWithCovarianceArray__Sequence * input,
  derived_object_msgs__msg__ObjectWithCovarianceArray__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(derived_object_msgs__msg__ObjectWithCovarianceArray);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    derived_object_msgs__msg__ObjectWithCovarianceArray * data =
      (derived_object_msgs__msg__ObjectWithCovarianceArray *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!derived_object_msgs__msg__ObjectWithCovarianceArray__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          derived_object_msgs__msg__ObjectWithCovarianceArray__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!derived_object_msgs__msg__ObjectWithCovarianceArray__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

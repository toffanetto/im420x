// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ibeo_msgs:msg/ContourPointSigma.idl
// generated code does not contain a copyright notice
#include "ibeo_msgs/msg/detail/contour_point_sigma__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
ibeo_msgs__msg__ContourPointSigma__init(ibeo_msgs__msg__ContourPointSigma * msg)
{
  if (!msg) {
    return false;
  }
  // x
  // y
  // x_sigma
  // y_sigma
  return true;
}

void
ibeo_msgs__msg__ContourPointSigma__fini(ibeo_msgs__msg__ContourPointSigma * msg)
{
  if (!msg) {
    return;
  }
  // x
  // y
  // x_sigma
  // y_sigma
}

bool
ibeo_msgs__msg__ContourPointSigma__are_equal(const ibeo_msgs__msg__ContourPointSigma * lhs, const ibeo_msgs__msg__ContourPointSigma * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // x
  if (lhs->x != rhs->x) {
    return false;
  }
  // y
  if (lhs->y != rhs->y) {
    return false;
  }
  // x_sigma
  if (lhs->x_sigma != rhs->x_sigma) {
    return false;
  }
  // y_sigma
  if (lhs->y_sigma != rhs->y_sigma) {
    return false;
  }
  return true;
}

bool
ibeo_msgs__msg__ContourPointSigma__copy(
  const ibeo_msgs__msg__ContourPointSigma * input,
  ibeo_msgs__msg__ContourPointSigma * output)
{
  if (!input || !output) {
    return false;
  }
  // x
  output->x = input->x;
  // y
  output->y = input->y;
  // x_sigma
  output->x_sigma = input->x_sigma;
  // y_sigma
  output->y_sigma = input->y_sigma;
  return true;
}

ibeo_msgs__msg__ContourPointSigma *
ibeo_msgs__msg__ContourPointSigma__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ibeo_msgs__msg__ContourPointSigma * msg = (ibeo_msgs__msg__ContourPointSigma *)allocator.allocate(sizeof(ibeo_msgs__msg__ContourPointSigma), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ibeo_msgs__msg__ContourPointSigma));
  bool success = ibeo_msgs__msg__ContourPointSigma__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ibeo_msgs__msg__ContourPointSigma__destroy(ibeo_msgs__msg__ContourPointSigma * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ibeo_msgs__msg__ContourPointSigma__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ibeo_msgs__msg__ContourPointSigma__Sequence__init(ibeo_msgs__msg__ContourPointSigma__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ibeo_msgs__msg__ContourPointSigma * data = NULL;

  if (size) {
    data = (ibeo_msgs__msg__ContourPointSigma *)allocator.zero_allocate(size, sizeof(ibeo_msgs__msg__ContourPointSigma), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ibeo_msgs__msg__ContourPointSigma__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ibeo_msgs__msg__ContourPointSigma__fini(&data[i - 1]);
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
ibeo_msgs__msg__ContourPointSigma__Sequence__fini(ibeo_msgs__msg__ContourPointSigma__Sequence * array)
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
      ibeo_msgs__msg__ContourPointSigma__fini(&array->data[i]);
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

ibeo_msgs__msg__ContourPointSigma__Sequence *
ibeo_msgs__msg__ContourPointSigma__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ibeo_msgs__msg__ContourPointSigma__Sequence * array = (ibeo_msgs__msg__ContourPointSigma__Sequence *)allocator.allocate(sizeof(ibeo_msgs__msg__ContourPointSigma__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ibeo_msgs__msg__ContourPointSigma__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ibeo_msgs__msg__ContourPointSigma__Sequence__destroy(ibeo_msgs__msg__ContourPointSigma__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ibeo_msgs__msg__ContourPointSigma__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ibeo_msgs__msg__ContourPointSigma__Sequence__are_equal(const ibeo_msgs__msg__ContourPointSigma__Sequence * lhs, const ibeo_msgs__msg__ContourPointSigma__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ibeo_msgs__msg__ContourPointSigma__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ibeo_msgs__msg__ContourPointSigma__Sequence__copy(
  const ibeo_msgs__msg__ContourPointSigma__Sequence * input,
  ibeo_msgs__msg__ContourPointSigma__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ibeo_msgs__msg__ContourPointSigma);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ibeo_msgs__msg__ContourPointSigma * data =
      (ibeo_msgs__msg__ContourPointSigma *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ibeo_msgs__msg__ContourPointSigma__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ibeo_msgs__msg__ContourPointSigma__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ibeo_msgs__msg__ContourPointSigma__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

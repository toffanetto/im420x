// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ibeo_msgs:msg/Sigma2D.idl
// generated code does not contain a copyright notice
#include "ibeo_msgs/msg/detail/sigma2_d__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
ibeo_msgs__msg__Sigma2D__init(ibeo_msgs__msg__Sigma2D * msg)
{
  if (!msg) {
    return false;
  }
  // sigma_x
  // sigma_y
  return true;
}

void
ibeo_msgs__msg__Sigma2D__fini(ibeo_msgs__msg__Sigma2D * msg)
{
  if (!msg) {
    return;
  }
  // sigma_x
  // sigma_y
}

bool
ibeo_msgs__msg__Sigma2D__are_equal(const ibeo_msgs__msg__Sigma2D * lhs, const ibeo_msgs__msg__Sigma2D * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // sigma_x
  if (lhs->sigma_x != rhs->sigma_x) {
    return false;
  }
  // sigma_y
  if (lhs->sigma_y != rhs->sigma_y) {
    return false;
  }
  return true;
}

bool
ibeo_msgs__msg__Sigma2D__copy(
  const ibeo_msgs__msg__Sigma2D * input,
  ibeo_msgs__msg__Sigma2D * output)
{
  if (!input || !output) {
    return false;
  }
  // sigma_x
  output->sigma_x = input->sigma_x;
  // sigma_y
  output->sigma_y = input->sigma_y;
  return true;
}

ibeo_msgs__msg__Sigma2D *
ibeo_msgs__msg__Sigma2D__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ibeo_msgs__msg__Sigma2D * msg = (ibeo_msgs__msg__Sigma2D *)allocator.allocate(sizeof(ibeo_msgs__msg__Sigma2D), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ibeo_msgs__msg__Sigma2D));
  bool success = ibeo_msgs__msg__Sigma2D__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ibeo_msgs__msg__Sigma2D__destroy(ibeo_msgs__msg__Sigma2D * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ibeo_msgs__msg__Sigma2D__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ibeo_msgs__msg__Sigma2D__Sequence__init(ibeo_msgs__msg__Sigma2D__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ibeo_msgs__msg__Sigma2D * data = NULL;

  if (size) {
    data = (ibeo_msgs__msg__Sigma2D *)allocator.zero_allocate(size, sizeof(ibeo_msgs__msg__Sigma2D), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ibeo_msgs__msg__Sigma2D__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ibeo_msgs__msg__Sigma2D__fini(&data[i - 1]);
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
ibeo_msgs__msg__Sigma2D__Sequence__fini(ibeo_msgs__msg__Sigma2D__Sequence * array)
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
      ibeo_msgs__msg__Sigma2D__fini(&array->data[i]);
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

ibeo_msgs__msg__Sigma2D__Sequence *
ibeo_msgs__msg__Sigma2D__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ibeo_msgs__msg__Sigma2D__Sequence * array = (ibeo_msgs__msg__Sigma2D__Sequence *)allocator.allocate(sizeof(ibeo_msgs__msg__Sigma2D__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ibeo_msgs__msg__Sigma2D__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ibeo_msgs__msg__Sigma2D__Sequence__destroy(ibeo_msgs__msg__Sigma2D__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ibeo_msgs__msg__Sigma2D__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ibeo_msgs__msg__Sigma2D__Sequence__are_equal(const ibeo_msgs__msg__Sigma2D__Sequence * lhs, const ibeo_msgs__msg__Sigma2D__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ibeo_msgs__msg__Sigma2D__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ibeo_msgs__msg__Sigma2D__Sequence__copy(
  const ibeo_msgs__msg__Sigma2D__Sequence * input,
  ibeo_msgs__msg__Sigma2D__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ibeo_msgs__msg__Sigma2D);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ibeo_msgs__msg__Sigma2D * data =
      (ibeo_msgs__msg__Sigma2D *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ibeo_msgs__msg__Sigma2D__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ibeo_msgs__msg__Sigma2D__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ibeo_msgs__msg__Sigma2D__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

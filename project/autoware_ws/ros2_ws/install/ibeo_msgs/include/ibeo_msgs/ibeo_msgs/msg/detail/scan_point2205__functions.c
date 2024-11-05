// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ibeo_msgs:msg/ScanPoint2205.idl
// generated code does not contain a copyright notice
#include "ibeo_msgs/msg/detail/scan_point2205__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
ibeo_msgs__msg__ScanPoint2205__init(ibeo_msgs__msg__ScanPoint2205 * msg)
{
  if (!msg) {
    return false;
  }
  // x_position
  // y_position
  // z_position
  // echo_width
  // device_id
  // layer
  // echo
  // time_offset
  // ground
  // dirt
  // precipitation
  // transparent
  return true;
}

void
ibeo_msgs__msg__ScanPoint2205__fini(ibeo_msgs__msg__ScanPoint2205 * msg)
{
  if (!msg) {
    return;
  }
  // x_position
  // y_position
  // z_position
  // echo_width
  // device_id
  // layer
  // echo
  // time_offset
  // ground
  // dirt
  // precipitation
  // transparent
}

bool
ibeo_msgs__msg__ScanPoint2205__are_equal(const ibeo_msgs__msg__ScanPoint2205 * lhs, const ibeo_msgs__msg__ScanPoint2205 * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // x_position
  if (lhs->x_position != rhs->x_position) {
    return false;
  }
  // y_position
  if (lhs->y_position != rhs->y_position) {
    return false;
  }
  // z_position
  if (lhs->z_position != rhs->z_position) {
    return false;
  }
  // echo_width
  if (lhs->echo_width != rhs->echo_width) {
    return false;
  }
  // device_id
  if (lhs->device_id != rhs->device_id) {
    return false;
  }
  // layer
  if (lhs->layer != rhs->layer) {
    return false;
  }
  // echo
  if (lhs->echo != rhs->echo) {
    return false;
  }
  // time_offset
  if (lhs->time_offset != rhs->time_offset) {
    return false;
  }
  // ground
  if (lhs->ground != rhs->ground) {
    return false;
  }
  // dirt
  if (lhs->dirt != rhs->dirt) {
    return false;
  }
  // precipitation
  if (lhs->precipitation != rhs->precipitation) {
    return false;
  }
  // transparent
  if (lhs->transparent != rhs->transparent) {
    return false;
  }
  return true;
}

bool
ibeo_msgs__msg__ScanPoint2205__copy(
  const ibeo_msgs__msg__ScanPoint2205 * input,
  ibeo_msgs__msg__ScanPoint2205 * output)
{
  if (!input || !output) {
    return false;
  }
  // x_position
  output->x_position = input->x_position;
  // y_position
  output->y_position = input->y_position;
  // z_position
  output->z_position = input->z_position;
  // echo_width
  output->echo_width = input->echo_width;
  // device_id
  output->device_id = input->device_id;
  // layer
  output->layer = input->layer;
  // echo
  output->echo = input->echo;
  // time_offset
  output->time_offset = input->time_offset;
  // ground
  output->ground = input->ground;
  // dirt
  output->dirt = input->dirt;
  // precipitation
  output->precipitation = input->precipitation;
  // transparent
  output->transparent = input->transparent;
  return true;
}

ibeo_msgs__msg__ScanPoint2205 *
ibeo_msgs__msg__ScanPoint2205__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ibeo_msgs__msg__ScanPoint2205 * msg = (ibeo_msgs__msg__ScanPoint2205 *)allocator.allocate(sizeof(ibeo_msgs__msg__ScanPoint2205), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ibeo_msgs__msg__ScanPoint2205));
  bool success = ibeo_msgs__msg__ScanPoint2205__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ibeo_msgs__msg__ScanPoint2205__destroy(ibeo_msgs__msg__ScanPoint2205 * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ibeo_msgs__msg__ScanPoint2205__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ibeo_msgs__msg__ScanPoint2205__Sequence__init(ibeo_msgs__msg__ScanPoint2205__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ibeo_msgs__msg__ScanPoint2205 * data = NULL;

  if (size) {
    data = (ibeo_msgs__msg__ScanPoint2205 *)allocator.zero_allocate(size, sizeof(ibeo_msgs__msg__ScanPoint2205), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ibeo_msgs__msg__ScanPoint2205__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ibeo_msgs__msg__ScanPoint2205__fini(&data[i - 1]);
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
ibeo_msgs__msg__ScanPoint2205__Sequence__fini(ibeo_msgs__msg__ScanPoint2205__Sequence * array)
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
      ibeo_msgs__msg__ScanPoint2205__fini(&array->data[i]);
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

ibeo_msgs__msg__ScanPoint2205__Sequence *
ibeo_msgs__msg__ScanPoint2205__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ibeo_msgs__msg__ScanPoint2205__Sequence * array = (ibeo_msgs__msg__ScanPoint2205__Sequence *)allocator.allocate(sizeof(ibeo_msgs__msg__ScanPoint2205__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ibeo_msgs__msg__ScanPoint2205__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ibeo_msgs__msg__ScanPoint2205__Sequence__destroy(ibeo_msgs__msg__ScanPoint2205__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ibeo_msgs__msg__ScanPoint2205__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ibeo_msgs__msg__ScanPoint2205__Sequence__are_equal(const ibeo_msgs__msg__ScanPoint2205__Sequence * lhs, const ibeo_msgs__msg__ScanPoint2205__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ibeo_msgs__msg__ScanPoint2205__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ibeo_msgs__msg__ScanPoint2205__Sequence__copy(
  const ibeo_msgs__msg__ScanPoint2205__Sequence * input,
  ibeo_msgs__msg__ScanPoint2205__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ibeo_msgs__msg__ScanPoint2205);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ibeo_msgs__msg__ScanPoint2205 * data =
      (ibeo_msgs__msg__ScanPoint2205 *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ibeo_msgs__msg__ScanPoint2205__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ibeo_msgs__msg__ScanPoint2205__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ibeo_msgs__msg__ScanPoint2205__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

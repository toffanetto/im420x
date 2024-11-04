// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ibeo_msgs:msg/MountingPositionF.idl
// generated code does not contain a copyright notice
#include "ibeo_msgs/msg/detail/mounting_position_f__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
ibeo_msgs__msg__MountingPositionF__init(ibeo_msgs__msg__MountingPositionF * msg)
{
  if (!msg) {
    return false;
  }
  // yaw_angle
  // pitch_angle
  // roll_angle
  // x_position
  // y_position
  // z_position
  return true;
}

void
ibeo_msgs__msg__MountingPositionF__fini(ibeo_msgs__msg__MountingPositionF * msg)
{
  if (!msg) {
    return;
  }
  // yaw_angle
  // pitch_angle
  // roll_angle
  // x_position
  // y_position
  // z_position
}

bool
ibeo_msgs__msg__MountingPositionF__are_equal(const ibeo_msgs__msg__MountingPositionF * lhs, const ibeo_msgs__msg__MountingPositionF * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // yaw_angle
  if (lhs->yaw_angle != rhs->yaw_angle) {
    return false;
  }
  // pitch_angle
  if (lhs->pitch_angle != rhs->pitch_angle) {
    return false;
  }
  // roll_angle
  if (lhs->roll_angle != rhs->roll_angle) {
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
  return true;
}

bool
ibeo_msgs__msg__MountingPositionF__copy(
  const ibeo_msgs__msg__MountingPositionF * input,
  ibeo_msgs__msg__MountingPositionF * output)
{
  if (!input || !output) {
    return false;
  }
  // yaw_angle
  output->yaw_angle = input->yaw_angle;
  // pitch_angle
  output->pitch_angle = input->pitch_angle;
  // roll_angle
  output->roll_angle = input->roll_angle;
  // x_position
  output->x_position = input->x_position;
  // y_position
  output->y_position = input->y_position;
  // z_position
  output->z_position = input->z_position;
  return true;
}

ibeo_msgs__msg__MountingPositionF *
ibeo_msgs__msg__MountingPositionF__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ibeo_msgs__msg__MountingPositionF * msg = (ibeo_msgs__msg__MountingPositionF *)allocator.allocate(sizeof(ibeo_msgs__msg__MountingPositionF), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ibeo_msgs__msg__MountingPositionF));
  bool success = ibeo_msgs__msg__MountingPositionF__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ibeo_msgs__msg__MountingPositionF__destroy(ibeo_msgs__msg__MountingPositionF * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ibeo_msgs__msg__MountingPositionF__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ibeo_msgs__msg__MountingPositionF__Sequence__init(ibeo_msgs__msg__MountingPositionF__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ibeo_msgs__msg__MountingPositionF * data = NULL;

  if (size) {
    data = (ibeo_msgs__msg__MountingPositionF *)allocator.zero_allocate(size, sizeof(ibeo_msgs__msg__MountingPositionF), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ibeo_msgs__msg__MountingPositionF__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ibeo_msgs__msg__MountingPositionF__fini(&data[i - 1]);
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
ibeo_msgs__msg__MountingPositionF__Sequence__fini(ibeo_msgs__msg__MountingPositionF__Sequence * array)
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
      ibeo_msgs__msg__MountingPositionF__fini(&array->data[i]);
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

ibeo_msgs__msg__MountingPositionF__Sequence *
ibeo_msgs__msg__MountingPositionF__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ibeo_msgs__msg__MountingPositionF__Sequence * array = (ibeo_msgs__msg__MountingPositionF__Sequence *)allocator.allocate(sizeof(ibeo_msgs__msg__MountingPositionF__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ibeo_msgs__msg__MountingPositionF__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ibeo_msgs__msg__MountingPositionF__Sequence__destroy(ibeo_msgs__msg__MountingPositionF__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ibeo_msgs__msg__MountingPositionF__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ibeo_msgs__msg__MountingPositionF__Sequence__are_equal(const ibeo_msgs__msg__MountingPositionF__Sequence * lhs, const ibeo_msgs__msg__MountingPositionF__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ibeo_msgs__msg__MountingPositionF__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ibeo_msgs__msg__MountingPositionF__Sequence__copy(
  const ibeo_msgs__msg__MountingPositionF__Sequence * input,
  ibeo_msgs__msg__MountingPositionF__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ibeo_msgs__msg__MountingPositionF);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ibeo_msgs__msg__MountingPositionF * data =
      (ibeo_msgs__msg__MountingPositionF *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ibeo_msgs__msg__MountingPositionF__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ibeo_msgs__msg__MountingPositionF__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ibeo_msgs__msg__MountingPositionF__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

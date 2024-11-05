// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ibeo_msgs:msg/ScannerInfo2204.idl
// generated code does not contain a copyright notice
#include "ibeo_msgs/msg/detail/scanner_info2204__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
ibeo_msgs__msg__ScannerInfo2204__init(ibeo_msgs__msg__ScannerInfo2204 * msg)
{
  if (!msg) {
    return false;
  }
  // device_id
  // scanner_type
  // scan_number
  // start_angle
  // end_angle
  // yaw_angle
  // pitch_angle
  // roll_angle
  // offset_x
  // offset_y
  // offset_z
  return true;
}

void
ibeo_msgs__msg__ScannerInfo2204__fini(ibeo_msgs__msg__ScannerInfo2204 * msg)
{
  if (!msg) {
    return;
  }
  // device_id
  // scanner_type
  // scan_number
  // start_angle
  // end_angle
  // yaw_angle
  // pitch_angle
  // roll_angle
  // offset_x
  // offset_y
  // offset_z
}

bool
ibeo_msgs__msg__ScannerInfo2204__are_equal(const ibeo_msgs__msg__ScannerInfo2204 * lhs, const ibeo_msgs__msg__ScannerInfo2204 * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // device_id
  if (lhs->device_id != rhs->device_id) {
    return false;
  }
  // scanner_type
  if (lhs->scanner_type != rhs->scanner_type) {
    return false;
  }
  // scan_number
  if (lhs->scan_number != rhs->scan_number) {
    return false;
  }
  // start_angle
  if (lhs->start_angle != rhs->start_angle) {
    return false;
  }
  // end_angle
  if (lhs->end_angle != rhs->end_angle) {
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
  // offset_x
  if (lhs->offset_x != rhs->offset_x) {
    return false;
  }
  // offset_y
  if (lhs->offset_y != rhs->offset_y) {
    return false;
  }
  // offset_z
  if (lhs->offset_z != rhs->offset_z) {
    return false;
  }
  return true;
}

bool
ibeo_msgs__msg__ScannerInfo2204__copy(
  const ibeo_msgs__msg__ScannerInfo2204 * input,
  ibeo_msgs__msg__ScannerInfo2204 * output)
{
  if (!input || !output) {
    return false;
  }
  // device_id
  output->device_id = input->device_id;
  // scanner_type
  output->scanner_type = input->scanner_type;
  // scan_number
  output->scan_number = input->scan_number;
  // start_angle
  output->start_angle = input->start_angle;
  // end_angle
  output->end_angle = input->end_angle;
  // yaw_angle
  output->yaw_angle = input->yaw_angle;
  // pitch_angle
  output->pitch_angle = input->pitch_angle;
  // roll_angle
  output->roll_angle = input->roll_angle;
  // offset_x
  output->offset_x = input->offset_x;
  // offset_y
  output->offset_y = input->offset_y;
  // offset_z
  output->offset_z = input->offset_z;
  return true;
}

ibeo_msgs__msg__ScannerInfo2204 *
ibeo_msgs__msg__ScannerInfo2204__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ibeo_msgs__msg__ScannerInfo2204 * msg = (ibeo_msgs__msg__ScannerInfo2204 *)allocator.allocate(sizeof(ibeo_msgs__msg__ScannerInfo2204), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ibeo_msgs__msg__ScannerInfo2204));
  bool success = ibeo_msgs__msg__ScannerInfo2204__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ibeo_msgs__msg__ScannerInfo2204__destroy(ibeo_msgs__msg__ScannerInfo2204 * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ibeo_msgs__msg__ScannerInfo2204__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ibeo_msgs__msg__ScannerInfo2204__Sequence__init(ibeo_msgs__msg__ScannerInfo2204__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ibeo_msgs__msg__ScannerInfo2204 * data = NULL;

  if (size) {
    data = (ibeo_msgs__msg__ScannerInfo2204 *)allocator.zero_allocate(size, sizeof(ibeo_msgs__msg__ScannerInfo2204), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ibeo_msgs__msg__ScannerInfo2204__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ibeo_msgs__msg__ScannerInfo2204__fini(&data[i - 1]);
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
ibeo_msgs__msg__ScannerInfo2204__Sequence__fini(ibeo_msgs__msg__ScannerInfo2204__Sequence * array)
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
      ibeo_msgs__msg__ScannerInfo2204__fini(&array->data[i]);
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

ibeo_msgs__msg__ScannerInfo2204__Sequence *
ibeo_msgs__msg__ScannerInfo2204__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ibeo_msgs__msg__ScannerInfo2204__Sequence * array = (ibeo_msgs__msg__ScannerInfo2204__Sequence *)allocator.allocate(sizeof(ibeo_msgs__msg__ScannerInfo2204__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ibeo_msgs__msg__ScannerInfo2204__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ibeo_msgs__msg__ScannerInfo2204__Sequence__destroy(ibeo_msgs__msg__ScannerInfo2204__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ibeo_msgs__msg__ScannerInfo2204__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ibeo_msgs__msg__ScannerInfo2204__Sequence__are_equal(const ibeo_msgs__msg__ScannerInfo2204__Sequence * lhs, const ibeo_msgs__msg__ScannerInfo2204__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ibeo_msgs__msg__ScannerInfo2204__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ibeo_msgs__msg__ScannerInfo2204__Sequence__copy(
  const ibeo_msgs__msg__ScannerInfo2204__Sequence * input,
  ibeo_msgs__msg__ScannerInfo2204__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ibeo_msgs__msg__ScannerInfo2204);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ibeo_msgs__msg__ScannerInfo2204 * data =
      (ibeo_msgs__msg__ScannerInfo2204 *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ibeo_msgs__msg__ScannerInfo2204__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ibeo_msgs__msg__ScannerInfo2204__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ibeo_msgs__msg__ScannerInfo2204__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

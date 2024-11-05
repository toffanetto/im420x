// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ibeo_msgs:msg/ObjectData2221.idl
// generated code does not contain a copyright notice
#include "ibeo_msgs/msg/detail/object_data2221__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `ibeo_header`
#include "ibeo_msgs/msg/detail/ibeo_data_header__functions.h"
// Member `scan_start_timestamp`
#include "builtin_interfaces/msg/detail/time__functions.h"
// Member `object_list`
#include "ibeo_msgs/msg/detail/object2221__functions.h"

bool
ibeo_msgs__msg__ObjectData2221__init(ibeo_msgs__msg__ObjectData2221 * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    ibeo_msgs__msg__ObjectData2221__fini(msg);
    return false;
  }
  // ibeo_header
  if (!ibeo_msgs__msg__IbeoDataHeader__init(&msg->ibeo_header)) {
    ibeo_msgs__msg__ObjectData2221__fini(msg);
    return false;
  }
  // scan_start_timestamp
  if (!builtin_interfaces__msg__Time__init(&msg->scan_start_timestamp)) {
    ibeo_msgs__msg__ObjectData2221__fini(msg);
    return false;
  }
  // number_of_objects
  // object_list
  if (!ibeo_msgs__msg__Object2221__Sequence__init(&msg->object_list, 0)) {
    ibeo_msgs__msg__ObjectData2221__fini(msg);
    return false;
  }
  return true;
}

void
ibeo_msgs__msg__ObjectData2221__fini(ibeo_msgs__msg__ObjectData2221 * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // ibeo_header
  ibeo_msgs__msg__IbeoDataHeader__fini(&msg->ibeo_header);
  // scan_start_timestamp
  builtin_interfaces__msg__Time__fini(&msg->scan_start_timestamp);
  // number_of_objects
  // object_list
  ibeo_msgs__msg__Object2221__Sequence__fini(&msg->object_list);
}

bool
ibeo_msgs__msg__ObjectData2221__are_equal(const ibeo_msgs__msg__ObjectData2221 * lhs, const ibeo_msgs__msg__ObjectData2221 * rhs)
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
  // ibeo_header
  if (!ibeo_msgs__msg__IbeoDataHeader__are_equal(
      &(lhs->ibeo_header), &(rhs->ibeo_header)))
  {
    return false;
  }
  // scan_start_timestamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->scan_start_timestamp), &(rhs->scan_start_timestamp)))
  {
    return false;
  }
  // number_of_objects
  if (lhs->number_of_objects != rhs->number_of_objects) {
    return false;
  }
  // object_list
  if (!ibeo_msgs__msg__Object2221__Sequence__are_equal(
      &(lhs->object_list), &(rhs->object_list)))
  {
    return false;
  }
  return true;
}

bool
ibeo_msgs__msg__ObjectData2221__copy(
  const ibeo_msgs__msg__ObjectData2221 * input,
  ibeo_msgs__msg__ObjectData2221 * output)
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
  // ibeo_header
  if (!ibeo_msgs__msg__IbeoDataHeader__copy(
      &(input->ibeo_header), &(output->ibeo_header)))
  {
    return false;
  }
  // scan_start_timestamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->scan_start_timestamp), &(output->scan_start_timestamp)))
  {
    return false;
  }
  // number_of_objects
  output->number_of_objects = input->number_of_objects;
  // object_list
  if (!ibeo_msgs__msg__Object2221__Sequence__copy(
      &(input->object_list), &(output->object_list)))
  {
    return false;
  }
  return true;
}

ibeo_msgs__msg__ObjectData2221 *
ibeo_msgs__msg__ObjectData2221__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ibeo_msgs__msg__ObjectData2221 * msg = (ibeo_msgs__msg__ObjectData2221 *)allocator.allocate(sizeof(ibeo_msgs__msg__ObjectData2221), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ibeo_msgs__msg__ObjectData2221));
  bool success = ibeo_msgs__msg__ObjectData2221__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ibeo_msgs__msg__ObjectData2221__destroy(ibeo_msgs__msg__ObjectData2221 * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ibeo_msgs__msg__ObjectData2221__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ibeo_msgs__msg__ObjectData2221__Sequence__init(ibeo_msgs__msg__ObjectData2221__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ibeo_msgs__msg__ObjectData2221 * data = NULL;

  if (size) {
    data = (ibeo_msgs__msg__ObjectData2221 *)allocator.zero_allocate(size, sizeof(ibeo_msgs__msg__ObjectData2221), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ibeo_msgs__msg__ObjectData2221__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ibeo_msgs__msg__ObjectData2221__fini(&data[i - 1]);
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
ibeo_msgs__msg__ObjectData2221__Sequence__fini(ibeo_msgs__msg__ObjectData2221__Sequence * array)
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
      ibeo_msgs__msg__ObjectData2221__fini(&array->data[i]);
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

ibeo_msgs__msg__ObjectData2221__Sequence *
ibeo_msgs__msg__ObjectData2221__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ibeo_msgs__msg__ObjectData2221__Sequence * array = (ibeo_msgs__msg__ObjectData2221__Sequence *)allocator.allocate(sizeof(ibeo_msgs__msg__ObjectData2221__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ibeo_msgs__msg__ObjectData2221__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ibeo_msgs__msg__ObjectData2221__Sequence__destroy(ibeo_msgs__msg__ObjectData2221__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ibeo_msgs__msg__ObjectData2221__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ibeo_msgs__msg__ObjectData2221__Sequence__are_equal(const ibeo_msgs__msg__ObjectData2221__Sequence * lhs, const ibeo_msgs__msg__ObjectData2221__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ibeo_msgs__msg__ObjectData2221__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ibeo_msgs__msg__ObjectData2221__Sequence__copy(
  const ibeo_msgs__msg__ObjectData2221__Sequence * input,
  ibeo_msgs__msg__ObjectData2221__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ibeo_msgs__msg__ObjectData2221);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ibeo_msgs__msg__ObjectData2221 * data =
      (ibeo_msgs__msg__ObjectData2221 *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ibeo_msgs__msg__ObjectData2221__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ibeo_msgs__msg__ObjectData2221__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ibeo_msgs__msg__ObjectData2221__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

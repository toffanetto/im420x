// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ibeo_msgs:msg/ObjectData2280.idl
// generated code does not contain a copyright notice
#include "ibeo_msgs/msg/detail/object_data2280__functions.h"

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
// Member `mid_scan_timestamp`
#include "builtin_interfaces/msg/detail/time__functions.h"
// Member `objects`
#include "ibeo_msgs/msg/detail/object2280__functions.h"

bool
ibeo_msgs__msg__ObjectData2280__init(ibeo_msgs__msg__ObjectData2280 * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    ibeo_msgs__msg__ObjectData2280__fini(msg);
    return false;
  }
  // ibeo_header
  if (!ibeo_msgs__msg__IbeoDataHeader__init(&msg->ibeo_header)) {
    ibeo_msgs__msg__ObjectData2280__fini(msg);
    return false;
  }
  // mid_scan_timestamp
  if (!builtin_interfaces__msg__Time__init(&msg->mid_scan_timestamp)) {
    ibeo_msgs__msg__ObjectData2280__fini(msg);
    return false;
  }
  // number_of_objects
  // objects
  if (!ibeo_msgs__msg__Object2280__Sequence__init(&msg->objects, 0)) {
    ibeo_msgs__msg__ObjectData2280__fini(msg);
    return false;
  }
  return true;
}

void
ibeo_msgs__msg__ObjectData2280__fini(ibeo_msgs__msg__ObjectData2280 * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // ibeo_header
  ibeo_msgs__msg__IbeoDataHeader__fini(&msg->ibeo_header);
  // mid_scan_timestamp
  builtin_interfaces__msg__Time__fini(&msg->mid_scan_timestamp);
  // number_of_objects
  // objects
  ibeo_msgs__msg__Object2280__Sequence__fini(&msg->objects);
}

bool
ibeo_msgs__msg__ObjectData2280__are_equal(const ibeo_msgs__msg__ObjectData2280 * lhs, const ibeo_msgs__msg__ObjectData2280 * rhs)
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
  // mid_scan_timestamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->mid_scan_timestamp), &(rhs->mid_scan_timestamp)))
  {
    return false;
  }
  // number_of_objects
  if (lhs->number_of_objects != rhs->number_of_objects) {
    return false;
  }
  // objects
  if (!ibeo_msgs__msg__Object2280__Sequence__are_equal(
      &(lhs->objects), &(rhs->objects)))
  {
    return false;
  }
  return true;
}

bool
ibeo_msgs__msg__ObjectData2280__copy(
  const ibeo_msgs__msg__ObjectData2280 * input,
  ibeo_msgs__msg__ObjectData2280 * output)
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
  // mid_scan_timestamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->mid_scan_timestamp), &(output->mid_scan_timestamp)))
  {
    return false;
  }
  // number_of_objects
  output->number_of_objects = input->number_of_objects;
  // objects
  if (!ibeo_msgs__msg__Object2280__Sequence__copy(
      &(input->objects), &(output->objects)))
  {
    return false;
  }
  return true;
}

ibeo_msgs__msg__ObjectData2280 *
ibeo_msgs__msg__ObjectData2280__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ibeo_msgs__msg__ObjectData2280 * msg = (ibeo_msgs__msg__ObjectData2280 *)allocator.allocate(sizeof(ibeo_msgs__msg__ObjectData2280), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ibeo_msgs__msg__ObjectData2280));
  bool success = ibeo_msgs__msg__ObjectData2280__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ibeo_msgs__msg__ObjectData2280__destroy(ibeo_msgs__msg__ObjectData2280 * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ibeo_msgs__msg__ObjectData2280__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ibeo_msgs__msg__ObjectData2280__Sequence__init(ibeo_msgs__msg__ObjectData2280__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ibeo_msgs__msg__ObjectData2280 * data = NULL;

  if (size) {
    data = (ibeo_msgs__msg__ObjectData2280 *)allocator.zero_allocate(size, sizeof(ibeo_msgs__msg__ObjectData2280), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ibeo_msgs__msg__ObjectData2280__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ibeo_msgs__msg__ObjectData2280__fini(&data[i - 1]);
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
ibeo_msgs__msg__ObjectData2280__Sequence__fini(ibeo_msgs__msg__ObjectData2280__Sequence * array)
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
      ibeo_msgs__msg__ObjectData2280__fini(&array->data[i]);
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

ibeo_msgs__msg__ObjectData2280__Sequence *
ibeo_msgs__msg__ObjectData2280__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ibeo_msgs__msg__ObjectData2280__Sequence * array = (ibeo_msgs__msg__ObjectData2280__Sequence *)allocator.allocate(sizeof(ibeo_msgs__msg__ObjectData2280__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ibeo_msgs__msg__ObjectData2280__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ibeo_msgs__msg__ObjectData2280__Sequence__destroy(ibeo_msgs__msg__ObjectData2280__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ibeo_msgs__msg__ObjectData2280__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ibeo_msgs__msg__ObjectData2280__Sequence__are_equal(const ibeo_msgs__msg__ObjectData2280__Sequence * lhs, const ibeo_msgs__msg__ObjectData2280__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ibeo_msgs__msg__ObjectData2280__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ibeo_msgs__msg__ObjectData2280__Sequence__copy(
  const ibeo_msgs__msg__ObjectData2280__Sequence * input,
  ibeo_msgs__msg__ObjectData2280__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ibeo_msgs__msg__ObjectData2280);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ibeo_msgs__msg__ObjectData2280 * data =
      (ibeo_msgs__msg__ObjectData2280 *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ibeo_msgs__msg__ObjectData2280__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ibeo_msgs__msg__ObjectData2280__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ibeo_msgs__msg__ObjectData2280__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

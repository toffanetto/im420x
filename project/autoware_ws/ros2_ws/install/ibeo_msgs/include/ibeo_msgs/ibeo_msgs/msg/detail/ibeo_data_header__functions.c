// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ibeo_msgs:msg/IbeoDataHeader.idl
// generated code does not contain a copyright notice
#include "ibeo_msgs/msg/detail/ibeo_data_header__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
ibeo_msgs__msg__IbeoDataHeader__init(ibeo_msgs__msg__IbeoDataHeader * msg)
{
  if (!msg) {
    return false;
  }
  // previous_message_size
  // message_size
  // device_id
  // data_type_id
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    ibeo_msgs__msg__IbeoDataHeader__fini(msg);
    return false;
  }
  return true;
}

void
ibeo_msgs__msg__IbeoDataHeader__fini(ibeo_msgs__msg__IbeoDataHeader * msg)
{
  if (!msg) {
    return;
  }
  // previous_message_size
  // message_size
  // device_id
  // data_type_id
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
ibeo_msgs__msg__IbeoDataHeader__are_equal(const ibeo_msgs__msg__IbeoDataHeader * lhs, const ibeo_msgs__msg__IbeoDataHeader * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // previous_message_size
  if (lhs->previous_message_size != rhs->previous_message_size) {
    return false;
  }
  // message_size
  if (lhs->message_size != rhs->message_size) {
    return false;
  }
  // device_id
  if (lhs->device_id != rhs->device_id) {
    return false;
  }
  // data_type_id
  if (lhs->data_type_id != rhs->data_type_id) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  return true;
}

bool
ibeo_msgs__msg__IbeoDataHeader__copy(
  const ibeo_msgs__msg__IbeoDataHeader * input,
  ibeo_msgs__msg__IbeoDataHeader * output)
{
  if (!input || !output) {
    return false;
  }
  // previous_message_size
  output->previous_message_size = input->previous_message_size;
  // message_size
  output->message_size = input->message_size;
  // device_id
  output->device_id = input->device_id;
  // data_type_id
  output->data_type_id = input->data_type_id;
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  return true;
}

ibeo_msgs__msg__IbeoDataHeader *
ibeo_msgs__msg__IbeoDataHeader__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ibeo_msgs__msg__IbeoDataHeader * msg = (ibeo_msgs__msg__IbeoDataHeader *)allocator.allocate(sizeof(ibeo_msgs__msg__IbeoDataHeader), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ibeo_msgs__msg__IbeoDataHeader));
  bool success = ibeo_msgs__msg__IbeoDataHeader__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ibeo_msgs__msg__IbeoDataHeader__destroy(ibeo_msgs__msg__IbeoDataHeader * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ibeo_msgs__msg__IbeoDataHeader__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ibeo_msgs__msg__IbeoDataHeader__Sequence__init(ibeo_msgs__msg__IbeoDataHeader__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ibeo_msgs__msg__IbeoDataHeader * data = NULL;

  if (size) {
    data = (ibeo_msgs__msg__IbeoDataHeader *)allocator.zero_allocate(size, sizeof(ibeo_msgs__msg__IbeoDataHeader), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ibeo_msgs__msg__IbeoDataHeader__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ibeo_msgs__msg__IbeoDataHeader__fini(&data[i - 1]);
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
ibeo_msgs__msg__IbeoDataHeader__Sequence__fini(ibeo_msgs__msg__IbeoDataHeader__Sequence * array)
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
      ibeo_msgs__msg__IbeoDataHeader__fini(&array->data[i]);
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

ibeo_msgs__msg__IbeoDataHeader__Sequence *
ibeo_msgs__msg__IbeoDataHeader__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ibeo_msgs__msg__IbeoDataHeader__Sequence * array = (ibeo_msgs__msg__IbeoDataHeader__Sequence *)allocator.allocate(sizeof(ibeo_msgs__msg__IbeoDataHeader__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ibeo_msgs__msg__IbeoDataHeader__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ibeo_msgs__msg__IbeoDataHeader__Sequence__destroy(ibeo_msgs__msg__IbeoDataHeader__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ibeo_msgs__msg__IbeoDataHeader__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ibeo_msgs__msg__IbeoDataHeader__Sequence__are_equal(const ibeo_msgs__msg__IbeoDataHeader__Sequence * lhs, const ibeo_msgs__msg__IbeoDataHeader__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ibeo_msgs__msg__IbeoDataHeader__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ibeo_msgs__msg__IbeoDataHeader__Sequence__copy(
  const ibeo_msgs__msg__IbeoDataHeader__Sequence * input,
  ibeo_msgs__msg__IbeoDataHeader__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ibeo_msgs__msg__IbeoDataHeader);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ibeo_msgs__msg__IbeoDataHeader * data =
      (ibeo_msgs__msg__IbeoDataHeader *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ibeo_msgs__msg__IbeoDataHeader__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ibeo_msgs__msg__IbeoDataHeader__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ibeo_msgs__msg__IbeoDataHeader__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

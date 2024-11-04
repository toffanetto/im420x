// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from kartech_linear_actuator_msgs:msg/ReassignReportIdCmd.idl
// generated code does not contain a copyright notice
#include "kartech_linear_actuator_msgs/msg/detail/reassign_report_id_cmd__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
kartech_linear_actuator_msgs__msg__ReassignReportIdCmd__init(kartech_linear_actuator_msgs__msg__ReassignReportIdCmd * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    kartech_linear_actuator_msgs__msg__ReassignReportIdCmd__fini(msg);
    return false;
  }
  // confirm
  // user_report_id
  // use_user_report_id
  return true;
}

void
kartech_linear_actuator_msgs__msg__ReassignReportIdCmd__fini(kartech_linear_actuator_msgs__msg__ReassignReportIdCmd * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // confirm
  // user_report_id
  // use_user_report_id
}

bool
kartech_linear_actuator_msgs__msg__ReassignReportIdCmd__are_equal(const kartech_linear_actuator_msgs__msg__ReassignReportIdCmd * lhs, const kartech_linear_actuator_msgs__msg__ReassignReportIdCmd * rhs)
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
  // confirm
  if (lhs->confirm != rhs->confirm) {
    return false;
  }
  // user_report_id
  if (lhs->user_report_id != rhs->user_report_id) {
    return false;
  }
  // use_user_report_id
  if (lhs->use_user_report_id != rhs->use_user_report_id) {
    return false;
  }
  return true;
}

bool
kartech_linear_actuator_msgs__msg__ReassignReportIdCmd__copy(
  const kartech_linear_actuator_msgs__msg__ReassignReportIdCmd * input,
  kartech_linear_actuator_msgs__msg__ReassignReportIdCmd * output)
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
  // confirm
  output->confirm = input->confirm;
  // user_report_id
  output->user_report_id = input->user_report_id;
  // use_user_report_id
  output->use_user_report_id = input->use_user_report_id;
  return true;
}

kartech_linear_actuator_msgs__msg__ReassignReportIdCmd *
kartech_linear_actuator_msgs__msg__ReassignReportIdCmd__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  kartech_linear_actuator_msgs__msg__ReassignReportIdCmd * msg = (kartech_linear_actuator_msgs__msg__ReassignReportIdCmd *)allocator.allocate(sizeof(kartech_linear_actuator_msgs__msg__ReassignReportIdCmd), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(kartech_linear_actuator_msgs__msg__ReassignReportIdCmd));
  bool success = kartech_linear_actuator_msgs__msg__ReassignReportIdCmd__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
kartech_linear_actuator_msgs__msg__ReassignReportIdCmd__destroy(kartech_linear_actuator_msgs__msg__ReassignReportIdCmd * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    kartech_linear_actuator_msgs__msg__ReassignReportIdCmd__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
kartech_linear_actuator_msgs__msg__ReassignReportIdCmd__Sequence__init(kartech_linear_actuator_msgs__msg__ReassignReportIdCmd__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  kartech_linear_actuator_msgs__msg__ReassignReportIdCmd * data = NULL;

  if (size) {
    data = (kartech_linear_actuator_msgs__msg__ReassignReportIdCmd *)allocator.zero_allocate(size, sizeof(kartech_linear_actuator_msgs__msg__ReassignReportIdCmd), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = kartech_linear_actuator_msgs__msg__ReassignReportIdCmd__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        kartech_linear_actuator_msgs__msg__ReassignReportIdCmd__fini(&data[i - 1]);
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
kartech_linear_actuator_msgs__msg__ReassignReportIdCmd__Sequence__fini(kartech_linear_actuator_msgs__msg__ReassignReportIdCmd__Sequence * array)
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
      kartech_linear_actuator_msgs__msg__ReassignReportIdCmd__fini(&array->data[i]);
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

kartech_linear_actuator_msgs__msg__ReassignReportIdCmd__Sequence *
kartech_linear_actuator_msgs__msg__ReassignReportIdCmd__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  kartech_linear_actuator_msgs__msg__ReassignReportIdCmd__Sequence * array = (kartech_linear_actuator_msgs__msg__ReassignReportIdCmd__Sequence *)allocator.allocate(sizeof(kartech_linear_actuator_msgs__msg__ReassignReportIdCmd__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = kartech_linear_actuator_msgs__msg__ReassignReportIdCmd__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
kartech_linear_actuator_msgs__msg__ReassignReportIdCmd__Sequence__destroy(kartech_linear_actuator_msgs__msg__ReassignReportIdCmd__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    kartech_linear_actuator_msgs__msg__ReassignReportIdCmd__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
kartech_linear_actuator_msgs__msg__ReassignReportIdCmd__Sequence__are_equal(const kartech_linear_actuator_msgs__msg__ReassignReportIdCmd__Sequence * lhs, const kartech_linear_actuator_msgs__msg__ReassignReportIdCmd__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!kartech_linear_actuator_msgs__msg__ReassignReportIdCmd__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
kartech_linear_actuator_msgs__msg__ReassignReportIdCmd__Sequence__copy(
  const kartech_linear_actuator_msgs__msg__ReassignReportIdCmd__Sequence * input,
  kartech_linear_actuator_msgs__msg__ReassignReportIdCmd__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(kartech_linear_actuator_msgs__msg__ReassignReportIdCmd);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    kartech_linear_actuator_msgs__msg__ReassignReportIdCmd * data =
      (kartech_linear_actuator_msgs__msg__ReassignReportIdCmd *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!kartech_linear_actuator_msgs__msg__ReassignReportIdCmd__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          kartech_linear_actuator_msgs__msg__ReassignReportIdCmd__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!kartech_linear_actuator_msgs__msg__ReassignReportIdCmd__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

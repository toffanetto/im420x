// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mobileye_560_660_msgs:msg/TsrVisionOnly.idl
// generated code does not contain a copyright notice
#include "mobileye_560_660_msgs/msg/detail/tsr_vision_only__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
mobileye_560_660_msgs__msg__TsrVisionOnly__init(mobileye_560_660_msgs__msg__TsrVisionOnly * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    mobileye_560_660_msgs__msg__TsrVisionOnly__fini(msg);
    return false;
  }
  // vision_only_sign_type_display1
  // vision_only_supplementary_sign_type_display1
  // vision_only_sign_type_display2
  // vision_only_supplementary_sign_type_display2
  // vision_only_sign_type_display3
  // vision_only_supplementary_sign_type_display3
  // vision_only_sign_type_display4
  // vision_only_supplementary_sign_type_display4
  return true;
}

void
mobileye_560_660_msgs__msg__TsrVisionOnly__fini(mobileye_560_660_msgs__msg__TsrVisionOnly * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // vision_only_sign_type_display1
  // vision_only_supplementary_sign_type_display1
  // vision_only_sign_type_display2
  // vision_only_supplementary_sign_type_display2
  // vision_only_sign_type_display3
  // vision_only_supplementary_sign_type_display3
  // vision_only_sign_type_display4
  // vision_only_supplementary_sign_type_display4
}

bool
mobileye_560_660_msgs__msg__TsrVisionOnly__are_equal(const mobileye_560_660_msgs__msg__TsrVisionOnly * lhs, const mobileye_560_660_msgs__msg__TsrVisionOnly * rhs)
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
  // vision_only_sign_type_display1
  if (lhs->vision_only_sign_type_display1 != rhs->vision_only_sign_type_display1) {
    return false;
  }
  // vision_only_supplementary_sign_type_display1
  if (lhs->vision_only_supplementary_sign_type_display1 != rhs->vision_only_supplementary_sign_type_display1) {
    return false;
  }
  // vision_only_sign_type_display2
  if (lhs->vision_only_sign_type_display2 != rhs->vision_only_sign_type_display2) {
    return false;
  }
  // vision_only_supplementary_sign_type_display2
  if (lhs->vision_only_supplementary_sign_type_display2 != rhs->vision_only_supplementary_sign_type_display2) {
    return false;
  }
  // vision_only_sign_type_display3
  if (lhs->vision_only_sign_type_display3 != rhs->vision_only_sign_type_display3) {
    return false;
  }
  // vision_only_supplementary_sign_type_display3
  if (lhs->vision_only_supplementary_sign_type_display3 != rhs->vision_only_supplementary_sign_type_display3) {
    return false;
  }
  // vision_only_sign_type_display4
  if (lhs->vision_only_sign_type_display4 != rhs->vision_only_sign_type_display4) {
    return false;
  }
  // vision_only_supplementary_sign_type_display4
  if (lhs->vision_only_supplementary_sign_type_display4 != rhs->vision_only_supplementary_sign_type_display4) {
    return false;
  }
  return true;
}

bool
mobileye_560_660_msgs__msg__TsrVisionOnly__copy(
  const mobileye_560_660_msgs__msg__TsrVisionOnly * input,
  mobileye_560_660_msgs__msg__TsrVisionOnly * output)
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
  // vision_only_sign_type_display1
  output->vision_only_sign_type_display1 = input->vision_only_sign_type_display1;
  // vision_only_supplementary_sign_type_display1
  output->vision_only_supplementary_sign_type_display1 = input->vision_only_supplementary_sign_type_display1;
  // vision_only_sign_type_display2
  output->vision_only_sign_type_display2 = input->vision_only_sign_type_display2;
  // vision_only_supplementary_sign_type_display2
  output->vision_only_supplementary_sign_type_display2 = input->vision_only_supplementary_sign_type_display2;
  // vision_only_sign_type_display3
  output->vision_only_sign_type_display3 = input->vision_only_sign_type_display3;
  // vision_only_supplementary_sign_type_display3
  output->vision_only_supplementary_sign_type_display3 = input->vision_only_supplementary_sign_type_display3;
  // vision_only_sign_type_display4
  output->vision_only_sign_type_display4 = input->vision_only_sign_type_display4;
  // vision_only_supplementary_sign_type_display4
  output->vision_only_supplementary_sign_type_display4 = input->vision_only_supplementary_sign_type_display4;
  return true;
}

mobileye_560_660_msgs__msg__TsrVisionOnly *
mobileye_560_660_msgs__msg__TsrVisionOnly__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mobileye_560_660_msgs__msg__TsrVisionOnly * msg = (mobileye_560_660_msgs__msg__TsrVisionOnly *)allocator.allocate(sizeof(mobileye_560_660_msgs__msg__TsrVisionOnly), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mobileye_560_660_msgs__msg__TsrVisionOnly));
  bool success = mobileye_560_660_msgs__msg__TsrVisionOnly__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mobileye_560_660_msgs__msg__TsrVisionOnly__destroy(mobileye_560_660_msgs__msg__TsrVisionOnly * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mobileye_560_660_msgs__msg__TsrVisionOnly__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mobileye_560_660_msgs__msg__TsrVisionOnly__Sequence__init(mobileye_560_660_msgs__msg__TsrVisionOnly__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mobileye_560_660_msgs__msg__TsrVisionOnly * data = NULL;

  if (size) {
    data = (mobileye_560_660_msgs__msg__TsrVisionOnly *)allocator.zero_allocate(size, sizeof(mobileye_560_660_msgs__msg__TsrVisionOnly), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mobileye_560_660_msgs__msg__TsrVisionOnly__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mobileye_560_660_msgs__msg__TsrVisionOnly__fini(&data[i - 1]);
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
mobileye_560_660_msgs__msg__TsrVisionOnly__Sequence__fini(mobileye_560_660_msgs__msg__TsrVisionOnly__Sequence * array)
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
      mobileye_560_660_msgs__msg__TsrVisionOnly__fini(&array->data[i]);
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

mobileye_560_660_msgs__msg__TsrVisionOnly__Sequence *
mobileye_560_660_msgs__msg__TsrVisionOnly__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mobileye_560_660_msgs__msg__TsrVisionOnly__Sequence * array = (mobileye_560_660_msgs__msg__TsrVisionOnly__Sequence *)allocator.allocate(sizeof(mobileye_560_660_msgs__msg__TsrVisionOnly__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mobileye_560_660_msgs__msg__TsrVisionOnly__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mobileye_560_660_msgs__msg__TsrVisionOnly__Sequence__destroy(mobileye_560_660_msgs__msg__TsrVisionOnly__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mobileye_560_660_msgs__msg__TsrVisionOnly__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mobileye_560_660_msgs__msg__TsrVisionOnly__Sequence__are_equal(const mobileye_560_660_msgs__msg__TsrVisionOnly__Sequence * lhs, const mobileye_560_660_msgs__msg__TsrVisionOnly__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mobileye_560_660_msgs__msg__TsrVisionOnly__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mobileye_560_660_msgs__msg__TsrVisionOnly__Sequence__copy(
  const mobileye_560_660_msgs__msg__TsrVisionOnly__Sequence * input,
  mobileye_560_660_msgs__msg__TsrVisionOnly__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mobileye_560_660_msgs__msg__TsrVisionOnly);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mobileye_560_660_msgs__msg__TsrVisionOnly * data =
      (mobileye_560_660_msgs__msg__TsrVisionOnly *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mobileye_560_660_msgs__msg__TsrVisionOnly__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mobileye_560_660_msgs__msg__TsrVisionOnly__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mobileye_560_660_msgs__msg__TsrVisionOnly__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

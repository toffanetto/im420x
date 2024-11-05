// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mobileye_560_660_msgs:msg/LkaLane.idl
// generated code does not contain a copyright notice
#include "mobileye_560_660_msgs/msg/detail/lka_lane__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
mobileye_560_660_msgs__msg__LkaLane__init(mobileye_560_660_msgs__msg__LkaLane * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    mobileye_560_660_msgs__msg__LkaLane__fini(msg);
    return false;
  }
  // lane_type
  // quality
  // model_degree
  // position_parameter_c0
  // curvature_parameter_c2
  // curvature_derivative_parameter_c3
  // marking_width
  // heading_angle_parameter_c1
  // view_range
  // view_range_availability
  return true;
}

void
mobileye_560_660_msgs__msg__LkaLane__fini(mobileye_560_660_msgs__msg__LkaLane * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // lane_type
  // quality
  // model_degree
  // position_parameter_c0
  // curvature_parameter_c2
  // curvature_derivative_parameter_c3
  // marking_width
  // heading_angle_parameter_c1
  // view_range
  // view_range_availability
}

bool
mobileye_560_660_msgs__msg__LkaLane__are_equal(const mobileye_560_660_msgs__msg__LkaLane * lhs, const mobileye_560_660_msgs__msg__LkaLane * rhs)
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
  // lane_type
  if (lhs->lane_type != rhs->lane_type) {
    return false;
  }
  // quality
  if (lhs->quality != rhs->quality) {
    return false;
  }
  // model_degree
  if (lhs->model_degree != rhs->model_degree) {
    return false;
  }
  // position_parameter_c0
  if (lhs->position_parameter_c0 != rhs->position_parameter_c0) {
    return false;
  }
  // curvature_parameter_c2
  if (lhs->curvature_parameter_c2 != rhs->curvature_parameter_c2) {
    return false;
  }
  // curvature_derivative_parameter_c3
  if (lhs->curvature_derivative_parameter_c3 != rhs->curvature_derivative_parameter_c3) {
    return false;
  }
  // marking_width
  if (lhs->marking_width != rhs->marking_width) {
    return false;
  }
  // heading_angle_parameter_c1
  if (lhs->heading_angle_parameter_c1 != rhs->heading_angle_parameter_c1) {
    return false;
  }
  // view_range
  if (lhs->view_range != rhs->view_range) {
    return false;
  }
  // view_range_availability
  if (lhs->view_range_availability != rhs->view_range_availability) {
    return false;
  }
  return true;
}

bool
mobileye_560_660_msgs__msg__LkaLane__copy(
  const mobileye_560_660_msgs__msg__LkaLane * input,
  mobileye_560_660_msgs__msg__LkaLane * output)
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
  // lane_type
  output->lane_type = input->lane_type;
  // quality
  output->quality = input->quality;
  // model_degree
  output->model_degree = input->model_degree;
  // position_parameter_c0
  output->position_parameter_c0 = input->position_parameter_c0;
  // curvature_parameter_c2
  output->curvature_parameter_c2 = input->curvature_parameter_c2;
  // curvature_derivative_parameter_c3
  output->curvature_derivative_parameter_c3 = input->curvature_derivative_parameter_c3;
  // marking_width
  output->marking_width = input->marking_width;
  // heading_angle_parameter_c1
  output->heading_angle_parameter_c1 = input->heading_angle_parameter_c1;
  // view_range
  output->view_range = input->view_range;
  // view_range_availability
  output->view_range_availability = input->view_range_availability;
  return true;
}

mobileye_560_660_msgs__msg__LkaLane *
mobileye_560_660_msgs__msg__LkaLane__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mobileye_560_660_msgs__msg__LkaLane * msg = (mobileye_560_660_msgs__msg__LkaLane *)allocator.allocate(sizeof(mobileye_560_660_msgs__msg__LkaLane), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mobileye_560_660_msgs__msg__LkaLane));
  bool success = mobileye_560_660_msgs__msg__LkaLane__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mobileye_560_660_msgs__msg__LkaLane__destroy(mobileye_560_660_msgs__msg__LkaLane * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mobileye_560_660_msgs__msg__LkaLane__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mobileye_560_660_msgs__msg__LkaLane__Sequence__init(mobileye_560_660_msgs__msg__LkaLane__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mobileye_560_660_msgs__msg__LkaLane * data = NULL;

  if (size) {
    data = (mobileye_560_660_msgs__msg__LkaLane *)allocator.zero_allocate(size, sizeof(mobileye_560_660_msgs__msg__LkaLane), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mobileye_560_660_msgs__msg__LkaLane__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mobileye_560_660_msgs__msg__LkaLane__fini(&data[i - 1]);
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
mobileye_560_660_msgs__msg__LkaLane__Sequence__fini(mobileye_560_660_msgs__msg__LkaLane__Sequence * array)
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
      mobileye_560_660_msgs__msg__LkaLane__fini(&array->data[i]);
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

mobileye_560_660_msgs__msg__LkaLane__Sequence *
mobileye_560_660_msgs__msg__LkaLane__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mobileye_560_660_msgs__msg__LkaLane__Sequence * array = (mobileye_560_660_msgs__msg__LkaLane__Sequence *)allocator.allocate(sizeof(mobileye_560_660_msgs__msg__LkaLane__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mobileye_560_660_msgs__msg__LkaLane__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mobileye_560_660_msgs__msg__LkaLane__Sequence__destroy(mobileye_560_660_msgs__msg__LkaLane__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mobileye_560_660_msgs__msg__LkaLane__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mobileye_560_660_msgs__msg__LkaLane__Sequence__are_equal(const mobileye_560_660_msgs__msg__LkaLane__Sequence * lhs, const mobileye_560_660_msgs__msg__LkaLane__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mobileye_560_660_msgs__msg__LkaLane__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mobileye_560_660_msgs__msg__LkaLane__Sequence__copy(
  const mobileye_560_660_msgs__msg__LkaLane__Sequence * input,
  mobileye_560_660_msgs__msg__LkaLane__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mobileye_560_660_msgs__msg__LkaLane);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mobileye_560_660_msgs__msg__LkaLane * data =
      (mobileye_560_660_msgs__msg__LkaLane *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mobileye_560_660_msgs__msg__LkaLane__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mobileye_560_660_msgs__msg__LkaLane__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mobileye_560_660_msgs__msg__LkaLane__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

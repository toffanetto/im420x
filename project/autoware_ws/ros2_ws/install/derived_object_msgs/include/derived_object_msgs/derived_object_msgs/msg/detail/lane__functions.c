// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from derived_object_msgs:msg/Lane.idl
// generated code does not contain a copyright notice
#include "derived_object_msgs/msg/detail/lane__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
derived_object_msgs__msg__Lane__init(derived_object_msgs__msg__Lane * msg)
{
  if (!msg) {
    return false;
  }
  // quality
  // marker_kind
  // curve_model_kind
  // marker_offset
  // heading_angle
  // curvature
  // curvature_derivative
  // marker_width
  // view_range
  return true;
}

void
derived_object_msgs__msg__Lane__fini(derived_object_msgs__msg__Lane * msg)
{
  if (!msg) {
    return;
  }
  // quality
  // marker_kind
  // curve_model_kind
  // marker_offset
  // heading_angle
  // curvature
  // curvature_derivative
  // marker_width
  // view_range
}

bool
derived_object_msgs__msg__Lane__are_equal(const derived_object_msgs__msg__Lane * lhs, const derived_object_msgs__msg__Lane * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // quality
  if (lhs->quality != rhs->quality) {
    return false;
  }
  // marker_kind
  if (lhs->marker_kind != rhs->marker_kind) {
    return false;
  }
  // curve_model_kind
  if (lhs->curve_model_kind != rhs->curve_model_kind) {
    return false;
  }
  // marker_offset
  if (lhs->marker_offset != rhs->marker_offset) {
    return false;
  }
  // heading_angle
  if (lhs->heading_angle != rhs->heading_angle) {
    return false;
  }
  // curvature
  if (lhs->curvature != rhs->curvature) {
    return false;
  }
  // curvature_derivative
  if (lhs->curvature_derivative != rhs->curvature_derivative) {
    return false;
  }
  // marker_width
  if (lhs->marker_width != rhs->marker_width) {
    return false;
  }
  // view_range
  if (lhs->view_range != rhs->view_range) {
    return false;
  }
  return true;
}

bool
derived_object_msgs__msg__Lane__copy(
  const derived_object_msgs__msg__Lane * input,
  derived_object_msgs__msg__Lane * output)
{
  if (!input || !output) {
    return false;
  }
  // quality
  output->quality = input->quality;
  // marker_kind
  output->marker_kind = input->marker_kind;
  // curve_model_kind
  output->curve_model_kind = input->curve_model_kind;
  // marker_offset
  output->marker_offset = input->marker_offset;
  // heading_angle
  output->heading_angle = input->heading_angle;
  // curvature
  output->curvature = input->curvature;
  // curvature_derivative
  output->curvature_derivative = input->curvature_derivative;
  // marker_width
  output->marker_width = input->marker_width;
  // view_range
  output->view_range = input->view_range;
  return true;
}

derived_object_msgs__msg__Lane *
derived_object_msgs__msg__Lane__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  derived_object_msgs__msg__Lane * msg = (derived_object_msgs__msg__Lane *)allocator.allocate(sizeof(derived_object_msgs__msg__Lane), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(derived_object_msgs__msg__Lane));
  bool success = derived_object_msgs__msg__Lane__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
derived_object_msgs__msg__Lane__destroy(derived_object_msgs__msg__Lane * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    derived_object_msgs__msg__Lane__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
derived_object_msgs__msg__Lane__Sequence__init(derived_object_msgs__msg__Lane__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  derived_object_msgs__msg__Lane * data = NULL;

  if (size) {
    data = (derived_object_msgs__msg__Lane *)allocator.zero_allocate(size, sizeof(derived_object_msgs__msg__Lane), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = derived_object_msgs__msg__Lane__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        derived_object_msgs__msg__Lane__fini(&data[i - 1]);
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
derived_object_msgs__msg__Lane__Sequence__fini(derived_object_msgs__msg__Lane__Sequence * array)
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
      derived_object_msgs__msg__Lane__fini(&array->data[i]);
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

derived_object_msgs__msg__Lane__Sequence *
derived_object_msgs__msg__Lane__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  derived_object_msgs__msg__Lane__Sequence * array = (derived_object_msgs__msg__Lane__Sequence *)allocator.allocate(sizeof(derived_object_msgs__msg__Lane__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = derived_object_msgs__msg__Lane__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
derived_object_msgs__msg__Lane__Sequence__destroy(derived_object_msgs__msg__Lane__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    derived_object_msgs__msg__Lane__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
derived_object_msgs__msg__Lane__Sequence__are_equal(const derived_object_msgs__msg__Lane__Sequence * lhs, const derived_object_msgs__msg__Lane__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!derived_object_msgs__msg__Lane__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
derived_object_msgs__msg__Lane__Sequence__copy(
  const derived_object_msgs__msg__Lane__Sequence * input,
  derived_object_msgs__msg__Lane__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(derived_object_msgs__msg__Lane);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    derived_object_msgs__msg__Lane * data =
      (derived_object_msgs__msg__Lane *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!derived_object_msgs__msg__Lane__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          derived_object_msgs__msg__Lane__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!derived_object_msgs__msg__Lane__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

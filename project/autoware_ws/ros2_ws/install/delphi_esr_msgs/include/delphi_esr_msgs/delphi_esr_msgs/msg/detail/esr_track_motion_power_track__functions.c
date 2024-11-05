// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from delphi_esr_msgs:msg/EsrTrackMotionPowerTrack.idl
// generated code does not contain a copyright notice
#include "delphi_esr_msgs/msg/detail/esr_track_motion_power_track__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
delphi_esr_msgs__msg__EsrTrackMotionPowerTrack__init(delphi_esr_msgs__msg__EsrTrackMotionPowerTrack * msg)
{
  if (!msg) {
    return false;
  }
  // id
  // movable_fast
  // movable_slow
  // moving
  // power
  return true;
}

void
delphi_esr_msgs__msg__EsrTrackMotionPowerTrack__fini(delphi_esr_msgs__msg__EsrTrackMotionPowerTrack * msg)
{
  if (!msg) {
    return;
  }
  // id
  // movable_fast
  // movable_slow
  // moving
  // power
}

bool
delphi_esr_msgs__msg__EsrTrackMotionPowerTrack__are_equal(const delphi_esr_msgs__msg__EsrTrackMotionPowerTrack * lhs, const delphi_esr_msgs__msg__EsrTrackMotionPowerTrack * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // id
  if (lhs->id != rhs->id) {
    return false;
  }
  // movable_fast
  if (lhs->movable_fast != rhs->movable_fast) {
    return false;
  }
  // movable_slow
  if (lhs->movable_slow != rhs->movable_slow) {
    return false;
  }
  // moving
  if (lhs->moving != rhs->moving) {
    return false;
  }
  // power
  if (lhs->power != rhs->power) {
    return false;
  }
  return true;
}

bool
delphi_esr_msgs__msg__EsrTrackMotionPowerTrack__copy(
  const delphi_esr_msgs__msg__EsrTrackMotionPowerTrack * input,
  delphi_esr_msgs__msg__EsrTrackMotionPowerTrack * output)
{
  if (!input || !output) {
    return false;
  }
  // id
  output->id = input->id;
  // movable_fast
  output->movable_fast = input->movable_fast;
  // movable_slow
  output->movable_slow = input->movable_slow;
  // moving
  output->moving = input->moving;
  // power
  output->power = input->power;
  return true;
}

delphi_esr_msgs__msg__EsrTrackMotionPowerTrack *
delphi_esr_msgs__msg__EsrTrackMotionPowerTrack__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  delphi_esr_msgs__msg__EsrTrackMotionPowerTrack * msg = (delphi_esr_msgs__msg__EsrTrackMotionPowerTrack *)allocator.allocate(sizeof(delphi_esr_msgs__msg__EsrTrackMotionPowerTrack), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(delphi_esr_msgs__msg__EsrTrackMotionPowerTrack));
  bool success = delphi_esr_msgs__msg__EsrTrackMotionPowerTrack__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
delphi_esr_msgs__msg__EsrTrackMotionPowerTrack__destroy(delphi_esr_msgs__msg__EsrTrackMotionPowerTrack * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    delphi_esr_msgs__msg__EsrTrackMotionPowerTrack__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
delphi_esr_msgs__msg__EsrTrackMotionPowerTrack__Sequence__init(delphi_esr_msgs__msg__EsrTrackMotionPowerTrack__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  delphi_esr_msgs__msg__EsrTrackMotionPowerTrack * data = NULL;

  if (size) {
    data = (delphi_esr_msgs__msg__EsrTrackMotionPowerTrack *)allocator.zero_allocate(size, sizeof(delphi_esr_msgs__msg__EsrTrackMotionPowerTrack), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = delphi_esr_msgs__msg__EsrTrackMotionPowerTrack__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        delphi_esr_msgs__msg__EsrTrackMotionPowerTrack__fini(&data[i - 1]);
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
delphi_esr_msgs__msg__EsrTrackMotionPowerTrack__Sequence__fini(delphi_esr_msgs__msg__EsrTrackMotionPowerTrack__Sequence * array)
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
      delphi_esr_msgs__msg__EsrTrackMotionPowerTrack__fini(&array->data[i]);
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

delphi_esr_msgs__msg__EsrTrackMotionPowerTrack__Sequence *
delphi_esr_msgs__msg__EsrTrackMotionPowerTrack__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  delphi_esr_msgs__msg__EsrTrackMotionPowerTrack__Sequence * array = (delphi_esr_msgs__msg__EsrTrackMotionPowerTrack__Sequence *)allocator.allocate(sizeof(delphi_esr_msgs__msg__EsrTrackMotionPowerTrack__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = delphi_esr_msgs__msg__EsrTrackMotionPowerTrack__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
delphi_esr_msgs__msg__EsrTrackMotionPowerTrack__Sequence__destroy(delphi_esr_msgs__msg__EsrTrackMotionPowerTrack__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    delphi_esr_msgs__msg__EsrTrackMotionPowerTrack__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
delphi_esr_msgs__msg__EsrTrackMotionPowerTrack__Sequence__are_equal(const delphi_esr_msgs__msg__EsrTrackMotionPowerTrack__Sequence * lhs, const delphi_esr_msgs__msg__EsrTrackMotionPowerTrack__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!delphi_esr_msgs__msg__EsrTrackMotionPowerTrack__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
delphi_esr_msgs__msg__EsrTrackMotionPowerTrack__Sequence__copy(
  const delphi_esr_msgs__msg__EsrTrackMotionPowerTrack__Sequence * input,
  delphi_esr_msgs__msg__EsrTrackMotionPowerTrack__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(delphi_esr_msgs__msg__EsrTrackMotionPowerTrack);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    delphi_esr_msgs__msg__EsrTrackMotionPowerTrack * data =
      (delphi_esr_msgs__msg__EsrTrackMotionPowerTrack *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!delphi_esr_msgs__msg__EsrTrackMotionPowerTrack__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          delphi_esr_msgs__msg__EsrTrackMotionPowerTrack__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!delphi_esr_msgs__msg__EsrTrackMotionPowerTrack__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

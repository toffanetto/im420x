// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from delphi_mrr_msgs:msg/MrrControlMsgNR.idl
// generated code does not contain a copyright notice
#include "delphi_mrr_msgs/msg/detail/mrr_control_msg_nr__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
delphi_mrr_msgs__msg__MrrControlMsgNR__init(delphi_mrr_msgs__msg__MrrControlMsgNR * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    delphi_mrr_msgs__msg__MrrControlMsgNR__fini(msg);
    return false;
  }
  // can_stop_frequency_nrml
  // can_prp_factor_nrml
  // can_desired_sweep_bw_nrml
  // can_radiation_ctrl
  // can_stop_frequency_nrll
  // can_prp_factor_nrll
  // can_desired_sweep_bw_nrll
  return true;
}

void
delphi_mrr_msgs__msg__MrrControlMsgNR__fini(delphi_mrr_msgs__msg__MrrControlMsgNR * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // can_stop_frequency_nrml
  // can_prp_factor_nrml
  // can_desired_sweep_bw_nrml
  // can_radiation_ctrl
  // can_stop_frequency_nrll
  // can_prp_factor_nrll
  // can_desired_sweep_bw_nrll
}

bool
delphi_mrr_msgs__msg__MrrControlMsgNR__are_equal(const delphi_mrr_msgs__msg__MrrControlMsgNR * lhs, const delphi_mrr_msgs__msg__MrrControlMsgNR * rhs)
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
  // can_stop_frequency_nrml
  if (lhs->can_stop_frequency_nrml != rhs->can_stop_frequency_nrml) {
    return false;
  }
  // can_prp_factor_nrml
  if (lhs->can_prp_factor_nrml != rhs->can_prp_factor_nrml) {
    return false;
  }
  // can_desired_sweep_bw_nrml
  if (lhs->can_desired_sweep_bw_nrml != rhs->can_desired_sweep_bw_nrml) {
    return false;
  }
  // can_radiation_ctrl
  if (lhs->can_radiation_ctrl != rhs->can_radiation_ctrl) {
    return false;
  }
  // can_stop_frequency_nrll
  if (lhs->can_stop_frequency_nrll != rhs->can_stop_frequency_nrll) {
    return false;
  }
  // can_prp_factor_nrll
  if (lhs->can_prp_factor_nrll != rhs->can_prp_factor_nrll) {
    return false;
  }
  // can_desired_sweep_bw_nrll
  if (lhs->can_desired_sweep_bw_nrll != rhs->can_desired_sweep_bw_nrll) {
    return false;
  }
  return true;
}

bool
delphi_mrr_msgs__msg__MrrControlMsgNR__copy(
  const delphi_mrr_msgs__msg__MrrControlMsgNR * input,
  delphi_mrr_msgs__msg__MrrControlMsgNR * output)
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
  // can_stop_frequency_nrml
  output->can_stop_frequency_nrml = input->can_stop_frequency_nrml;
  // can_prp_factor_nrml
  output->can_prp_factor_nrml = input->can_prp_factor_nrml;
  // can_desired_sweep_bw_nrml
  output->can_desired_sweep_bw_nrml = input->can_desired_sweep_bw_nrml;
  // can_radiation_ctrl
  output->can_radiation_ctrl = input->can_radiation_ctrl;
  // can_stop_frequency_nrll
  output->can_stop_frequency_nrll = input->can_stop_frequency_nrll;
  // can_prp_factor_nrll
  output->can_prp_factor_nrll = input->can_prp_factor_nrll;
  // can_desired_sweep_bw_nrll
  output->can_desired_sweep_bw_nrll = input->can_desired_sweep_bw_nrll;
  return true;
}

delphi_mrr_msgs__msg__MrrControlMsgNR *
delphi_mrr_msgs__msg__MrrControlMsgNR__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  delphi_mrr_msgs__msg__MrrControlMsgNR * msg = (delphi_mrr_msgs__msg__MrrControlMsgNR *)allocator.allocate(sizeof(delphi_mrr_msgs__msg__MrrControlMsgNR), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(delphi_mrr_msgs__msg__MrrControlMsgNR));
  bool success = delphi_mrr_msgs__msg__MrrControlMsgNR__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
delphi_mrr_msgs__msg__MrrControlMsgNR__destroy(delphi_mrr_msgs__msg__MrrControlMsgNR * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    delphi_mrr_msgs__msg__MrrControlMsgNR__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
delphi_mrr_msgs__msg__MrrControlMsgNR__Sequence__init(delphi_mrr_msgs__msg__MrrControlMsgNR__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  delphi_mrr_msgs__msg__MrrControlMsgNR * data = NULL;

  if (size) {
    data = (delphi_mrr_msgs__msg__MrrControlMsgNR *)allocator.zero_allocate(size, sizeof(delphi_mrr_msgs__msg__MrrControlMsgNR), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = delphi_mrr_msgs__msg__MrrControlMsgNR__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        delphi_mrr_msgs__msg__MrrControlMsgNR__fini(&data[i - 1]);
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
delphi_mrr_msgs__msg__MrrControlMsgNR__Sequence__fini(delphi_mrr_msgs__msg__MrrControlMsgNR__Sequence * array)
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
      delphi_mrr_msgs__msg__MrrControlMsgNR__fini(&array->data[i]);
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

delphi_mrr_msgs__msg__MrrControlMsgNR__Sequence *
delphi_mrr_msgs__msg__MrrControlMsgNR__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  delphi_mrr_msgs__msg__MrrControlMsgNR__Sequence * array = (delphi_mrr_msgs__msg__MrrControlMsgNR__Sequence *)allocator.allocate(sizeof(delphi_mrr_msgs__msg__MrrControlMsgNR__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = delphi_mrr_msgs__msg__MrrControlMsgNR__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
delphi_mrr_msgs__msg__MrrControlMsgNR__Sequence__destroy(delphi_mrr_msgs__msg__MrrControlMsgNR__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    delphi_mrr_msgs__msg__MrrControlMsgNR__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
delphi_mrr_msgs__msg__MrrControlMsgNR__Sequence__are_equal(const delphi_mrr_msgs__msg__MrrControlMsgNR__Sequence * lhs, const delphi_mrr_msgs__msg__MrrControlMsgNR__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!delphi_mrr_msgs__msg__MrrControlMsgNR__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
delphi_mrr_msgs__msg__MrrControlMsgNR__Sequence__copy(
  const delphi_mrr_msgs__msg__MrrControlMsgNR__Sequence * input,
  delphi_mrr_msgs__msg__MrrControlMsgNR__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(delphi_mrr_msgs__msg__MrrControlMsgNR);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    delphi_mrr_msgs__msg__MrrControlMsgNR * data =
      (delphi_mrr_msgs__msg__MrrControlMsgNR *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!delphi_mrr_msgs__msg__MrrControlMsgNR__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          delphi_mrr_msgs__msg__MrrControlMsgNR__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!delphi_mrr_msgs__msg__MrrControlMsgNR__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

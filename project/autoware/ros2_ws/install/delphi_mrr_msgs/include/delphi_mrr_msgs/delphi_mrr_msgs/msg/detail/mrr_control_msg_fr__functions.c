// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from delphi_mrr_msgs:msg/MrrControlMsgFR.idl
// generated code does not contain a copyright notice
#include "delphi_mrr_msgs/msg/detail/mrr_control_msg_fr__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
delphi_mrr_msgs__msg__MrrControlMsgFR__init(delphi_mrr_msgs__msg__MrrControlMsgFR * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    delphi_mrr_msgs__msg__MrrControlMsgFR__fini(msg);
    return false;
  }
  // can_sensitivity_profile_select
  // can_stop_frequency_frml
  // can_stop_frequency_frll
  // can_prp_factor_frml
  // can_prp_factor_frll
  // can_desired_sweep_bw_frml
  // can_desired_sweep_bw_frll
  return true;
}

void
delphi_mrr_msgs__msg__MrrControlMsgFR__fini(delphi_mrr_msgs__msg__MrrControlMsgFR * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // can_sensitivity_profile_select
  // can_stop_frequency_frml
  // can_stop_frequency_frll
  // can_prp_factor_frml
  // can_prp_factor_frll
  // can_desired_sweep_bw_frml
  // can_desired_sweep_bw_frll
}

bool
delphi_mrr_msgs__msg__MrrControlMsgFR__are_equal(const delphi_mrr_msgs__msg__MrrControlMsgFR * lhs, const delphi_mrr_msgs__msg__MrrControlMsgFR * rhs)
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
  // can_sensitivity_profile_select
  if (lhs->can_sensitivity_profile_select != rhs->can_sensitivity_profile_select) {
    return false;
  }
  // can_stop_frequency_frml
  if (lhs->can_stop_frequency_frml != rhs->can_stop_frequency_frml) {
    return false;
  }
  // can_stop_frequency_frll
  if (lhs->can_stop_frequency_frll != rhs->can_stop_frequency_frll) {
    return false;
  }
  // can_prp_factor_frml
  if (lhs->can_prp_factor_frml != rhs->can_prp_factor_frml) {
    return false;
  }
  // can_prp_factor_frll
  if (lhs->can_prp_factor_frll != rhs->can_prp_factor_frll) {
    return false;
  }
  // can_desired_sweep_bw_frml
  if (lhs->can_desired_sweep_bw_frml != rhs->can_desired_sweep_bw_frml) {
    return false;
  }
  // can_desired_sweep_bw_frll
  if (lhs->can_desired_sweep_bw_frll != rhs->can_desired_sweep_bw_frll) {
    return false;
  }
  return true;
}

bool
delphi_mrr_msgs__msg__MrrControlMsgFR__copy(
  const delphi_mrr_msgs__msg__MrrControlMsgFR * input,
  delphi_mrr_msgs__msg__MrrControlMsgFR * output)
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
  // can_sensitivity_profile_select
  output->can_sensitivity_profile_select = input->can_sensitivity_profile_select;
  // can_stop_frequency_frml
  output->can_stop_frequency_frml = input->can_stop_frequency_frml;
  // can_stop_frequency_frll
  output->can_stop_frequency_frll = input->can_stop_frequency_frll;
  // can_prp_factor_frml
  output->can_prp_factor_frml = input->can_prp_factor_frml;
  // can_prp_factor_frll
  output->can_prp_factor_frll = input->can_prp_factor_frll;
  // can_desired_sweep_bw_frml
  output->can_desired_sweep_bw_frml = input->can_desired_sweep_bw_frml;
  // can_desired_sweep_bw_frll
  output->can_desired_sweep_bw_frll = input->can_desired_sweep_bw_frll;
  return true;
}

delphi_mrr_msgs__msg__MrrControlMsgFR *
delphi_mrr_msgs__msg__MrrControlMsgFR__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  delphi_mrr_msgs__msg__MrrControlMsgFR * msg = (delphi_mrr_msgs__msg__MrrControlMsgFR *)allocator.allocate(sizeof(delphi_mrr_msgs__msg__MrrControlMsgFR), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(delphi_mrr_msgs__msg__MrrControlMsgFR));
  bool success = delphi_mrr_msgs__msg__MrrControlMsgFR__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
delphi_mrr_msgs__msg__MrrControlMsgFR__destroy(delphi_mrr_msgs__msg__MrrControlMsgFR * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    delphi_mrr_msgs__msg__MrrControlMsgFR__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
delphi_mrr_msgs__msg__MrrControlMsgFR__Sequence__init(delphi_mrr_msgs__msg__MrrControlMsgFR__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  delphi_mrr_msgs__msg__MrrControlMsgFR * data = NULL;

  if (size) {
    data = (delphi_mrr_msgs__msg__MrrControlMsgFR *)allocator.zero_allocate(size, sizeof(delphi_mrr_msgs__msg__MrrControlMsgFR), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = delphi_mrr_msgs__msg__MrrControlMsgFR__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        delphi_mrr_msgs__msg__MrrControlMsgFR__fini(&data[i - 1]);
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
delphi_mrr_msgs__msg__MrrControlMsgFR__Sequence__fini(delphi_mrr_msgs__msg__MrrControlMsgFR__Sequence * array)
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
      delphi_mrr_msgs__msg__MrrControlMsgFR__fini(&array->data[i]);
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

delphi_mrr_msgs__msg__MrrControlMsgFR__Sequence *
delphi_mrr_msgs__msg__MrrControlMsgFR__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  delphi_mrr_msgs__msg__MrrControlMsgFR__Sequence * array = (delphi_mrr_msgs__msg__MrrControlMsgFR__Sequence *)allocator.allocate(sizeof(delphi_mrr_msgs__msg__MrrControlMsgFR__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = delphi_mrr_msgs__msg__MrrControlMsgFR__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
delphi_mrr_msgs__msg__MrrControlMsgFR__Sequence__destroy(delphi_mrr_msgs__msg__MrrControlMsgFR__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    delphi_mrr_msgs__msg__MrrControlMsgFR__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
delphi_mrr_msgs__msg__MrrControlMsgFR__Sequence__are_equal(const delphi_mrr_msgs__msg__MrrControlMsgFR__Sequence * lhs, const delphi_mrr_msgs__msg__MrrControlMsgFR__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!delphi_mrr_msgs__msg__MrrControlMsgFR__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
delphi_mrr_msgs__msg__MrrControlMsgFR__Sequence__copy(
  const delphi_mrr_msgs__msg__MrrControlMsgFR__Sequence * input,
  delphi_mrr_msgs__msg__MrrControlMsgFR__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(delphi_mrr_msgs__msg__MrrControlMsgFR);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    delphi_mrr_msgs__msg__MrrControlMsgFR * data =
      (delphi_mrr_msgs__msg__MrrControlMsgFR *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!delphi_mrr_msgs__msg__MrrControlMsgFR__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          delphi_mrr_msgs__msg__MrrControlMsgFR__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!delphi_mrr_msgs__msg__MrrControlMsgFR__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

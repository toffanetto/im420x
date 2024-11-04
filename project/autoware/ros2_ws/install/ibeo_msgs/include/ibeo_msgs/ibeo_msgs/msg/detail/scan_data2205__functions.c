// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ibeo_msgs:msg/ScanData2205.idl
// generated code does not contain a copyright notice
#include "ibeo_msgs/msg/detail/scan_data2205__functions.h"

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
// Member `scan_start_time`
#include "builtin_interfaces/msg/detail/time__functions.h"
// Member `scanner_info_list`
#include "ibeo_msgs/msg/detail/scanner_info2205__functions.h"
// Member `scan_point_list`
#include "ibeo_msgs/msg/detail/scan_point2205__functions.h"

bool
ibeo_msgs__msg__ScanData2205__init(ibeo_msgs__msg__ScanData2205 * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    ibeo_msgs__msg__ScanData2205__fini(msg);
    return false;
  }
  // ibeo_header
  if (!ibeo_msgs__msg__IbeoDataHeader__init(&msg->ibeo_header)) {
    ibeo_msgs__msg__ScanData2205__fini(msg);
    return false;
  }
  // scan_start_time
  if (!builtin_interfaces__msg__Time__init(&msg->scan_start_time)) {
    ibeo_msgs__msg__ScanData2205__fini(msg);
    return false;
  }
  // scan_end_time_offset
  // fused_scan
  // mirror_side
  // coordinate_system
  // scan_number
  // scan_points
  // number_of_scanner_infos
  // scanner_info_list
  if (!ibeo_msgs__msg__ScannerInfo2205__Sequence__init(&msg->scanner_info_list, 0)) {
    ibeo_msgs__msg__ScanData2205__fini(msg);
    return false;
  }
  // scan_point_list
  if (!ibeo_msgs__msg__ScanPoint2205__Sequence__init(&msg->scan_point_list, 0)) {
    ibeo_msgs__msg__ScanData2205__fini(msg);
    return false;
  }
  return true;
}

void
ibeo_msgs__msg__ScanData2205__fini(ibeo_msgs__msg__ScanData2205 * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // ibeo_header
  ibeo_msgs__msg__IbeoDataHeader__fini(&msg->ibeo_header);
  // scan_start_time
  builtin_interfaces__msg__Time__fini(&msg->scan_start_time);
  // scan_end_time_offset
  // fused_scan
  // mirror_side
  // coordinate_system
  // scan_number
  // scan_points
  // number_of_scanner_infos
  // scanner_info_list
  ibeo_msgs__msg__ScannerInfo2205__Sequence__fini(&msg->scanner_info_list);
  // scan_point_list
  ibeo_msgs__msg__ScanPoint2205__Sequence__fini(&msg->scan_point_list);
}

bool
ibeo_msgs__msg__ScanData2205__are_equal(const ibeo_msgs__msg__ScanData2205 * lhs, const ibeo_msgs__msg__ScanData2205 * rhs)
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
  // scan_start_time
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->scan_start_time), &(rhs->scan_start_time)))
  {
    return false;
  }
  // scan_end_time_offset
  if (lhs->scan_end_time_offset != rhs->scan_end_time_offset) {
    return false;
  }
  // fused_scan
  if (lhs->fused_scan != rhs->fused_scan) {
    return false;
  }
  // mirror_side
  if (lhs->mirror_side != rhs->mirror_side) {
    return false;
  }
  // coordinate_system
  if (lhs->coordinate_system != rhs->coordinate_system) {
    return false;
  }
  // scan_number
  if (lhs->scan_number != rhs->scan_number) {
    return false;
  }
  // scan_points
  if (lhs->scan_points != rhs->scan_points) {
    return false;
  }
  // number_of_scanner_infos
  if (lhs->number_of_scanner_infos != rhs->number_of_scanner_infos) {
    return false;
  }
  // scanner_info_list
  if (!ibeo_msgs__msg__ScannerInfo2205__Sequence__are_equal(
      &(lhs->scanner_info_list), &(rhs->scanner_info_list)))
  {
    return false;
  }
  // scan_point_list
  if (!ibeo_msgs__msg__ScanPoint2205__Sequence__are_equal(
      &(lhs->scan_point_list), &(rhs->scan_point_list)))
  {
    return false;
  }
  return true;
}

bool
ibeo_msgs__msg__ScanData2205__copy(
  const ibeo_msgs__msg__ScanData2205 * input,
  ibeo_msgs__msg__ScanData2205 * output)
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
  // scan_start_time
  if (!builtin_interfaces__msg__Time__copy(
      &(input->scan_start_time), &(output->scan_start_time)))
  {
    return false;
  }
  // scan_end_time_offset
  output->scan_end_time_offset = input->scan_end_time_offset;
  // fused_scan
  output->fused_scan = input->fused_scan;
  // mirror_side
  output->mirror_side = input->mirror_side;
  // coordinate_system
  output->coordinate_system = input->coordinate_system;
  // scan_number
  output->scan_number = input->scan_number;
  // scan_points
  output->scan_points = input->scan_points;
  // number_of_scanner_infos
  output->number_of_scanner_infos = input->number_of_scanner_infos;
  // scanner_info_list
  if (!ibeo_msgs__msg__ScannerInfo2205__Sequence__copy(
      &(input->scanner_info_list), &(output->scanner_info_list)))
  {
    return false;
  }
  // scan_point_list
  if (!ibeo_msgs__msg__ScanPoint2205__Sequence__copy(
      &(input->scan_point_list), &(output->scan_point_list)))
  {
    return false;
  }
  return true;
}

ibeo_msgs__msg__ScanData2205 *
ibeo_msgs__msg__ScanData2205__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ibeo_msgs__msg__ScanData2205 * msg = (ibeo_msgs__msg__ScanData2205 *)allocator.allocate(sizeof(ibeo_msgs__msg__ScanData2205), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ibeo_msgs__msg__ScanData2205));
  bool success = ibeo_msgs__msg__ScanData2205__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ibeo_msgs__msg__ScanData2205__destroy(ibeo_msgs__msg__ScanData2205 * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ibeo_msgs__msg__ScanData2205__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ibeo_msgs__msg__ScanData2205__Sequence__init(ibeo_msgs__msg__ScanData2205__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ibeo_msgs__msg__ScanData2205 * data = NULL;

  if (size) {
    data = (ibeo_msgs__msg__ScanData2205 *)allocator.zero_allocate(size, sizeof(ibeo_msgs__msg__ScanData2205), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ibeo_msgs__msg__ScanData2205__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ibeo_msgs__msg__ScanData2205__fini(&data[i - 1]);
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
ibeo_msgs__msg__ScanData2205__Sequence__fini(ibeo_msgs__msg__ScanData2205__Sequence * array)
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
      ibeo_msgs__msg__ScanData2205__fini(&array->data[i]);
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

ibeo_msgs__msg__ScanData2205__Sequence *
ibeo_msgs__msg__ScanData2205__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ibeo_msgs__msg__ScanData2205__Sequence * array = (ibeo_msgs__msg__ScanData2205__Sequence *)allocator.allocate(sizeof(ibeo_msgs__msg__ScanData2205__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ibeo_msgs__msg__ScanData2205__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ibeo_msgs__msg__ScanData2205__Sequence__destroy(ibeo_msgs__msg__ScanData2205__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ibeo_msgs__msg__ScanData2205__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ibeo_msgs__msg__ScanData2205__Sequence__are_equal(const ibeo_msgs__msg__ScanData2205__Sequence * lhs, const ibeo_msgs__msg__ScanData2205__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ibeo_msgs__msg__ScanData2205__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ibeo_msgs__msg__ScanData2205__Sequence__copy(
  const ibeo_msgs__msg__ScanData2205__Sequence * input,
  ibeo_msgs__msg__ScanData2205__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ibeo_msgs__msg__ScanData2205);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ibeo_msgs__msg__ScanData2205 * data =
      (ibeo_msgs__msg__ScanData2205 *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ibeo_msgs__msg__ScanData2205__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ibeo_msgs__msg__ScanData2205__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ibeo_msgs__msg__ScanData2205__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

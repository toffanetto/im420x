// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ibeo_msgs:msg/Point2Dui.idl
// generated code does not contain a copyright notice

#ifndef IBEO_MSGS__MSG__DETAIL__POINT2_DUI__STRUCT_H_
#define IBEO_MSGS__MSG__DETAIL__POINT2_DUI__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Point2Dui in the package ibeo_msgs.
typedef struct ibeo_msgs__msg__Point2Dui
{
  uint16_t x;
  uint16_t y;
} ibeo_msgs__msg__Point2Dui;

// Struct for a sequence of ibeo_msgs__msg__Point2Dui.
typedef struct ibeo_msgs__msg__Point2Dui__Sequence
{
  ibeo_msgs__msg__Point2Dui * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ibeo_msgs__msg__Point2Dui__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // IBEO_MSGS__MSG__DETAIL__POINT2_DUI__STRUCT_H_
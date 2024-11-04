// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from delphi_esr_msgs:msg/EsrStatus7.idl
// generated code does not contain a copyright notice

#ifndef DELPHI_ESR_MSGS__MSG__DETAIL__ESR_STATUS7__STRUCT_H_
#define DELPHI_ESR_MSGS__MSG__DETAIL__ESR_STATUS7__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'canmsg'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/EsrStatus7 in the package delphi_esr_msgs.
typedef struct delphi_esr_msgs__msg__EsrStatus7
{
  std_msgs__msg__Header header;
  /// ESR Status7
  rosidl_runtime_c__String canmsg;
  uint8_t active_fault_0;
  uint8_t active_fault_1;
  uint8_t active_fault_2;
  uint8_t active_fault_3;
  uint8_t active_fault_4;
  uint8_t active_fault_5;
  uint8_t active_fault_6;
  uint8_t active_fault_7;
} delphi_esr_msgs__msg__EsrStatus7;

// Struct for a sequence of delphi_esr_msgs__msg__EsrStatus7.
typedef struct delphi_esr_msgs__msg__EsrStatus7__Sequence
{
  delphi_esr_msgs__msg__EsrStatus7 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} delphi_esr_msgs__msg__EsrStatus7__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DELPHI_ESR_MSGS__MSG__DETAIL__ESR_STATUS7__STRUCT_H_

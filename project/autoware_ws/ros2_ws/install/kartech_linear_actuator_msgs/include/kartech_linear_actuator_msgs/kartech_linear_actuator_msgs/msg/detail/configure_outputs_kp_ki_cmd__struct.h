// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from kartech_linear_actuator_msgs:msg/ConfigureOutputsKpKiCmd.idl
// generated code does not contain a copyright notice

#ifndef KARTECH_LINEAR_ACTUATOR_MSGS__MSG__DETAIL__CONFIGURE_OUTPUTS_KP_KI_CMD__STRUCT_H_
#define KARTECH_LINEAR_ACTUATOR_MSGS__MSG__DETAIL__CONFIGURE_OUTPUTS_KP_KI_CMD__STRUCT_H_

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

/// Struct defined in msg/ConfigureOutputsKpKiCmd in the package kartech_linear_actuator_msgs.
typedef struct kartech_linear_actuator_msgs__msg__ConfigureOutputsKpKiCmd
{
  std_msgs__msg__Header header;
  bool confirm;
  /// The proportial term of the closed-loop control. Default is 1000.
  uint16_t kp;
  /// The integral term of the closed-loop control. Default is 1000.
  uint16_t ki;
} kartech_linear_actuator_msgs__msg__ConfigureOutputsKpKiCmd;

// Struct for a sequence of kartech_linear_actuator_msgs__msg__ConfigureOutputsKpKiCmd.
typedef struct kartech_linear_actuator_msgs__msg__ConfigureOutputsKpKiCmd__Sequence
{
  kartech_linear_actuator_msgs__msg__ConfigureOutputsKpKiCmd * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} kartech_linear_actuator_msgs__msg__ConfigureOutputsKpKiCmd__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // KARTECH_LINEAR_ACTUATOR_MSGS__MSG__DETAIL__CONFIGURE_OUTPUTS_KP_KI_CMD__STRUCT_H_

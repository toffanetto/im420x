// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from kartech_linear_actuator_msgs:msg/ReassignCommandIdCmd.idl
// generated code does not contain a copyright notice

#ifndef KARTECH_LINEAR_ACTUATOR_MSGS__MSG__DETAIL__REASSIGN_COMMAND_ID_CMD__STRUCT_H_
#define KARTECH_LINEAR_ACTUATOR_MSGS__MSG__DETAIL__REASSIGN_COMMAND_ID_CMD__STRUCT_H_

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

/// Struct defined in msg/ReassignCommandIdCmd in the package kartech_linear_actuator_msgs.
typedef struct kartech_linear_actuator_msgs__msg__ReassignCommandIdCmd
{
  std_msgs__msg__Header header;
  bool confirm;
  /// The index of the user-defined command ID (1-4) to change.
  uint8_t command_id_index;
  /// The new user-defined command ID to set. 0xFFFEXX and 0xFF00XX are reserved.
  /// Setting this to 0xFFFFFFFF will change the disable_default_command_id flag without affecting any others.
  uint32_t user_command_id;
  /// Disables (true) or enables (false) the default command ID.
  bool disable_default_command_id;
} kartech_linear_actuator_msgs__msg__ReassignCommandIdCmd;

// Struct for a sequence of kartech_linear_actuator_msgs__msg__ReassignCommandIdCmd.
typedef struct kartech_linear_actuator_msgs__msg__ReassignCommandIdCmd__Sequence
{
  kartech_linear_actuator_msgs__msg__ReassignCommandIdCmd * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} kartech_linear_actuator_msgs__msg__ReassignCommandIdCmd__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // KARTECH_LINEAR_ACTUATOR_MSGS__MSG__DETAIL__REASSIGN_COMMAND_ID_CMD__STRUCT_H_

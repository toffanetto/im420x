// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from kartech_linear_actuator_msgs:msg/ConfigureOutputsKdFreqDeadbandCmd.idl
// generated code does not contain a copyright notice

#ifndef KARTECH_LINEAR_ACTUATOR_MSGS__MSG__DETAIL__CONFIGURE_OUTPUTS_KD_FREQ_DEADBAND_CMD__STRUCT_H_
#define KARTECH_LINEAR_ACTUATOR_MSGS__MSG__DETAIL__CONFIGURE_OUTPUTS_KD_FREQ_DEADBAND_CMD__STRUCT_H_

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

/// Struct defined in msg/ConfigureOutputsKdFreqDeadbandCmd in the package kartech_linear_actuator_msgs.
typedef struct kartech_linear_actuator_msgs__msg__ConfigureOutputsKdFreqDeadbandCmd
{
  std_msgs__msg__Header header;
  bool confirm;
  /// The differential term of the closed-loop control. Default is 10.
  uint16_t kd;
  /// The frequency of closed-loop corrections in Hz. The default is 60Hz.
  uint8_t closed_loop_freq;
  /// The size of the dead-band for error correction in units of 0.001". The default is 0.05"
  double error_dead_band;
} kartech_linear_actuator_msgs__msg__ConfigureOutputsKdFreqDeadbandCmd;

// Struct for a sequence of kartech_linear_actuator_msgs__msg__ConfigureOutputsKdFreqDeadbandCmd.
typedef struct kartech_linear_actuator_msgs__msg__ConfigureOutputsKdFreqDeadbandCmd__Sequence
{
  kartech_linear_actuator_msgs__msg__ConfigureOutputsKdFreqDeadbandCmd * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} kartech_linear_actuator_msgs__msg__ConfigureOutputsKdFreqDeadbandCmd__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // KARTECH_LINEAR_ACTUATOR_MSGS__MSG__DETAIL__CONFIGURE_OUTPUTS_KD_FREQ_DEADBAND_CMD__STRUCT_H_

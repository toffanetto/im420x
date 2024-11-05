// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from carla_msgs:msg/CarlaEgoVehicleSteering.idl
// generated code does not contain a copyright notice

#ifndef CARLA_MSGS__MSG__DETAIL__CARLA_EGO_VEHICLE_STEERING__STRUCT_H_
#define CARLA_MSGS__MSG__DETAIL__CARLA_EGO_VEHICLE_STEERING__STRUCT_H_

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

/// Struct defined in msg/CarlaEgoVehicleSteering in the package carla_msgs.
/**
  * Copyright (c) Robotics010.
  *
  * This work is licensed under the terms of the MIT license.
  * For a copy, see <https://opensource.org/licenses/MIT>.
  *
  * This represents a feedback vehicle steering message sent to CARLA simulator
 */
typedef struct carla_msgs__msg__CarlaEgoVehicleSteering
{
  std_msgs__msg__Header header;
  /// current steering tire angle in radians
  float steering_tire_angle;
} carla_msgs__msg__CarlaEgoVehicleSteering;

// Struct for a sequence of carla_msgs__msg__CarlaEgoVehicleSteering.
typedef struct carla_msgs__msg__CarlaEgoVehicleSteering__Sequence
{
  carla_msgs__msg__CarlaEgoVehicleSteering * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carla_msgs__msg__CarlaEgoVehicleSteering__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARLA_MSGS__MSG__DETAIL__CARLA_EGO_VEHICLE_STEERING__STRUCT_H_

// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autoware_perception_msgs:msg/TrafficLightArray.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_LIGHT_ARRAY__STRUCT_H_
#define AUTOWARE_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_LIGHT_ARRAY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"
// Member 'lights'
#include "autoware_perception_msgs/msg/detail/traffic_light__struct.h"

/// Struct defined in msg/TrafficLightArray in the package autoware_perception_msgs.
typedef struct autoware_perception_msgs__msg__TrafficLightArray
{
  builtin_interfaces__msg__Time stamp;
  autoware_perception_msgs__msg__TrafficLight__Sequence lights;
} autoware_perception_msgs__msg__TrafficLightArray;

// Struct for a sequence of autoware_perception_msgs__msg__TrafficLightArray.
typedef struct autoware_perception_msgs__msg__TrafficLightArray__Sequence
{
  autoware_perception_msgs__msg__TrafficLightArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autoware_perception_msgs__msg__TrafficLightArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTOWARE_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_LIGHT_ARRAY__STRUCT_H_

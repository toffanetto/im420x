// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autoware_perception_msgs:msg/TrafficLight.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_LIGHT__STRUCT_H_
#define AUTOWARE_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_LIGHT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'elements'
#include "autoware_perception_msgs/msg/detail/traffic_light_element__struct.h"

/// Struct defined in msg/TrafficLight in the package autoware_perception_msgs.
typedef struct autoware_perception_msgs__msg__TrafficLight
{
  int64_t traffic_light_id;
  autoware_perception_msgs__msg__TrafficLightElement__Sequence elements;
} autoware_perception_msgs__msg__TrafficLight;

// Struct for a sequence of autoware_perception_msgs__msg__TrafficLight.
typedef struct autoware_perception_msgs__msg__TrafficLight__Sequence
{
  autoware_perception_msgs__msg__TrafficLight * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autoware_perception_msgs__msg__TrafficLight__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTOWARE_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_LIGHT__STRUCT_H_

// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from derived_object_msgs:msg/Object.idl
// generated code does not contain a copyright notice

#ifndef DERIVED_OBJECT_MSGS__MSG__DETAIL__OBJECT__STRUCT_H_
#define DERIVED_OBJECT_MSGS__MSG__DETAIL__OBJECT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'OBJECT_DETECTED'.
enum
{
  derived_object_msgs__msg__Object__OBJECT_DETECTED = 0
};

/// Constant 'OBJECT_TRACKED'.
enum
{
  derived_object_msgs__msg__Object__OBJECT_TRACKED = 1
};

/// Constant 'CLASSIFICATION_UNKNOWN'.
enum
{
  derived_object_msgs__msg__Object__CLASSIFICATION_UNKNOWN = 0
};

/// Constant 'CLASSIFICATION_UNKNOWN_SMALL'.
enum
{
  derived_object_msgs__msg__Object__CLASSIFICATION_UNKNOWN_SMALL = 1
};

/// Constant 'CLASSIFICATION_UNKNOWN_MEDIUM'.
enum
{
  derived_object_msgs__msg__Object__CLASSIFICATION_UNKNOWN_MEDIUM = 2
};

/// Constant 'CLASSIFICATION_UNKNOWN_BIG'.
enum
{
  derived_object_msgs__msg__Object__CLASSIFICATION_UNKNOWN_BIG = 3
};

/// Constant 'CLASSIFICATION_PEDESTRIAN'.
enum
{
  derived_object_msgs__msg__Object__CLASSIFICATION_PEDESTRIAN = 4
};

/// Constant 'CLASSIFICATION_BIKE'.
enum
{
  derived_object_msgs__msg__Object__CLASSIFICATION_BIKE = 5
};

/// Constant 'CLASSIFICATION_CAR'.
enum
{
  derived_object_msgs__msg__Object__CLASSIFICATION_CAR = 6
};

/// Constant 'CLASSIFICATION_TRUCK'.
enum
{
  derived_object_msgs__msg__Object__CLASSIFICATION_TRUCK = 7
};

/// Constant 'CLASSIFICATION_MOTORCYCLE'.
enum
{
  derived_object_msgs__msg__Object__CLASSIFICATION_MOTORCYCLE = 8
};

/// Constant 'CLASSIFICATION_OTHER_VEHICLE'.
enum
{
  derived_object_msgs__msg__Object__CLASSIFICATION_OTHER_VEHICLE = 9
};

/// Constant 'CLASSIFICATION_BARRIER'.
enum
{
  derived_object_msgs__msg__Object__CLASSIFICATION_BARRIER = 10
};

/// Constant 'CLASSIFICATION_SIGN'.
enum
{
  derived_object_msgs__msg__Object__CLASSIFICATION_SIGN = 11
};

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.h"
// Member 'twist'
#include "geometry_msgs/msg/detail/twist__struct.h"
// Member 'accel'
#include "geometry_msgs/msg/detail/accel__struct.h"
// Member 'polygon'
#include "geometry_msgs/msg/detail/polygon__struct.h"
// Member 'shape'
#include "shape_msgs/msg/detail/solid_primitive__struct.h"

/// Struct defined in msg/Object in the package derived_object_msgs.
/**
  * This represents a detected or tracked object with reference coordinate frame and timestamp.
 */
typedef struct derived_object_msgs__msg__Object
{
  std_msgs__msg__Header header;
  /// The id of the object (presumably from the detecting sensor).
  uint32_t id;
  /// A Detected object is one which has been seen in at least one scan/frame of a sensor.
  /// A Tracked object is one which has been correlated over multiple scans/frames of a sensor.
  /// An object which is detected can only be assumed to have valid pose and shape properties.
  /// An object which is tracked should also be assumed to have valid twist and accel properties.
  uint8_t detection_level;
  /// A Classified object is one which has been identified as a certain object type.
  /// Classified objects should have valid classification, classification_certainty, and classification_age properties.
  bool object_classified;
  /// The detected position and orientation of the object.
  geometry_msgs__msg__Pose pose;
  /// The detected linear and angular velocities of the object.
  geometry_msgs__msg__Twist twist;
  /// The detected linear and angular accelerations of the object.
  geometry_msgs__msg__Accel accel;
  /// (OPTIONAL) The polygon defining the detection points at the outer edges of the object.
  geometry_msgs__msg__Polygon polygon;
  /// A shape conforming to the outer bounding edges of the object.
  shape_msgs__msg__SolidPrimitive shape;
  /// The type of classification given to this object.
  uint8_t classification;
  /// The certainty of the classification from the originating sensor.
  /// Higher value indicates greater certainty (MAX=255).
  /// It is recommended that a native sensor value be scaled to 0-255 for interoperability.
  uint8_t classification_certainty;
  /// The number of scans/frames from the sensor that this object has been classified as the current classification.
  uint32_t classification_age;
} derived_object_msgs__msg__Object;

// Struct for a sequence of derived_object_msgs__msg__Object.
typedef struct derived_object_msgs__msg__Object__Sequence
{
  derived_object_msgs__msg__Object * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} derived_object_msgs__msg__Object__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DERIVED_OBJECT_MSGS__MSG__DETAIL__OBJECT__STRUCT_H_

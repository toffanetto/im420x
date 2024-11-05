// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from derived_object_msgs:msg/SolidPrimitiveWithCovariance.idl
// generated code does not contain a copyright notice

#ifndef DERIVED_OBJECT_MSGS__MSG__DETAIL__SOLID_PRIMITIVE_WITH_COVARIANCE__STRUCT_H_
#define DERIVED_OBJECT_MSGS__MSG__DETAIL__SOLID_PRIMITIVE_WITH_COVARIANCE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'BOX'.
enum
{
  derived_object_msgs__msg__SolidPrimitiveWithCovariance__BOX = 1
};

/// Constant 'SPHERE'.
enum
{
  derived_object_msgs__msg__SolidPrimitiveWithCovariance__SPHERE = 2
};

/// Constant 'CYLINDER'.
enum
{
  derived_object_msgs__msg__SolidPrimitiveWithCovariance__CYLINDER = 3
};

/// Constant 'CONE'.
enum
{
  derived_object_msgs__msg__SolidPrimitiveWithCovariance__CONE = 4
};

/// Constant 'BOX_X'.
/**
  * The meaning of the shape dimensions: each constant defines the index in the 'dimensions' array
  * For the BOX type, the X, Y, and Z dimensions are the length of the corresponding
  * sides of the box.
 */
enum
{
  derived_object_msgs__msg__SolidPrimitiveWithCovariance__BOX_X = 0
};

/// Constant 'BOX_Y'.
enum
{
  derived_object_msgs__msg__SolidPrimitiveWithCovariance__BOX_Y = 1
};

/// Constant 'BOX_Z'.
enum
{
  derived_object_msgs__msg__SolidPrimitiveWithCovariance__BOX_Z = 2
};

/// Constant 'SPHERE_RADIUS'.
/**
  * For the SPHERE type, only one component is used, and it gives the radius of
  * the sphere.
 */
enum
{
  derived_object_msgs__msg__SolidPrimitiveWithCovariance__SPHERE_RADIUS = 0
};

/// Constant 'CYLINDER_HEIGHT'.
/**
  * For the CYLINDER and CONE types, the center line is oriented along
  * the Z axis.  Therefore the CYLINDER_HEIGHT (CONE_HEIGHT) component
  * of dimensions gives the height of the cylinder (cone).  The
  * CYLINDER_RADIUS (CONE_RADIUS) component of dimensions gives the
  * radius of the base of the cylinder (cone).  Cone and cylinder
  * primitives are defined to be circular. The tip of the cone is
  * pointing up, along +Z axis.
 */
enum
{
  derived_object_msgs__msg__SolidPrimitiveWithCovariance__CYLINDER_HEIGHT = 0
};

/// Constant 'CYLINDER_RADIUS'.
enum
{
  derived_object_msgs__msg__SolidPrimitiveWithCovariance__CYLINDER_RADIUS = 1
};

/// Constant 'CONE_HEIGHT'.
enum
{
  derived_object_msgs__msg__SolidPrimitiveWithCovariance__CONE_HEIGHT = 0
};

/// Constant 'CONE_RADIUS'.
enum
{
  derived_object_msgs__msg__SolidPrimitiveWithCovariance__CONE_RADIUS = 1
};

// Include directives for member types
// Member 'dimensions'
// Member 'covariance'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/SolidPrimitiveWithCovariance in the package derived_object_msgs.
/**
  * Define box, sphere, cylinder, cone 
  * All shapes are defined to have their bounding boxes centered around 0,0,0.
  * This message based on shape_msgs/SolidPrimitive
 */
typedef struct derived_object_msgs__msg__SolidPrimitiveWithCovariance
{
  /// The type of the shape
  uint8_t type;
  /// The dimensions of the shape
  rosidl_runtime_c__double__Sequence dimensions;
  /// Row-major representation of the covariance matrix associated with the shape.
  /// For the BOX type, this should be a 3x3 matrix defining the uncertainty of the X, Y, and Z measurements.
  /// For the SPHERE type, this should contain only one value for the radius.
  /// For the CYLINDER and CONE types, this will be a 2x2 matrix defining the uncertainty of the HEIGHT and RADIUS measurements.
  rosidl_runtime_c__double__Sequence covariance;
} derived_object_msgs__msg__SolidPrimitiveWithCovariance;

// Struct for a sequence of derived_object_msgs__msg__SolidPrimitiveWithCovariance.
typedef struct derived_object_msgs__msg__SolidPrimitiveWithCovariance__Sequence
{
  derived_object_msgs__msg__SolidPrimitiveWithCovariance * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} derived_object_msgs__msg__SolidPrimitiveWithCovariance__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DERIVED_OBJECT_MSGS__MSG__DETAIL__SOLID_PRIMITIVE_WITH_COVARIANCE__STRUCT_H_

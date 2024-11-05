// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from derived_object_msgs:msg/SolidPrimitiveWithCovariance.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "derived_object_msgs/msg/detail/solid_primitive_with_covariance__rosidl_typesupport_introspection_c.h"
#include "derived_object_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "derived_object_msgs/msg/detail/solid_primitive_with_covariance__functions.h"
#include "derived_object_msgs/msg/detail/solid_primitive_with_covariance__struct.h"


// Include directives for member types
// Member `dimensions`
// Member `covariance`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void derived_object_msgs__msg__SolidPrimitiveWithCovariance__rosidl_typesupport_introspection_c__SolidPrimitiveWithCovariance_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  derived_object_msgs__msg__SolidPrimitiveWithCovariance__init(message_memory);
}

void derived_object_msgs__msg__SolidPrimitiveWithCovariance__rosidl_typesupport_introspection_c__SolidPrimitiveWithCovariance_fini_function(void * message_memory)
{
  derived_object_msgs__msg__SolidPrimitiveWithCovariance__fini(message_memory);
}

size_t derived_object_msgs__msg__SolidPrimitiveWithCovariance__rosidl_typesupport_introspection_c__size_function__SolidPrimitiveWithCovariance__dimensions(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * derived_object_msgs__msg__SolidPrimitiveWithCovariance__rosidl_typesupport_introspection_c__get_const_function__SolidPrimitiveWithCovariance__dimensions(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * derived_object_msgs__msg__SolidPrimitiveWithCovariance__rosidl_typesupport_introspection_c__get_function__SolidPrimitiveWithCovariance__dimensions(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void derived_object_msgs__msg__SolidPrimitiveWithCovariance__rosidl_typesupport_introspection_c__fetch_function__SolidPrimitiveWithCovariance__dimensions(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    derived_object_msgs__msg__SolidPrimitiveWithCovariance__rosidl_typesupport_introspection_c__get_const_function__SolidPrimitiveWithCovariance__dimensions(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void derived_object_msgs__msg__SolidPrimitiveWithCovariance__rosidl_typesupport_introspection_c__assign_function__SolidPrimitiveWithCovariance__dimensions(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    derived_object_msgs__msg__SolidPrimitiveWithCovariance__rosidl_typesupport_introspection_c__get_function__SolidPrimitiveWithCovariance__dimensions(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool derived_object_msgs__msg__SolidPrimitiveWithCovariance__rosidl_typesupport_introspection_c__resize_function__SolidPrimitiveWithCovariance__dimensions(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t derived_object_msgs__msg__SolidPrimitiveWithCovariance__rosidl_typesupport_introspection_c__size_function__SolidPrimitiveWithCovariance__covariance(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * derived_object_msgs__msg__SolidPrimitiveWithCovariance__rosidl_typesupport_introspection_c__get_const_function__SolidPrimitiveWithCovariance__covariance(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * derived_object_msgs__msg__SolidPrimitiveWithCovariance__rosidl_typesupport_introspection_c__get_function__SolidPrimitiveWithCovariance__covariance(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void derived_object_msgs__msg__SolidPrimitiveWithCovariance__rosidl_typesupport_introspection_c__fetch_function__SolidPrimitiveWithCovariance__covariance(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    derived_object_msgs__msg__SolidPrimitiveWithCovariance__rosidl_typesupport_introspection_c__get_const_function__SolidPrimitiveWithCovariance__covariance(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void derived_object_msgs__msg__SolidPrimitiveWithCovariance__rosidl_typesupport_introspection_c__assign_function__SolidPrimitiveWithCovariance__covariance(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    derived_object_msgs__msg__SolidPrimitiveWithCovariance__rosidl_typesupport_introspection_c__get_function__SolidPrimitiveWithCovariance__covariance(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool derived_object_msgs__msg__SolidPrimitiveWithCovariance__rosidl_typesupport_introspection_c__resize_function__SolidPrimitiveWithCovariance__covariance(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember derived_object_msgs__msg__SolidPrimitiveWithCovariance__rosidl_typesupport_introspection_c__SolidPrimitiveWithCovariance_message_member_array[3] = {
  {
    "type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(derived_object_msgs__msg__SolidPrimitiveWithCovariance, type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "dimensions",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(derived_object_msgs__msg__SolidPrimitiveWithCovariance, dimensions),  // bytes offset in struct
    NULL,  // default value
    derived_object_msgs__msg__SolidPrimitiveWithCovariance__rosidl_typesupport_introspection_c__size_function__SolidPrimitiveWithCovariance__dimensions,  // size() function pointer
    derived_object_msgs__msg__SolidPrimitiveWithCovariance__rosidl_typesupport_introspection_c__get_const_function__SolidPrimitiveWithCovariance__dimensions,  // get_const(index) function pointer
    derived_object_msgs__msg__SolidPrimitiveWithCovariance__rosidl_typesupport_introspection_c__get_function__SolidPrimitiveWithCovariance__dimensions,  // get(index) function pointer
    derived_object_msgs__msg__SolidPrimitiveWithCovariance__rosidl_typesupport_introspection_c__fetch_function__SolidPrimitiveWithCovariance__dimensions,  // fetch(index, &value) function pointer
    derived_object_msgs__msg__SolidPrimitiveWithCovariance__rosidl_typesupport_introspection_c__assign_function__SolidPrimitiveWithCovariance__dimensions,  // assign(index, value) function pointer
    derived_object_msgs__msg__SolidPrimitiveWithCovariance__rosidl_typesupport_introspection_c__resize_function__SolidPrimitiveWithCovariance__dimensions  // resize(index) function pointer
  },
  {
    "covariance",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(derived_object_msgs__msg__SolidPrimitiveWithCovariance, covariance),  // bytes offset in struct
    NULL,  // default value
    derived_object_msgs__msg__SolidPrimitiveWithCovariance__rosidl_typesupport_introspection_c__size_function__SolidPrimitiveWithCovariance__covariance,  // size() function pointer
    derived_object_msgs__msg__SolidPrimitiveWithCovariance__rosidl_typesupport_introspection_c__get_const_function__SolidPrimitiveWithCovariance__covariance,  // get_const(index) function pointer
    derived_object_msgs__msg__SolidPrimitiveWithCovariance__rosidl_typesupport_introspection_c__get_function__SolidPrimitiveWithCovariance__covariance,  // get(index) function pointer
    derived_object_msgs__msg__SolidPrimitiveWithCovariance__rosidl_typesupport_introspection_c__fetch_function__SolidPrimitiveWithCovariance__covariance,  // fetch(index, &value) function pointer
    derived_object_msgs__msg__SolidPrimitiveWithCovariance__rosidl_typesupport_introspection_c__assign_function__SolidPrimitiveWithCovariance__covariance,  // assign(index, value) function pointer
    derived_object_msgs__msg__SolidPrimitiveWithCovariance__rosidl_typesupport_introspection_c__resize_function__SolidPrimitiveWithCovariance__covariance  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers derived_object_msgs__msg__SolidPrimitiveWithCovariance__rosidl_typesupport_introspection_c__SolidPrimitiveWithCovariance_message_members = {
  "derived_object_msgs__msg",  // message namespace
  "SolidPrimitiveWithCovariance",  // message name
  3,  // number of fields
  sizeof(derived_object_msgs__msg__SolidPrimitiveWithCovariance),
  derived_object_msgs__msg__SolidPrimitiveWithCovariance__rosidl_typesupport_introspection_c__SolidPrimitiveWithCovariance_message_member_array,  // message members
  derived_object_msgs__msg__SolidPrimitiveWithCovariance__rosidl_typesupport_introspection_c__SolidPrimitiveWithCovariance_init_function,  // function to initialize message memory (memory has to be allocated)
  derived_object_msgs__msg__SolidPrimitiveWithCovariance__rosidl_typesupport_introspection_c__SolidPrimitiveWithCovariance_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t derived_object_msgs__msg__SolidPrimitiveWithCovariance__rosidl_typesupport_introspection_c__SolidPrimitiveWithCovariance_message_type_support_handle = {
  0,
  &derived_object_msgs__msg__SolidPrimitiveWithCovariance__rosidl_typesupport_introspection_c__SolidPrimitiveWithCovariance_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_derived_object_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, derived_object_msgs, msg, SolidPrimitiveWithCovariance)() {
  if (!derived_object_msgs__msg__SolidPrimitiveWithCovariance__rosidl_typesupport_introspection_c__SolidPrimitiveWithCovariance_message_type_support_handle.typesupport_identifier) {
    derived_object_msgs__msg__SolidPrimitiveWithCovariance__rosidl_typesupport_introspection_c__SolidPrimitiveWithCovariance_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &derived_object_msgs__msg__SolidPrimitiveWithCovariance__rosidl_typesupport_introspection_c__SolidPrimitiveWithCovariance_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

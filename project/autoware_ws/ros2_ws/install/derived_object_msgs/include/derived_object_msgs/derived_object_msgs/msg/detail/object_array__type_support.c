// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from derived_object_msgs:msg/ObjectArray.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "derived_object_msgs/msg/detail/object_array__rosidl_typesupport_introspection_c.h"
#include "derived_object_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "derived_object_msgs/msg/detail/object_array__functions.h"
#include "derived_object_msgs/msg/detail/object_array__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `objects`
#include "derived_object_msgs/msg/object.h"
// Member `objects`
#include "derived_object_msgs/msg/detail/object__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void derived_object_msgs__msg__ObjectArray__rosidl_typesupport_introspection_c__ObjectArray_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  derived_object_msgs__msg__ObjectArray__init(message_memory);
}

void derived_object_msgs__msg__ObjectArray__rosidl_typesupport_introspection_c__ObjectArray_fini_function(void * message_memory)
{
  derived_object_msgs__msg__ObjectArray__fini(message_memory);
}

size_t derived_object_msgs__msg__ObjectArray__rosidl_typesupport_introspection_c__size_function__ObjectArray__objects(
  const void * untyped_member)
{
  const derived_object_msgs__msg__Object__Sequence * member =
    (const derived_object_msgs__msg__Object__Sequence *)(untyped_member);
  return member->size;
}

const void * derived_object_msgs__msg__ObjectArray__rosidl_typesupport_introspection_c__get_const_function__ObjectArray__objects(
  const void * untyped_member, size_t index)
{
  const derived_object_msgs__msg__Object__Sequence * member =
    (const derived_object_msgs__msg__Object__Sequence *)(untyped_member);
  return &member->data[index];
}

void * derived_object_msgs__msg__ObjectArray__rosidl_typesupport_introspection_c__get_function__ObjectArray__objects(
  void * untyped_member, size_t index)
{
  derived_object_msgs__msg__Object__Sequence * member =
    (derived_object_msgs__msg__Object__Sequence *)(untyped_member);
  return &member->data[index];
}

void derived_object_msgs__msg__ObjectArray__rosidl_typesupport_introspection_c__fetch_function__ObjectArray__objects(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const derived_object_msgs__msg__Object * item =
    ((const derived_object_msgs__msg__Object *)
    derived_object_msgs__msg__ObjectArray__rosidl_typesupport_introspection_c__get_const_function__ObjectArray__objects(untyped_member, index));
  derived_object_msgs__msg__Object * value =
    (derived_object_msgs__msg__Object *)(untyped_value);
  *value = *item;
}

void derived_object_msgs__msg__ObjectArray__rosidl_typesupport_introspection_c__assign_function__ObjectArray__objects(
  void * untyped_member, size_t index, const void * untyped_value)
{
  derived_object_msgs__msg__Object * item =
    ((derived_object_msgs__msg__Object *)
    derived_object_msgs__msg__ObjectArray__rosidl_typesupport_introspection_c__get_function__ObjectArray__objects(untyped_member, index));
  const derived_object_msgs__msg__Object * value =
    (const derived_object_msgs__msg__Object *)(untyped_value);
  *item = *value;
}

bool derived_object_msgs__msg__ObjectArray__rosidl_typesupport_introspection_c__resize_function__ObjectArray__objects(
  void * untyped_member, size_t size)
{
  derived_object_msgs__msg__Object__Sequence * member =
    (derived_object_msgs__msg__Object__Sequence *)(untyped_member);
  derived_object_msgs__msg__Object__Sequence__fini(member);
  return derived_object_msgs__msg__Object__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember derived_object_msgs__msg__ObjectArray__rosidl_typesupport_introspection_c__ObjectArray_message_member_array[2] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(derived_object_msgs__msg__ObjectArray, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "objects",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(derived_object_msgs__msg__ObjectArray, objects),  // bytes offset in struct
    NULL,  // default value
    derived_object_msgs__msg__ObjectArray__rosidl_typesupport_introspection_c__size_function__ObjectArray__objects,  // size() function pointer
    derived_object_msgs__msg__ObjectArray__rosidl_typesupport_introspection_c__get_const_function__ObjectArray__objects,  // get_const(index) function pointer
    derived_object_msgs__msg__ObjectArray__rosidl_typesupport_introspection_c__get_function__ObjectArray__objects,  // get(index) function pointer
    derived_object_msgs__msg__ObjectArray__rosidl_typesupport_introspection_c__fetch_function__ObjectArray__objects,  // fetch(index, &value) function pointer
    derived_object_msgs__msg__ObjectArray__rosidl_typesupport_introspection_c__assign_function__ObjectArray__objects,  // assign(index, value) function pointer
    derived_object_msgs__msg__ObjectArray__rosidl_typesupport_introspection_c__resize_function__ObjectArray__objects  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers derived_object_msgs__msg__ObjectArray__rosidl_typesupport_introspection_c__ObjectArray_message_members = {
  "derived_object_msgs__msg",  // message namespace
  "ObjectArray",  // message name
  2,  // number of fields
  sizeof(derived_object_msgs__msg__ObjectArray),
  derived_object_msgs__msg__ObjectArray__rosidl_typesupport_introspection_c__ObjectArray_message_member_array,  // message members
  derived_object_msgs__msg__ObjectArray__rosidl_typesupport_introspection_c__ObjectArray_init_function,  // function to initialize message memory (memory has to be allocated)
  derived_object_msgs__msg__ObjectArray__rosidl_typesupport_introspection_c__ObjectArray_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t derived_object_msgs__msg__ObjectArray__rosidl_typesupport_introspection_c__ObjectArray_message_type_support_handle = {
  0,
  &derived_object_msgs__msg__ObjectArray__rosidl_typesupport_introspection_c__ObjectArray_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_derived_object_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, derived_object_msgs, msg, ObjectArray)() {
  derived_object_msgs__msg__ObjectArray__rosidl_typesupport_introspection_c__ObjectArray_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  derived_object_msgs__msg__ObjectArray__rosidl_typesupport_introspection_c__ObjectArray_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, derived_object_msgs, msg, Object)();
  if (!derived_object_msgs__msg__ObjectArray__rosidl_typesupport_introspection_c__ObjectArray_message_type_support_handle.typesupport_identifier) {
    derived_object_msgs__msg__ObjectArray__rosidl_typesupport_introspection_c__ObjectArray_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &derived_object_msgs__msg__ObjectArray__rosidl_typesupport_introspection_c__ObjectArray_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

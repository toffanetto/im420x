// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ibeo_msgs:msg/MountingPositionF.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ibeo_msgs/msg/detail/mounting_position_f__rosidl_typesupport_introspection_c.h"
#include "ibeo_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ibeo_msgs/msg/detail/mounting_position_f__functions.h"
#include "ibeo_msgs/msg/detail/mounting_position_f__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void ibeo_msgs__msg__MountingPositionF__rosidl_typesupport_introspection_c__MountingPositionF_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ibeo_msgs__msg__MountingPositionF__init(message_memory);
}

void ibeo_msgs__msg__MountingPositionF__rosidl_typesupport_introspection_c__MountingPositionF_fini_function(void * message_memory)
{
  ibeo_msgs__msg__MountingPositionF__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ibeo_msgs__msg__MountingPositionF__rosidl_typesupport_introspection_c__MountingPositionF_message_member_array[6] = {
  {
    "yaw_angle",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ibeo_msgs__msg__MountingPositionF, yaw_angle),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pitch_angle",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ibeo_msgs__msg__MountingPositionF, pitch_angle),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "roll_angle",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ibeo_msgs__msg__MountingPositionF, roll_angle),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "x_position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ibeo_msgs__msg__MountingPositionF, x_position),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "y_position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ibeo_msgs__msg__MountingPositionF, y_position),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "z_position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ibeo_msgs__msg__MountingPositionF, z_position),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ibeo_msgs__msg__MountingPositionF__rosidl_typesupport_introspection_c__MountingPositionF_message_members = {
  "ibeo_msgs__msg",  // message namespace
  "MountingPositionF",  // message name
  6,  // number of fields
  sizeof(ibeo_msgs__msg__MountingPositionF),
  ibeo_msgs__msg__MountingPositionF__rosidl_typesupport_introspection_c__MountingPositionF_message_member_array,  // message members
  ibeo_msgs__msg__MountingPositionF__rosidl_typesupport_introspection_c__MountingPositionF_init_function,  // function to initialize message memory (memory has to be allocated)
  ibeo_msgs__msg__MountingPositionF__rosidl_typesupport_introspection_c__MountingPositionF_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ibeo_msgs__msg__MountingPositionF__rosidl_typesupport_introspection_c__MountingPositionF_message_type_support_handle = {
  0,
  &ibeo_msgs__msg__MountingPositionF__rosidl_typesupport_introspection_c__MountingPositionF_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ibeo_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ibeo_msgs, msg, MountingPositionF)() {
  if (!ibeo_msgs__msg__MountingPositionF__rosidl_typesupport_introspection_c__MountingPositionF_message_type_support_handle.typesupport_identifier) {
    ibeo_msgs__msg__MountingPositionF__rosidl_typesupport_introspection_c__MountingPositionF_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ibeo_msgs__msg__MountingPositionF__rosidl_typesupport_introspection_c__MountingPositionF_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

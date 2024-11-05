// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ibeo_msgs:msg/IbeoDataHeader.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ibeo_msgs/msg/detail/ibeo_data_header__rosidl_typesupport_introspection_c.h"
#include "ibeo_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ibeo_msgs/msg/detail/ibeo_data_header__functions.h"
#include "ibeo_msgs/msg/detail/ibeo_data_header__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ibeo_msgs__msg__IbeoDataHeader__rosidl_typesupport_introspection_c__IbeoDataHeader_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ibeo_msgs__msg__IbeoDataHeader__init(message_memory);
}

void ibeo_msgs__msg__IbeoDataHeader__rosidl_typesupport_introspection_c__IbeoDataHeader_fini_function(void * message_memory)
{
  ibeo_msgs__msg__IbeoDataHeader__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ibeo_msgs__msg__IbeoDataHeader__rosidl_typesupport_introspection_c__IbeoDataHeader_message_member_array[5] = {
  {
    "previous_message_size",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ibeo_msgs__msg__IbeoDataHeader, previous_message_size),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "message_size",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ibeo_msgs__msg__IbeoDataHeader, message_size),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "device_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ibeo_msgs__msg__IbeoDataHeader, device_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "data_type_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ibeo_msgs__msg__IbeoDataHeader, data_type_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ibeo_msgs__msg__IbeoDataHeader, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ibeo_msgs__msg__IbeoDataHeader__rosidl_typesupport_introspection_c__IbeoDataHeader_message_members = {
  "ibeo_msgs__msg",  // message namespace
  "IbeoDataHeader",  // message name
  5,  // number of fields
  sizeof(ibeo_msgs__msg__IbeoDataHeader),
  ibeo_msgs__msg__IbeoDataHeader__rosidl_typesupport_introspection_c__IbeoDataHeader_message_member_array,  // message members
  ibeo_msgs__msg__IbeoDataHeader__rosidl_typesupport_introspection_c__IbeoDataHeader_init_function,  // function to initialize message memory (memory has to be allocated)
  ibeo_msgs__msg__IbeoDataHeader__rosidl_typesupport_introspection_c__IbeoDataHeader_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ibeo_msgs__msg__IbeoDataHeader__rosidl_typesupport_introspection_c__IbeoDataHeader_message_type_support_handle = {
  0,
  &ibeo_msgs__msg__IbeoDataHeader__rosidl_typesupport_introspection_c__IbeoDataHeader_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ibeo_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ibeo_msgs, msg, IbeoDataHeader)() {
  ibeo_msgs__msg__IbeoDataHeader__rosidl_typesupport_introspection_c__IbeoDataHeader_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!ibeo_msgs__msg__IbeoDataHeader__rosidl_typesupport_introspection_c__IbeoDataHeader_message_type_support_handle.typesupport_identifier) {
    ibeo_msgs__msg__IbeoDataHeader__rosidl_typesupport_introspection_c__IbeoDataHeader_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ibeo_msgs__msg__IbeoDataHeader__rosidl_typesupport_introspection_c__IbeoDataHeader_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
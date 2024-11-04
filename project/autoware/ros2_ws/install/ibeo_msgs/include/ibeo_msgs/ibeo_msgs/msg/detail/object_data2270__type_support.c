// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ibeo_msgs:msg/ObjectData2270.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ibeo_msgs/msg/detail/object_data2270__rosidl_typesupport_introspection_c.h"
#include "ibeo_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ibeo_msgs/msg/detail/object_data2270__functions.h"
#include "ibeo_msgs/msg/detail/object_data2270__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `ibeo_header`
#include "ibeo_msgs/msg/ibeo_data_header.h"
// Member `ibeo_header`
#include "ibeo_msgs/msg/detail/ibeo_data_header__rosidl_typesupport_introspection_c.h"
// Member `start_scan_timestamp`
#include "builtin_interfaces/msg/time.h"
// Member `start_scan_timestamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"
// Member `object_list`
#include "ibeo_msgs/msg/object2270.h"
// Member `object_list`
#include "ibeo_msgs/msg/detail/object2270__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ibeo_msgs__msg__ObjectData2270__rosidl_typesupport_introspection_c__ObjectData2270_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ibeo_msgs__msg__ObjectData2270__init(message_memory);
}

void ibeo_msgs__msg__ObjectData2270__rosidl_typesupport_introspection_c__ObjectData2270_fini_function(void * message_memory)
{
  ibeo_msgs__msg__ObjectData2270__fini(message_memory);
}

size_t ibeo_msgs__msg__ObjectData2270__rosidl_typesupport_introspection_c__size_function__ObjectData2270__object_list(
  const void * untyped_member)
{
  const ibeo_msgs__msg__Object2270__Sequence * member =
    (const ibeo_msgs__msg__Object2270__Sequence *)(untyped_member);
  return member->size;
}

const void * ibeo_msgs__msg__ObjectData2270__rosidl_typesupport_introspection_c__get_const_function__ObjectData2270__object_list(
  const void * untyped_member, size_t index)
{
  const ibeo_msgs__msg__Object2270__Sequence * member =
    (const ibeo_msgs__msg__Object2270__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ibeo_msgs__msg__ObjectData2270__rosidl_typesupport_introspection_c__get_function__ObjectData2270__object_list(
  void * untyped_member, size_t index)
{
  ibeo_msgs__msg__Object2270__Sequence * member =
    (ibeo_msgs__msg__Object2270__Sequence *)(untyped_member);
  return &member->data[index];
}

void ibeo_msgs__msg__ObjectData2270__rosidl_typesupport_introspection_c__fetch_function__ObjectData2270__object_list(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const ibeo_msgs__msg__Object2270 * item =
    ((const ibeo_msgs__msg__Object2270 *)
    ibeo_msgs__msg__ObjectData2270__rosidl_typesupport_introspection_c__get_const_function__ObjectData2270__object_list(untyped_member, index));
  ibeo_msgs__msg__Object2270 * value =
    (ibeo_msgs__msg__Object2270 *)(untyped_value);
  *value = *item;
}

void ibeo_msgs__msg__ObjectData2270__rosidl_typesupport_introspection_c__assign_function__ObjectData2270__object_list(
  void * untyped_member, size_t index, const void * untyped_value)
{
  ibeo_msgs__msg__Object2270 * item =
    ((ibeo_msgs__msg__Object2270 *)
    ibeo_msgs__msg__ObjectData2270__rosidl_typesupport_introspection_c__get_function__ObjectData2270__object_list(untyped_member, index));
  const ibeo_msgs__msg__Object2270 * value =
    (const ibeo_msgs__msg__Object2270 *)(untyped_value);
  *item = *value;
}

bool ibeo_msgs__msg__ObjectData2270__rosidl_typesupport_introspection_c__resize_function__ObjectData2270__object_list(
  void * untyped_member, size_t size)
{
  ibeo_msgs__msg__Object2270__Sequence * member =
    (ibeo_msgs__msg__Object2270__Sequence *)(untyped_member);
  ibeo_msgs__msg__Object2270__Sequence__fini(member);
  return ibeo_msgs__msg__Object2270__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember ibeo_msgs__msg__ObjectData2270__rosidl_typesupport_introspection_c__ObjectData2270_message_member_array[6] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ibeo_msgs__msg__ObjectData2270, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ibeo_header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ibeo_msgs__msg__ObjectData2270, ibeo_header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "start_scan_timestamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ibeo_msgs__msg__ObjectData2270, start_scan_timestamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "object_list_number",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ibeo_msgs__msg__ObjectData2270, object_list_number),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "number_of_objects",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ibeo_msgs__msg__ObjectData2270, number_of_objects),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "object_list",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ibeo_msgs__msg__ObjectData2270, object_list),  // bytes offset in struct
    NULL,  // default value
    ibeo_msgs__msg__ObjectData2270__rosidl_typesupport_introspection_c__size_function__ObjectData2270__object_list,  // size() function pointer
    ibeo_msgs__msg__ObjectData2270__rosidl_typesupport_introspection_c__get_const_function__ObjectData2270__object_list,  // get_const(index) function pointer
    ibeo_msgs__msg__ObjectData2270__rosidl_typesupport_introspection_c__get_function__ObjectData2270__object_list,  // get(index) function pointer
    ibeo_msgs__msg__ObjectData2270__rosidl_typesupport_introspection_c__fetch_function__ObjectData2270__object_list,  // fetch(index, &value) function pointer
    ibeo_msgs__msg__ObjectData2270__rosidl_typesupport_introspection_c__assign_function__ObjectData2270__object_list,  // assign(index, value) function pointer
    ibeo_msgs__msg__ObjectData2270__rosidl_typesupport_introspection_c__resize_function__ObjectData2270__object_list  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ibeo_msgs__msg__ObjectData2270__rosidl_typesupport_introspection_c__ObjectData2270_message_members = {
  "ibeo_msgs__msg",  // message namespace
  "ObjectData2270",  // message name
  6,  // number of fields
  sizeof(ibeo_msgs__msg__ObjectData2270),
  ibeo_msgs__msg__ObjectData2270__rosidl_typesupport_introspection_c__ObjectData2270_message_member_array,  // message members
  ibeo_msgs__msg__ObjectData2270__rosidl_typesupport_introspection_c__ObjectData2270_init_function,  // function to initialize message memory (memory has to be allocated)
  ibeo_msgs__msg__ObjectData2270__rosidl_typesupport_introspection_c__ObjectData2270_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ibeo_msgs__msg__ObjectData2270__rosidl_typesupport_introspection_c__ObjectData2270_message_type_support_handle = {
  0,
  &ibeo_msgs__msg__ObjectData2270__rosidl_typesupport_introspection_c__ObjectData2270_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ibeo_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ibeo_msgs, msg, ObjectData2270)() {
  ibeo_msgs__msg__ObjectData2270__rosidl_typesupport_introspection_c__ObjectData2270_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  ibeo_msgs__msg__ObjectData2270__rosidl_typesupport_introspection_c__ObjectData2270_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ibeo_msgs, msg, IbeoDataHeader)();
  ibeo_msgs__msg__ObjectData2270__rosidl_typesupport_introspection_c__ObjectData2270_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  ibeo_msgs__msg__ObjectData2270__rosidl_typesupport_introspection_c__ObjectData2270_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ibeo_msgs, msg, Object2270)();
  if (!ibeo_msgs__msg__ObjectData2270__rosidl_typesupport_introspection_c__ObjectData2270_message_type_support_handle.typesupport_identifier) {
    ibeo_msgs__msg__ObjectData2270__rosidl_typesupport_introspection_c__ObjectData2270_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ibeo_msgs__msg__ObjectData2270__rosidl_typesupport_introspection_c__ObjectData2270_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

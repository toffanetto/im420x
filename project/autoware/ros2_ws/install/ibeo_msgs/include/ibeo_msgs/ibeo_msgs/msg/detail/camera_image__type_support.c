// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ibeo_msgs:msg/CameraImage.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ibeo_msgs/msg/detail/camera_image__rosidl_typesupport_introspection_c.h"
#include "ibeo_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ibeo_msgs/msg/detail/camera_image__functions.h"
#include "ibeo_msgs/msg/detail/camera_image__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `ibeo_header`
#include "ibeo_msgs/msg/ibeo_data_header.h"
// Member `ibeo_header`
#include "ibeo_msgs/msg/detail/ibeo_data_header__rosidl_typesupport_introspection_c.h"
// Member `timestamp`
#include "builtin_interfaces/msg/time.h"
// Member `timestamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"
// Member `mounting_position`
#include "ibeo_msgs/msg/mounting_position_f.h"
// Member `mounting_position`
#include "ibeo_msgs/msg/detail/mounting_position_f__rosidl_typesupport_introspection_c.h"
// Member `image_buffer`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ibeo_msgs__msg__CameraImage__rosidl_typesupport_introspection_c__CameraImage_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ibeo_msgs__msg__CameraImage__init(message_memory);
}

void ibeo_msgs__msg__CameraImage__rosidl_typesupport_introspection_c__CameraImage_fini_function(void * message_memory)
{
  ibeo_msgs__msg__CameraImage__fini(message_memory);
}

size_t ibeo_msgs__msg__CameraImage__rosidl_typesupport_introspection_c__size_function__CameraImage__image_buffer(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return member->size;
}

const void * ibeo_msgs__msg__CameraImage__rosidl_typesupport_introspection_c__get_const_function__CameraImage__image_buffer(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ibeo_msgs__msg__CameraImage__rosidl_typesupport_introspection_c__get_function__CameraImage__image_buffer(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void ibeo_msgs__msg__CameraImage__rosidl_typesupport_introspection_c__fetch_function__CameraImage__image_buffer(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    ibeo_msgs__msg__CameraImage__rosidl_typesupport_introspection_c__get_const_function__CameraImage__image_buffer(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void ibeo_msgs__msg__CameraImage__rosidl_typesupport_introspection_c__assign_function__CameraImage__image_buffer(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    ibeo_msgs__msg__CameraImage__rosidl_typesupport_introspection_c__get_function__CameraImage__image_buffer(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

bool ibeo_msgs__msg__CameraImage__rosidl_typesupport_introspection_c__resize_function__CameraImage__image_buffer(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  rosidl_runtime_c__uint8__Sequence__fini(member);
  return rosidl_runtime_c__uint8__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember ibeo_msgs__msg__CameraImage__rosidl_typesupport_introspection_c__CameraImage_message_member_array[13] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ibeo_msgs__msg__CameraImage, header),  // bytes offset in struct
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
    offsetof(ibeo_msgs__msg__CameraImage, ibeo_header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "image_format",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ibeo_msgs__msg__CameraImage, image_format),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "us_since_power_on",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ibeo_msgs__msg__CameraImage, us_since_power_on),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "timestamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ibeo_msgs__msg__CameraImage, timestamp),  // bytes offset in struct
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
    offsetof(ibeo_msgs__msg__CameraImage, device_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "mounting_position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ibeo_msgs__msg__CameraImage, mounting_position),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "horizontal_opening_angle",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ibeo_msgs__msg__CameraImage, horizontal_opening_angle),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "vertical_opening_angle",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ibeo_msgs__msg__CameraImage, vertical_opening_angle),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "image_width",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ibeo_msgs__msg__CameraImage, image_width),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "image_height",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ibeo_msgs__msg__CameraImage, image_height),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "compressed_size",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ibeo_msgs__msg__CameraImage, compressed_size),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "image_buffer",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ibeo_msgs__msg__CameraImage, image_buffer),  // bytes offset in struct
    NULL,  // default value
    ibeo_msgs__msg__CameraImage__rosidl_typesupport_introspection_c__size_function__CameraImage__image_buffer,  // size() function pointer
    ibeo_msgs__msg__CameraImage__rosidl_typesupport_introspection_c__get_const_function__CameraImage__image_buffer,  // get_const(index) function pointer
    ibeo_msgs__msg__CameraImage__rosidl_typesupport_introspection_c__get_function__CameraImage__image_buffer,  // get(index) function pointer
    ibeo_msgs__msg__CameraImage__rosidl_typesupport_introspection_c__fetch_function__CameraImage__image_buffer,  // fetch(index, &value) function pointer
    ibeo_msgs__msg__CameraImage__rosidl_typesupport_introspection_c__assign_function__CameraImage__image_buffer,  // assign(index, value) function pointer
    ibeo_msgs__msg__CameraImage__rosidl_typesupport_introspection_c__resize_function__CameraImage__image_buffer  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ibeo_msgs__msg__CameraImage__rosidl_typesupport_introspection_c__CameraImage_message_members = {
  "ibeo_msgs__msg",  // message namespace
  "CameraImage",  // message name
  13,  // number of fields
  sizeof(ibeo_msgs__msg__CameraImage),
  ibeo_msgs__msg__CameraImage__rosidl_typesupport_introspection_c__CameraImage_message_member_array,  // message members
  ibeo_msgs__msg__CameraImage__rosidl_typesupport_introspection_c__CameraImage_init_function,  // function to initialize message memory (memory has to be allocated)
  ibeo_msgs__msg__CameraImage__rosidl_typesupport_introspection_c__CameraImage_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ibeo_msgs__msg__CameraImage__rosidl_typesupport_introspection_c__CameraImage_message_type_support_handle = {
  0,
  &ibeo_msgs__msg__CameraImage__rosidl_typesupport_introspection_c__CameraImage_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ibeo_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ibeo_msgs, msg, CameraImage)() {
  ibeo_msgs__msg__CameraImage__rosidl_typesupport_introspection_c__CameraImage_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  ibeo_msgs__msg__CameraImage__rosidl_typesupport_introspection_c__CameraImage_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ibeo_msgs, msg, IbeoDataHeader)();
  ibeo_msgs__msg__CameraImage__rosidl_typesupport_introspection_c__CameraImage_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  ibeo_msgs__msg__CameraImage__rosidl_typesupport_introspection_c__CameraImage_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ibeo_msgs, msg, MountingPositionF)();
  if (!ibeo_msgs__msg__CameraImage__rosidl_typesupport_introspection_c__CameraImage_message_type_support_handle.typesupport_identifier) {
    ibeo_msgs__msg__CameraImage__rosidl_typesupport_introspection_c__CameraImage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ibeo_msgs__msg__CameraImage__rosidl_typesupport_introspection_c__CameraImage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

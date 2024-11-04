// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from delphi_esr_msgs:msg/EsrTrackMotionPowerGroup.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "delphi_esr_msgs/msg/detail/esr_track_motion_power_group__rosidl_typesupport_introspection_c.h"
#include "delphi_esr_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "delphi_esr_msgs/msg/detail/esr_track_motion_power_group__functions.h"
#include "delphi_esr_msgs/msg/detail/esr_track_motion_power_group__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `canmsg`
#include "rosidl_runtime_c/string_functions.h"
// Member `tracks`
#include "delphi_esr_msgs/msg/esr_track_motion_power_track.h"
// Member `tracks`
#include "delphi_esr_msgs/msg/detail/esr_track_motion_power_track__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void delphi_esr_msgs__msg__EsrTrackMotionPowerGroup__rosidl_typesupport_introspection_c__EsrTrackMotionPowerGroup_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  delphi_esr_msgs__msg__EsrTrackMotionPowerGroup__init(message_memory);
}

void delphi_esr_msgs__msg__EsrTrackMotionPowerGroup__rosidl_typesupport_introspection_c__EsrTrackMotionPowerGroup_fini_function(void * message_memory)
{
  delphi_esr_msgs__msg__EsrTrackMotionPowerGroup__fini(message_memory);
}

size_t delphi_esr_msgs__msg__EsrTrackMotionPowerGroup__rosidl_typesupport_introspection_c__size_function__EsrTrackMotionPowerGroup__tracks(
  const void * untyped_member)
{
  const delphi_esr_msgs__msg__EsrTrackMotionPowerTrack__Sequence * member =
    (const delphi_esr_msgs__msg__EsrTrackMotionPowerTrack__Sequence *)(untyped_member);
  return member->size;
}

const void * delphi_esr_msgs__msg__EsrTrackMotionPowerGroup__rosidl_typesupport_introspection_c__get_const_function__EsrTrackMotionPowerGroup__tracks(
  const void * untyped_member, size_t index)
{
  const delphi_esr_msgs__msg__EsrTrackMotionPowerTrack__Sequence * member =
    (const delphi_esr_msgs__msg__EsrTrackMotionPowerTrack__Sequence *)(untyped_member);
  return &member->data[index];
}

void * delphi_esr_msgs__msg__EsrTrackMotionPowerGroup__rosidl_typesupport_introspection_c__get_function__EsrTrackMotionPowerGroup__tracks(
  void * untyped_member, size_t index)
{
  delphi_esr_msgs__msg__EsrTrackMotionPowerTrack__Sequence * member =
    (delphi_esr_msgs__msg__EsrTrackMotionPowerTrack__Sequence *)(untyped_member);
  return &member->data[index];
}

void delphi_esr_msgs__msg__EsrTrackMotionPowerGroup__rosidl_typesupport_introspection_c__fetch_function__EsrTrackMotionPowerGroup__tracks(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const delphi_esr_msgs__msg__EsrTrackMotionPowerTrack * item =
    ((const delphi_esr_msgs__msg__EsrTrackMotionPowerTrack *)
    delphi_esr_msgs__msg__EsrTrackMotionPowerGroup__rosidl_typesupport_introspection_c__get_const_function__EsrTrackMotionPowerGroup__tracks(untyped_member, index));
  delphi_esr_msgs__msg__EsrTrackMotionPowerTrack * value =
    (delphi_esr_msgs__msg__EsrTrackMotionPowerTrack *)(untyped_value);
  *value = *item;
}

void delphi_esr_msgs__msg__EsrTrackMotionPowerGroup__rosidl_typesupport_introspection_c__assign_function__EsrTrackMotionPowerGroup__tracks(
  void * untyped_member, size_t index, const void * untyped_value)
{
  delphi_esr_msgs__msg__EsrTrackMotionPowerTrack * item =
    ((delphi_esr_msgs__msg__EsrTrackMotionPowerTrack *)
    delphi_esr_msgs__msg__EsrTrackMotionPowerGroup__rosidl_typesupport_introspection_c__get_function__EsrTrackMotionPowerGroup__tracks(untyped_member, index));
  const delphi_esr_msgs__msg__EsrTrackMotionPowerTrack * value =
    (const delphi_esr_msgs__msg__EsrTrackMotionPowerTrack *)(untyped_value);
  *item = *value;
}

bool delphi_esr_msgs__msg__EsrTrackMotionPowerGroup__rosidl_typesupport_introspection_c__resize_function__EsrTrackMotionPowerGroup__tracks(
  void * untyped_member, size_t size)
{
  delphi_esr_msgs__msg__EsrTrackMotionPowerTrack__Sequence * member =
    (delphi_esr_msgs__msg__EsrTrackMotionPowerTrack__Sequence *)(untyped_member);
  delphi_esr_msgs__msg__EsrTrackMotionPowerTrack__Sequence__fini(member);
  return delphi_esr_msgs__msg__EsrTrackMotionPowerTrack__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember delphi_esr_msgs__msg__EsrTrackMotionPowerGroup__rosidl_typesupport_introspection_c__EsrTrackMotionPowerGroup_message_member_array[5] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(delphi_esr_msgs__msg__EsrTrackMotionPowerGroup, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "canmsg",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(delphi_esr_msgs__msg__EsrTrackMotionPowerGroup, canmsg),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "rolling_count_2",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(delphi_esr_msgs__msg__EsrTrackMotionPowerGroup, rolling_count_2),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "can_id_group",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(delphi_esr_msgs__msg__EsrTrackMotionPowerGroup, can_id_group),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "tracks",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(delphi_esr_msgs__msg__EsrTrackMotionPowerGroup, tracks),  // bytes offset in struct
    NULL,  // default value
    delphi_esr_msgs__msg__EsrTrackMotionPowerGroup__rosidl_typesupport_introspection_c__size_function__EsrTrackMotionPowerGroup__tracks,  // size() function pointer
    delphi_esr_msgs__msg__EsrTrackMotionPowerGroup__rosidl_typesupport_introspection_c__get_const_function__EsrTrackMotionPowerGroup__tracks,  // get_const(index) function pointer
    delphi_esr_msgs__msg__EsrTrackMotionPowerGroup__rosidl_typesupport_introspection_c__get_function__EsrTrackMotionPowerGroup__tracks,  // get(index) function pointer
    delphi_esr_msgs__msg__EsrTrackMotionPowerGroup__rosidl_typesupport_introspection_c__fetch_function__EsrTrackMotionPowerGroup__tracks,  // fetch(index, &value) function pointer
    delphi_esr_msgs__msg__EsrTrackMotionPowerGroup__rosidl_typesupport_introspection_c__assign_function__EsrTrackMotionPowerGroup__tracks,  // assign(index, value) function pointer
    delphi_esr_msgs__msg__EsrTrackMotionPowerGroup__rosidl_typesupport_introspection_c__resize_function__EsrTrackMotionPowerGroup__tracks  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers delphi_esr_msgs__msg__EsrTrackMotionPowerGroup__rosidl_typesupport_introspection_c__EsrTrackMotionPowerGroup_message_members = {
  "delphi_esr_msgs__msg",  // message namespace
  "EsrTrackMotionPowerGroup",  // message name
  5,  // number of fields
  sizeof(delphi_esr_msgs__msg__EsrTrackMotionPowerGroup),
  delphi_esr_msgs__msg__EsrTrackMotionPowerGroup__rosidl_typesupport_introspection_c__EsrTrackMotionPowerGroup_message_member_array,  // message members
  delphi_esr_msgs__msg__EsrTrackMotionPowerGroup__rosidl_typesupport_introspection_c__EsrTrackMotionPowerGroup_init_function,  // function to initialize message memory (memory has to be allocated)
  delphi_esr_msgs__msg__EsrTrackMotionPowerGroup__rosidl_typesupport_introspection_c__EsrTrackMotionPowerGroup_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t delphi_esr_msgs__msg__EsrTrackMotionPowerGroup__rosidl_typesupport_introspection_c__EsrTrackMotionPowerGroup_message_type_support_handle = {
  0,
  &delphi_esr_msgs__msg__EsrTrackMotionPowerGroup__rosidl_typesupport_introspection_c__EsrTrackMotionPowerGroup_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_delphi_esr_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, delphi_esr_msgs, msg, EsrTrackMotionPowerGroup)() {
  delphi_esr_msgs__msg__EsrTrackMotionPowerGroup__rosidl_typesupport_introspection_c__EsrTrackMotionPowerGroup_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  delphi_esr_msgs__msg__EsrTrackMotionPowerGroup__rosidl_typesupport_introspection_c__EsrTrackMotionPowerGroup_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, delphi_esr_msgs, msg, EsrTrackMotionPowerTrack)();
  if (!delphi_esr_msgs__msg__EsrTrackMotionPowerGroup__rosidl_typesupport_introspection_c__EsrTrackMotionPowerGroup_message_type_support_handle.typesupport_identifier) {
    delphi_esr_msgs__msg__EsrTrackMotionPowerGroup__rosidl_typesupport_introspection_c__EsrTrackMotionPowerGroup_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &delphi_esr_msgs__msg__EsrTrackMotionPowerGroup__rosidl_typesupport_introspection_c__EsrTrackMotionPowerGroup_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

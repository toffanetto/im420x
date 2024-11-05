// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ibeo_msgs:msg/Object2225.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ibeo_msgs/msg/detail/object2225__rosidl_typesupport_introspection_c.h"
#include "ibeo_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ibeo_msgs/msg/detail/object2225__functions.h"
#include "ibeo_msgs/msg/detail/object2225__struct.h"


// Include directives for member types
// Member `timestamp`
#include "builtin_interfaces/msg/time.h"
// Member `timestamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"
// Member `bounding_box_center`
// Member `bounding_box_size`
// Member `object_box_center`
// Member `object_box_center_sigma`
// Member `object_box_size`
// Member `relative_velocity`
// Member `relative_velocity_sigma`
// Member `absolute_velocity`
// Member `absolute_velocity_sigma`
// Member `contour_point_list`
#include "ibeo_msgs/msg/point2_df.h"
// Member `bounding_box_center`
// Member `bounding_box_size`
// Member `object_box_center`
// Member `object_box_center_sigma`
// Member `object_box_size`
// Member `relative_velocity`
// Member `relative_velocity_sigma`
// Member `absolute_velocity`
// Member `absolute_velocity_sigma`
// Member `contour_point_list`
#include "ibeo_msgs/msg/detail/point2_df__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ibeo_msgs__msg__Object2225__rosidl_typesupport_introspection_c__Object2225_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ibeo_msgs__msg__Object2225__init(message_memory);
}

void ibeo_msgs__msg__Object2225__rosidl_typesupport_introspection_c__Object2225_fini_function(void * message_memory)
{
  ibeo_msgs__msg__Object2225__fini(message_memory);
}

size_t ibeo_msgs__msg__Object2225__rosidl_typesupport_introspection_c__size_function__Object2225__contour_point_list(
  const void * untyped_member)
{
  const ibeo_msgs__msg__Point2Df__Sequence * member =
    (const ibeo_msgs__msg__Point2Df__Sequence *)(untyped_member);
  return member->size;
}

const void * ibeo_msgs__msg__Object2225__rosidl_typesupport_introspection_c__get_const_function__Object2225__contour_point_list(
  const void * untyped_member, size_t index)
{
  const ibeo_msgs__msg__Point2Df__Sequence * member =
    (const ibeo_msgs__msg__Point2Df__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ibeo_msgs__msg__Object2225__rosidl_typesupport_introspection_c__get_function__Object2225__contour_point_list(
  void * untyped_member, size_t index)
{
  ibeo_msgs__msg__Point2Df__Sequence * member =
    (ibeo_msgs__msg__Point2Df__Sequence *)(untyped_member);
  return &member->data[index];
}

void ibeo_msgs__msg__Object2225__rosidl_typesupport_introspection_c__fetch_function__Object2225__contour_point_list(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const ibeo_msgs__msg__Point2Df * item =
    ((const ibeo_msgs__msg__Point2Df *)
    ibeo_msgs__msg__Object2225__rosidl_typesupport_introspection_c__get_const_function__Object2225__contour_point_list(untyped_member, index));
  ibeo_msgs__msg__Point2Df * value =
    (ibeo_msgs__msg__Point2Df *)(untyped_value);
  *value = *item;
}

void ibeo_msgs__msg__Object2225__rosidl_typesupport_introspection_c__assign_function__Object2225__contour_point_list(
  void * untyped_member, size_t index, const void * untyped_value)
{
  ibeo_msgs__msg__Point2Df * item =
    ((ibeo_msgs__msg__Point2Df *)
    ibeo_msgs__msg__Object2225__rosidl_typesupport_introspection_c__get_function__Object2225__contour_point_list(untyped_member, index));
  const ibeo_msgs__msg__Point2Df * value =
    (const ibeo_msgs__msg__Point2Df *)(untyped_value);
  *item = *value;
}

bool ibeo_msgs__msg__Object2225__rosidl_typesupport_introspection_c__resize_function__Object2225__contour_point_list(
  void * untyped_member, size_t size)
{
  ibeo_msgs__msg__Point2Df__Sequence * member =
    (ibeo_msgs__msg__Point2Df__Sequence *)(untyped_member);
  ibeo_msgs__msg__Point2Df__Sequence__fini(member);
  return ibeo_msgs__msg__Point2Df__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember ibeo_msgs__msg__Object2225__rosidl_typesupport_introspection_c__Object2225_message_member_array[20] = {
  {
    "id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ibeo_msgs__msg__Object2225, id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "age",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ibeo_msgs__msg__Object2225, age),  // bytes offset in struct
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
    offsetof(ibeo_msgs__msg__Object2225, timestamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "hidden_status_age",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ibeo_msgs__msg__Object2225, hidden_status_age),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "classification",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ibeo_msgs__msg__Object2225, classification),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "classification_certainty",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ibeo_msgs__msg__Object2225, classification_certainty),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "classification_age",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ibeo_msgs__msg__Object2225, classification_age),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "bounding_box_center",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ibeo_msgs__msg__Object2225, bounding_box_center),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "bounding_box_size",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ibeo_msgs__msg__Object2225, bounding_box_size),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "object_box_center",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ibeo_msgs__msg__Object2225, object_box_center),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "object_box_center_sigma",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ibeo_msgs__msg__Object2225, object_box_center_sigma),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "object_box_size",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ibeo_msgs__msg__Object2225, object_box_size),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "yaw_angle",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ibeo_msgs__msg__Object2225, yaw_angle),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "relative_velocity",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ibeo_msgs__msg__Object2225, relative_velocity),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "relative_velocity_sigma",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ibeo_msgs__msg__Object2225, relative_velocity_sigma),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "absolute_velocity",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ibeo_msgs__msg__Object2225, absolute_velocity),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "absolute_velocity_sigma",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ibeo_msgs__msg__Object2225, absolute_velocity_sigma),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "number_of_contour_points",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ibeo_msgs__msg__Object2225, number_of_contour_points),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "closest_point_index",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ibeo_msgs__msg__Object2225, closest_point_index),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "contour_point_list",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ibeo_msgs__msg__Object2225, contour_point_list),  // bytes offset in struct
    NULL,  // default value
    ibeo_msgs__msg__Object2225__rosidl_typesupport_introspection_c__size_function__Object2225__contour_point_list,  // size() function pointer
    ibeo_msgs__msg__Object2225__rosidl_typesupport_introspection_c__get_const_function__Object2225__contour_point_list,  // get_const(index) function pointer
    ibeo_msgs__msg__Object2225__rosidl_typesupport_introspection_c__get_function__Object2225__contour_point_list,  // get(index) function pointer
    ibeo_msgs__msg__Object2225__rosidl_typesupport_introspection_c__fetch_function__Object2225__contour_point_list,  // fetch(index, &value) function pointer
    ibeo_msgs__msg__Object2225__rosidl_typesupport_introspection_c__assign_function__Object2225__contour_point_list,  // assign(index, value) function pointer
    ibeo_msgs__msg__Object2225__rosidl_typesupport_introspection_c__resize_function__Object2225__contour_point_list  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ibeo_msgs__msg__Object2225__rosidl_typesupport_introspection_c__Object2225_message_members = {
  "ibeo_msgs__msg",  // message namespace
  "Object2225",  // message name
  20,  // number of fields
  sizeof(ibeo_msgs__msg__Object2225),
  ibeo_msgs__msg__Object2225__rosidl_typesupport_introspection_c__Object2225_message_member_array,  // message members
  ibeo_msgs__msg__Object2225__rosidl_typesupport_introspection_c__Object2225_init_function,  // function to initialize message memory (memory has to be allocated)
  ibeo_msgs__msg__Object2225__rosidl_typesupport_introspection_c__Object2225_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ibeo_msgs__msg__Object2225__rosidl_typesupport_introspection_c__Object2225_message_type_support_handle = {
  0,
  &ibeo_msgs__msg__Object2225__rosidl_typesupport_introspection_c__Object2225_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ibeo_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ibeo_msgs, msg, Object2225)() {
  ibeo_msgs__msg__Object2225__rosidl_typesupport_introspection_c__Object2225_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  ibeo_msgs__msg__Object2225__rosidl_typesupport_introspection_c__Object2225_message_member_array[7].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ibeo_msgs, msg, Point2Df)();
  ibeo_msgs__msg__Object2225__rosidl_typesupport_introspection_c__Object2225_message_member_array[8].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ibeo_msgs, msg, Point2Df)();
  ibeo_msgs__msg__Object2225__rosidl_typesupport_introspection_c__Object2225_message_member_array[9].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ibeo_msgs, msg, Point2Df)();
  ibeo_msgs__msg__Object2225__rosidl_typesupport_introspection_c__Object2225_message_member_array[10].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ibeo_msgs, msg, Point2Df)();
  ibeo_msgs__msg__Object2225__rosidl_typesupport_introspection_c__Object2225_message_member_array[11].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ibeo_msgs, msg, Point2Df)();
  ibeo_msgs__msg__Object2225__rosidl_typesupport_introspection_c__Object2225_message_member_array[13].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ibeo_msgs, msg, Point2Df)();
  ibeo_msgs__msg__Object2225__rosidl_typesupport_introspection_c__Object2225_message_member_array[14].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ibeo_msgs, msg, Point2Df)();
  ibeo_msgs__msg__Object2225__rosidl_typesupport_introspection_c__Object2225_message_member_array[15].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ibeo_msgs, msg, Point2Df)();
  ibeo_msgs__msg__Object2225__rosidl_typesupport_introspection_c__Object2225_message_member_array[16].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ibeo_msgs, msg, Point2Df)();
  ibeo_msgs__msg__Object2225__rosidl_typesupport_introspection_c__Object2225_message_member_array[19].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ibeo_msgs, msg, Point2Df)();
  if (!ibeo_msgs__msg__Object2225__rosidl_typesupport_introspection_c__Object2225_message_type_support_handle.typesupport_identifier) {
    ibeo_msgs__msg__Object2225__rosidl_typesupport_introspection_c__Object2225_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ibeo_msgs__msg__Object2225__rosidl_typesupport_introspection_c__Object2225_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

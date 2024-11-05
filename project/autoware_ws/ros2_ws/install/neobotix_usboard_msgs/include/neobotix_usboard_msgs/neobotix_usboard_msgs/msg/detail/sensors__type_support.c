// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from neobotix_usboard_msgs:msg/Sensors.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "neobotix_usboard_msgs/msg/detail/sensors__rosidl_typesupport_introspection_c.h"
#include "neobotix_usboard_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "neobotix_usboard_msgs/msg/detail/sensors__functions.h"
#include "neobotix_usboard_msgs/msg/detail/sensors__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `sensors`
#include "neobotix_usboard_msgs/msg/sensor_data.h"
// Member `sensors`
#include "neobotix_usboard_msgs/msg/detail/sensor_data__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void neobotix_usboard_msgs__msg__Sensors__rosidl_typesupport_introspection_c__Sensors_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  neobotix_usboard_msgs__msg__Sensors__init(message_memory);
}

void neobotix_usboard_msgs__msg__Sensors__rosidl_typesupport_introspection_c__Sensors_fini_function(void * message_memory)
{
  neobotix_usboard_msgs__msg__Sensors__fini(message_memory);
}

size_t neobotix_usboard_msgs__msg__Sensors__rosidl_typesupport_introspection_c__size_function__Sensors__sensors(
  const void * untyped_member)
{
  const neobotix_usboard_msgs__msg__SensorData__Sequence * member =
    (const neobotix_usboard_msgs__msg__SensorData__Sequence *)(untyped_member);
  return member->size;
}

const void * neobotix_usboard_msgs__msg__Sensors__rosidl_typesupport_introspection_c__get_const_function__Sensors__sensors(
  const void * untyped_member, size_t index)
{
  const neobotix_usboard_msgs__msg__SensorData__Sequence * member =
    (const neobotix_usboard_msgs__msg__SensorData__Sequence *)(untyped_member);
  return &member->data[index];
}

void * neobotix_usboard_msgs__msg__Sensors__rosidl_typesupport_introspection_c__get_function__Sensors__sensors(
  void * untyped_member, size_t index)
{
  neobotix_usboard_msgs__msg__SensorData__Sequence * member =
    (neobotix_usboard_msgs__msg__SensorData__Sequence *)(untyped_member);
  return &member->data[index];
}

void neobotix_usboard_msgs__msg__Sensors__rosidl_typesupport_introspection_c__fetch_function__Sensors__sensors(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const neobotix_usboard_msgs__msg__SensorData * item =
    ((const neobotix_usboard_msgs__msg__SensorData *)
    neobotix_usboard_msgs__msg__Sensors__rosidl_typesupport_introspection_c__get_const_function__Sensors__sensors(untyped_member, index));
  neobotix_usboard_msgs__msg__SensorData * value =
    (neobotix_usboard_msgs__msg__SensorData *)(untyped_value);
  *value = *item;
}

void neobotix_usboard_msgs__msg__Sensors__rosidl_typesupport_introspection_c__assign_function__Sensors__sensors(
  void * untyped_member, size_t index, const void * untyped_value)
{
  neobotix_usboard_msgs__msg__SensorData * item =
    ((neobotix_usboard_msgs__msg__SensorData *)
    neobotix_usboard_msgs__msg__Sensors__rosidl_typesupport_introspection_c__get_function__Sensors__sensors(untyped_member, index));
  const neobotix_usboard_msgs__msg__SensorData * value =
    (const neobotix_usboard_msgs__msg__SensorData *)(untyped_value);
  *item = *value;
}

bool neobotix_usboard_msgs__msg__Sensors__rosidl_typesupport_introspection_c__resize_function__Sensors__sensors(
  void * untyped_member, size_t size)
{
  neobotix_usboard_msgs__msg__SensorData__Sequence * member =
    (neobotix_usboard_msgs__msg__SensorData__Sequence *)(untyped_member);
  neobotix_usboard_msgs__msg__SensorData__Sequence__fini(member);
  return neobotix_usboard_msgs__msg__SensorData__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember neobotix_usboard_msgs__msg__Sensors__rosidl_typesupport_introspection_c__Sensors_message_member_array[2] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(neobotix_usboard_msgs__msg__Sensors, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "sensors",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(neobotix_usboard_msgs__msg__Sensors, sensors),  // bytes offset in struct
    NULL,  // default value
    neobotix_usboard_msgs__msg__Sensors__rosidl_typesupport_introspection_c__size_function__Sensors__sensors,  // size() function pointer
    neobotix_usboard_msgs__msg__Sensors__rosidl_typesupport_introspection_c__get_const_function__Sensors__sensors,  // get_const(index) function pointer
    neobotix_usboard_msgs__msg__Sensors__rosidl_typesupport_introspection_c__get_function__Sensors__sensors,  // get(index) function pointer
    neobotix_usboard_msgs__msg__Sensors__rosidl_typesupport_introspection_c__fetch_function__Sensors__sensors,  // fetch(index, &value) function pointer
    neobotix_usboard_msgs__msg__Sensors__rosidl_typesupport_introspection_c__assign_function__Sensors__sensors,  // assign(index, value) function pointer
    neobotix_usboard_msgs__msg__Sensors__rosidl_typesupport_introspection_c__resize_function__Sensors__sensors  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers neobotix_usboard_msgs__msg__Sensors__rosidl_typesupport_introspection_c__Sensors_message_members = {
  "neobotix_usboard_msgs__msg",  // message namespace
  "Sensors",  // message name
  2,  // number of fields
  sizeof(neobotix_usboard_msgs__msg__Sensors),
  neobotix_usboard_msgs__msg__Sensors__rosidl_typesupport_introspection_c__Sensors_message_member_array,  // message members
  neobotix_usboard_msgs__msg__Sensors__rosidl_typesupport_introspection_c__Sensors_init_function,  // function to initialize message memory (memory has to be allocated)
  neobotix_usboard_msgs__msg__Sensors__rosidl_typesupport_introspection_c__Sensors_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t neobotix_usboard_msgs__msg__Sensors__rosidl_typesupport_introspection_c__Sensors_message_type_support_handle = {
  0,
  &neobotix_usboard_msgs__msg__Sensors__rosidl_typesupport_introspection_c__Sensors_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_neobotix_usboard_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, neobotix_usboard_msgs, msg, Sensors)() {
  neobotix_usboard_msgs__msg__Sensors__rosidl_typesupport_introspection_c__Sensors_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  neobotix_usboard_msgs__msg__Sensors__rosidl_typesupport_introspection_c__Sensors_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, neobotix_usboard_msgs, msg, SensorData)();
  if (!neobotix_usboard_msgs__msg__Sensors__rosidl_typesupport_introspection_c__Sensors_message_type_support_handle.typesupport_identifier) {
    neobotix_usboard_msgs__msg__Sensors__rosidl_typesupport_introspection_c__Sensors_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &neobotix_usboard_msgs__msg__Sensors__rosidl_typesupport_introspection_c__Sensors_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

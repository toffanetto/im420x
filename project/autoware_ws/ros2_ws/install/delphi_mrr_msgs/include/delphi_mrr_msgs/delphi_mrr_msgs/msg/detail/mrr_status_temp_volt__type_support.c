// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from delphi_mrr_msgs:msg/MrrStatusTempVolt.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "delphi_mrr_msgs/msg/detail/mrr_status_temp_volt__rosidl_typesupport_introspection_c.h"
#include "delphi_mrr_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "delphi_mrr_msgs/msg/detail/mrr_status_temp_volt__functions.h"
#include "delphi_mrr_msgs/msg/detail/mrr_status_temp_volt__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void delphi_mrr_msgs__msg__MrrStatusTempVolt__rosidl_typesupport_introspection_c__MrrStatusTempVolt_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  delphi_mrr_msgs__msg__MrrStatusTempVolt__init(message_memory);
}

void delphi_mrr_msgs__msg__MrrStatusTempVolt__rosidl_typesupport_introspection_c__MrrStatusTempVolt_fini_function(void * message_memory)
{
  delphi_mrr_msgs__msg__MrrStatusTempVolt__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember delphi_mrr_msgs__msg__MrrStatusTempVolt__rosidl_typesupport_introspection_c__MrrStatusTempVolt_message_member_array[9] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(delphi_mrr_msgs__msg__MrrStatusTempVolt, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "can_batt_volts",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(delphi_mrr_msgs__msg__MrrStatusTempVolt, can_batt_volts),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "can_1_25_v",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(delphi_mrr_msgs__msg__MrrStatusTempVolt, can_1_25_v),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "can_5_v",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(delphi_mrr_msgs__msg__MrrStatusTempVolt, can_5_v),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "can_3_3_v_raw",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(delphi_mrr_msgs__msg__MrrStatusTempVolt, can_3_3_v_raw),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "can_3_3_v_dac",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(delphi_mrr_msgs__msg__MrrStatusTempVolt, can_3_3_v_dac),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "can_mmic_temp1",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(delphi_mrr_msgs__msg__MrrStatusTempVolt, can_mmic_temp1),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "can_processor_thermistor",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(delphi_mrr_msgs__msg__MrrStatusTempVolt, can_processor_thermistor),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "can_processor_temp1",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(delphi_mrr_msgs__msg__MrrStatusTempVolt, can_processor_temp1),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers delphi_mrr_msgs__msg__MrrStatusTempVolt__rosidl_typesupport_introspection_c__MrrStatusTempVolt_message_members = {
  "delphi_mrr_msgs__msg",  // message namespace
  "MrrStatusTempVolt",  // message name
  9,  // number of fields
  sizeof(delphi_mrr_msgs__msg__MrrStatusTempVolt),
  delphi_mrr_msgs__msg__MrrStatusTempVolt__rosidl_typesupport_introspection_c__MrrStatusTempVolt_message_member_array,  // message members
  delphi_mrr_msgs__msg__MrrStatusTempVolt__rosidl_typesupport_introspection_c__MrrStatusTempVolt_init_function,  // function to initialize message memory (memory has to be allocated)
  delphi_mrr_msgs__msg__MrrStatusTempVolt__rosidl_typesupport_introspection_c__MrrStatusTempVolt_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t delphi_mrr_msgs__msg__MrrStatusTempVolt__rosidl_typesupport_introspection_c__MrrStatusTempVolt_message_type_support_handle = {
  0,
  &delphi_mrr_msgs__msg__MrrStatusTempVolt__rosidl_typesupport_introspection_c__MrrStatusTempVolt_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_delphi_mrr_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, delphi_mrr_msgs, msg, MrrStatusTempVolt)() {
  delphi_mrr_msgs__msg__MrrStatusTempVolt__rosidl_typesupport_introspection_c__MrrStatusTempVolt_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!delphi_mrr_msgs__msg__MrrStatusTempVolt__rosidl_typesupport_introspection_c__MrrStatusTempVolt_message_type_support_handle.typesupport_identifier) {
    delphi_mrr_msgs__msg__MrrStatusTempVolt__rosidl_typesupport_introspection_c__MrrStatusTempVolt_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &delphi_mrr_msgs__msg__MrrStatusTempVolt__rosidl_typesupport_introspection_c__MrrStatusTempVolt_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

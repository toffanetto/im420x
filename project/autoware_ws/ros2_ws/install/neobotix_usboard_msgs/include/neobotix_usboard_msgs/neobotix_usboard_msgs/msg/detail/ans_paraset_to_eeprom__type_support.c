// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from neobotix_usboard_msgs:msg/AnsParasetToEEPROM.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "neobotix_usboard_msgs/msg/detail/ans_paraset_to_eeprom__rosidl_typesupport_introspection_c.h"
#include "neobotix_usboard_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "neobotix_usboard_msgs/msg/detail/ans_paraset_to_eeprom__functions.h"
#include "neobotix_usboard_msgs/msg/detail/ans_paraset_to_eeprom__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void neobotix_usboard_msgs__msg__AnsParasetToEEPROM__rosidl_typesupport_introspection_c__AnsParasetToEEPROM_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  neobotix_usboard_msgs__msg__AnsParasetToEEPROM__init(message_memory);
}

void neobotix_usboard_msgs__msg__AnsParasetToEEPROM__rosidl_typesupport_introspection_c__AnsParasetToEEPROM_fini_function(void * message_memory)
{
  neobotix_usboard_msgs__msg__AnsParasetToEEPROM__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember neobotix_usboard_msgs__msg__AnsParasetToEEPROM__rosidl_typesupport_introspection_c__AnsParasetToEEPROM_message_member_array[4] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(neobotix_usboard_msgs__msg__AnsParasetToEEPROM, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "command",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(neobotix_usboard_msgs__msg__AnsParasetToEEPROM, command),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "paraset_cksum_low_byte",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(neobotix_usboard_msgs__msg__AnsParasetToEEPROM, paraset_cksum_low_byte),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "paraset_cksum_high_byte",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(neobotix_usboard_msgs__msg__AnsParasetToEEPROM, paraset_cksum_high_byte),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers neobotix_usboard_msgs__msg__AnsParasetToEEPROM__rosidl_typesupport_introspection_c__AnsParasetToEEPROM_message_members = {
  "neobotix_usboard_msgs__msg",  // message namespace
  "AnsParasetToEEPROM",  // message name
  4,  // number of fields
  sizeof(neobotix_usboard_msgs__msg__AnsParasetToEEPROM),
  neobotix_usboard_msgs__msg__AnsParasetToEEPROM__rosidl_typesupport_introspection_c__AnsParasetToEEPROM_message_member_array,  // message members
  neobotix_usboard_msgs__msg__AnsParasetToEEPROM__rosidl_typesupport_introspection_c__AnsParasetToEEPROM_init_function,  // function to initialize message memory (memory has to be allocated)
  neobotix_usboard_msgs__msg__AnsParasetToEEPROM__rosidl_typesupport_introspection_c__AnsParasetToEEPROM_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t neobotix_usboard_msgs__msg__AnsParasetToEEPROM__rosidl_typesupport_introspection_c__AnsParasetToEEPROM_message_type_support_handle = {
  0,
  &neobotix_usboard_msgs__msg__AnsParasetToEEPROM__rosidl_typesupport_introspection_c__AnsParasetToEEPROM_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_neobotix_usboard_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, neobotix_usboard_msgs, msg, AnsParasetToEEPROM)() {
  neobotix_usboard_msgs__msg__AnsParasetToEEPROM__rosidl_typesupport_introspection_c__AnsParasetToEEPROM_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!neobotix_usboard_msgs__msg__AnsParasetToEEPROM__rosidl_typesupport_introspection_c__AnsParasetToEEPROM_message_type_support_handle.typesupport_identifier) {
    neobotix_usboard_msgs__msg__AnsParasetToEEPROM__rosidl_typesupport_introspection_c__AnsParasetToEEPROM_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &neobotix_usboard_msgs__msg__AnsParasetToEEPROM__rosidl_typesupport_introspection_c__AnsParasetToEEPROM_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

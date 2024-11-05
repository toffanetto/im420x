// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from autoware_auto_control_msgs:msg/AckermannLateralCommand.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "autoware_auto_control_msgs/msg/detail/ackermann_lateral_command__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace autoware_auto_control_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void AckermannLateralCommand_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) autoware_auto_control_msgs::msg::AckermannLateralCommand(_init);
}

void AckermannLateralCommand_fini_function(void * message_memory)
{
  auto typed_message = static_cast<autoware_auto_control_msgs::msg::AckermannLateralCommand *>(message_memory);
  typed_message->~AckermannLateralCommand();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember AckermannLateralCommand_message_member_array[3] = {
  {
    "stamp",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<builtin_interfaces::msg::Time>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_auto_control_msgs::msg::AckermannLateralCommand, stamp),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "steering_tire_angle",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_auto_control_msgs::msg::AckermannLateralCommand, steering_tire_angle),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "steering_tire_rotation_rate",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_auto_control_msgs::msg::AckermannLateralCommand, steering_tire_rotation_rate),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers AckermannLateralCommand_message_members = {
  "autoware_auto_control_msgs::msg",  // message namespace
  "AckermannLateralCommand",  // message name
  3,  // number of fields
  sizeof(autoware_auto_control_msgs::msg::AckermannLateralCommand),
  AckermannLateralCommand_message_member_array,  // message members
  AckermannLateralCommand_init_function,  // function to initialize message memory (memory has to be allocated)
  AckermannLateralCommand_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t AckermannLateralCommand_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &AckermannLateralCommand_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace autoware_auto_control_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<autoware_auto_control_msgs::msg::AckermannLateralCommand>()
{
  return &::autoware_auto_control_msgs::msg::rosidl_typesupport_introspection_cpp::AckermannLateralCommand_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, autoware_auto_control_msgs, msg, AckermannLateralCommand)() {
  return &::autoware_auto_control_msgs::msg::rosidl_typesupport_introspection_cpp::AckermannLateralCommand_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

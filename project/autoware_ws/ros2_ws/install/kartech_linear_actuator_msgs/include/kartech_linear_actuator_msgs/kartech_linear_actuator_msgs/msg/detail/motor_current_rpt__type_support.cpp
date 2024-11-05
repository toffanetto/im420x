// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from kartech_linear_actuator_msgs:msg/MotorCurrentRpt.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "kartech_linear_actuator_msgs/msg/detail/motor_current_rpt__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace kartech_linear_actuator_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void MotorCurrentRpt_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) kartech_linear_actuator_msgs::msg::MotorCurrentRpt(_init);
}

void MotorCurrentRpt_fini_function(void * message_memory)
{
  auto typed_message = static_cast<kartech_linear_actuator_msgs::msg::MotorCurrentRpt *>(message_memory);
  typed_message->~MotorCurrentRpt();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember MotorCurrentRpt_message_member_array[2] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(kartech_linear_actuator_msgs::msg::MotorCurrentRpt, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "motor_current",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(kartech_linear_actuator_msgs::msg::MotorCurrentRpt, motor_current),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers MotorCurrentRpt_message_members = {
  "kartech_linear_actuator_msgs::msg",  // message namespace
  "MotorCurrentRpt",  // message name
  2,  // number of fields
  sizeof(kartech_linear_actuator_msgs::msg::MotorCurrentRpt),
  MotorCurrentRpt_message_member_array,  // message members
  MotorCurrentRpt_init_function,  // function to initialize message memory (memory has to be allocated)
  MotorCurrentRpt_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t MotorCurrentRpt_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &MotorCurrentRpt_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace kartech_linear_actuator_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<kartech_linear_actuator_msgs::msg::MotorCurrentRpt>()
{
  return &::kartech_linear_actuator_msgs::msg::rosidl_typesupport_introspection_cpp::MotorCurrentRpt_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, kartech_linear_actuator_msgs, msg, MotorCurrentRpt)() {
  return &::kartech_linear_actuator_msgs::msg::rosidl_typesupport_introspection_cpp::MotorCurrentRpt_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from kartech_linear_actuator_msgs:msg/ReassignReportIdCmd.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "kartech_linear_actuator_msgs/msg/detail/reassign_report_id_cmd__struct.hpp"
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

void ReassignReportIdCmd_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) kartech_linear_actuator_msgs::msg::ReassignReportIdCmd(_init);
}

void ReassignReportIdCmd_fini_function(void * message_memory)
{
  auto typed_message = static_cast<kartech_linear_actuator_msgs::msg::ReassignReportIdCmd *>(message_memory);
  typed_message->~ReassignReportIdCmd();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ReassignReportIdCmd_message_member_array[4] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(kartech_linear_actuator_msgs::msg::ReassignReportIdCmd, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "confirm",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(kartech_linear_actuator_msgs::msg::ReassignReportIdCmd, confirm),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "user_report_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(kartech_linear_actuator_msgs::msg::ReassignReportIdCmd, user_report_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "use_user_report_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(kartech_linear_actuator_msgs::msg::ReassignReportIdCmd, use_user_report_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ReassignReportIdCmd_message_members = {
  "kartech_linear_actuator_msgs::msg",  // message namespace
  "ReassignReportIdCmd",  // message name
  4,  // number of fields
  sizeof(kartech_linear_actuator_msgs::msg::ReassignReportIdCmd),
  ReassignReportIdCmd_message_member_array,  // message members
  ReassignReportIdCmd_init_function,  // function to initialize message memory (memory has to be allocated)
  ReassignReportIdCmd_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ReassignReportIdCmd_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ReassignReportIdCmd_message_members,
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
get_message_type_support_handle<kartech_linear_actuator_msgs::msg::ReassignReportIdCmd>()
{
  return &::kartech_linear_actuator_msgs::msg::rosidl_typesupport_introspection_cpp::ReassignReportIdCmd_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, kartech_linear_actuator_msgs, msg, ReassignReportIdCmd)() {
  return &::kartech_linear_actuator_msgs::msg::rosidl_typesupport_introspection_cpp::ReassignReportIdCmd_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from derived_object_msgs:msg/SolidPrimitiveWithCovariance.idl
// generated code does not contain a copyright notice

#ifndef DERIVED_OBJECT_MSGS__MSG__DETAIL__SOLID_PRIMITIVE_WITH_COVARIANCE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define DERIVED_OBJECT_MSGS__MSG__DETAIL__SOLID_PRIMITIVE_WITH_COVARIANCE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "derived_object_msgs/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "derived_object_msgs/msg/detail/solid_primitive_with_covariance__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace derived_object_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_derived_object_msgs
cdr_serialize(
  const derived_object_msgs::msg::SolidPrimitiveWithCovariance & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_derived_object_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  derived_object_msgs::msg::SolidPrimitiveWithCovariance & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_derived_object_msgs
get_serialized_size(
  const derived_object_msgs::msg::SolidPrimitiveWithCovariance & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_derived_object_msgs
max_serialized_size_SolidPrimitiveWithCovariance(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace derived_object_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_derived_object_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, derived_object_msgs, msg, SolidPrimitiveWithCovariance)();

#ifdef __cplusplus
}
#endif

#endif  // DERIVED_OBJECT_MSGS__MSG__DETAIL__SOLID_PRIMITIVE_WITH_COVARIANCE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from delphi_srr_msgs:msg/SrrTrack.idl
// generated code does not contain a copyright notice

#ifndef DELPHI_SRR_MSGS__MSG__DETAIL__SRR_TRACK__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define DELPHI_SRR_MSGS__MSG__DETAIL__SRR_TRACK__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "delphi_srr_msgs/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "delphi_srr_msgs/msg/detail/srr_track__struct.hpp"

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

namespace delphi_srr_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_delphi_srr_msgs
cdr_serialize(
  const delphi_srr_msgs::msg::SrrTrack & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_delphi_srr_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  delphi_srr_msgs::msg::SrrTrack & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_delphi_srr_msgs
get_serialized_size(
  const delphi_srr_msgs::msg::SrrTrack & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_delphi_srr_msgs
max_serialized_size_SrrTrack(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace delphi_srr_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_delphi_srr_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, delphi_srr_msgs, msg, SrrTrack)();

#ifdef __cplusplus
}
#endif

#endif  // DELPHI_SRR_MSGS__MSG__DETAIL__SRR_TRACK__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

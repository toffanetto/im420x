// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from ibeo_msgs:msg/UntrackedProperties.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "ibeo_msgs/msg/detail/untracked_properties__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace ibeo_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void UntrackedProperties_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) ibeo_msgs::msg::UntrackedProperties(_init);
}

void UntrackedProperties_fini_function(void * message_memory)
{
  auto typed_message = static_cast<ibeo_msgs::msg::UntrackedProperties *>(message_memory);
  typed_message->~UntrackedProperties();
}

size_t size_function__UntrackedProperties__contour_point_list(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<ibeo_msgs::msg::ContourPointSigma> *>(untyped_member);
  return member->size();
}

const void * get_const_function__UntrackedProperties__contour_point_list(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<ibeo_msgs::msg::ContourPointSigma> *>(untyped_member);
  return &member[index];
}

void * get_function__UntrackedProperties__contour_point_list(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<ibeo_msgs::msg::ContourPointSigma> *>(untyped_member);
  return &member[index];
}

void fetch_function__UntrackedProperties__contour_point_list(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const ibeo_msgs::msg::ContourPointSigma *>(
    get_const_function__UntrackedProperties__contour_point_list(untyped_member, index));
  auto & value = *reinterpret_cast<ibeo_msgs::msg::ContourPointSigma *>(untyped_value);
  value = item;
}

void assign_function__UntrackedProperties__contour_point_list(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<ibeo_msgs::msg::ContourPointSigma *>(
    get_function__UntrackedProperties__contour_point_list(untyped_member, index));
  const auto & value = *reinterpret_cast<const ibeo_msgs::msg::ContourPointSigma *>(untyped_value);
  item = value;
}

void resize_function__UntrackedProperties__contour_point_list(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<ibeo_msgs::msg::ContourPointSigma> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember UntrackedProperties_message_member_array[10] = {
  {
    "relative_time_of_measurement",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ibeo_msgs::msg::UntrackedProperties, relative_time_of_measurement),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "position_closest_point",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<ibeo_msgs::msg::Point2Di>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ibeo_msgs::msg::UntrackedProperties, position_closest_point),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "object_box_size",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<ibeo_msgs::msg::Point2Di>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ibeo_msgs::msg::UntrackedProperties, object_box_size),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "object_box_size_sigma",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<ibeo_msgs::msg::Point2Dui>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ibeo_msgs::msg::UntrackedProperties, object_box_size_sigma),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "object_box_orientation",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ibeo_msgs::msg::UntrackedProperties, object_box_orientation),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "object_box_orientation_sigma",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ibeo_msgs::msg::UntrackedProperties, object_box_orientation_sigma),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "tracking_point_coordinate",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<ibeo_msgs::msg::Point2Di>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ibeo_msgs::msg::UntrackedProperties, tracking_point_coordinate),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "tracking_point_coordinate_sigma",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<ibeo_msgs::msg::Point2Dui>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ibeo_msgs::msg::UntrackedProperties, tracking_point_coordinate_sigma),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "number_of_contour_points",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ibeo_msgs::msg::UntrackedProperties, number_of_contour_points),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "contour_point_list",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<ibeo_msgs::msg::ContourPointSigma>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ibeo_msgs::msg::UntrackedProperties, contour_point_list),  // bytes offset in struct
    nullptr,  // default value
    size_function__UntrackedProperties__contour_point_list,  // size() function pointer
    get_const_function__UntrackedProperties__contour_point_list,  // get_const(index) function pointer
    get_function__UntrackedProperties__contour_point_list,  // get(index) function pointer
    fetch_function__UntrackedProperties__contour_point_list,  // fetch(index, &value) function pointer
    assign_function__UntrackedProperties__contour_point_list,  // assign(index, value) function pointer
    resize_function__UntrackedProperties__contour_point_list  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers UntrackedProperties_message_members = {
  "ibeo_msgs::msg",  // message namespace
  "UntrackedProperties",  // message name
  10,  // number of fields
  sizeof(ibeo_msgs::msg::UntrackedProperties),
  UntrackedProperties_message_member_array,  // message members
  UntrackedProperties_init_function,  // function to initialize message memory (memory has to be allocated)
  UntrackedProperties_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t UntrackedProperties_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &UntrackedProperties_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace ibeo_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ibeo_msgs::msg::UntrackedProperties>()
{
  return &::ibeo_msgs::msg::rosidl_typesupport_introspection_cpp::UntrackedProperties_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ibeo_msgs, msg, UntrackedProperties)() {
  return &::ibeo_msgs::msg::rosidl_typesupport_introspection_cpp::UntrackedProperties_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

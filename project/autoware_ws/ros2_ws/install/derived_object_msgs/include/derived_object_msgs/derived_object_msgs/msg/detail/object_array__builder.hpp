// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from derived_object_msgs:msg/ObjectArray.idl
// generated code does not contain a copyright notice

#ifndef DERIVED_OBJECT_MSGS__MSG__DETAIL__OBJECT_ARRAY__BUILDER_HPP_
#define DERIVED_OBJECT_MSGS__MSG__DETAIL__OBJECT_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "derived_object_msgs/msg/detail/object_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace derived_object_msgs
{

namespace msg
{

namespace builder
{

class Init_ObjectArray_objects
{
public:
  explicit Init_ObjectArray_objects(::derived_object_msgs::msg::ObjectArray & msg)
  : msg_(msg)
  {}
  ::derived_object_msgs::msg::ObjectArray objects(::derived_object_msgs::msg::ObjectArray::_objects_type arg)
  {
    msg_.objects = std::move(arg);
    return std::move(msg_);
  }

private:
  ::derived_object_msgs::msg::ObjectArray msg_;
};

class Init_ObjectArray_header
{
public:
  Init_ObjectArray_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ObjectArray_objects header(::derived_object_msgs::msg::ObjectArray::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ObjectArray_objects(msg_);
  }

private:
  ::derived_object_msgs::msg::ObjectArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::derived_object_msgs::msg::ObjectArray>()
{
  return derived_object_msgs::msg::builder::Init_ObjectArray_header();
}

}  // namespace derived_object_msgs

#endif  // DERIVED_OBJECT_MSGS__MSG__DETAIL__OBJECT_ARRAY__BUILDER_HPP_

// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ibeo_msgs:msg/ObjectData2225.idl
// generated code does not contain a copyright notice

#ifndef IBEO_MSGS__MSG__DETAIL__OBJECT_DATA2225__BUILDER_HPP_
#define IBEO_MSGS__MSG__DETAIL__OBJECT_DATA2225__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ibeo_msgs/msg/detail/object_data2225__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ibeo_msgs
{

namespace msg
{

namespace builder
{

class Init_ObjectData2225_object_list
{
public:
  explicit Init_ObjectData2225_object_list(::ibeo_msgs::msg::ObjectData2225 & msg)
  : msg_(msg)
  {}
  ::ibeo_msgs::msg::ObjectData2225 object_list(::ibeo_msgs::msg::ObjectData2225::_object_list_type arg)
  {
    msg_.object_list = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ibeo_msgs::msg::ObjectData2225 msg_;
};

class Init_ObjectData2225_number_of_objects
{
public:
  explicit Init_ObjectData2225_number_of_objects(::ibeo_msgs::msg::ObjectData2225 & msg)
  : msg_(msg)
  {}
  Init_ObjectData2225_object_list number_of_objects(::ibeo_msgs::msg::ObjectData2225::_number_of_objects_type arg)
  {
    msg_.number_of_objects = std::move(arg);
    return Init_ObjectData2225_object_list(msg_);
  }

private:
  ::ibeo_msgs::msg::ObjectData2225 msg_;
};

class Init_ObjectData2225_mid_scan_timestamp
{
public:
  explicit Init_ObjectData2225_mid_scan_timestamp(::ibeo_msgs::msg::ObjectData2225 & msg)
  : msg_(msg)
  {}
  Init_ObjectData2225_number_of_objects mid_scan_timestamp(::ibeo_msgs::msg::ObjectData2225::_mid_scan_timestamp_type arg)
  {
    msg_.mid_scan_timestamp = std::move(arg);
    return Init_ObjectData2225_number_of_objects(msg_);
  }

private:
  ::ibeo_msgs::msg::ObjectData2225 msg_;
};

class Init_ObjectData2225_ibeo_header
{
public:
  explicit Init_ObjectData2225_ibeo_header(::ibeo_msgs::msg::ObjectData2225 & msg)
  : msg_(msg)
  {}
  Init_ObjectData2225_mid_scan_timestamp ibeo_header(::ibeo_msgs::msg::ObjectData2225::_ibeo_header_type arg)
  {
    msg_.ibeo_header = std::move(arg);
    return Init_ObjectData2225_mid_scan_timestamp(msg_);
  }

private:
  ::ibeo_msgs::msg::ObjectData2225 msg_;
};

class Init_ObjectData2225_header
{
public:
  Init_ObjectData2225_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ObjectData2225_ibeo_header header(::ibeo_msgs::msg::ObjectData2225::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ObjectData2225_ibeo_header(msg_);
  }

private:
  ::ibeo_msgs::msg::ObjectData2225 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ibeo_msgs::msg::ObjectData2225>()
{
  return ibeo_msgs::msg::builder::Init_ObjectData2225_header();
}

}  // namespace ibeo_msgs

#endif  // IBEO_MSGS__MSG__DETAIL__OBJECT_DATA2225__BUILDER_HPP_

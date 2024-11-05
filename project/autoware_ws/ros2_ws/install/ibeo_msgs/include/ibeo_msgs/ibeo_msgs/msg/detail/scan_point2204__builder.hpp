// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ibeo_msgs:msg/ScanPoint2204.idl
// generated code does not contain a copyright notice

#ifndef IBEO_MSGS__MSG__DETAIL__SCAN_POINT2204__BUILDER_HPP_
#define IBEO_MSGS__MSG__DETAIL__SCAN_POINT2204__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ibeo_msgs/msg/detail/scan_point2204__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ibeo_msgs
{

namespace msg
{

namespace builder
{

class Init_ScanPoint2204_precipitation
{
public:
  explicit Init_ScanPoint2204_precipitation(::ibeo_msgs::msg::ScanPoint2204 & msg)
  : msg_(msg)
  {}
  ::ibeo_msgs::msg::ScanPoint2204 precipitation(::ibeo_msgs::msg::ScanPoint2204::_precipitation_type arg)
  {
    msg_.precipitation = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ibeo_msgs::msg::ScanPoint2204 msg_;
};

class Init_ScanPoint2204_dirt
{
public:
  explicit Init_ScanPoint2204_dirt(::ibeo_msgs::msg::ScanPoint2204 & msg)
  : msg_(msg)
  {}
  Init_ScanPoint2204_precipitation dirt(::ibeo_msgs::msg::ScanPoint2204::_dirt_type arg)
  {
    msg_.dirt = std::move(arg);
    return Init_ScanPoint2204_precipitation(msg_);
  }

private:
  ::ibeo_msgs::msg::ScanPoint2204 msg_;
};

class Init_ScanPoint2204_ground
{
public:
  explicit Init_ScanPoint2204_ground(::ibeo_msgs::msg::ScanPoint2204 & msg)
  : msg_(msg)
  {}
  Init_ScanPoint2204_dirt ground(::ibeo_msgs::msg::ScanPoint2204::_ground_type arg)
  {
    msg_.ground = std::move(arg);
    return Init_ScanPoint2204_dirt(msg_);
  }

private:
  ::ibeo_msgs::msg::ScanPoint2204 msg_;
};

class Init_ScanPoint2204_time_offset
{
public:
  explicit Init_ScanPoint2204_time_offset(::ibeo_msgs::msg::ScanPoint2204 & msg)
  : msg_(msg)
  {}
  Init_ScanPoint2204_ground time_offset(::ibeo_msgs::msg::ScanPoint2204::_time_offset_type arg)
  {
    msg_.time_offset = std::move(arg);
    return Init_ScanPoint2204_ground(msg_);
  }

private:
  ::ibeo_msgs::msg::ScanPoint2204 msg_;
};

class Init_ScanPoint2204_echo
{
public:
  explicit Init_ScanPoint2204_echo(::ibeo_msgs::msg::ScanPoint2204 & msg)
  : msg_(msg)
  {}
  Init_ScanPoint2204_time_offset echo(::ibeo_msgs::msg::ScanPoint2204::_echo_type arg)
  {
    msg_.echo = std::move(arg);
    return Init_ScanPoint2204_time_offset(msg_);
  }

private:
  ::ibeo_msgs::msg::ScanPoint2204 msg_;
};

class Init_ScanPoint2204_layer
{
public:
  explicit Init_ScanPoint2204_layer(::ibeo_msgs::msg::ScanPoint2204 & msg)
  : msg_(msg)
  {}
  Init_ScanPoint2204_echo layer(::ibeo_msgs::msg::ScanPoint2204::_layer_type arg)
  {
    msg_.layer = std::move(arg);
    return Init_ScanPoint2204_echo(msg_);
  }

private:
  ::ibeo_msgs::msg::ScanPoint2204 msg_;
};

class Init_ScanPoint2204_device_id
{
public:
  explicit Init_ScanPoint2204_device_id(::ibeo_msgs::msg::ScanPoint2204 & msg)
  : msg_(msg)
  {}
  Init_ScanPoint2204_layer device_id(::ibeo_msgs::msg::ScanPoint2204::_device_id_type arg)
  {
    msg_.device_id = std::move(arg);
    return Init_ScanPoint2204_layer(msg_);
  }

private:
  ::ibeo_msgs::msg::ScanPoint2204 msg_;
};

class Init_ScanPoint2204_echo_width
{
public:
  explicit Init_ScanPoint2204_echo_width(::ibeo_msgs::msg::ScanPoint2204 & msg)
  : msg_(msg)
  {}
  Init_ScanPoint2204_device_id echo_width(::ibeo_msgs::msg::ScanPoint2204::_echo_width_type arg)
  {
    msg_.echo_width = std::move(arg);
    return Init_ScanPoint2204_device_id(msg_);
  }

private:
  ::ibeo_msgs::msg::ScanPoint2204 msg_;
};

class Init_ScanPoint2204_z_position
{
public:
  explicit Init_ScanPoint2204_z_position(::ibeo_msgs::msg::ScanPoint2204 & msg)
  : msg_(msg)
  {}
  Init_ScanPoint2204_echo_width z_position(::ibeo_msgs::msg::ScanPoint2204::_z_position_type arg)
  {
    msg_.z_position = std::move(arg);
    return Init_ScanPoint2204_echo_width(msg_);
  }

private:
  ::ibeo_msgs::msg::ScanPoint2204 msg_;
};

class Init_ScanPoint2204_y_position
{
public:
  explicit Init_ScanPoint2204_y_position(::ibeo_msgs::msg::ScanPoint2204 & msg)
  : msg_(msg)
  {}
  Init_ScanPoint2204_z_position y_position(::ibeo_msgs::msg::ScanPoint2204::_y_position_type arg)
  {
    msg_.y_position = std::move(arg);
    return Init_ScanPoint2204_z_position(msg_);
  }

private:
  ::ibeo_msgs::msg::ScanPoint2204 msg_;
};

class Init_ScanPoint2204_x_position
{
public:
  Init_ScanPoint2204_x_position()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ScanPoint2204_y_position x_position(::ibeo_msgs::msg::ScanPoint2204::_x_position_type arg)
  {
    msg_.x_position = std::move(arg);
    return Init_ScanPoint2204_y_position(msg_);
  }

private:
  ::ibeo_msgs::msg::ScanPoint2204 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ibeo_msgs::msg::ScanPoint2204>()
{
  return ibeo_msgs::msg::builder::Init_ScanPoint2204_x_position();
}

}  // namespace ibeo_msgs

#endif  // IBEO_MSGS__MSG__DETAIL__SCAN_POINT2204__BUILDER_HPP_
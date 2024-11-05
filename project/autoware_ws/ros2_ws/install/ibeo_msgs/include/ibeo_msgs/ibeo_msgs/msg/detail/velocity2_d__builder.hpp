// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ibeo_msgs:msg/Velocity2D.idl
// generated code does not contain a copyright notice

#ifndef IBEO_MSGS__MSG__DETAIL__VELOCITY2_D__BUILDER_HPP_
#define IBEO_MSGS__MSG__DETAIL__VELOCITY2_D__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ibeo_msgs/msg/detail/velocity2_d__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ibeo_msgs
{

namespace msg
{

namespace builder
{

class Init_Velocity2D_velocity_y
{
public:
  explicit Init_Velocity2D_velocity_y(::ibeo_msgs::msg::Velocity2D & msg)
  : msg_(msg)
  {}
  ::ibeo_msgs::msg::Velocity2D velocity_y(::ibeo_msgs::msg::Velocity2D::_velocity_y_type arg)
  {
    msg_.velocity_y = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ibeo_msgs::msg::Velocity2D msg_;
};

class Init_Velocity2D_velocity_x
{
public:
  Init_Velocity2D_velocity_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Velocity2D_velocity_y velocity_x(::ibeo_msgs::msg::Velocity2D::_velocity_x_type arg)
  {
    msg_.velocity_x = std::move(arg);
    return Init_Velocity2D_velocity_y(msg_);
  }

private:
  ::ibeo_msgs::msg::Velocity2D msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ibeo_msgs::msg::Velocity2D>()
{
  return ibeo_msgs::msg::builder::Init_Velocity2D_velocity_x();
}

}  // namespace ibeo_msgs

#endif  // IBEO_MSGS__MSG__DETAIL__VELOCITY2_D__BUILDER_HPP_

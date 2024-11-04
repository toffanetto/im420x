// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autoware_perception_msgs:msg/TrafficLight.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_LIGHT__BUILDER_HPP_
#define AUTOWARE_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_LIGHT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "autoware_perception_msgs/msg/detail/traffic_light__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace autoware_perception_msgs
{

namespace msg
{

namespace builder
{

class Init_TrafficLight_elements
{
public:
  explicit Init_TrafficLight_elements(::autoware_perception_msgs::msg::TrafficLight & msg)
  : msg_(msg)
  {}
  ::autoware_perception_msgs::msg::TrafficLight elements(::autoware_perception_msgs::msg::TrafficLight::_elements_type arg)
  {
    msg_.elements = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autoware_perception_msgs::msg::TrafficLight msg_;
};

class Init_TrafficLight_traffic_light_id
{
public:
  Init_TrafficLight_traffic_light_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TrafficLight_elements traffic_light_id(::autoware_perception_msgs::msg::TrafficLight::_traffic_light_id_type arg)
  {
    msg_.traffic_light_id = std::move(arg);
    return Init_TrafficLight_elements(msg_);
  }

private:
  ::autoware_perception_msgs::msg::TrafficLight msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::autoware_perception_msgs::msg::TrafficLight>()
{
  return autoware_perception_msgs::msg::builder::Init_TrafficLight_traffic_light_id();
}

}  // namespace autoware_perception_msgs

#endif  // AUTOWARE_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_LIGHT__BUILDER_HPP_

// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autoware_perception_msgs:msg/TrafficLightArray.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_LIGHT_ARRAY__BUILDER_HPP_
#define AUTOWARE_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_LIGHT_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "autoware_perception_msgs/msg/detail/traffic_light_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace autoware_perception_msgs
{

namespace msg
{

namespace builder
{

class Init_TrafficLightArray_lights
{
public:
  explicit Init_TrafficLightArray_lights(::autoware_perception_msgs::msg::TrafficLightArray & msg)
  : msg_(msg)
  {}
  ::autoware_perception_msgs::msg::TrafficLightArray lights(::autoware_perception_msgs::msg::TrafficLightArray::_lights_type arg)
  {
    msg_.lights = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autoware_perception_msgs::msg::TrafficLightArray msg_;
};

class Init_TrafficLightArray_stamp
{
public:
  Init_TrafficLightArray_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TrafficLightArray_lights stamp(::autoware_perception_msgs::msg::TrafficLightArray::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_TrafficLightArray_lights(msg_);
  }

private:
  ::autoware_perception_msgs::msg::TrafficLightArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::autoware_perception_msgs::msg::TrafficLightArray>()
{
  return autoware_perception_msgs::msg::builder::Init_TrafficLightArray_stamp();
}

}  // namespace autoware_perception_msgs

#endif  // AUTOWARE_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_LIGHT_ARRAY__BUILDER_HPP_

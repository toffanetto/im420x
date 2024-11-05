// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from carla_msgs:msg/CarlaEgoVehicleSteering.idl
// generated code does not contain a copyright notice

#ifndef CARLA_MSGS__MSG__DETAIL__CARLA_EGO_VEHICLE_STEERING__BUILDER_HPP_
#define CARLA_MSGS__MSG__DETAIL__CARLA_EGO_VEHICLE_STEERING__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "carla_msgs/msg/detail/carla_ego_vehicle_steering__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace carla_msgs
{

namespace msg
{

namespace builder
{

class Init_CarlaEgoVehicleSteering_steering_tire_angle
{
public:
  explicit Init_CarlaEgoVehicleSteering_steering_tire_angle(::carla_msgs::msg::CarlaEgoVehicleSteering & msg)
  : msg_(msg)
  {}
  ::carla_msgs::msg::CarlaEgoVehicleSteering steering_tire_angle(::carla_msgs::msg::CarlaEgoVehicleSteering::_steering_tire_angle_type arg)
  {
    msg_.steering_tire_angle = std::move(arg);
    return std::move(msg_);
  }

private:
  ::carla_msgs::msg::CarlaEgoVehicleSteering msg_;
};

class Init_CarlaEgoVehicleSteering_header
{
public:
  Init_CarlaEgoVehicleSteering_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CarlaEgoVehicleSteering_steering_tire_angle header(::carla_msgs::msg::CarlaEgoVehicleSteering::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_CarlaEgoVehicleSteering_steering_tire_angle(msg_);
  }

private:
  ::carla_msgs::msg::CarlaEgoVehicleSteering msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::carla_msgs::msg::CarlaEgoVehicleSteering>()
{
  return carla_msgs::msg::builder::Init_CarlaEgoVehicleSteering_header();
}

}  // namespace carla_msgs

#endif  // CARLA_MSGS__MSG__DETAIL__CARLA_EGO_VEHICLE_STEERING__BUILDER_HPP_

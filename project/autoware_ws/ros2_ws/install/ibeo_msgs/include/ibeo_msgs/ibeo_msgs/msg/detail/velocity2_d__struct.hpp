// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ibeo_msgs:msg/Velocity2D.idl
// generated code does not contain a copyright notice

#ifndef IBEO_MSGS__MSG__DETAIL__VELOCITY2_D__STRUCT_HPP_
#define IBEO_MSGS__MSG__DETAIL__VELOCITY2_D__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__ibeo_msgs__msg__Velocity2D __attribute__((deprecated))
#else
# define DEPRECATED__ibeo_msgs__msg__Velocity2D __declspec(deprecated)
#endif

namespace ibeo_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Velocity2D_
{
  using Type = Velocity2D_<ContainerAllocator>;

  explicit Velocity2D_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->velocity_x = 0;
      this->velocity_y = 0;
    }
  }

  explicit Velocity2D_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->velocity_x = 0;
      this->velocity_y = 0;
    }
  }

  // field types and members
  using _velocity_x_type =
    int16_t;
  _velocity_x_type velocity_x;
  using _velocity_y_type =
    int16_t;
  _velocity_y_type velocity_y;

  // setters for named parameter idiom
  Type & set__velocity_x(
    const int16_t & _arg)
  {
    this->velocity_x = _arg;
    return *this;
  }
  Type & set__velocity_y(
    const int16_t & _arg)
  {
    this->velocity_y = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ibeo_msgs::msg::Velocity2D_<ContainerAllocator> *;
  using ConstRawPtr =
    const ibeo_msgs::msg::Velocity2D_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ibeo_msgs::msg::Velocity2D_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ibeo_msgs::msg::Velocity2D_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ibeo_msgs::msg::Velocity2D_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ibeo_msgs::msg::Velocity2D_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ibeo_msgs::msg::Velocity2D_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ibeo_msgs::msg::Velocity2D_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ibeo_msgs::msg::Velocity2D_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ibeo_msgs::msg::Velocity2D_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ibeo_msgs__msg__Velocity2D
    std::shared_ptr<ibeo_msgs::msg::Velocity2D_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ibeo_msgs__msg__Velocity2D
    std::shared_ptr<ibeo_msgs::msg::Velocity2D_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Velocity2D_ & other) const
  {
    if (this->velocity_x != other.velocity_x) {
      return false;
    }
    if (this->velocity_y != other.velocity_y) {
      return false;
    }
    return true;
  }
  bool operator!=(const Velocity2D_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Velocity2D_

// alias to use template instance with default allocator
using Velocity2D =
  ibeo_msgs::msg::Velocity2D_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ibeo_msgs

#endif  // IBEO_MSGS__MSG__DETAIL__VELOCITY2_D__STRUCT_HPP_

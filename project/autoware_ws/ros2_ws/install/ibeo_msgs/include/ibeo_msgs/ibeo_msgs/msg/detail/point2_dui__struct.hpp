// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ibeo_msgs:msg/Point2Dui.idl
// generated code does not contain a copyright notice

#ifndef IBEO_MSGS__MSG__DETAIL__POINT2_DUI__STRUCT_HPP_
#define IBEO_MSGS__MSG__DETAIL__POINT2_DUI__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__ibeo_msgs__msg__Point2Dui __attribute__((deprecated))
#else
# define DEPRECATED__ibeo_msgs__msg__Point2Dui __declspec(deprecated)
#endif

namespace ibeo_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Point2Dui_
{
  using Type = Point2Dui_<ContainerAllocator>;

  explicit Point2Dui_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0;
      this->y = 0;
    }
  }

  explicit Point2Dui_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0;
      this->y = 0;
    }
  }

  // field types and members
  using _x_type =
    uint16_t;
  _x_type x;
  using _y_type =
    uint16_t;
  _y_type y;

  // setters for named parameter idiom
  Type & set__x(
    const uint16_t & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const uint16_t & _arg)
  {
    this->y = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ibeo_msgs::msg::Point2Dui_<ContainerAllocator> *;
  using ConstRawPtr =
    const ibeo_msgs::msg::Point2Dui_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ibeo_msgs::msg::Point2Dui_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ibeo_msgs::msg::Point2Dui_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ibeo_msgs::msg::Point2Dui_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ibeo_msgs::msg::Point2Dui_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ibeo_msgs::msg::Point2Dui_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ibeo_msgs::msg::Point2Dui_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ibeo_msgs::msg::Point2Dui_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ibeo_msgs::msg::Point2Dui_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ibeo_msgs__msg__Point2Dui
    std::shared_ptr<ibeo_msgs::msg::Point2Dui_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ibeo_msgs__msg__Point2Dui
    std::shared_ptr<ibeo_msgs::msg::Point2Dui_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Point2Dui_ & other) const
  {
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    return true;
  }
  bool operator!=(const Point2Dui_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Point2Dui_

// alias to use template instance with default allocator
using Point2Dui =
  ibeo_msgs::msg::Point2Dui_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ibeo_msgs

#endif  // IBEO_MSGS__MSG__DETAIL__POINT2_DUI__STRUCT_HPP_
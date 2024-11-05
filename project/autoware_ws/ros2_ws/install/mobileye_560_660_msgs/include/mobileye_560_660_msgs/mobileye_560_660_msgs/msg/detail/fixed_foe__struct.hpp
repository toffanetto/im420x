// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mobileye_560_660_msgs:msg/FixedFoe.idl
// generated code does not contain a copyright notice

#ifndef MOBILEYE_560_660_MSGS__MSG__DETAIL__FIXED_FOE__STRUCT_HPP_
#define MOBILEYE_560_660_MSGS__MSG__DETAIL__FIXED_FOE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mobileye_560_660_msgs__msg__FixedFoe __attribute__((deprecated))
#else
# define DEPRECATED__mobileye_560_660_msgs__msg__FixedFoe __declspec(deprecated)
#endif

namespace mobileye_560_660_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct FixedFoe_
{
  using Type = FixedFoe_<ContainerAllocator>;

  explicit FixedFoe_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->fixed_yaw = 0.0;
      this->fixed_horizon = 0.0;
    }
  }

  explicit FixedFoe_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->fixed_yaw = 0.0;
      this->fixed_horizon = 0.0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _fixed_yaw_type =
    double;
  _fixed_yaw_type fixed_yaw;
  using _fixed_horizon_type =
    double;
  _fixed_horizon_type fixed_horizon;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__fixed_yaw(
    const double & _arg)
  {
    this->fixed_yaw = _arg;
    return *this;
  }
  Type & set__fixed_horizon(
    const double & _arg)
  {
    this->fixed_horizon = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mobileye_560_660_msgs::msg::FixedFoe_<ContainerAllocator> *;
  using ConstRawPtr =
    const mobileye_560_660_msgs::msg::FixedFoe_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mobileye_560_660_msgs::msg::FixedFoe_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mobileye_560_660_msgs::msg::FixedFoe_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mobileye_560_660_msgs::msg::FixedFoe_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mobileye_560_660_msgs::msg::FixedFoe_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mobileye_560_660_msgs::msg::FixedFoe_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mobileye_560_660_msgs::msg::FixedFoe_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mobileye_560_660_msgs::msg::FixedFoe_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mobileye_560_660_msgs::msg::FixedFoe_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mobileye_560_660_msgs__msg__FixedFoe
    std::shared_ptr<mobileye_560_660_msgs::msg::FixedFoe_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mobileye_560_660_msgs__msg__FixedFoe
    std::shared_ptr<mobileye_560_660_msgs::msg::FixedFoe_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FixedFoe_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->fixed_yaw != other.fixed_yaw) {
      return false;
    }
    if (this->fixed_horizon != other.fixed_horizon) {
      return false;
    }
    return true;
  }
  bool operator!=(const FixedFoe_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FixedFoe_

// alias to use template instance with default allocator
using FixedFoe =
  mobileye_560_660_msgs::msg::FixedFoe_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mobileye_560_660_msgs

#endif  // MOBILEYE_560_660_MSGS__MSG__DETAIL__FIXED_FOE__STRUCT_HPP_

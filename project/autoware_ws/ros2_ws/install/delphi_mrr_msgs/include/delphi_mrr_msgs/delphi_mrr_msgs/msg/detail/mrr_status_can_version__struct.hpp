// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from delphi_mrr_msgs:msg/MrrStatusCanVersion.idl
// generated code does not contain a copyright notice

#ifndef DELPHI_MRR_MSGS__MSG__DETAIL__MRR_STATUS_CAN_VERSION__STRUCT_HPP_
#define DELPHI_MRR_MSGS__MSG__DETAIL__MRR_STATUS_CAN_VERSION__STRUCT_HPP_

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
# define DEPRECATED__delphi_mrr_msgs__msg__MrrStatusCanVersion __attribute__((deprecated))
#else
# define DEPRECATED__delphi_mrr_msgs__msg__MrrStatusCanVersion __declspec(deprecated)
#endif

namespace delphi_mrr_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MrrStatusCanVersion_
{
  using Type = MrrStatusCanVersion_<ContainerAllocator>;

  explicit MrrStatusCanVersion_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->can_usc_section_compatibility = 0;
      this->can_pcan_minor_mrr = 0;
      this->can_pcan_major_mrr = 0;
    }
  }

  explicit MrrStatusCanVersion_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->can_usc_section_compatibility = 0;
      this->can_pcan_minor_mrr = 0;
      this->can_pcan_major_mrr = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _can_usc_section_compatibility_type =
    uint16_t;
  _can_usc_section_compatibility_type can_usc_section_compatibility;
  using _can_pcan_minor_mrr_type =
    uint8_t;
  _can_pcan_minor_mrr_type can_pcan_minor_mrr;
  using _can_pcan_major_mrr_type =
    uint8_t;
  _can_pcan_major_mrr_type can_pcan_major_mrr;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__can_usc_section_compatibility(
    const uint16_t & _arg)
  {
    this->can_usc_section_compatibility = _arg;
    return *this;
  }
  Type & set__can_pcan_minor_mrr(
    const uint8_t & _arg)
  {
    this->can_pcan_minor_mrr = _arg;
    return *this;
  }
  Type & set__can_pcan_major_mrr(
    const uint8_t & _arg)
  {
    this->can_pcan_major_mrr = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    delphi_mrr_msgs::msg::MrrStatusCanVersion_<ContainerAllocator> *;
  using ConstRawPtr =
    const delphi_mrr_msgs::msg::MrrStatusCanVersion_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<delphi_mrr_msgs::msg::MrrStatusCanVersion_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<delphi_mrr_msgs::msg::MrrStatusCanVersion_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      delphi_mrr_msgs::msg::MrrStatusCanVersion_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<delphi_mrr_msgs::msg::MrrStatusCanVersion_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      delphi_mrr_msgs::msg::MrrStatusCanVersion_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<delphi_mrr_msgs::msg::MrrStatusCanVersion_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<delphi_mrr_msgs::msg::MrrStatusCanVersion_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<delphi_mrr_msgs::msg::MrrStatusCanVersion_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__delphi_mrr_msgs__msg__MrrStatusCanVersion
    std::shared_ptr<delphi_mrr_msgs::msg::MrrStatusCanVersion_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__delphi_mrr_msgs__msg__MrrStatusCanVersion
    std::shared_ptr<delphi_mrr_msgs::msg::MrrStatusCanVersion_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MrrStatusCanVersion_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->can_usc_section_compatibility != other.can_usc_section_compatibility) {
      return false;
    }
    if (this->can_pcan_minor_mrr != other.can_pcan_minor_mrr) {
      return false;
    }
    if (this->can_pcan_major_mrr != other.can_pcan_major_mrr) {
      return false;
    }
    return true;
  }
  bool operator!=(const MrrStatusCanVersion_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MrrStatusCanVersion_

// alias to use template instance with default allocator
using MrrStatusCanVersion =
  delphi_mrr_msgs::msg::MrrStatusCanVersion_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace delphi_mrr_msgs

#endif  // DELPHI_MRR_MSGS__MSG__DETAIL__MRR_STATUS_CAN_VERSION__STRUCT_HPP_

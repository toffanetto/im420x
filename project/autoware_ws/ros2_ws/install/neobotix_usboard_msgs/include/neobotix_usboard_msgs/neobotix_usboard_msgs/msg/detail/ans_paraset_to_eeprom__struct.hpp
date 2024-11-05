// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from neobotix_usboard_msgs:msg/AnsParasetToEEPROM.idl
// generated code does not contain a copyright notice

#ifndef NEOBOTIX_USBOARD_MSGS__MSG__DETAIL__ANS_PARASET_TO_EEPROM__STRUCT_HPP_
#define NEOBOTIX_USBOARD_MSGS__MSG__DETAIL__ANS_PARASET_TO_EEPROM__STRUCT_HPP_

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
# define DEPRECATED__neobotix_usboard_msgs__msg__AnsParasetToEEPROM __attribute__((deprecated))
#else
# define DEPRECATED__neobotix_usboard_msgs__msg__AnsParasetToEEPROM __declspec(deprecated)
#endif

namespace neobotix_usboard_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AnsParasetToEEPROM_
{
  using Type = AnsParasetToEEPROM_<ContainerAllocator>;

  explicit AnsParasetToEEPROM_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->command = 0;
      this->paraset_cksum_low_byte = 0;
      this->paraset_cksum_high_byte = 0;
    }
  }

  explicit AnsParasetToEEPROM_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->command = 0;
      this->paraset_cksum_low_byte = 0;
      this->paraset_cksum_high_byte = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _command_type =
    uint8_t;
  _command_type command;
  using _paraset_cksum_low_byte_type =
    uint8_t;
  _paraset_cksum_low_byte_type paraset_cksum_low_byte;
  using _paraset_cksum_high_byte_type =
    uint8_t;
  _paraset_cksum_high_byte_type paraset_cksum_high_byte;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__command(
    const uint8_t & _arg)
  {
    this->command = _arg;
    return *this;
  }
  Type & set__paraset_cksum_low_byte(
    const uint8_t & _arg)
  {
    this->paraset_cksum_low_byte = _arg;
    return *this;
  }
  Type & set__paraset_cksum_high_byte(
    const uint8_t & _arg)
  {
    this->paraset_cksum_high_byte = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    neobotix_usboard_msgs::msg::AnsParasetToEEPROM_<ContainerAllocator> *;
  using ConstRawPtr =
    const neobotix_usboard_msgs::msg::AnsParasetToEEPROM_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<neobotix_usboard_msgs::msg::AnsParasetToEEPROM_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<neobotix_usboard_msgs::msg::AnsParasetToEEPROM_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      neobotix_usboard_msgs::msg::AnsParasetToEEPROM_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<neobotix_usboard_msgs::msg::AnsParasetToEEPROM_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      neobotix_usboard_msgs::msg::AnsParasetToEEPROM_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<neobotix_usboard_msgs::msg::AnsParasetToEEPROM_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<neobotix_usboard_msgs::msg::AnsParasetToEEPROM_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<neobotix_usboard_msgs::msg::AnsParasetToEEPROM_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__neobotix_usboard_msgs__msg__AnsParasetToEEPROM
    std::shared_ptr<neobotix_usboard_msgs::msg::AnsParasetToEEPROM_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__neobotix_usboard_msgs__msg__AnsParasetToEEPROM
    std::shared_ptr<neobotix_usboard_msgs::msg::AnsParasetToEEPROM_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AnsParasetToEEPROM_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->command != other.command) {
      return false;
    }
    if (this->paraset_cksum_low_byte != other.paraset_cksum_low_byte) {
      return false;
    }
    if (this->paraset_cksum_high_byte != other.paraset_cksum_high_byte) {
      return false;
    }
    return true;
  }
  bool operator!=(const AnsParasetToEEPROM_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AnsParasetToEEPROM_

// alias to use template instance with default allocator
using AnsParasetToEEPROM =
  neobotix_usboard_msgs::msg::AnsParasetToEEPROM_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace neobotix_usboard_msgs

#endif  // NEOBOTIX_USBOARD_MSGS__MSG__DETAIL__ANS_PARASET_TO_EEPROM__STRUCT_HPP_

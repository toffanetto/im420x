// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from autoware_map_msgs:msg/PointCloudMapMetaData.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_MAP_MSGS__MSG__DETAIL__POINT_CLOUD_MAP_META_DATA__STRUCT_HPP_
#define AUTOWARE_MAP_MSGS__MSG__DETAIL__POINT_CLOUD_MAP_META_DATA__STRUCT_HPP_

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
// Member 'metadata_list'
#include "autoware_map_msgs/msg/detail/point_cloud_map_cell_meta_data_with_id__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__autoware_map_msgs__msg__PointCloudMapMetaData __attribute__((deprecated))
#else
# define DEPRECATED__autoware_map_msgs__msg__PointCloudMapMetaData __declspec(deprecated)
#endif

namespace autoware_map_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PointCloudMapMetaData_
{
  using Type = PointCloudMapMetaData_<ContainerAllocator>;

  explicit PointCloudMapMetaData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    (void)_init;
  }

  explicit PointCloudMapMetaData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _metadata_list_type =
    std::vector<autoware_map_msgs::msg::PointCloudMapCellMetaDataWithID_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<autoware_map_msgs::msg::PointCloudMapCellMetaDataWithID_<ContainerAllocator>>>;
  _metadata_list_type metadata_list;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__metadata_list(
    const std::vector<autoware_map_msgs::msg::PointCloudMapCellMetaDataWithID_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<autoware_map_msgs::msg::PointCloudMapCellMetaDataWithID_<ContainerAllocator>>> & _arg)
  {
    this->metadata_list = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    autoware_map_msgs::msg::PointCloudMapMetaData_<ContainerAllocator> *;
  using ConstRawPtr =
    const autoware_map_msgs::msg::PointCloudMapMetaData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<autoware_map_msgs::msg::PointCloudMapMetaData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<autoware_map_msgs::msg::PointCloudMapMetaData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      autoware_map_msgs::msg::PointCloudMapMetaData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<autoware_map_msgs::msg::PointCloudMapMetaData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      autoware_map_msgs::msg::PointCloudMapMetaData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<autoware_map_msgs::msg::PointCloudMapMetaData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<autoware_map_msgs::msg::PointCloudMapMetaData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<autoware_map_msgs::msg::PointCloudMapMetaData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__autoware_map_msgs__msg__PointCloudMapMetaData
    std::shared_ptr<autoware_map_msgs::msg::PointCloudMapMetaData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__autoware_map_msgs__msg__PointCloudMapMetaData
    std::shared_ptr<autoware_map_msgs::msg::PointCloudMapMetaData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PointCloudMapMetaData_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->metadata_list != other.metadata_list) {
      return false;
    }
    return true;
  }
  bool operator!=(const PointCloudMapMetaData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PointCloudMapMetaData_

// alias to use template instance with default allocator
using PointCloudMapMetaData =
  autoware_map_msgs::msg::PointCloudMapMetaData_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace autoware_map_msgs

#endif  // AUTOWARE_MAP_MSGS__MSG__DETAIL__POINT_CLOUD_MAP_META_DATA__STRUCT_HPP_

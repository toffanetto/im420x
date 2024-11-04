// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from autoware_auto_planning_msgs:action/RecordTrajectory.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_PLANNING_MSGS__ACTION__DETAIL__RECORD_TRAJECTORY__STRUCT_HPP_
#define AUTOWARE_AUTO_PLANNING_MSGS__ACTION__DETAIL__RECORD_TRAJECTORY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__autoware_auto_planning_msgs__action__RecordTrajectory_Goal __attribute__((deprecated))
#else
# define DEPRECATED__autoware_auto_planning_msgs__action__RecordTrajectory_Goal __declspec(deprecated)
#endif

namespace autoware_auto_planning_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct RecordTrajectory_Goal_
{
  using Type = RecordTrajectory_Goal_<ContainerAllocator>;

  explicit RecordTrajectory_Goal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->record_path = "";
    }
  }

  explicit RecordTrajectory_Goal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : record_path(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->record_path = "";
    }
  }

  // field types and members
  using _record_path_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _record_path_type record_path;

  // setters for named parameter idiom
  Type & set__record_path(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->record_path = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    autoware_auto_planning_msgs::action::RecordTrajectory_Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const autoware_auto_planning_msgs::action::RecordTrajectory_Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<autoware_auto_planning_msgs::action::RecordTrajectory_Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<autoware_auto_planning_msgs::action::RecordTrajectory_Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      autoware_auto_planning_msgs::action::RecordTrajectory_Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<autoware_auto_planning_msgs::action::RecordTrajectory_Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      autoware_auto_planning_msgs::action::RecordTrajectory_Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<autoware_auto_planning_msgs::action::RecordTrajectory_Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<autoware_auto_planning_msgs::action::RecordTrajectory_Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<autoware_auto_planning_msgs::action::RecordTrajectory_Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__autoware_auto_planning_msgs__action__RecordTrajectory_Goal
    std::shared_ptr<autoware_auto_planning_msgs::action::RecordTrajectory_Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__autoware_auto_planning_msgs__action__RecordTrajectory_Goal
    std::shared_ptr<autoware_auto_planning_msgs::action::RecordTrajectory_Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RecordTrajectory_Goal_ & other) const
  {
    if (this->record_path != other.record_path) {
      return false;
    }
    return true;
  }
  bool operator!=(const RecordTrajectory_Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RecordTrajectory_Goal_

// alias to use template instance with default allocator
using RecordTrajectory_Goal =
  autoware_auto_planning_msgs::action::RecordTrajectory_Goal_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace autoware_auto_planning_msgs


#ifndef _WIN32
# define DEPRECATED__autoware_auto_planning_msgs__action__RecordTrajectory_Result __attribute__((deprecated))
#else
# define DEPRECATED__autoware_auto_planning_msgs__action__RecordTrajectory_Result __declspec(deprecated)
#endif

namespace autoware_auto_planning_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct RecordTrajectory_Result_
{
  using Type = RecordTrajectory_Result_<ContainerAllocator>;

  explicit RecordTrajectory_Result_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->unused_flag = false;
    }
  }

  explicit RecordTrajectory_Result_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->unused_flag = false;
    }
  }

  // field types and members
  using _unused_flag_type =
    bool;
  _unused_flag_type unused_flag;

  // setters for named parameter idiom
  Type & set__unused_flag(
    const bool & _arg)
  {
    this->unused_flag = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    autoware_auto_planning_msgs::action::RecordTrajectory_Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const autoware_auto_planning_msgs::action::RecordTrajectory_Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<autoware_auto_planning_msgs::action::RecordTrajectory_Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<autoware_auto_planning_msgs::action::RecordTrajectory_Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      autoware_auto_planning_msgs::action::RecordTrajectory_Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<autoware_auto_planning_msgs::action::RecordTrajectory_Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      autoware_auto_planning_msgs::action::RecordTrajectory_Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<autoware_auto_planning_msgs::action::RecordTrajectory_Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<autoware_auto_planning_msgs::action::RecordTrajectory_Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<autoware_auto_planning_msgs::action::RecordTrajectory_Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__autoware_auto_planning_msgs__action__RecordTrajectory_Result
    std::shared_ptr<autoware_auto_planning_msgs::action::RecordTrajectory_Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__autoware_auto_planning_msgs__action__RecordTrajectory_Result
    std::shared_ptr<autoware_auto_planning_msgs::action::RecordTrajectory_Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RecordTrajectory_Result_ & other) const
  {
    if (this->unused_flag != other.unused_flag) {
      return false;
    }
    return true;
  }
  bool operator!=(const RecordTrajectory_Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RecordTrajectory_Result_

// alias to use template instance with default allocator
using RecordTrajectory_Result =
  autoware_auto_planning_msgs::action::RecordTrajectory_Result_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace autoware_auto_planning_msgs


#ifndef _WIN32
# define DEPRECATED__autoware_auto_planning_msgs__action__RecordTrajectory_Feedback __attribute__((deprecated))
#else
# define DEPRECATED__autoware_auto_planning_msgs__action__RecordTrajectory_Feedback __declspec(deprecated)
#endif

namespace autoware_auto_planning_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct RecordTrajectory_Feedback_
{
  using Type = RecordTrajectory_Feedback_<ContainerAllocator>;

  explicit RecordTrajectory_Feedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->current_length = 0l;
    }
  }

  explicit RecordTrajectory_Feedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->current_length = 0l;
    }
  }

  // field types and members
  using _current_length_type =
    int32_t;
  _current_length_type current_length;

  // setters for named parameter idiom
  Type & set__current_length(
    const int32_t & _arg)
  {
    this->current_length = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    autoware_auto_planning_msgs::action::RecordTrajectory_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const autoware_auto_planning_msgs::action::RecordTrajectory_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<autoware_auto_planning_msgs::action::RecordTrajectory_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<autoware_auto_planning_msgs::action::RecordTrajectory_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      autoware_auto_planning_msgs::action::RecordTrajectory_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<autoware_auto_planning_msgs::action::RecordTrajectory_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      autoware_auto_planning_msgs::action::RecordTrajectory_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<autoware_auto_planning_msgs::action::RecordTrajectory_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<autoware_auto_planning_msgs::action::RecordTrajectory_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<autoware_auto_planning_msgs::action::RecordTrajectory_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__autoware_auto_planning_msgs__action__RecordTrajectory_Feedback
    std::shared_ptr<autoware_auto_planning_msgs::action::RecordTrajectory_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__autoware_auto_planning_msgs__action__RecordTrajectory_Feedback
    std::shared_ptr<autoware_auto_planning_msgs::action::RecordTrajectory_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RecordTrajectory_Feedback_ & other) const
  {
    if (this->current_length != other.current_length) {
      return false;
    }
    return true;
  }
  bool operator!=(const RecordTrajectory_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RecordTrajectory_Feedback_

// alias to use template instance with default allocator
using RecordTrajectory_Feedback =
  autoware_auto_planning_msgs::action::RecordTrajectory_Feedback_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace autoware_auto_planning_msgs


// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'goal'
#include "autoware_auto_planning_msgs/action/detail/record_trajectory__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__autoware_auto_planning_msgs__action__RecordTrajectory_SendGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__autoware_auto_planning_msgs__action__RecordTrajectory_SendGoal_Request __declspec(deprecated)
#endif

namespace autoware_auto_planning_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct RecordTrajectory_SendGoal_Request_
{
  using Type = RecordTrajectory_SendGoal_Request_<ContainerAllocator>;

  explicit RecordTrajectory_SendGoal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit RecordTrajectory_SendGoal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    goal(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _goal_type =
    autoware_auto_planning_msgs::action::RecordTrajectory_Goal_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__goal(
    const autoware_auto_planning_msgs::action::RecordTrajectory_Goal_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    autoware_auto_planning_msgs::action::RecordTrajectory_SendGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const autoware_auto_planning_msgs::action::RecordTrajectory_SendGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<autoware_auto_planning_msgs::action::RecordTrajectory_SendGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<autoware_auto_planning_msgs::action::RecordTrajectory_SendGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      autoware_auto_planning_msgs::action::RecordTrajectory_SendGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<autoware_auto_planning_msgs::action::RecordTrajectory_SendGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      autoware_auto_planning_msgs::action::RecordTrajectory_SendGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<autoware_auto_planning_msgs::action::RecordTrajectory_SendGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<autoware_auto_planning_msgs::action::RecordTrajectory_SendGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<autoware_auto_planning_msgs::action::RecordTrajectory_SendGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__autoware_auto_planning_msgs__action__RecordTrajectory_SendGoal_Request
    std::shared_ptr<autoware_auto_planning_msgs::action::RecordTrajectory_SendGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__autoware_auto_planning_msgs__action__RecordTrajectory_SendGoal_Request
    std::shared_ptr<autoware_auto_planning_msgs::action::RecordTrajectory_SendGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RecordTrajectory_SendGoal_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const RecordTrajectory_SendGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RecordTrajectory_SendGoal_Request_

// alias to use template instance with default allocator
using RecordTrajectory_SendGoal_Request =
  autoware_auto_planning_msgs::action::RecordTrajectory_SendGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace autoware_auto_planning_msgs


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__autoware_auto_planning_msgs__action__RecordTrajectory_SendGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__autoware_auto_planning_msgs__action__RecordTrajectory_SendGoal_Response __declspec(deprecated)
#endif

namespace autoware_auto_planning_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct RecordTrajectory_SendGoal_Response_
{
  using Type = RecordTrajectory_SendGoal_Response_<ContainerAllocator>;

  explicit RecordTrajectory_SendGoal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit RecordTrajectory_SendGoal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  // field types and members
  using _accepted_type =
    bool;
  _accepted_type accepted;
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;

  // setters for named parameter idiom
  Type & set__accepted(
    const bool & _arg)
  {
    this->accepted = _arg;
    return *this;
  }
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    autoware_auto_planning_msgs::action::RecordTrajectory_SendGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const autoware_auto_planning_msgs::action::RecordTrajectory_SendGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<autoware_auto_planning_msgs::action::RecordTrajectory_SendGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<autoware_auto_planning_msgs::action::RecordTrajectory_SendGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      autoware_auto_planning_msgs::action::RecordTrajectory_SendGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<autoware_auto_planning_msgs::action::RecordTrajectory_SendGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      autoware_auto_planning_msgs::action::RecordTrajectory_SendGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<autoware_auto_planning_msgs::action::RecordTrajectory_SendGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<autoware_auto_planning_msgs::action::RecordTrajectory_SendGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<autoware_auto_planning_msgs::action::RecordTrajectory_SendGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__autoware_auto_planning_msgs__action__RecordTrajectory_SendGoal_Response
    std::shared_ptr<autoware_auto_planning_msgs::action::RecordTrajectory_SendGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__autoware_auto_planning_msgs__action__RecordTrajectory_SendGoal_Response
    std::shared_ptr<autoware_auto_planning_msgs::action::RecordTrajectory_SendGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RecordTrajectory_SendGoal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const RecordTrajectory_SendGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RecordTrajectory_SendGoal_Response_

// alias to use template instance with default allocator
using RecordTrajectory_SendGoal_Response =
  autoware_auto_planning_msgs::action::RecordTrajectory_SendGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace autoware_auto_planning_msgs

namespace autoware_auto_planning_msgs
{

namespace action
{

struct RecordTrajectory_SendGoal
{
  using Request = autoware_auto_planning_msgs::action::RecordTrajectory_SendGoal_Request;
  using Response = autoware_auto_planning_msgs::action::RecordTrajectory_SendGoal_Response;
};

}  // namespace action

}  // namespace autoware_auto_planning_msgs


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__autoware_auto_planning_msgs__action__RecordTrajectory_GetResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__autoware_auto_planning_msgs__action__RecordTrajectory_GetResult_Request __declspec(deprecated)
#endif

namespace autoware_auto_planning_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct RecordTrajectory_GetResult_Request_
{
  using Type = RecordTrajectory_GetResult_Request_<ContainerAllocator>;

  explicit RecordTrajectory_GetResult_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    (void)_init;
  }

  explicit RecordTrajectory_GetResult_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    autoware_auto_planning_msgs::action::RecordTrajectory_GetResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const autoware_auto_planning_msgs::action::RecordTrajectory_GetResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<autoware_auto_planning_msgs::action::RecordTrajectory_GetResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<autoware_auto_planning_msgs::action::RecordTrajectory_GetResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      autoware_auto_planning_msgs::action::RecordTrajectory_GetResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<autoware_auto_planning_msgs::action::RecordTrajectory_GetResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      autoware_auto_planning_msgs::action::RecordTrajectory_GetResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<autoware_auto_planning_msgs::action::RecordTrajectory_GetResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<autoware_auto_planning_msgs::action::RecordTrajectory_GetResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<autoware_auto_planning_msgs::action::RecordTrajectory_GetResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__autoware_auto_planning_msgs__action__RecordTrajectory_GetResult_Request
    std::shared_ptr<autoware_auto_planning_msgs::action::RecordTrajectory_GetResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__autoware_auto_planning_msgs__action__RecordTrajectory_GetResult_Request
    std::shared_ptr<autoware_auto_planning_msgs::action::RecordTrajectory_GetResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RecordTrajectory_GetResult_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const RecordTrajectory_GetResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RecordTrajectory_GetResult_Request_

// alias to use template instance with default allocator
using RecordTrajectory_GetResult_Request =
  autoware_auto_planning_msgs::action::RecordTrajectory_GetResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace autoware_auto_planning_msgs


// Include directives for member types
// Member 'result'
// already included above
// #include "autoware_auto_planning_msgs/action/detail/record_trajectory__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__autoware_auto_planning_msgs__action__RecordTrajectory_GetResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__autoware_auto_planning_msgs__action__RecordTrajectory_GetResult_Response __declspec(deprecated)
#endif

namespace autoware_auto_planning_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct RecordTrajectory_GetResult_Response_
{
  using Type = RecordTrajectory_GetResult_Response_<ContainerAllocator>;

  explicit RecordTrajectory_GetResult_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit RecordTrajectory_GetResult_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  // field types and members
  using _status_type =
    int8_t;
  _status_type status;
  using _result_type =
    autoware_auto_planning_msgs::action::RecordTrajectory_Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const autoware_auto_planning_msgs::action::RecordTrajectory_Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    autoware_auto_planning_msgs::action::RecordTrajectory_GetResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const autoware_auto_planning_msgs::action::RecordTrajectory_GetResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<autoware_auto_planning_msgs::action::RecordTrajectory_GetResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<autoware_auto_planning_msgs::action::RecordTrajectory_GetResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      autoware_auto_planning_msgs::action::RecordTrajectory_GetResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<autoware_auto_planning_msgs::action::RecordTrajectory_GetResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      autoware_auto_planning_msgs::action::RecordTrajectory_GetResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<autoware_auto_planning_msgs::action::RecordTrajectory_GetResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<autoware_auto_planning_msgs::action::RecordTrajectory_GetResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<autoware_auto_planning_msgs::action::RecordTrajectory_GetResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__autoware_auto_planning_msgs__action__RecordTrajectory_GetResult_Response
    std::shared_ptr<autoware_auto_planning_msgs::action::RecordTrajectory_GetResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__autoware_auto_planning_msgs__action__RecordTrajectory_GetResult_Response
    std::shared_ptr<autoware_auto_planning_msgs::action::RecordTrajectory_GetResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RecordTrajectory_GetResult_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const RecordTrajectory_GetResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RecordTrajectory_GetResult_Response_

// alias to use template instance with default allocator
using RecordTrajectory_GetResult_Response =
  autoware_auto_planning_msgs::action::RecordTrajectory_GetResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace autoware_auto_planning_msgs

namespace autoware_auto_planning_msgs
{

namespace action
{

struct RecordTrajectory_GetResult
{
  using Request = autoware_auto_planning_msgs::action::RecordTrajectory_GetResult_Request;
  using Response = autoware_auto_planning_msgs::action::RecordTrajectory_GetResult_Response;
};

}  // namespace action

}  // namespace autoware_auto_planning_msgs


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'feedback'
// already included above
// #include "autoware_auto_planning_msgs/action/detail/record_trajectory__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__autoware_auto_planning_msgs__action__RecordTrajectory_FeedbackMessage __attribute__((deprecated))
#else
# define DEPRECATED__autoware_auto_planning_msgs__action__RecordTrajectory_FeedbackMessage __declspec(deprecated)
#endif

namespace autoware_auto_planning_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct RecordTrajectory_FeedbackMessage_
{
  using Type = RecordTrajectory_FeedbackMessage_<ContainerAllocator>;

  explicit RecordTrajectory_FeedbackMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    feedback(_init)
  {
    (void)_init;
  }

  explicit RecordTrajectory_FeedbackMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    feedback(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _feedback_type =
    autoware_auto_planning_msgs::action::RecordTrajectory_Feedback_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__feedback(
    const autoware_auto_planning_msgs::action::RecordTrajectory_Feedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    autoware_auto_planning_msgs::action::RecordTrajectory_FeedbackMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const autoware_auto_planning_msgs::action::RecordTrajectory_FeedbackMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<autoware_auto_planning_msgs::action::RecordTrajectory_FeedbackMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<autoware_auto_planning_msgs::action::RecordTrajectory_FeedbackMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      autoware_auto_planning_msgs::action::RecordTrajectory_FeedbackMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<autoware_auto_planning_msgs::action::RecordTrajectory_FeedbackMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      autoware_auto_planning_msgs::action::RecordTrajectory_FeedbackMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<autoware_auto_planning_msgs::action::RecordTrajectory_FeedbackMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<autoware_auto_planning_msgs::action::RecordTrajectory_FeedbackMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<autoware_auto_planning_msgs::action::RecordTrajectory_FeedbackMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__autoware_auto_planning_msgs__action__RecordTrajectory_FeedbackMessage
    std::shared_ptr<autoware_auto_planning_msgs::action::RecordTrajectory_FeedbackMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__autoware_auto_planning_msgs__action__RecordTrajectory_FeedbackMessage
    std::shared_ptr<autoware_auto_planning_msgs::action::RecordTrajectory_FeedbackMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RecordTrajectory_FeedbackMessage_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const RecordTrajectory_FeedbackMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RecordTrajectory_FeedbackMessage_

// alias to use template instance with default allocator
using RecordTrajectory_FeedbackMessage =
  autoware_auto_planning_msgs::action::RecordTrajectory_FeedbackMessage_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace autoware_auto_planning_msgs

#include "action_msgs/srv/cancel_goal.hpp"
#include "action_msgs/msg/goal_info.hpp"
#include "action_msgs/msg/goal_status_array.hpp"

namespace autoware_auto_planning_msgs
{

namespace action
{

struct RecordTrajectory
{
  /// The goal message defined in the action definition.
  using Goal = autoware_auto_planning_msgs::action::RecordTrajectory_Goal;
  /// The result message defined in the action definition.
  using Result = autoware_auto_planning_msgs::action::RecordTrajectory_Result;
  /// The feedback message defined in the action definition.
  using Feedback = autoware_auto_planning_msgs::action::RecordTrajectory_Feedback;

  struct Impl
  {
    /// The send_goal service using a wrapped version of the goal message as a request.
    using SendGoalService = autoware_auto_planning_msgs::action::RecordTrajectory_SendGoal;
    /// The get_result service using a wrapped version of the result message as a response.
    using GetResultService = autoware_auto_planning_msgs::action::RecordTrajectory_GetResult;
    /// The feedback message with generic fields which wraps the feedback message.
    using FeedbackMessage = autoware_auto_planning_msgs::action::RecordTrajectory_FeedbackMessage;

    /// The generic service to cancel a goal.
    using CancelGoalService = action_msgs::srv::CancelGoal;
    /// The generic message for the status of a goal.
    using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  };
};

typedef struct RecordTrajectory RecordTrajectory;

}  // namespace action

}  // namespace autoware_auto_planning_msgs

#endif  // AUTOWARE_AUTO_PLANNING_MSGS__ACTION__DETAIL__RECORD_TRAJECTORY__STRUCT_HPP_

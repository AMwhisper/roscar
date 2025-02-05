// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from roscar_interfaces:msg/CanControl.idl
// generated code does not contain a copyright notice

#ifndef ROSCAR_INTERFACES__MSG__DETAIL__CAN_CONTROL__STRUCT_HPP_
#define ROSCAR_INTERFACES__MSG__DETAIL__CAN_CONTROL__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__roscar_interfaces__msg__CanControl __attribute__((deprecated))
#else
# define DEPRECATED__roscar_interfaces__msg__CanControl __declspec(deprecated)
#endif

namespace roscar_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CanControl_
{
  using Type = CanControl_<ContainerAllocator>;

  explicit CanControl_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit CanControl_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations

  // pointer types
  using RawPtr =
    roscar_interfaces::msg::CanControl_<ContainerAllocator> *;
  using ConstRawPtr =
    const roscar_interfaces::msg::CanControl_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<roscar_interfaces::msg::CanControl_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<roscar_interfaces::msg::CanControl_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      roscar_interfaces::msg::CanControl_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<roscar_interfaces::msg::CanControl_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      roscar_interfaces::msg::CanControl_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<roscar_interfaces::msg::CanControl_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<roscar_interfaces::msg::CanControl_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<roscar_interfaces::msg::CanControl_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__roscar_interfaces__msg__CanControl
    std::shared_ptr<roscar_interfaces::msg::CanControl_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__roscar_interfaces__msg__CanControl
    std::shared_ptr<roscar_interfaces::msg::CanControl_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CanControl_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const CanControl_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CanControl_

// alias to use template instance with default allocator
using CanControl =
  roscar_interfaces::msg::CanControl_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace roscar_interfaces

#endif  // ROSCAR_INTERFACES__MSG__DETAIL__CAN_CONTROL__STRUCT_HPP_

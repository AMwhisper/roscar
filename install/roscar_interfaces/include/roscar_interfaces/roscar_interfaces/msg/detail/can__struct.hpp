// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from roscar_interfaces:msg/Can.idl
// generated code does not contain a copyright notice

#ifndef ROSCAR_INTERFACES__MSG__DETAIL__CAN__STRUCT_HPP_
#define ROSCAR_INTERFACES__MSG__DETAIL__CAN__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__roscar_interfaces__msg__Can __attribute__((deprecated))
#else
# define DEPRECATED__roscar_interfaces__msg__Can __declspec(deprecated)
#endif

namespace roscar_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Can_
{
  using Type = Can_<ContainerAllocator>;

  explicit Can_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit Can_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _can_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _can_type can;

  // setters for named parameter idiom
  Type & set__can(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->can = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    roscar_interfaces::msg::Can_<ContainerAllocator> *;
  using ConstRawPtr =
    const roscar_interfaces::msg::Can_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<roscar_interfaces::msg::Can_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<roscar_interfaces::msg::Can_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      roscar_interfaces::msg::Can_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<roscar_interfaces::msg::Can_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      roscar_interfaces::msg::Can_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<roscar_interfaces::msg::Can_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<roscar_interfaces::msg::Can_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<roscar_interfaces::msg::Can_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__roscar_interfaces__msg__Can
    std::shared_ptr<roscar_interfaces::msg::Can_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__roscar_interfaces__msg__Can
    std::shared_ptr<roscar_interfaces::msg::Can_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Can_ & other) const
  {
    if (this->can != other.can) {
      return false;
    }
    return true;
  }
  bool operator!=(const Can_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Can_

// alias to use template instance with default allocator
using Can =
  roscar_interfaces::msg::Can_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace roscar_interfaces

#endif  // ROSCAR_INTERFACES__MSG__DETAIL__CAN__STRUCT_HPP_

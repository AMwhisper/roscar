// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from roscar_interfaces:msg/Pid.idl
// generated code does not contain a copyright notice

#ifndef ROSCAR_INTERFACES__MSG__DETAIL__PID__STRUCT_HPP_
#define ROSCAR_INTERFACES__MSG__DETAIL__PID__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__roscar_interfaces__msg__Pid __attribute__((deprecated))
#else
# define DEPRECATED__roscar_interfaces__msg__Pid __declspec(deprecated)
#endif

namespace roscar_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Pid_
{
  using Type = Pid_<ContainerAllocator>;

  explicit Pid_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit Pid_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _chassis_pid_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _chassis_pid_type chassis_pid;
  using _gimbal_pid_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _gimbal_pid_type gimbal_pid;

  // setters for named parameter idiom
  Type & set__chassis_pid(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->chassis_pid = _arg;
    return *this;
  }
  Type & set__gimbal_pid(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->gimbal_pid = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    roscar_interfaces::msg::Pid_<ContainerAllocator> *;
  using ConstRawPtr =
    const roscar_interfaces::msg::Pid_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<roscar_interfaces::msg::Pid_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<roscar_interfaces::msg::Pid_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      roscar_interfaces::msg::Pid_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<roscar_interfaces::msg::Pid_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      roscar_interfaces::msg::Pid_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<roscar_interfaces::msg::Pid_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<roscar_interfaces::msg::Pid_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<roscar_interfaces::msg::Pid_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__roscar_interfaces__msg__Pid
    std::shared_ptr<roscar_interfaces::msg::Pid_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__roscar_interfaces__msg__Pid
    std::shared_ptr<roscar_interfaces::msg::Pid_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Pid_ & other) const
  {
    if (this->chassis_pid != other.chassis_pid) {
      return false;
    }
    if (this->gimbal_pid != other.gimbal_pid) {
      return false;
    }
    return true;
  }
  bool operator!=(const Pid_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Pid_

// alias to use template instance with default allocator
using Pid =
  roscar_interfaces::msg::Pid_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace roscar_interfaces

#endif  // ROSCAR_INTERFACES__MSG__DETAIL__PID__STRUCT_HPP_

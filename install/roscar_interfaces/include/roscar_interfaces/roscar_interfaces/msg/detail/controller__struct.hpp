// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from roscar_interfaces:msg/Controller.idl
// generated code does not contain a copyright notice

#ifndef ROSCAR_INTERFACES__MSG__DETAIL__CONTROLLER__STRUCT_HPP_
#define ROSCAR_INTERFACES__MSG__DETAIL__CONTROLLER__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__roscar_interfaces__msg__Controller __attribute__((deprecated))
#else
# define DEPRECATED__roscar_interfaces__msg__Controller __declspec(deprecated)
#endif

namespace roscar_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Controller_
{
  using Type = Controller_<ContainerAllocator>;

  explicit Controller_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->lx = 0.0f;
      this->ly = 0.0f;
      this->r2 = 0;
      this->l2 = 0;
      this->x = 0;
    }
  }

  explicit Controller_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->lx = 0.0f;
      this->ly = 0.0f;
      this->r2 = 0;
      this->l2 = 0;
      this->x = 0;
    }
  }

  // field types and members
  using _lx_type =
    float;
  _lx_type lx;
  using _ly_type =
    float;
  _ly_type ly;
  using _r2_type =
    uint8_t;
  _r2_type r2;
  using _l2_type =
    uint8_t;
  _l2_type l2;
  using _x_type =
    uint8_t;
  _x_type x;

  // setters for named parameter idiom
  Type & set__lx(
    const float & _arg)
  {
    this->lx = _arg;
    return *this;
  }
  Type & set__ly(
    const float & _arg)
  {
    this->ly = _arg;
    return *this;
  }
  Type & set__r2(
    const uint8_t & _arg)
  {
    this->r2 = _arg;
    return *this;
  }
  Type & set__l2(
    const uint8_t & _arg)
  {
    this->l2 = _arg;
    return *this;
  }
  Type & set__x(
    const uint8_t & _arg)
  {
    this->x = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    roscar_interfaces::msg::Controller_<ContainerAllocator> *;
  using ConstRawPtr =
    const roscar_interfaces::msg::Controller_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<roscar_interfaces::msg::Controller_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<roscar_interfaces::msg::Controller_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      roscar_interfaces::msg::Controller_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<roscar_interfaces::msg::Controller_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      roscar_interfaces::msg::Controller_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<roscar_interfaces::msg::Controller_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<roscar_interfaces::msg::Controller_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<roscar_interfaces::msg::Controller_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__roscar_interfaces__msg__Controller
    std::shared_ptr<roscar_interfaces::msg::Controller_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__roscar_interfaces__msg__Controller
    std::shared_ptr<roscar_interfaces::msg::Controller_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Controller_ & other) const
  {
    if (this->lx != other.lx) {
      return false;
    }
    if (this->ly != other.ly) {
      return false;
    }
    if (this->r2 != other.r2) {
      return false;
    }
    if (this->l2 != other.l2) {
      return false;
    }
    if (this->x != other.x) {
      return false;
    }
    return true;
  }
  bool operator!=(const Controller_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Controller_

// alias to use template instance with default allocator
using Controller =
  roscar_interfaces::msg::Controller_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace roscar_interfaces

#endif  // ROSCAR_INTERFACES__MSG__DETAIL__CONTROLLER__STRUCT_HPP_

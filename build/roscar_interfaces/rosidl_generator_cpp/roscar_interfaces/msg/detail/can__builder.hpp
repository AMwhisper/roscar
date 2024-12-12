// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from roscar_interfaces:msg/Can.idl
// generated code does not contain a copyright notice

#ifndef ROSCAR_INTERFACES__MSG__DETAIL__CAN__BUILDER_HPP_
#define ROSCAR_INTERFACES__MSG__DETAIL__CAN__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "roscar_interfaces/msg/detail/can__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace roscar_interfaces
{

namespace msg
{

namespace builder
{

class Init_Can_can
{
public:
  Init_Can_can()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::roscar_interfaces::msg::Can can(::roscar_interfaces::msg::Can::_can_type arg)
  {
    msg_.can = std::move(arg);
    return std::move(msg_);
  }

private:
  ::roscar_interfaces::msg::Can msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::roscar_interfaces::msg::Can>()
{
  return roscar_interfaces::msg::builder::Init_Can_can();
}

}  // namespace roscar_interfaces

#endif  // ROSCAR_INTERFACES__MSG__DETAIL__CAN__BUILDER_HPP_

// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from roscar_interfaces:msg/CanControl.idl
// generated code does not contain a copyright notice

#ifndef ROSCAR_INTERFACES__MSG__DETAIL__CAN_CONTROL__BUILDER_HPP_
#define ROSCAR_INTERFACES__MSG__DETAIL__CAN_CONTROL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "roscar_interfaces/msg/detail/can_control__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace roscar_interfaces
{

namespace msg
{


}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::roscar_interfaces::msg::CanControl>()
{
  return ::roscar_interfaces::msg::CanControl(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace roscar_interfaces

#endif  // ROSCAR_INTERFACES__MSG__DETAIL__CAN_CONTROL__BUILDER_HPP_

// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from roscar_interfaces:msg/Pid.idl
// generated code does not contain a copyright notice

#ifndef ROSCAR_INTERFACES__MSG__DETAIL__PID__BUILDER_HPP_
#define ROSCAR_INTERFACES__MSG__DETAIL__PID__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "roscar_interfaces/msg/detail/pid__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace roscar_interfaces
{

namespace msg
{

namespace builder
{

class Init_Pid_gimbal_pid
{
public:
  explicit Init_Pid_gimbal_pid(::roscar_interfaces::msg::Pid & msg)
  : msg_(msg)
  {}
  ::roscar_interfaces::msg::Pid gimbal_pid(::roscar_interfaces::msg::Pid::_gimbal_pid_type arg)
  {
    msg_.gimbal_pid = std::move(arg);
    return std::move(msg_);
  }

private:
  ::roscar_interfaces::msg::Pid msg_;
};

class Init_Pid_chassis_pid
{
public:
  Init_Pid_chassis_pid()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Pid_gimbal_pid chassis_pid(::roscar_interfaces::msg::Pid::_chassis_pid_type arg)
  {
    msg_.chassis_pid = std::move(arg);
    return Init_Pid_gimbal_pid(msg_);
  }

private:
  ::roscar_interfaces::msg::Pid msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::roscar_interfaces::msg::Pid>()
{
  return roscar_interfaces::msg::builder::Init_Pid_chassis_pid();
}

}  // namespace roscar_interfaces

#endif  // ROSCAR_INTERFACES__MSG__DETAIL__PID__BUILDER_HPP_

// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from roscar_interfaces:msg/Controller.idl
// generated code does not contain a copyright notice

#ifndef ROSCAR_INTERFACES__MSG__DETAIL__CONTROLLER__BUILDER_HPP_
#define ROSCAR_INTERFACES__MSG__DETAIL__CONTROLLER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "roscar_interfaces/msg/detail/controller__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace roscar_interfaces
{

namespace msg
{

namespace builder
{

class Init_Controller_x
{
public:
  explicit Init_Controller_x(::roscar_interfaces::msg::Controller & msg)
  : msg_(msg)
  {}
  ::roscar_interfaces::msg::Controller x(::roscar_interfaces::msg::Controller::_x_type arg)
  {
    msg_.x = std::move(arg);
    return std::move(msg_);
  }

private:
  ::roscar_interfaces::msg::Controller msg_;
};

class Init_Controller_l2
{
public:
  explicit Init_Controller_l2(::roscar_interfaces::msg::Controller & msg)
  : msg_(msg)
  {}
  Init_Controller_x l2(::roscar_interfaces::msg::Controller::_l2_type arg)
  {
    msg_.l2 = std::move(arg);
    return Init_Controller_x(msg_);
  }

private:
  ::roscar_interfaces::msg::Controller msg_;
};

class Init_Controller_r2
{
public:
  explicit Init_Controller_r2(::roscar_interfaces::msg::Controller & msg)
  : msg_(msg)
  {}
  Init_Controller_l2 r2(::roscar_interfaces::msg::Controller::_r2_type arg)
  {
    msg_.r2 = std::move(arg);
    return Init_Controller_l2(msg_);
  }

private:
  ::roscar_interfaces::msg::Controller msg_;
};

class Init_Controller_ly
{
public:
  explicit Init_Controller_ly(::roscar_interfaces::msg::Controller & msg)
  : msg_(msg)
  {}
  Init_Controller_r2 ly(::roscar_interfaces::msg::Controller::_ly_type arg)
  {
    msg_.ly = std::move(arg);
    return Init_Controller_r2(msg_);
  }

private:
  ::roscar_interfaces::msg::Controller msg_;
};

class Init_Controller_lx
{
public:
  Init_Controller_lx()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Controller_ly lx(::roscar_interfaces::msg::Controller::_lx_type arg)
  {
    msg_.lx = std::move(arg);
    return Init_Controller_ly(msg_);
  }

private:
  ::roscar_interfaces::msg::Controller msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::roscar_interfaces::msg::Controller>()
{
  return roscar_interfaces::msg::builder::Init_Controller_lx();
}

}  // namespace roscar_interfaces

#endif  // ROSCAR_INTERFACES__MSG__DETAIL__CONTROLLER__BUILDER_HPP_

// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from roscar_interfaces:msg/CanControl.idl
// generated code does not contain a copyright notice

#ifndef ROSCAR_INTERFACES__MSG__DETAIL__CAN_CONTROL__TRAITS_HPP_
#define ROSCAR_INTERFACES__MSG__DETAIL__CAN_CONTROL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "roscar_interfaces/msg/detail/can_control__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace roscar_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const CanControl & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CanControl & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CanControl & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace roscar_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use roscar_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const roscar_interfaces::msg::CanControl & msg,
  std::ostream & out, size_t indentation = 0)
{
  roscar_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use roscar_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const roscar_interfaces::msg::CanControl & msg)
{
  return roscar_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<roscar_interfaces::msg::CanControl>()
{
  return "roscar_interfaces::msg::CanControl";
}

template<>
inline const char * name<roscar_interfaces::msg::CanControl>()
{
  return "roscar_interfaces/msg/CanControl";
}

template<>
struct has_fixed_size<roscar_interfaces::msg::CanControl>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<roscar_interfaces::msg::CanControl>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<roscar_interfaces::msg::CanControl>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROSCAR_INTERFACES__MSG__DETAIL__CAN_CONTROL__TRAITS_HPP_

// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from roscar_interfaces:msg/Pid.idl
// generated code does not contain a copyright notice

#ifndef ROSCAR_INTERFACES__MSG__DETAIL__PID__TRAITS_HPP_
#define ROSCAR_INTERFACES__MSG__DETAIL__PID__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "roscar_interfaces/msg/detail/pid__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace roscar_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const Pid & msg,
  std::ostream & out)
{
  out << "{";
  // member: chassis_pid
  {
    if (msg.chassis_pid.size() == 0) {
      out << "chassis_pid: []";
    } else {
      out << "chassis_pid: [";
      size_t pending_items = msg.chassis_pid.size();
      for (auto item : msg.chassis_pid) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: gimbal_pid
  {
    if (msg.gimbal_pid.size() == 0) {
      out << "gimbal_pid: []";
    } else {
      out << "gimbal_pid: [";
      size_t pending_items = msg.gimbal_pid.size();
      for (auto item : msg.gimbal_pid) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Pid & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: chassis_pid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.chassis_pid.size() == 0) {
      out << "chassis_pid: []\n";
    } else {
      out << "chassis_pid:\n";
      for (auto item : msg.chassis_pid) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: gimbal_pid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.gimbal_pid.size() == 0) {
      out << "gimbal_pid: []\n";
    } else {
      out << "gimbal_pid:\n";
      for (auto item : msg.gimbal_pid) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Pid & msg, bool use_flow_style = false)
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
  const roscar_interfaces::msg::Pid & msg,
  std::ostream & out, size_t indentation = 0)
{
  roscar_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use roscar_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const roscar_interfaces::msg::Pid & msg)
{
  return roscar_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<roscar_interfaces::msg::Pid>()
{
  return "roscar_interfaces::msg::Pid";
}

template<>
inline const char * name<roscar_interfaces::msg::Pid>()
{
  return "roscar_interfaces/msg/Pid";
}

template<>
struct has_fixed_size<roscar_interfaces::msg::Pid>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<roscar_interfaces::msg::Pid>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<roscar_interfaces::msg::Pid>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROSCAR_INTERFACES__MSG__DETAIL__PID__TRAITS_HPP_

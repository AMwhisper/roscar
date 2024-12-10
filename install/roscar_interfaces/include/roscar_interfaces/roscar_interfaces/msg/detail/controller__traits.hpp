// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from roscar_interfaces:msg/Controller.idl
// generated code does not contain a copyright notice

#ifndef ROSCAR_INTERFACES__MSG__DETAIL__CONTROLLER__TRAITS_HPP_
#define ROSCAR_INTERFACES__MSG__DETAIL__CONTROLLER__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "roscar_interfaces/msg/detail/controller__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace roscar_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const Controller & msg,
  std::ostream & out)
{
  out << "{";
  // member: lx
  {
    out << "lx: ";
    rosidl_generator_traits::value_to_yaml(msg.lx, out);
    out << ", ";
  }

  // member: ly
  {
    out << "ly: ";
    rosidl_generator_traits::value_to_yaml(msg.ly, out);
    out << ", ";
  }

  // member: r2
  {
    out << "r2: ";
    rosidl_generator_traits::value_to_yaml(msg.r2, out);
    out << ", ";
  }

  // member: l2
  {
    out << "l2: ";
    rosidl_generator_traits::value_to_yaml(msg.l2, out);
    out << ", ";
  }

  // member: x
  {
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Controller & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: lx
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lx: ";
    rosidl_generator_traits::value_to_yaml(msg.lx, out);
    out << "\n";
  }

  // member: ly
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ly: ";
    rosidl_generator_traits::value_to_yaml(msg.ly, out);
    out << "\n";
  }

  // member: r2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "r2: ";
    rosidl_generator_traits::value_to_yaml(msg.r2, out);
    out << "\n";
  }

  // member: l2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "l2: ";
    rosidl_generator_traits::value_to_yaml(msg.l2, out);
    out << "\n";
  }

  // member: x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Controller & msg, bool use_flow_style = false)
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
  const roscar_interfaces::msg::Controller & msg,
  std::ostream & out, size_t indentation = 0)
{
  roscar_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use roscar_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const roscar_interfaces::msg::Controller & msg)
{
  return roscar_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<roscar_interfaces::msg::Controller>()
{
  return "roscar_interfaces::msg::Controller";
}

template<>
inline const char * name<roscar_interfaces::msg::Controller>()
{
  return "roscar_interfaces/msg/Controller";
}

template<>
struct has_fixed_size<roscar_interfaces::msg::Controller>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<roscar_interfaces::msg::Controller>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<roscar_interfaces::msg::Controller>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROSCAR_INTERFACES__MSG__DETAIL__CONTROLLER__TRAITS_HPP_

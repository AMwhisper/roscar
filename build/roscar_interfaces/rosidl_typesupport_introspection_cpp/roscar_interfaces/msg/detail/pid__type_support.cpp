// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from roscar_interfaces:msg/Pid.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "roscar_interfaces/msg/detail/pid__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace roscar_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void Pid_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) roscar_interfaces::msg::Pid(_init);
}

void Pid_fini_function(void * message_memory)
{
  auto typed_message = static_cast<roscar_interfaces::msg::Pid *>(message_memory);
  typed_message->~Pid();
}

size_t size_function__Pid__pid(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Pid__pid(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__Pid__pid(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void fetch_function__Pid__pid(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__Pid__pid(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__Pid__pid(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__Pid__pid(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

void resize_function__Pid__pid(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Pid_message_member_array[1] = {
  {
    "pid",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(roscar_interfaces::msg::Pid, pid),  // bytes offset in struct
    nullptr,  // default value
    size_function__Pid__pid,  // size() function pointer
    get_const_function__Pid__pid,  // get_const(index) function pointer
    get_function__Pid__pid,  // get(index) function pointer
    fetch_function__Pid__pid,  // fetch(index, &value) function pointer
    assign_function__Pid__pid,  // assign(index, value) function pointer
    resize_function__Pid__pid  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Pid_message_members = {
  "roscar_interfaces::msg",  // message namespace
  "Pid",  // message name
  1,  // number of fields
  sizeof(roscar_interfaces::msg::Pid),
  Pid_message_member_array,  // message members
  Pid_init_function,  // function to initialize message memory (memory has to be allocated)
  Pid_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Pid_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Pid_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace roscar_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<roscar_interfaces::msg::Pid>()
{
  return &::roscar_interfaces::msg::rosidl_typesupport_introspection_cpp::Pid_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, roscar_interfaces, msg, Pid)() {
  return &::roscar_interfaces::msg::rosidl_typesupport_introspection_cpp::Pid_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from roscar_interfaces:msg/Pid.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "roscar_interfaces/msg/detail/pid__rosidl_typesupport_introspection_c.h"
#include "roscar_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "roscar_interfaces/msg/detail/pid__functions.h"
#include "roscar_interfaces/msg/detail/pid__struct.h"


// Include directives for member types
// Member `chassis_pid`
// Member `gimbal_pid`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void roscar_interfaces__msg__Pid__rosidl_typesupport_introspection_c__Pid_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  roscar_interfaces__msg__Pid__init(message_memory);
}

void roscar_interfaces__msg__Pid__rosidl_typesupport_introspection_c__Pid_fini_function(void * message_memory)
{
  roscar_interfaces__msg__Pid__fini(message_memory);
}

size_t roscar_interfaces__msg__Pid__rosidl_typesupport_introspection_c__size_function__Pid__chassis_pid(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * roscar_interfaces__msg__Pid__rosidl_typesupport_introspection_c__get_const_function__Pid__chassis_pid(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * roscar_interfaces__msg__Pid__rosidl_typesupport_introspection_c__get_function__Pid__chassis_pid(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void roscar_interfaces__msg__Pid__rosidl_typesupport_introspection_c__fetch_function__Pid__chassis_pid(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    roscar_interfaces__msg__Pid__rosidl_typesupport_introspection_c__get_const_function__Pid__chassis_pid(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void roscar_interfaces__msg__Pid__rosidl_typesupport_introspection_c__assign_function__Pid__chassis_pid(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    roscar_interfaces__msg__Pid__rosidl_typesupport_introspection_c__get_function__Pid__chassis_pid(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool roscar_interfaces__msg__Pid__rosidl_typesupport_introspection_c__resize_function__Pid__chassis_pid(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t roscar_interfaces__msg__Pid__rosidl_typesupport_introspection_c__size_function__Pid__gimbal_pid(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * roscar_interfaces__msg__Pid__rosidl_typesupport_introspection_c__get_const_function__Pid__gimbal_pid(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * roscar_interfaces__msg__Pid__rosidl_typesupport_introspection_c__get_function__Pid__gimbal_pid(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void roscar_interfaces__msg__Pid__rosidl_typesupport_introspection_c__fetch_function__Pid__gimbal_pid(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    roscar_interfaces__msg__Pid__rosidl_typesupport_introspection_c__get_const_function__Pid__gimbal_pid(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void roscar_interfaces__msg__Pid__rosidl_typesupport_introspection_c__assign_function__Pid__gimbal_pid(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    roscar_interfaces__msg__Pid__rosidl_typesupport_introspection_c__get_function__Pid__gimbal_pid(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool roscar_interfaces__msg__Pid__rosidl_typesupport_introspection_c__resize_function__Pid__gimbal_pid(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember roscar_interfaces__msg__Pid__rosidl_typesupport_introspection_c__Pid_message_member_array[2] = {
  {
    "chassis_pid",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(roscar_interfaces__msg__Pid, chassis_pid),  // bytes offset in struct
    NULL,  // default value
    roscar_interfaces__msg__Pid__rosidl_typesupport_introspection_c__size_function__Pid__chassis_pid,  // size() function pointer
    roscar_interfaces__msg__Pid__rosidl_typesupport_introspection_c__get_const_function__Pid__chassis_pid,  // get_const(index) function pointer
    roscar_interfaces__msg__Pid__rosidl_typesupport_introspection_c__get_function__Pid__chassis_pid,  // get(index) function pointer
    roscar_interfaces__msg__Pid__rosidl_typesupport_introspection_c__fetch_function__Pid__chassis_pid,  // fetch(index, &value) function pointer
    roscar_interfaces__msg__Pid__rosidl_typesupport_introspection_c__assign_function__Pid__chassis_pid,  // assign(index, value) function pointer
    roscar_interfaces__msg__Pid__rosidl_typesupport_introspection_c__resize_function__Pid__chassis_pid  // resize(index) function pointer
  },
  {
    "gimbal_pid",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(roscar_interfaces__msg__Pid, gimbal_pid),  // bytes offset in struct
    NULL,  // default value
    roscar_interfaces__msg__Pid__rosidl_typesupport_introspection_c__size_function__Pid__gimbal_pid,  // size() function pointer
    roscar_interfaces__msg__Pid__rosidl_typesupport_introspection_c__get_const_function__Pid__gimbal_pid,  // get_const(index) function pointer
    roscar_interfaces__msg__Pid__rosidl_typesupport_introspection_c__get_function__Pid__gimbal_pid,  // get(index) function pointer
    roscar_interfaces__msg__Pid__rosidl_typesupport_introspection_c__fetch_function__Pid__gimbal_pid,  // fetch(index, &value) function pointer
    roscar_interfaces__msg__Pid__rosidl_typesupport_introspection_c__assign_function__Pid__gimbal_pid,  // assign(index, value) function pointer
    roscar_interfaces__msg__Pid__rosidl_typesupport_introspection_c__resize_function__Pid__gimbal_pid  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers roscar_interfaces__msg__Pid__rosidl_typesupport_introspection_c__Pid_message_members = {
  "roscar_interfaces__msg",  // message namespace
  "Pid",  // message name
  2,  // number of fields
  sizeof(roscar_interfaces__msg__Pid),
  roscar_interfaces__msg__Pid__rosidl_typesupport_introspection_c__Pid_message_member_array,  // message members
  roscar_interfaces__msg__Pid__rosidl_typesupport_introspection_c__Pid_init_function,  // function to initialize message memory (memory has to be allocated)
  roscar_interfaces__msg__Pid__rosidl_typesupport_introspection_c__Pid_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t roscar_interfaces__msg__Pid__rosidl_typesupport_introspection_c__Pid_message_type_support_handle = {
  0,
  &roscar_interfaces__msg__Pid__rosidl_typesupport_introspection_c__Pid_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_roscar_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, roscar_interfaces, msg, Pid)() {
  if (!roscar_interfaces__msg__Pid__rosidl_typesupport_introspection_c__Pid_message_type_support_handle.typesupport_identifier) {
    roscar_interfaces__msg__Pid__rosidl_typesupport_introspection_c__Pid_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &roscar_interfaces__msg__Pid__rosidl_typesupport_introspection_c__Pid_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

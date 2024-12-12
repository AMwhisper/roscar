// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from roscar_interfaces:msg/Can.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "roscar_interfaces/msg/detail/can__rosidl_typesupport_introspection_c.h"
#include "roscar_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "roscar_interfaces/msg/detail/can__functions.h"
#include "roscar_interfaces/msg/detail/can__struct.h"


// Include directives for member types
// Member `can`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void roscar_interfaces__msg__Can__rosidl_typesupport_introspection_c__Can_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  roscar_interfaces__msg__Can__init(message_memory);
}

void roscar_interfaces__msg__Can__rosidl_typesupport_introspection_c__Can_fini_function(void * message_memory)
{
  roscar_interfaces__msg__Can__fini(message_memory);
}

size_t roscar_interfaces__msg__Can__rosidl_typesupport_introspection_c__size_function__Can__can(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * roscar_interfaces__msg__Can__rosidl_typesupport_introspection_c__get_const_function__Can__can(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * roscar_interfaces__msg__Can__rosidl_typesupport_introspection_c__get_function__Can__can(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void roscar_interfaces__msg__Can__rosidl_typesupport_introspection_c__fetch_function__Can__can(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    roscar_interfaces__msg__Can__rosidl_typesupport_introspection_c__get_const_function__Can__can(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void roscar_interfaces__msg__Can__rosidl_typesupport_introspection_c__assign_function__Can__can(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    roscar_interfaces__msg__Can__rosidl_typesupport_introspection_c__get_function__Can__can(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool roscar_interfaces__msg__Can__rosidl_typesupport_introspection_c__resize_function__Can__can(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember roscar_interfaces__msg__Can__rosidl_typesupport_introspection_c__Can_message_member_array[1] = {
  {
    "can",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(roscar_interfaces__msg__Can, can),  // bytes offset in struct
    NULL,  // default value
    roscar_interfaces__msg__Can__rosidl_typesupport_introspection_c__size_function__Can__can,  // size() function pointer
    roscar_interfaces__msg__Can__rosidl_typesupport_introspection_c__get_const_function__Can__can,  // get_const(index) function pointer
    roscar_interfaces__msg__Can__rosidl_typesupport_introspection_c__get_function__Can__can,  // get(index) function pointer
    roscar_interfaces__msg__Can__rosidl_typesupport_introspection_c__fetch_function__Can__can,  // fetch(index, &value) function pointer
    roscar_interfaces__msg__Can__rosidl_typesupport_introspection_c__assign_function__Can__can,  // assign(index, value) function pointer
    roscar_interfaces__msg__Can__rosidl_typesupport_introspection_c__resize_function__Can__can  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers roscar_interfaces__msg__Can__rosidl_typesupport_introspection_c__Can_message_members = {
  "roscar_interfaces__msg",  // message namespace
  "Can",  // message name
  1,  // number of fields
  sizeof(roscar_interfaces__msg__Can),
  roscar_interfaces__msg__Can__rosidl_typesupport_introspection_c__Can_message_member_array,  // message members
  roscar_interfaces__msg__Can__rosidl_typesupport_introspection_c__Can_init_function,  // function to initialize message memory (memory has to be allocated)
  roscar_interfaces__msg__Can__rosidl_typesupport_introspection_c__Can_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t roscar_interfaces__msg__Can__rosidl_typesupport_introspection_c__Can_message_type_support_handle = {
  0,
  &roscar_interfaces__msg__Can__rosidl_typesupport_introspection_c__Can_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_roscar_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, roscar_interfaces, msg, Can)() {
  if (!roscar_interfaces__msg__Can__rosidl_typesupport_introspection_c__Can_message_type_support_handle.typesupport_identifier) {
    roscar_interfaces__msg__Can__rosidl_typesupport_introspection_c__Can_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &roscar_interfaces__msg__Can__rosidl_typesupport_introspection_c__Can_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

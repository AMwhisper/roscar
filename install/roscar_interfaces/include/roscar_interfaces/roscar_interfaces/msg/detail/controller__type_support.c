// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from roscar_interfaces:msg/Controller.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "roscar_interfaces/msg/detail/controller__rosidl_typesupport_introspection_c.h"
#include "roscar_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "roscar_interfaces/msg/detail/controller__functions.h"
#include "roscar_interfaces/msg/detail/controller__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void roscar_interfaces__msg__Controller__rosidl_typesupport_introspection_c__Controller_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  roscar_interfaces__msg__Controller__init(message_memory);
}

void roscar_interfaces__msg__Controller__rosidl_typesupport_introspection_c__Controller_fini_function(void * message_memory)
{
  roscar_interfaces__msg__Controller__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember roscar_interfaces__msg__Controller__rosidl_typesupport_introspection_c__Controller_message_member_array[5] = {
  {
    "lx",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(roscar_interfaces__msg__Controller, lx),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ly",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(roscar_interfaces__msg__Controller, ly),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "r2",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(roscar_interfaces__msg__Controller, r2),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "l2",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(roscar_interfaces__msg__Controller, l2),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(roscar_interfaces__msg__Controller, x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers roscar_interfaces__msg__Controller__rosidl_typesupport_introspection_c__Controller_message_members = {
  "roscar_interfaces__msg",  // message namespace
  "Controller",  // message name
  5,  // number of fields
  sizeof(roscar_interfaces__msg__Controller),
  roscar_interfaces__msg__Controller__rosidl_typesupport_introspection_c__Controller_message_member_array,  // message members
  roscar_interfaces__msg__Controller__rosidl_typesupport_introspection_c__Controller_init_function,  // function to initialize message memory (memory has to be allocated)
  roscar_interfaces__msg__Controller__rosidl_typesupport_introspection_c__Controller_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t roscar_interfaces__msg__Controller__rosidl_typesupport_introspection_c__Controller_message_type_support_handle = {
  0,
  &roscar_interfaces__msg__Controller__rosidl_typesupport_introspection_c__Controller_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_roscar_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, roscar_interfaces, msg, Controller)() {
  if (!roscar_interfaces__msg__Controller__rosidl_typesupport_introspection_c__Controller_message_type_support_handle.typesupport_identifier) {
    roscar_interfaces__msg__Controller__rosidl_typesupport_introspection_c__Controller_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &roscar_interfaces__msg__Controller__rosidl_typesupport_introspection_c__Controller_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

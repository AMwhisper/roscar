// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from roscar_interfaces:msg/Pid.idl
// generated code does not contain a copyright notice

#ifndef ROSCAR_INTERFACES__MSG__DETAIL__PID__STRUCT_H_
#define ROSCAR_INTERFACES__MSG__DETAIL__PID__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'chassis_pid'
// Member 'gimbal_pid'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/Pid in the package roscar_interfaces.
typedef struct roscar_interfaces__msg__Pid
{
  rosidl_runtime_c__float__Sequence chassis_pid;
  rosidl_runtime_c__float__Sequence gimbal_pid;
} roscar_interfaces__msg__Pid;

// Struct for a sequence of roscar_interfaces__msg__Pid.
typedef struct roscar_interfaces__msg__Pid__Sequence
{
  roscar_interfaces__msg__Pid * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} roscar_interfaces__msg__Pid__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROSCAR_INTERFACES__MSG__DETAIL__PID__STRUCT_H_

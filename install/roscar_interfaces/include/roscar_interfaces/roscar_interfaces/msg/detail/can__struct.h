// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from roscar_interfaces:msg/Can.idl
// generated code does not contain a copyright notice

#ifndef ROSCAR_INTERFACES__MSG__DETAIL__CAN__STRUCT_H_
#define ROSCAR_INTERFACES__MSG__DETAIL__CAN__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'can'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/Can in the package roscar_interfaces.
typedef struct roscar_interfaces__msg__Can
{
  rosidl_runtime_c__float__Sequence can;
} roscar_interfaces__msg__Can;

// Struct for a sequence of roscar_interfaces__msg__Can.
typedef struct roscar_interfaces__msg__Can__Sequence
{
  roscar_interfaces__msg__Can * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} roscar_interfaces__msg__Can__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROSCAR_INTERFACES__MSG__DETAIL__CAN__STRUCT_H_

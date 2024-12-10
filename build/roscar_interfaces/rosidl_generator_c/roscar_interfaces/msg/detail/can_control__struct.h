// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from roscar_interfaces:msg/CanControl.idl
// generated code does not contain a copyright notice

#ifndef ROSCAR_INTERFACES__MSG__DETAIL__CAN_CONTROL__STRUCT_H_
#define ROSCAR_INTERFACES__MSG__DETAIL__CAN_CONTROL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/CanControl in the package roscar_interfaces.
typedef struct roscar_interfaces__msg__CanControl
{
  uint8_t structure_needs_at_least_one_member;
} roscar_interfaces__msg__CanControl;

// Struct for a sequence of roscar_interfaces__msg__CanControl.
typedef struct roscar_interfaces__msg__CanControl__Sequence
{
  roscar_interfaces__msg__CanControl * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} roscar_interfaces__msg__CanControl__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROSCAR_INTERFACES__MSG__DETAIL__CAN_CONTROL__STRUCT_H_

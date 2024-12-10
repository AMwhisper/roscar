// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from roscar_interfaces:msg/Controller.idl
// generated code does not contain a copyright notice

#ifndef ROSCAR_INTERFACES__MSG__DETAIL__CONTROLLER__STRUCT_H_
#define ROSCAR_INTERFACES__MSG__DETAIL__CONTROLLER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Controller in the package roscar_interfaces.
typedef struct roscar_interfaces__msg__Controller
{
  float lx;
  float ly;
  uint8_t r2;
  uint8_t l2;
  uint8_t x;
} roscar_interfaces__msg__Controller;

// Struct for a sequence of roscar_interfaces__msg__Controller.
typedef struct roscar_interfaces__msg__Controller__Sequence
{
  roscar_interfaces__msg__Controller * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} roscar_interfaces__msg__Controller__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROSCAR_INTERFACES__MSG__DETAIL__CONTROLLER__STRUCT_H_

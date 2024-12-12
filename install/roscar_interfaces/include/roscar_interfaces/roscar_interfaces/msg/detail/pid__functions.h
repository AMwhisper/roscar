// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from roscar_interfaces:msg/Pid.idl
// generated code does not contain a copyright notice

#ifndef ROSCAR_INTERFACES__MSG__DETAIL__PID__FUNCTIONS_H_
#define ROSCAR_INTERFACES__MSG__DETAIL__PID__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "roscar_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "roscar_interfaces/msg/detail/pid__struct.h"

/// Initialize msg/Pid message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * roscar_interfaces__msg__Pid
 * )) before or use
 * roscar_interfaces__msg__Pid__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_roscar_interfaces
bool
roscar_interfaces__msg__Pid__init(roscar_interfaces__msg__Pid * msg);

/// Finalize msg/Pid message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_roscar_interfaces
void
roscar_interfaces__msg__Pid__fini(roscar_interfaces__msg__Pid * msg);

/// Create msg/Pid message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * roscar_interfaces__msg__Pid__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_roscar_interfaces
roscar_interfaces__msg__Pid *
roscar_interfaces__msg__Pid__create();

/// Destroy msg/Pid message.
/**
 * It calls
 * roscar_interfaces__msg__Pid__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_roscar_interfaces
void
roscar_interfaces__msg__Pid__destroy(roscar_interfaces__msg__Pid * msg);

/// Check for msg/Pid message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_roscar_interfaces
bool
roscar_interfaces__msg__Pid__are_equal(const roscar_interfaces__msg__Pid * lhs, const roscar_interfaces__msg__Pid * rhs);

/// Copy a msg/Pid message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_roscar_interfaces
bool
roscar_interfaces__msg__Pid__copy(
  const roscar_interfaces__msg__Pid * input,
  roscar_interfaces__msg__Pid * output);

/// Initialize array of msg/Pid messages.
/**
 * It allocates the memory for the number of elements and calls
 * roscar_interfaces__msg__Pid__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_roscar_interfaces
bool
roscar_interfaces__msg__Pid__Sequence__init(roscar_interfaces__msg__Pid__Sequence * array, size_t size);

/// Finalize array of msg/Pid messages.
/**
 * It calls
 * roscar_interfaces__msg__Pid__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_roscar_interfaces
void
roscar_interfaces__msg__Pid__Sequence__fini(roscar_interfaces__msg__Pid__Sequence * array);

/// Create array of msg/Pid messages.
/**
 * It allocates the memory for the array and calls
 * roscar_interfaces__msg__Pid__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_roscar_interfaces
roscar_interfaces__msg__Pid__Sequence *
roscar_interfaces__msg__Pid__Sequence__create(size_t size);

/// Destroy array of msg/Pid messages.
/**
 * It calls
 * roscar_interfaces__msg__Pid__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_roscar_interfaces
void
roscar_interfaces__msg__Pid__Sequence__destroy(roscar_interfaces__msg__Pid__Sequence * array);

/// Check for msg/Pid message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_roscar_interfaces
bool
roscar_interfaces__msg__Pid__Sequence__are_equal(const roscar_interfaces__msg__Pid__Sequence * lhs, const roscar_interfaces__msg__Pid__Sequence * rhs);

/// Copy an array of msg/Pid messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_roscar_interfaces
bool
roscar_interfaces__msg__Pid__Sequence__copy(
  const roscar_interfaces__msg__Pid__Sequence * input,
  roscar_interfaces__msg__Pid__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // ROSCAR_INTERFACES__MSG__DETAIL__PID__FUNCTIONS_H_

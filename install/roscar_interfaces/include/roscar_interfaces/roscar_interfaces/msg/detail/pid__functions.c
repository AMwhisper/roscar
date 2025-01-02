// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from roscar_interfaces:msg/Pid.idl
// generated code does not contain a copyright notice
#include "roscar_interfaces/msg/detail/pid__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `chassis_pid`
// Member `gimbal_pid`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
roscar_interfaces__msg__Pid__init(roscar_interfaces__msg__Pid * msg)
{
  if (!msg) {
    return false;
  }
  // chassis_pid
  if (!rosidl_runtime_c__float__Sequence__init(&msg->chassis_pid, 0)) {
    roscar_interfaces__msg__Pid__fini(msg);
    return false;
  }
  // gimbal_pid
  if (!rosidl_runtime_c__float__Sequence__init(&msg->gimbal_pid, 0)) {
    roscar_interfaces__msg__Pid__fini(msg);
    return false;
  }
  return true;
}

void
roscar_interfaces__msg__Pid__fini(roscar_interfaces__msg__Pid * msg)
{
  if (!msg) {
    return;
  }
  // chassis_pid
  rosidl_runtime_c__float__Sequence__fini(&msg->chassis_pid);
  // gimbal_pid
  rosidl_runtime_c__float__Sequence__fini(&msg->gimbal_pid);
}

bool
roscar_interfaces__msg__Pid__are_equal(const roscar_interfaces__msg__Pid * lhs, const roscar_interfaces__msg__Pid * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // chassis_pid
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->chassis_pid), &(rhs->chassis_pid)))
  {
    return false;
  }
  // gimbal_pid
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->gimbal_pid), &(rhs->gimbal_pid)))
  {
    return false;
  }
  return true;
}

bool
roscar_interfaces__msg__Pid__copy(
  const roscar_interfaces__msg__Pid * input,
  roscar_interfaces__msg__Pid * output)
{
  if (!input || !output) {
    return false;
  }
  // chassis_pid
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->chassis_pid), &(output->chassis_pid)))
  {
    return false;
  }
  // gimbal_pid
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->gimbal_pid), &(output->gimbal_pid)))
  {
    return false;
  }
  return true;
}

roscar_interfaces__msg__Pid *
roscar_interfaces__msg__Pid__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  roscar_interfaces__msg__Pid * msg = (roscar_interfaces__msg__Pid *)allocator.allocate(sizeof(roscar_interfaces__msg__Pid), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(roscar_interfaces__msg__Pid));
  bool success = roscar_interfaces__msg__Pid__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
roscar_interfaces__msg__Pid__destroy(roscar_interfaces__msg__Pid * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    roscar_interfaces__msg__Pid__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
roscar_interfaces__msg__Pid__Sequence__init(roscar_interfaces__msg__Pid__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  roscar_interfaces__msg__Pid * data = NULL;

  if (size) {
    data = (roscar_interfaces__msg__Pid *)allocator.zero_allocate(size, sizeof(roscar_interfaces__msg__Pid), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = roscar_interfaces__msg__Pid__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        roscar_interfaces__msg__Pid__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
roscar_interfaces__msg__Pid__Sequence__fini(roscar_interfaces__msg__Pid__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      roscar_interfaces__msg__Pid__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

roscar_interfaces__msg__Pid__Sequence *
roscar_interfaces__msg__Pid__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  roscar_interfaces__msg__Pid__Sequence * array = (roscar_interfaces__msg__Pid__Sequence *)allocator.allocate(sizeof(roscar_interfaces__msg__Pid__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = roscar_interfaces__msg__Pid__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
roscar_interfaces__msg__Pid__Sequence__destroy(roscar_interfaces__msg__Pid__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    roscar_interfaces__msg__Pid__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
roscar_interfaces__msg__Pid__Sequence__are_equal(const roscar_interfaces__msg__Pid__Sequence * lhs, const roscar_interfaces__msg__Pid__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!roscar_interfaces__msg__Pid__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
roscar_interfaces__msg__Pid__Sequence__copy(
  const roscar_interfaces__msg__Pid__Sequence * input,
  roscar_interfaces__msg__Pid__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(roscar_interfaces__msg__Pid);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    roscar_interfaces__msg__Pid * data =
      (roscar_interfaces__msg__Pid *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!roscar_interfaces__msg__Pid__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          roscar_interfaces__msg__Pid__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!roscar_interfaces__msg__Pid__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

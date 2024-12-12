// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from roscar_interfaces:msg/Can.idl
// generated code does not contain a copyright notice
#include "roscar_interfaces/msg/detail/can__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `can`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
roscar_interfaces__msg__Can__init(roscar_interfaces__msg__Can * msg)
{
  if (!msg) {
    return false;
  }
  // can
  if (!rosidl_runtime_c__float__Sequence__init(&msg->can, 0)) {
    roscar_interfaces__msg__Can__fini(msg);
    return false;
  }
  return true;
}

void
roscar_interfaces__msg__Can__fini(roscar_interfaces__msg__Can * msg)
{
  if (!msg) {
    return;
  }
  // can
  rosidl_runtime_c__float__Sequence__fini(&msg->can);
}

bool
roscar_interfaces__msg__Can__are_equal(const roscar_interfaces__msg__Can * lhs, const roscar_interfaces__msg__Can * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // can
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->can), &(rhs->can)))
  {
    return false;
  }
  return true;
}

bool
roscar_interfaces__msg__Can__copy(
  const roscar_interfaces__msg__Can * input,
  roscar_interfaces__msg__Can * output)
{
  if (!input || !output) {
    return false;
  }
  // can
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->can), &(output->can)))
  {
    return false;
  }
  return true;
}

roscar_interfaces__msg__Can *
roscar_interfaces__msg__Can__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  roscar_interfaces__msg__Can * msg = (roscar_interfaces__msg__Can *)allocator.allocate(sizeof(roscar_interfaces__msg__Can), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(roscar_interfaces__msg__Can));
  bool success = roscar_interfaces__msg__Can__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
roscar_interfaces__msg__Can__destroy(roscar_interfaces__msg__Can * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    roscar_interfaces__msg__Can__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
roscar_interfaces__msg__Can__Sequence__init(roscar_interfaces__msg__Can__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  roscar_interfaces__msg__Can * data = NULL;

  if (size) {
    data = (roscar_interfaces__msg__Can *)allocator.zero_allocate(size, sizeof(roscar_interfaces__msg__Can), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = roscar_interfaces__msg__Can__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        roscar_interfaces__msg__Can__fini(&data[i - 1]);
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
roscar_interfaces__msg__Can__Sequence__fini(roscar_interfaces__msg__Can__Sequence * array)
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
      roscar_interfaces__msg__Can__fini(&array->data[i]);
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

roscar_interfaces__msg__Can__Sequence *
roscar_interfaces__msg__Can__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  roscar_interfaces__msg__Can__Sequence * array = (roscar_interfaces__msg__Can__Sequence *)allocator.allocate(sizeof(roscar_interfaces__msg__Can__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = roscar_interfaces__msg__Can__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
roscar_interfaces__msg__Can__Sequence__destroy(roscar_interfaces__msg__Can__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    roscar_interfaces__msg__Can__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
roscar_interfaces__msg__Can__Sequence__are_equal(const roscar_interfaces__msg__Can__Sequence * lhs, const roscar_interfaces__msg__Can__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!roscar_interfaces__msg__Can__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
roscar_interfaces__msg__Can__Sequence__copy(
  const roscar_interfaces__msg__Can__Sequence * input,
  roscar_interfaces__msg__Can__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(roscar_interfaces__msg__Can);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    roscar_interfaces__msg__Can * data =
      (roscar_interfaces__msg__Can *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!roscar_interfaces__msg__Can__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          roscar_interfaces__msg__Can__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!roscar_interfaces__msg__Can__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

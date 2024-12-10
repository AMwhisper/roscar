// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from roscar_interfaces:msg/CanControl.idl
// generated code does not contain a copyright notice
#include "roscar_interfaces/msg/detail/can_control__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
roscar_interfaces__msg__CanControl__init(roscar_interfaces__msg__CanControl * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
roscar_interfaces__msg__CanControl__fini(roscar_interfaces__msg__CanControl * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

bool
roscar_interfaces__msg__CanControl__are_equal(const roscar_interfaces__msg__CanControl * lhs, const roscar_interfaces__msg__CanControl * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // structure_needs_at_least_one_member
  if (lhs->structure_needs_at_least_one_member != rhs->structure_needs_at_least_one_member) {
    return false;
  }
  return true;
}

bool
roscar_interfaces__msg__CanControl__copy(
  const roscar_interfaces__msg__CanControl * input,
  roscar_interfaces__msg__CanControl * output)
{
  if (!input || !output) {
    return false;
  }
  // structure_needs_at_least_one_member
  output->structure_needs_at_least_one_member = input->structure_needs_at_least_one_member;
  return true;
}

roscar_interfaces__msg__CanControl *
roscar_interfaces__msg__CanControl__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  roscar_interfaces__msg__CanControl * msg = (roscar_interfaces__msg__CanControl *)allocator.allocate(sizeof(roscar_interfaces__msg__CanControl), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(roscar_interfaces__msg__CanControl));
  bool success = roscar_interfaces__msg__CanControl__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
roscar_interfaces__msg__CanControl__destroy(roscar_interfaces__msg__CanControl * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    roscar_interfaces__msg__CanControl__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
roscar_interfaces__msg__CanControl__Sequence__init(roscar_interfaces__msg__CanControl__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  roscar_interfaces__msg__CanControl * data = NULL;

  if (size) {
    data = (roscar_interfaces__msg__CanControl *)allocator.zero_allocate(size, sizeof(roscar_interfaces__msg__CanControl), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = roscar_interfaces__msg__CanControl__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        roscar_interfaces__msg__CanControl__fini(&data[i - 1]);
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
roscar_interfaces__msg__CanControl__Sequence__fini(roscar_interfaces__msg__CanControl__Sequence * array)
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
      roscar_interfaces__msg__CanControl__fini(&array->data[i]);
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

roscar_interfaces__msg__CanControl__Sequence *
roscar_interfaces__msg__CanControl__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  roscar_interfaces__msg__CanControl__Sequence * array = (roscar_interfaces__msg__CanControl__Sequence *)allocator.allocate(sizeof(roscar_interfaces__msg__CanControl__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = roscar_interfaces__msg__CanControl__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
roscar_interfaces__msg__CanControl__Sequence__destroy(roscar_interfaces__msg__CanControl__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    roscar_interfaces__msg__CanControl__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
roscar_interfaces__msg__CanControl__Sequence__are_equal(const roscar_interfaces__msg__CanControl__Sequence * lhs, const roscar_interfaces__msg__CanControl__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!roscar_interfaces__msg__CanControl__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
roscar_interfaces__msg__CanControl__Sequence__copy(
  const roscar_interfaces__msg__CanControl__Sequence * input,
  roscar_interfaces__msg__CanControl__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(roscar_interfaces__msg__CanControl);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    roscar_interfaces__msg__CanControl * data =
      (roscar_interfaces__msg__CanControl *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!roscar_interfaces__msg__CanControl__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          roscar_interfaces__msg__CanControl__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!roscar_interfaces__msg__CanControl__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

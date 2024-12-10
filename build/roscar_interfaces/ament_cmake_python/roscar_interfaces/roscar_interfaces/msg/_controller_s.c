// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from roscar_interfaces:msg/Controller.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "roscar_interfaces/msg/detail/controller__struct.h"
#include "roscar_interfaces/msg/detail/controller__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool roscar_interfaces__msg__controller__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[45];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("roscar_interfaces.msg._controller.Controller", full_classname_dest, 44) == 0);
  }
  roscar_interfaces__msg__Controller * ros_message = _ros_message;
  {  // lx
    PyObject * field = PyObject_GetAttrString(_pymsg, "lx");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->lx = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // ly
    PyObject * field = PyObject_GetAttrString(_pymsg, "ly");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->ly = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // r2
    PyObject * field = PyObject_GetAttrString(_pymsg, "r2");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->r2 = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // l2
    PyObject * field = PyObject_GetAttrString(_pymsg, "l2");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->l2 = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // x
    PyObject * field = PyObject_GetAttrString(_pymsg, "x");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->x = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * roscar_interfaces__msg__controller__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Controller */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("roscar_interfaces.msg._controller");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Controller");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  roscar_interfaces__msg__Controller * ros_message = (roscar_interfaces__msg__Controller *)raw_ros_message;
  {  // lx
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->lx);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lx", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ly
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->ly);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ly", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // r2
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->r2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "r2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // l2
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->l2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "l2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // x
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from mobileye_560_660_msgs:msg/LkaReferencePoints.idl
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
#include "mobileye_560_660_msgs/msg/detail/lka_reference_points__struct.h"
#include "mobileye_560_660_msgs/msg/detail/lka_reference_points__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool mobileye_560_660_msgs__msg__lka_reference_points__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[67];
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
    assert(strncmp("mobileye_560_660_msgs.msg._lka_reference_points.LkaReferencePoints", full_classname_dest, 66) == 0);
  }
  mobileye_560_660_msgs__msg__LkaReferencePoints * ros_message = _ros_message;
  {  // header
    PyObject * field = PyObject_GetAttrString(_pymsg, "header");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__header__convert_from_py(field, &ros_message->header)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // ref_point_1_position
    PyObject * field = PyObject_GetAttrString(_pymsg, "ref_point_1_position");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->ref_point_1_position = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // ref_point_1_distance
    PyObject * field = PyObject_GetAttrString(_pymsg, "ref_point_1_distance");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->ref_point_1_distance = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // ref_point_1_validity
    PyObject * field = PyObject_GetAttrString(_pymsg, "ref_point_1_validity");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->ref_point_1_validity = (Py_True == field);
    Py_DECREF(field);
  }
  {  // ref_point_2_position
    PyObject * field = PyObject_GetAttrString(_pymsg, "ref_point_2_position");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->ref_point_2_position = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // ref_point_2_distance
    PyObject * field = PyObject_GetAttrString(_pymsg, "ref_point_2_distance");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->ref_point_2_distance = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // ref_point_2_validity
    PyObject * field = PyObject_GetAttrString(_pymsg, "ref_point_2_validity");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->ref_point_2_validity = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * mobileye_560_660_msgs__msg__lka_reference_points__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of LkaReferencePoints */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("mobileye_560_660_msgs.msg._lka_reference_points");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "LkaReferencePoints");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  mobileye_560_660_msgs__msg__LkaReferencePoints * ros_message = (mobileye_560_660_msgs__msg__LkaReferencePoints *)raw_ros_message;
  {  // header
    PyObject * field = NULL;
    field = std_msgs__msg__header__convert_to_py(&ros_message->header);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "header", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ref_point_1_position
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->ref_point_1_position);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ref_point_1_position", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ref_point_1_distance
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->ref_point_1_distance);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ref_point_1_distance", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ref_point_1_validity
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->ref_point_1_validity ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ref_point_1_validity", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ref_point_2_position
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->ref_point_2_position);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ref_point_2_position", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ref_point_2_distance
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->ref_point_2_distance);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ref_point_2_distance", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ref_point_2_validity
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->ref_point_2_validity ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ref_point_2_validity", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

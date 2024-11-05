// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from neobotix_usboard_msgs:msg/AnalogIn.idl
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
#include "neobotix_usboard_msgs/msg/detail/analog_in__struct.h"
#include "neobotix_usboard_msgs/msg/detail/analog_in__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool neobotix_usboard_msgs__msg__analog_in__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[46];
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
    assert(strncmp("neobotix_usboard_msgs.msg._analog_in.AnalogIn", full_classname_dest, 45) == 0);
  }
  neobotix_usboard_msgs__msg__AnalogIn * ros_message = _ros_message;
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
  {  // command
    PyObject * field = PyObject_GetAttrString(_pymsg, "command");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->command = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // analog_data_ch4_low_byte
    PyObject * field = PyObject_GetAttrString(_pymsg, "analog_data_ch4_low_byte");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->analog_data_ch4_low_byte = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // analog_data_ch4_high_bits
    PyObject * field = PyObject_GetAttrString(_pymsg, "analog_data_ch4_high_bits");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->analog_data_ch4_high_bits = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // analog_data_ch3_low_byte
    PyObject * field = PyObject_GetAttrString(_pymsg, "analog_data_ch3_low_byte");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->analog_data_ch3_low_byte = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // analog_data_ch3_high_bits
    PyObject * field = PyObject_GetAttrString(_pymsg, "analog_data_ch3_high_bits");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->analog_data_ch3_high_bits = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // analog_data_ch2_low_byte
    PyObject * field = PyObject_GetAttrString(_pymsg, "analog_data_ch2_low_byte");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->analog_data_ch2_low_byte = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // analog_data_ch2_high_bits
    PyObject * field = PyObject_GetAttrString(_pymsg, "analog_data_ch2_high_bits");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->analog_data_ch2_high_bits = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // analog_data_ch1_low_byte
    PyObject * field = PyObject_GetAttrString(_pymsg, "analog_data_ch1_low_byte");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->analog_data_ch1_low_byte = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // analog_data_ch1_high_bits
    PyObject * field = PyObject_GetAttrString(_pymsg, "analog_data_ch1_high_bits");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->analog_data_ch1_high_bits = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * neobotix_usboard_msgs__msg__analog_in__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of AnalogIn */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("neobotix_usboard_msgs.msg._analog_in");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "AnalogIn");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  neobotix_usboard_msgs__msg__AnalogIn * ros_message = (neobotix_usboard_msgs__msg__AnalogIn *)raw_ros_message;
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
  {  // command
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->command);
    {
      int rc = PyObject_SetAttrString(_pymessage, "command", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // analog_data_ch4_low_byte
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->analog_data_ch4_low_byte);
    {
      int rc = PyObject_SetAttrString(_pymessage, "analog_data_ch4_low_byte", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // analog_data_ch4_high_bits
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->analog_data_ch4_high_bits);
    {
      int rc = PyObject_SetAttrString(_pymessage, "analog_data_ch4_high_bits", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // analog_data_ch3_low_byte
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->analog_data_ch3_low_byte);
    {
      int rc = PyObject_SetAttrString(_pymessage, "analog_data_ch3_low_byte", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // analog_data_ch3_high_bits
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->analog_data_ch3_high_bits);
    {
      int rc = PyObject_SetAttrString(_pymessage, "analog_data_ch3_high_bits", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // analog_data_ch2_low_byte
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->analog_data_ch2_low_byte);
    {
      int rc = PyObject_SetAttrString(_pymessage, "analog_data_ch2_low_byte", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // analog_data_ch2_high_bits
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->analog_data_ch2_high_bits);
    {
      int rc = PyObject_SetAttrString(_pymessage, "analog_data_ch2_high_bits", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // analog_data_ch1_low_byte
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->analog_data_ch1_low_byte);
    {
      int rc = PyObject_SetAttrString(_pymessage, "analog_data_ch1_low_byte", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // analog_data_ch1_high_bits
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->analog_data_ch1_high_bits);
    {
      int rc = PyObject_SetAttrString(_pymessage, "analog_data_ch1_high_bits", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

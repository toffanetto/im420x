// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from delphi_esr_msgs:msg/EsrStatus5.idl
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
#include "delphi_esr_msgs/msg/detail/esr_status5__struct.h"
#include "delphi_esr_msgs/msg/detail/esr_status5__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool delphi_esr_msgs__msg__esr_status5__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[44];
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
    assert(strncmp("delphi_esr_msgs.msg._esr_status5.EsrStatus5", full_classname_dest, 43) == 0);
  }
  delphi_esr_msgs__msg__EsrStatus5 * ros_message = _ros_message;
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
  {  // canmsg
    PyObject * field = PyObject_GetAttrString(_pymsg, "canmsg");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->canmsg, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // swbatt_a2d
    PyObject * field = PyObject_GetAttrString(_pymsg, "swbatt_a2d");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->swbatt_a2d = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // ignp_a2d
    PyObject * field = PyObject_GetAttrString(_pymsg, "ignp_a2d");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ignp_a2d = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // temp1_a2d
    PyObject * field = PyObject_GetAttrString(_pymsg, "temp1_a2d");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->temp1_a2d = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // temp2_a2d
    PyObject * field = PyObject_GetAttrString(_pymsg, "temp2_a2d");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->temp2_a2d = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // supply_5va_a2d
    PyObject * field = PyObject_GetAttrString(_pymsg, "supply_5va_a2d");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->supply_5va_a2d = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // supply_5vdx_a2d
    PyObject * field = PyObject_GetAttrString(_pymsg, "supply_5vdx_a2d");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->supply_5vdx_a2d = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // supply_3p3v_a2d
    PyObject * field = PyObject_GetAttrString(_pymsg, "supply_3p3v_a2d");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->supply_3p3v_a2d = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // supply_10v_a2d
    PyObject * field = PyObject_GetAttrString(_pymsg, "supply_10v_a2d");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->supply_10v_a2d = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * delphi_esr_msgs__msg__esr_status5__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of EsrStatus5 */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("delphi_esr_msgs.msg._esr_status5");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "EsrStatus5");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  delphi_esr_msgs__msg__EsrStatus5 * ros_message = (delphi_esr_msgs__msg__EsrStatus5 *)raw_ros_message;
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
  {  // canmsg
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->canmsg.data,
      strlen(ros_message->canmsg.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "canmsg", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // swbatt_a2d
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->swbatt_a2d);
    {
      int rc = PyObject_SetAttrString(_pymessage, "swbatt_a2d", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ignp_a2d
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->ignp_a2d);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ignp_a2d", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // temp1_a2d
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->temp1_a2d);
    {
      int rc = PyObject_SetAttrString(_pymessage, "temp1_a2d", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // temp2_a2d
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->temp2_a2d);
    {
      int rc = PyObject_SetAttrString(_pymessage, "temp2_a2d", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // supply_5va_a2d
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->supply_5va_a2d);
    {
      int rc = PyObject_SetAttrString(_pymessage, "supply_5va_a2d", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // supply_5vdx_a2d
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->supply_5vdx_a2d);
    {
      int rc = PyObject_SetAttrString(_pymessage, "supply_5vdx_a2d", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // supply_3p3v_a2d
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->supply_3p3v_a2d);
    {
      int rc = PyObject_SetAttrString(_pymessage, "supply_3p3v_a2d", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // supply_10v_a2d
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->supply_10v_a2d);
    {
      int rc = PyObject_SetAttrString(_pymessage, "supply_10v_a2d", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

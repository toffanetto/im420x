// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from delphi_mrr_msgs:msg/VehicleStateMsg3.idl
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
#include "delphi_mrr_msgs/msg/detail/vehicle_state_msg3__struct.h"
#include "delphi_mrr_msgs/msg/detail/vehicle_state_msg3__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool delphi_mrr_msgs__msg__vehicle_state_msg3__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[57];
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
    assert(strncmp("delphi_mrr_msgs.msg._vehicle_state_msg3.VehicleStateMsg3", full_classname_dest, 56) == 0);
  }
  delphi_mrr_msgs__msg__VehicleStateMsg3 * ros_message = _ros_message;
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
  {  // yaw_rate_reference_valid
    PyObject * field = PyObject_GetAttrString(_pymsg, "yaw_rate_reference_valid");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->yaw_rate_reference_valid = (Py_True == field);
    Py_DECREF(field);
  }
  {  // yaw_rate_reference
    PyObject * field = PyObject_GetAttrString(_pymsg, "yaw_rate_reference");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->yaw_rate_reference = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // can_veh_long_accel_qf
    PyObject * field = PyObject_GetAttrString(_pymsg, "can_veh_long_accel_qf");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->can_veh_long_accel_qf = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // can_veh_long_accel
    PyObject * field = PyObject_GetAttrString(_pymsg, "can_veh_long_accel");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->can_veh_long_accel = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * delphi_mrr_msgs__msg__vehicle_state_msg3__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of VehicleStateMsg3 */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("delphi_mrr_msgs.msg._vehicle_state_msg3");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "VehicleStateMsg3");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  delphi_mrr_msgs__msg__VehicleStateMsg3 * ros_message = (delphi_mrr_msgs__msg__VehicleStateMsg3 *)raw_ros_message;
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
  {  // yaw_rate_reference_valid
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->yaw_rate_reference_valid ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "yaw_rate_reference_valid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // yaw_rate_reference
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->yaw_rate_reference);
    {
      int rc = PyObject_SetAttrString(_pymessage, "yaw_rate_reference", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // can_veh_long_accel_qf
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->can_veh_long_accel_qf);
    {
      int rc = PyObject_SetAttrString(_pymessage, "can_veh_long_accel_qf", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // can_veh_long_accel
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->can_veh_long_accel);
    {
      int rc = PyObject_SetAttrString(_pymessage, "can_veh_long_accel", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

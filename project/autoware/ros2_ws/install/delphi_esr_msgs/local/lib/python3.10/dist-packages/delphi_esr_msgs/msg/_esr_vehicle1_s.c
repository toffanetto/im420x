// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from delphi_esr_msgs:msg/EsrVehicle1.idl
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
#include "delphi_esr_msgs/msg/detail/esr_vehicle1__struct.h"
#include "delphi_esr_msgs/msg/detail/esr_vehicle1__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool delphi_esr_msgs__msg__esr_vehicle1__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("delphi_esr_msgs.msg._esr_vehicle1.EsrVehicle1", full_classname_dest, 45) == 0);
  }
  delphi_esr_msgs__msg__EsrVehicle1 * ros_message = _ros_message;
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
  {  // vehicle_speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "vehicle_speed");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->vehicle_speed = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // vehicle_speed_direction
    PyObject * field = PyObject_GetAttrString(_pymsg, "vehicle_speed_direction");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->vehicle_speed_direction = (Py_True == field);
    Py_DECREF(field);
  }
  {  // yaw_rate
    PyObject * field = PyObject_GetAttrString(_pymsg, "yaw_rate");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->yaw_rate = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // yaw_rate_validity
    PyObject * field = PyObject_GetAttrString(_pymsg, "yaw_rate_validity");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->yaw_rate_validity = (Py_True == field);
    Py_DECREF(field);
  }
  {  // steering_angle_rate_sign
    PyObject * field = PyObject_GetAttrString(_pymsg, "steering_angle_rate_sign");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->steering_angle_rate_sign = (Py_True == field);
    Py_DECREF(field);
  }
  {  // radius_curvature
    PyObject * field = PyObject_GetAttrString(_pymsg, "radius_curvature");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->radius_curvature = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // steering_angle_validity
    PyObject * field = PyObject_GetAttrString(_pymsg, "steering_angle_validity");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->steering_angle_validity = (Py_True == field);
    Py_DECREF(field);
  }
  {  // steering_angle_sign
    PyObject * field = PyObject_GetAttrString(_pymsg, "steering_angle_sign");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->steering_angle_sign = (Py_True == field);
    Py_DECREF(field);
  }
  {  // steering_angle
    PyObject * field = PyObject_GetAttrString(_pymsg, "steering_angle");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->steering_angle = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // steering_angle_rate
    PyObject * field = PyObject_GetAttrString(_pymsg, "steering_angle_rate");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->steering_angle_rate = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * delphi_esr_msgs__msg__esr_vehicle1__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of EsrVehicle1 */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("delphi_esr_msgs.msg._esr_vehicle1");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "EsrVehicle1");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  delphi_esr_msgs__msg__EsrVehicle1 * ros_message = (delphi_esr_msgs__msg__EsrVehicle1 *)raw_ros_message;
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
  {  // vehicle_speed
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->vehicle_speed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vehicle_speed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vehicle_speed_direction
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->vehicle_speed_direction ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vehicle_speed_direction", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // yaw_rate
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->yaw_rate);
    {
      int rc = PyObject_SetAttrString(_pymessage, "yaw_rate", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // yaw_rate_validity
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->yaw_rate_validity ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "yaw_rate_validity", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // steering_angle_rate_sign
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->steering_angle_rate_sign ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "steering_angle_rate_sign", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // radius_curvature
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->radius_curvature);
    {
      int rc = PyObject_SetAttrString(_pymessage, "radius_curvature", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // steering_angle_validity
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->steering_angle_validity ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "steering_angle_validity", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // steering_angle_sign
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->steering_angle_sign ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "steering_angle_sign", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // steering_angle
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->steering_angle);
    {
      int rc = PyObject_SetAttrString(_pymessage, "steering_angle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // steering_angle_rate
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->steering_angle_rate);
    {
      int rc = PyObject_SetAttrString(_pymessage, "steering_angle_rate", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

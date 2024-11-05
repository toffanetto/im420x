// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from delphi_esr_msgs:msg/EsrTrackMotionPowerGroup.idl
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
#include "delphi_esr_msgs/msg/detail/esr_track_motion_power_group__struct.h"
#include "delphi_esr_msgs/msg/detail/esr_track_motion_power_group__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "delphi_esr_msgs/msg/detail/esr_track_motion_power_track__functions.h"
// end nested array functions include
ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);
bool delphi_esr_msgs__msg__esr_track_motion_power_track__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * delphi_esr_msgs__msg__esr_track_motion_power_track__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool delphi_esr_msgs__msg__esr_track_motion_power_group__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[75];
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
    assert(strncmp("delphi_esr_msgs.msg._esr_track_motion_power_group.EsrTrackMotionPowerGroup", full_classname_dest, 74) == 0);
  }
  delphi_esr_msgs__msg__EsrTrackMotionPowerGroup * ros_message = _ros_message;
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
  {  // rolling_count_2
    PyObject * field = PyObject_GetAttrString(_pymsg, "rolling_count_2");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->rolling_count_2 = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // can_id_group
    PyObject * field = PyObject_GetAttrString(_pymsg, "can_id_group");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->can_id_group = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // tracks
    PyObject * field = PyObject_GetAttrString(_pymsg, "tracks");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'tracks'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!delphi_esr_msgs__msg__EsrTrackMotionPowerTrack__Sequence__init(&(ros_message->tracks), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create delphi_esr_msgs__msg__EsrTrackMotionPowerTrack__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    delphi_esr_msgs__msg__EsrTrackMotionPowerTrack * dest = ros_message->tracks.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!delphi_esr_msgs__msg__esr_track_motion_power_track__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * delphi_esr_msgs__msg__esr_track_motion_power_group__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of EsrTrackMotionPowerGroup */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("delphi_esr_msgs.msg._esr_track_motion_power_group");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "EsrTrackMotionPowerGroup");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  delphi_esr_msgs__msg__EsrTrackMotionPowerGroup * ros_message = (delphi_esr_msgs__msg__EsrTrackMotionPowerGroup *)raw_ros_message;
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
  {  // rolling_count_2
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->rolling_count_2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rolling_count_2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // can_id_group
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->can_id_group);
    {
      int rc = PyObject_SetAttrString(_pymessage, "can_id_group", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // tracks
    PyObject * field = NULL;
    size_t size = ros_message->tracks.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    delphi_esr_msgs__msg__EsrTrackMotionPowerTrack * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->tracks.data[i]);
      PyObject * pyitem = delphi_esr_msgs__msg__esr_track_motion_power_track__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "tracks", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

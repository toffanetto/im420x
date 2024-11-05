// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from ibeo_msgs:msg/HostVehicleState2807.idl
// generated code does not contain a copyright notice

#ifndef IBEO_MSGS__MSG__DETAIL__HOST_VEHICLE_STATE2807__FUNCTIONS_H_
#define IBEO_MSGS__MSG__DETAIL__HOST_VEHICLE_STATE2807__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "ibeo_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "ibeo_msgs/msg/detail/host_vehicle_state2807__struct.h"

/// Initialize msg/HostVehicleState2807 message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * ibeo_msgs__msg__HostVehicleState2807
 * )) before or use
 * ibeo_msgs__msg__HostVehicleState2807__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_ibeo_msgs
bool
ibeo_msgs__msg__HostVehicleState2807__init(ibeo_msgs__msg__HostVehicleState2807 * msg);

/// Finalize msg/HostVehicleState2807 message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ibeo_msgs
void
ibeo_msgs__msg__HostVehicleState2807__fini(ibeo_msgs__msg__HostVehicleState2807 * msg);

/// Create msg/HostVehicleState2807 message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * ibeo_msgs__msg__HostVehicleState2807__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ibeo_msgs
ibeo_msgs__msg__HostVehicleState2807 *
ibeo_msgs__msg__HostVehicleState2807__create();

/// Destroy msg/HostVehicleState2807 message.
/**
 * It calls
 * ibeo_msgs__msg__HostVehicleState2807__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ibeo_msgs
void
ibeo_msgs__msg__HostVehicleState2807__destroy(ibeo_msgs__msg__HostVehicleState2807 * msg);

/// Check for msg/HostVehicleState2807 message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ibeo_msgs
bool
ibeo_msgs__msg__HostVehicleState2807__are_equal(const ibeo_msgs__msg__HostVehicleState2807 * lhs, const ibeo_msgs__msg__HostVehicleState2807 * rhs);

/// Copy a msg/HostVehicleState2807 message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_ibeo_msgs
bool
ibeo_msgs__msg__HostVehicleState2807__copy(
  const ibeo_msgs__msg__HostVehicleState2807 * input,
  ibeo_msgs__msg__HostVehicleState2807 * output);

/// Initialize array of msg/HostVehicleState2807 messages.
/**
 * It allocates the memory for the number of elements and calls
 * ibeo_msgs__msg__HostVehicleState2807__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_ibeo_msgs
bool
ibeo_msgs__msg__HostVehicleState2807__Sequence__init(ibeo_msgs__msg__HostVehicleState2807__Sequence * array, size_t size);

/// Finalize array of msg/HostVehicleState2807 messages.
/**
 * It calls
 * ibeo_msgs__msg__HostVehicleState2807__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ibeo_msgs
void
ibeo_msgs__msg__HostVehicleState2807__Sequence__fini(ibeo_msgs__msg__HostVehicleState2807__Sequence * array);

/// Create array of msg/HostVehicleState2807 messages.
/**
 * It allocates the memory for the array and calls
 * ibeo_msgs__msg__HostVehicleState2807__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ibeo_msgs
ibeo_msgs__msg__HostVehicleState2807__Sequence *
ibeo_msgs__msg__HostVehicleState2807__Sequence__create(size_t size);

/// Destroy array of msg/HostVehicleState2807 messages.
/**
 * It calls
 * ibeo_msgs__msg__HostVehicleState2807__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ibeo_msgs
void
ibeo_msgs__msg__HostVehicleState2807__Sequence__destroy(ibeo_msgs__msg__HostVehicleState2807__Sequence * array);

/// Check for msg/HostVehicleState2807 message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ibeo_msgs
bool
ibeo_msgs__msg__HostVehicleState2807__Sequence__are_equal(const ibeo_msgs__msg__HostVehicleState2807__Sequence * lhs, const ibeo_msgs__msg__HostVehicleState2807__Sequence * rhs);

/// Copy an array of msg/HostVehicleState2807 messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_ibeo_msgs
bool
ibeo_msgs__msg__HostVehicleState2807__Sequence__copy(
  const ibeo_msgs__msg__HostVehicleState2807__Sequence * input,
  ibeo_msgs__msg__HostVehicleState2807__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // IBEO_MSGS__MSG__DETAIL__HOST_VEHICLE_STATE2807__FUNCTIONS_H_
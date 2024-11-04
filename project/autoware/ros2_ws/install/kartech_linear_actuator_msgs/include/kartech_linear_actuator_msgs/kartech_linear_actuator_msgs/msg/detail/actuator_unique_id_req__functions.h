// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from kartech_linear_actuator_msgs:msg/ActuatorUniqueIdReq.idl
// generated code does not contain a copyright notice

#ifndef KARTECH_LINEAR_ACTUATOR_MSGS__MSG__DETAIL__ACTUATOR_UNIQUE_ID_REQ__FUNCTIONS_H_
#define KARTECH_LINEAR_ACTUATOR_MSGS__MSG__DETAIL__ACTUATOR_UNIQUE_ID_REQ__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "kartech_linear_actuator_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "kartech_linear_actuator_msgs/msg/detail/actuator_unique_id_req__struct.h"

/// Initialize msg/ActuatorUniqueIdReq message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * kartech_linear_actuator_msgs__msg__ActuatorUniqueIdReq
 * )) before or use
 * kartech_linear_actuator_msgs__msg__ActuatorUniqueIdReq__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_kartech_linear_actuator_msgs
bool
kartech_linear_actuator_msgs__msg__ActuatorUniqueIdReq__init(kartech_linear_actuator_msgs__msg__ActuatorUniqueIdReq * msg);

/// Finalize msg/ActuatorUniqueIdReq message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_kartech_linear_actuator_msgs
void
kartech_linear_actuator_msgs__msg__ActuatorUniqueIdReq__fini(kartech_linear_actuator_msgs__msg__ActuatorUniqueIdReq * msg);

/// Create msg/ActuatorUniqueIdReq message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * kartech_linear_actuator_msgs__msg__ActuatorUniqueIdReq__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_kartech_linear_actuator_msgs
kartech_linear_actuator_msgs__msg__ActuatorUniqueIdReq *
kartech_linear_actuator_msgs__msg__ActuatorUniqueIdReq__create();

/// Destroy msg/ActuatorUniqueIdReq message.
/**
 * It calls
 * kartech_linear_actuator_msgs__msg__ActuatorUniqueIdReq__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_kartech_linear_actuator_msgs
void
kartech_linear_actuator_msgs__msg__ActuatorUniqueIdReq__destroy(kartech_linear_actuator_msgs__msg__ActuatorUniqueIdReq * msg);

/// Check for msg/ActuatorUniqueIdReq message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_kartech_linear_actuator_msgs
bool
kartech_linear_actuator_msgs__msg__ActuatorUniqueIdReq__are_equal(const kartech_linear_actuator_msgs__msg__ActuatorUniqueIdReq * lhs, const kartech_linear_actuator_msgs__msg__ActuatorUniqueIdReq * rhs);

/// Copy a msg/ActuatorUniqueIdReq message.
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
ROSIDL_GENERATOR_C_PUBLIC_kartech_linear_actuator_msgs
bool
kartech_linear_actuator_msgs__msg__ActuatorUniqueIdReq__copy(
  const kartech_linear_actuator_msgs__msg__ActuatorUniqueIdReq * input,
  kartech_linear_actuator_msgs__msg__ActuatorUniqueIdReq * output);

/// Initialize array of msg/ActuatorUniqueIdReq messages.
/**
 * It allocates the memory for the number of elements and calls
 * kartech_linear_actuator_msgs__msg__ActuatorUniqueIdReq__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_kartech_linear_actuator_msgs
bool
kartech_linear_actuator_msgs__msg__ActuatorUniqueIdReq__Sequence__init(kartech_linear_actuator_msgs__msg__ActuatorUniqueIdReq__Sequence * array, size_t size);

/// Finalize array of msg/ActuatorUniqueIdReq messages.
/**
 * It calls
 * kartech_linear_actuator_msgs__msg__ActuatorUniqueIdReq__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_kartech_linear_actuator_msgs
void
kartech_linear_actuator_msgs__msg__ActuatorUniqueIdReq__Sequence__fini(kartech_linear_actuator_msgs__msg__ActuatorUniqueIdReq__Sequence * array);

/// Create array of msg/ActuatorUniqueIdReq messages.
/**
 * It allocates the memory for the array and calls
 * kartech_linear_actuator_msgs__msg__ActuatorUniqueIdReq__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_kartech_linear_actuator_msgs
kartech_linear_actuator_msgs__msg__ActuatorUniqueIdReq__Sequence *
kartech_linear_actuator_msgs__msg__ActuatorUniqueIdReq__Sequence__create(size_t size);

/// Destroy array of msg/ActuatorUniqueIdReq messages.
/**
 * It calls
 * kartech_linear_actuator_msgs__msg__ActuatorUniqueIdReq__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_kartech_linear_actuator_msgs
void
kartech_linear_actuator_msgs__msg__ActuatorUniqueIdReq__Sequence__destroy(kartech_linear_actuator_msgs__msg__ActuatorUniqueIdReq__Sequence * array);

/// Check for msg/ActuatorUniqueIdReq message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_kartech_linear_actuator_msgs
bool
kartech_linear_actuator_msgs__msg__ActuatorUniqueIdReq__Sequence__are_equal(const kartech_linear_actuator_msgs__msg__ActuatorUniqueIdReq__Sequence * lhs, const kartech_linear_actuator_msgs__msg__ActuatorUniqueIdReq__Sequence * rhs);

/// Copy an array of msg/ActuatorUniqueIdReq messages.
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
ROSIDL_GENERATOR_C_PUBLIC_kartech_linear_actuator_msgs
bool
kartech_linear_actuator_msgs__msg__ActuatorUniqueIdReq__Sequence__copy(
  const kartech_linear_actuator_msgs__msg__ActuatorUniqueIdReq__Sequence * input,
  kartech_linear_actuator_msgs__msg__ActuatorUniqueIdReq__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // KARTECH_LINEAR_ACTUATOR_MSGS__MSG__DETAIL__ACTUATOR_UNIQUE_ID_REQ__FUNCTIONS_H_

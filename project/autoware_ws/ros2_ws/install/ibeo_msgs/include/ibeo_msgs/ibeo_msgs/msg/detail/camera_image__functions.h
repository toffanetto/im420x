// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from ibeo_msgs:msg/CameraImage.idl
// generated code does not contain a copyright notice

#ifndef IBEO_MSGS__MSG__DETAIL__CAMERA_IMAGE__FUNCTIONS_H_
#define IBEO_MSGS__MSG__DETAIL__CAMERA_IMAGE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "ibeo_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "ibeo_msgs/msg/detail/camera_image__struct.h"

/// Initialize msg/CameraImage message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * ibeo_msgs__msg__CameraImage
 * )) before or use
 * ibeo_msgs__msg__CameraImage__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_ibeo_msgs
bool
ibeo_msgs__msg__CameraImage__init(ibeo_msgs__msg__CameraImage * msg);

/// Finalize msg/CameraImage message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ibeo_msgs
void
ibeo_msgs__msg__CameraImage__fini(ibeo_msgs__msg__CameraImage * msg);

/// Create msg/CameraImage message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * ibeo_msgs__msg__CameraImage__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ibeo_msgs
ibeo_msgs__msg__CameraImage *
ibeo_msgs__msg__CameraImage__create();

/// Destroy msg/CameraImage message.
/**
 * It calls
 * ibeo_msgs__msg__CameraImage__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ibeo_msgs
void
ibeo_msgs__msg__CameraImage__destroy(ibeo_msgs__msg__CameraImage * msg);

/// Check for msg/CameraImage message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ibeo_msgs
bool
ibeo_msgs__msg__CameraImage__are_equal(const ibeo_msgs__msg__CameraImage * lhs, const ibeo_msgs__msg__CameraImage * rhs);

/// Copy a msg/CameraImage message.
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
ibeo_msgs__msg__CameraImage__copy(
  const ibeo_msgs__msg__CameraImage * input,
  ibeo_msgs__msg__CameraImage * output);

/// Initialize array of msg/CameraImage messages.
/**
 * It allocates the memory for the number of elements and calls
 * ibeo_msgs__msg__CameraImage__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_ibeo_msgs
bool
ibeo_msgs__msg__CameraImage__Sequence__init(ibeo_msgs__msg__CameraImage__Sequence * array, size_t size);

/// Finalize array of msg/CameraImage messages.
/**
 * It calls
 * ibeo_msgs__msg__CameraImage__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ibeo_msgs
void
ibeo_msgs__msg__CameraImage__Sequence__fini(ibeo_msgs__msg__CameraImage__Sequence * array);

/// Create array of msg/CameraImage messages.
/**
 * It allocates the memory for the array and calls
 * ibeo_msgs__msg__CameraImage__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ibeo_msgs
ibeo_msgs__msg__CameraImage__Sequence *
ibeo_msgs__msg__CameraImage__Sequence__create(size_t size);

/// Destroy array of msg/CameraImage messages.
/**
 * It calls
 * ibeo_msgs__msg__CameraImage__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ibeo_msgs
void
ibeo_msgs__msg__CameraImage__Sequence__destroy(ibeo_msgs__msg__CameraImage__Sequence * array);

/// Check for msg/CameraImage message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ibeo_msgs
bool
ibeo_msgs__msg__CameraImage__Sequence__are_equal(const ibeo_msgs__msg__CameraImage__Sequence * lhs, const ibeo_msgs__msg__CameraImage__Sequence * rhs);

/// Copy an array of msg/CameraImage messages.
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
ibeo_msgs__msg__CameraImage__Sequence__copy(
  const ibeo_msgs__msg__CameraImage__Sequence * input,
  ibeo_msgs__msg__CameraImage__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // IBEO_MSGS__MSG__DETAIL__CAMERA_IMAGE__FUNCTIONS_H_
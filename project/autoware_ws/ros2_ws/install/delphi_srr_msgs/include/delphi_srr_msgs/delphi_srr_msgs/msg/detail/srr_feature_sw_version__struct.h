// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from delphi_srr_msgs:msg/SrrFeatureSwVersion.idl
// generated code does not contain a copyright notice

#ifndef DELPHI_SRR_MSGS__MSG__DETAIL__SRR_FEATURE_SW_VERSION__STRUCT_H_
#define DELPHI_SRR_MSGS__MSG__DETAIL__SRR_FEATURE_SW_VERSION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

/// Struct defined in msg/SrrFeatureSwVersion in the package delphi_srr_msgs.
/**
  * Message file for srr_feature_sw_version
 */
typedef struct delphi_srr_msgs__msg__SrrFeatureSwVersion
{
  std_msgs__msg__Header header;
  uint8_t lcma_sw_version;
  uint8_t cta_sw_version;
} delphi_srr_msgs__msg__SrrFeatureSwVersion;

// Struct for a sequence of delphi_srr_msgs__msg__SrrFeatureSwVersion.
typedef struct delphi_srr_msgs__msg__SrrFeatureSwVersion__Sequence
{
  delphi_srr_msgs__msg__SrrFeatureSwVersion * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} delphi_srr_msgs__msg__SrrFeatureSwVersion__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DELPHI_SRR_MSGS__MSG__DETAIL__SRR_FEATURE_SW_VERSION__STRUCT_H_

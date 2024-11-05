# generated from
# rosidl_cmake/cmake/template/rosidl_cmake_export_typesupport_targets.cmake.in

set(_exported_typesupport_targets
  "__rosidl_generator_c:delphi_srr_msgs__rosidl_generator_c;__rosidl_typesupport_fastrtps_c:delphi_srr_msgs__rosidl_typesupport_fastrtps_c;__rosidl_generator_cpp:delphi_srr_msgs__rosidl_generator_cpp;__rosidl_typesupport_fastrtps_cpp:delphi_srr_msgs__rosidl_typesupport_fastrtps_cpp;__rosidl_typesupport_introspection_c:delphi_srr_msgs__rosidl_typesupport_introspection_c;__rosidl_typesupport_c:delphi_srr_msgs__rosidl_typesupport_c;__rosidl_typesupport_introspection_cpp:delphi_srr_msgs__rosidl_typesupport_introspection_cpp;__rosidl_typesupport_cpp:delphi_srr_msgs__rosidl_typesupport_cpp;__rosidl_generator_py:delphi_srr_msgs__rosidl_generator_py")

# populate delphi_srr_msgs_TARGETS_<suffix>
if(NOT _exported_typesupport_targets STREQUAL "")
  # loop over typesupport targets
  foreach(_tuple ${_exported_typesupport_targets})
    string(REPLACE ":" ";" _tuple "${_tuple}")
    list(GET _tuple 0 _suffix)
    list(GET _tuple 1 _target)

    set(_target "delphi_srr_msgs::${_target}")
    if(NOT TARGET "${_target}")
      # the exported target must exist
      message(WARNING "Package 'delphi_srr_msgs' exports the typesupport target '${_target}' which doesn't exist")
    else()
      list(APPEND delphi_srr_msgs_TARGETS${_suffix} "${_target}")
    endif()
  endforeach()
endif()

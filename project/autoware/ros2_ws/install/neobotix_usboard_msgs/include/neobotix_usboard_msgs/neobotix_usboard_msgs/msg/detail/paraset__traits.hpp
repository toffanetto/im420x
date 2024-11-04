// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from neobotix_usboard_msgs:msg/Paraset.idl
// generated code does not contain a copyright notice

#ifndef NEOBOTIX_USBOARD_MSGS__MSG__DETAIL__PARASET__TRAITS_HPP_
#define NEOBOTIX_USBOARD_MSGS__MSG__DETAIL__PARASET__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "neobotix_usboard_msgs/msg/detail/paraset__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace neobotix_usboard_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Paraset & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: command
  {
    out << "command: ";
    rosidl_generator_traits::value_to_yaml(msg.command, out);
    out << ", ";
  }

  // member: set_num
  {
    out << "set_num: ";
    rosidl_generator_traits::value_to_yaml(msg.set_num, out);
    out << ", ";
  }

  // member: paraset_byte54
  {
    out << "paraset_byte54: ";
    rosidl_generator_traits::value_to_yaml(msg.paraset_byte54, out);
    out << ", ";
  }

  // member: paraset_byte53
  {
    out << "paraset_byte53: ";
    rosidl_generator_traits::value_to_yaml(msg.paraset_byte53, out);
    out << ", ";
  }

  // member: paraset_byte52
  {
    out << "paraset_byte52: ";
    rosidl_generator_traits::value_to_yaml(msg.paraset_byte52, out);
    out << ", ";
  }

  // member: paraset_byte51
  {
    out << "paraset_byte51: ";
    rosidl_generator_traits::value_to_yaml(msg.paraset_byte51, out);
    out << ", ";
  }

  // member: paraset_byte50
  {
    out << "paraset_byte50: ";
    rosidl_generator_traits::value_to_yaml(msg.paraset_byte50, out);
    out << ", ";
  }

  // member: paraset_byte49
  {
    out << "paraset_byte49: ";
    rosidl_generator_traits::value_to_yaml(msg.paraset_byte49, out);
    out << ", ";
  }

  // member: paraset_byte48
  {
    out << "paraset_byte48: ";
    rosidl_generator_traits::value_to_yaml(msg.paraset_byte48, out);
    out << ", ";
  }

  // member: paraset_byte47
  {
    out << "paraset_byte47: ";
    rosidl_generator_traits::value_to_yaml(msg.paraset_byte47, out);
    out << ", ";
  }

  // member: paraset_byte46
  {
    out << "paraset_byte46: ";
    rosidl_generator_traits::value_to_yaml(msg.paraset_byte46, out);
    out << ", ";
  }

  // member: paraset_byte45
  {
    out << "paraset_byte45: ";
    rosidl_generator_traits::value_to_yaml(msg.paraset_byte45, out);
    out << ", ";
  }

  // member: paraset_byte44
  {
    out << "paraset_byte44: ";
    rosidl_generator_traits::value_to_yaml(msg.paraset_byte44, out);
    out << ", ";
  }

  // member: paraset_byte43
  {
    out << "paraset_byte43: ";
    rosidl_generator_traits::value_to_yaml(msg.paraset_byte43, out);
    out << ", ";
  }

  // member: paraset_byte42
  {
    out << "paraset_byte42: ";
    rosidl_generator_traits::value_to_yaml(msg.paraset_byte42, out);
    out << ", ";
  }

  // member: paraset_byte41
  {
    out << "paraset_byte41: ";
    rosidl_generator_traits::value_to_yaml(msg.paraset_byte41, out);
    out << ", ";
  }

  // member: paraset_byte40
  {
    out << "paraset_byte40: ";
    rosidl_generator_traits::value_to_yaml(msg.paraset_byte40, out);
    out << ", ";
  }

  // member: paraset_byte39
  {
    out << "paraset_byte39: ";
    rosidl_generator_traits::value_to_yaml(msg.paraset_byte39, out);
    out << ", ";
  }

  // member: paraset_byte38
  {
    out << "paraset_byte38: ";
    rosidl_generator_traits::value_to_yaml(msg.paraset_byte38, out);
    out << ", ";
  }

  // member: paraset_byte37
  {
    out << "paraset_byte37: ";
    rosidl_generator_traits::value_to_yaml(msg.paraset_byte37, out);
    out << ", ";
  }

  // member: paraset_byte36
  {
    out << "paraset_byte36: ";
    rosidl_generator_traits::value_to_yaml(msg.paraset_byte36, out);
    out << ", ";
  }

  // member: paraset_byte35
  {
    out << "paraset_byte35: ";
    rosidl_generator_traits::value_to_yaml(msg.paraset_byte35, out);
    out << ", ";
  }

  // member: paraset_byte34
  {
    out << "paraset_byte34: ";
    rosidl_generator_traits::value_to_yaml(msg.paraset_byte34, out);
    out << ", ";
  }

  // member: paraset_byte33
  {
    out << "paraset_byte33: ";
    rosidl_generator_traits::value_to_yaml(msg.paraset_byte33, out);
    out << ", ";
  }

  // member: paraset_byte32
  {
    out << "paraset_byte32: ";
    rosidl_generator_traits::value_to_yaml(msg.paraset_byte32, out);
    out << ", ";
  }

  // member: paraset_byte31
  {
    out << "paraset_byte31: ";
    rosidl_generator_traits::value_to_yaml(msg.paraset_byte31, out);
    out << ", ";
  }

  // member: paraset_byte30
  {
    out << "paraset_byte30: ";
    rosidl_generator_traits::value_to_yaml(msg.paraset_byte30, out);
    out << ", ";
  }

  // member: paraset_byte29
  {
    out << "paraset_byte29: ";
    rosidl_generator_traits::value_to_yaml(msg.paraset_byte29, out);
    out << ", ";
  }

  // member: paraset_byte28
  {
    out << "paraset_byte28: ";
    rosidl_generator_traits::value_to_yaml(msg.paraset_byte28, out);
    out << ", ";
  }

  // member: paraset_byte27
  {
    out << "paraset_byte27: ";
    rosidl_generator_traits::value_to_yaml(msg.paraset_byte27, out);
    out << ", ";
  }

  // member: paraset_byte26
  {
    out << "paraset_byte26: ";
    rosidl_generator_traits::value_to_yaml(msg.paraset_byte26, out);
    out << ", ";
  }

  // member: paraset_byte25
  {
    out << "paraset_byte25: ";
    rosidl_generator_traits::value_to_yaml(msg.paraset_byte25, out);
    out << ", ";
  }

  // member: paraset_byte24
  {
    out << "paraset_byte24: ";
    rosidl_generator_traits::value_to_yaml(msg.paraset_byte24, out);
    out << ", ";
  }

  // member: paraset_byte23
  {
    out << "paraset_byte23: ";
    rosidl_generator_traits::value_to_yaml(msg.paraset_byte23, out);
    out << ", ";
  }

  // member: paraset_byte22
  {
    out << "paraset_byte22: ";
    rosidl_generator_traits::value_to_yaml(msg.paraset_byte22, out);
    out << ", ";
  }

  // member: paraset_byte21
  {
    out << "paraset_byte21: ";
    rosidl_generator_traits::value_to_yaml(msg.paraset_byte21, out);
    out << ", ";
  }

  // member: paraset_byte20
  {
    out << "paraset_byte20: ";
    rosidl_generator_traits::value_to_yaml(msg.paraset_byte20, out);
    out << ", ";
  }

  // member: paraset_byte19
  {
    out << "paraset_byte19: ";
    rosidl_generator_traits::value_to_yaml(msg.paraset_byte19, out);
    out << ", ";
  }

  // member: paraset_byte18
  {
    out << "paraset_byte18: ";
    rosidl_generator_traits::value_to_yaml(msg.paraset_byte18, out);
    out << ", ";
  }

  // member: paraset_byte17
  {
    out << "paraset_byte17: ";
    rosidl_generator_traits::value_to_yaml(msg.paraset_byte17, out);
    out << ", ";
  }

  // member: paraset_byte16
  {
    out << "paraset_byte16: ";
    rosidl_generator_traits::value_to_yaml(msg.paraset_byte16, out);
    out << ", ";
  }

  // member: paraset_byte15
  {
    out << "paraset_byte15: ";
    rosidl_generator_traits::value_to_yaml(msg.paraset_byte15, out);
    out << ", ";
  }

  // member: paraset_byte14
  {
    out << "paraset_byte14: ";
    rosidl_generator_traits::value_to_yaml(msg.paraset_byte14, out);
    out << ", ";
  }

  // member: paraset_byte13
  {
    out << "paraset_byte13: ";
    rosidl_generator_traits::value_to_yaml(msg.paraset_byte13, out);
    out << ", ";
  }

  // member: paraset_byte12
  {
    out << "paraset_byte12: ";
    rosidl_generator_traits::value_to_yaml(msg.paraset_byte12, out);
    out << ", ";
  }

  // member: paraset_byte11
  {
    out << "paraset_byte11: ";
    rosidl_generator_traits::value_to_yaml(msg.paraset_byte11, out);
    out << ", ";
  }

  // member: paraset_byte10
  {
    out << "paraset_byte10: ";
    rosidl_generator_traits::value_to_yaml(msg.paraset_byte10, out);
    out << ", ";
  }

  // member: paraset_byte9
  {
    out << "paraset_byte9: ";
    rosidl_generator_traits::value_to_yaml(msg.paraset_byte9, out);
    out << ", ";
  }

  // member: paraset_byte8
  {
    out << "paraset_byte8: ";
    rosidl_generator_traits::value_to_yaml(msg.paraset_byte8, out);
    out << ", ";
  }

  // member: paraset_byte7
  {
    out << "paraset_byte7: ";
    rosidl_generator_traits::value_to_yaml(msg.paraset_byte7, out);
    out << ", ";
  }

  // member: paraset_byte6
  {
    out << "paraset_byte6: ";
    rosidl_generator_traits::value_to_yaml(msg.paraset_byte6, out);
    out << ", ";
  }

  // member: paraset_byte5
  {
    out << "paraset_byte5: ";
    rosidl_generator_traits::value_to_yaml(msg.paraset_byte5, out);
    out << ", ";
  }

  // member: paraset_byte4
  {
    out << "paraset_byte4: ";
    rosidl_generator_traits::value_to_yaml(msg.paraset_byte4, out);
    out << ", ";
  }

  // member: paraset_byte3
  {
    out << "paraset_byte3: ";
    rosidl_generator_traits::value_to_yaml(msg.paraset_byte3, out);
    out << ", ";
  }

  // member: paraset_byte2
  {
    out << "paraset_byte2: ";
    rosidl_generator_traits::value_to_yaml(msg.paraset_byte2, out);
    out << ", ";
  }

  // member: paraset_byte1
  {
    out << "paraset_byte1: ";
    rosidl_generator_traits::value_to_yaml(msg.paraset_byte1, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Paraset & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: command
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "command: ";
    rosidl_generator_traits::value_to_yaml(msg.command, out);
    out << "\n";
  }

  // member: set_num
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "set_num: ";
    rosidl_generator_traits::value_to_yaml(msg.set_num, out);
    out << "\n";
  }

  // member: paraset_byte54
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "paraset_byte54: ";
    rosidl_generator_traits::value_to_yaml(msg.paraset_byte54, out);
    out << "\n";
  }

  // member: paraset_byte53
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "paraset_byte53: ";
    rosidl_generator_traits::value_to_yaml(msg.paraset_byte53, out);
    out << "\n";
  }

  // member: paraset_byte52
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "paraset_byte52: ";
    rosidl_generator_traits::value_to_yaml(msg.paraset_byte52, out);
    out << "\n";
  }

  // member: paraset_byte51
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "paraset_byte51: ";
    rosidl_generator_traits::value_to_yaml(msg.paraset_byte51, out);
    out << "\n";
  }

  // member: paraset_byte50
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "paraset_byte50: ";
    rosidl_generator_traits::value_to_yaml(msg.paraset_byte50, out);
    out << "\n";
  }

  // member: paraset_byte49
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "paraset_byte49: ";
    rosidl_generator_traits::value_to_yaml(msg.paraset_byte49, out);
    out << "\n";
  }

  // member: paraset_byte48
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "paraset_byte48: ";
    rosidl_generator_traits::value_to_yaml(msg.paraset_byte48, out);
    out << "\n";
  }

  // member: paraset_byte47
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "paraset_byte47: ";
    rosidl_generator_traits::value_to_yaml(msg.paraset_byte47, out);
    out << "\n";
  }

  // member: paraset_byte46
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "paraset_byte46: ";
    rosidl_generator_traits::value_to_yaml(msg.paraset_byte46, out);
    out << "\n";
  }

  // member: paraset_byte45
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "paraset_byte45: ";
    rosidl_generator_traits::value_to_yaml(msg.paraset_byte45, out);
    out << "\n";
  }

  // member: paraset_byte44
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "paraset_byte44: ";
    rosidl_generator_traits::value_to_yaml(msg.paraset_byte44, out);
    out << "\n";
  }

  // member: paraset_byte43
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "paraset_byte43: ";
    rosidl_generator_traits::value_to_yaml(msg.paraset_byte43, out);
    out << "\n";
  }

  // member: paraset_byte42
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "paraset_byte42: ";
    rosidl_generator_traits::value_to_yaml(msg.paraset_byte42, out);
    out << "\n";
  }

  // member: paraset_byte41
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "paraset_byte41: ";
    rosidl_generator_traits::value_to_yaml(msg.paraset_byte41, out);
    out << "\n";
  }

  // member: paraset_byte40
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "paraset_byte40: ";
    rosidl_generator_traits::value_to_yaml(msg.paraset_byte40, out);
    out << "\n";
  }

  // member: paraset_byte39
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "paraset_byte39: ";
    rosidl_generator_traits::value_to_yaml(msg.paraset_byte39, out);
    out << "\n";
  }

  // member: paraset_byte38
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "paraset_byte38: ";
    rosidl_generator_traits::value_to_yaml(msg.paraset_byte38, out);
    out << "\n";
  }

  // member: paraset_byte37
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "paraset_byte37: ";
    rosidl_generator_traits::value_to_yaml(msg.paraset_byte37, out);
    out << "\n";
  }

  // member: paraset_byte36
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "paraset_byte36: ";
    rosidl_generator_traits::value_to_yaml(msg.paraset_byte36, out);
    out << "\n";
  }

  // member: paraset_byte35
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "paraset_byte35: ";
    rosidl_generator_traits::value_to_yaml(msg.paraset_byte35, out);
    out << "\n";
  }

  // member: paraset_byte34
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "paraset_byte34: ";
    rosidl_generator_traits::value_to_yaml(msg.paraset_byte34, out);
    out << "\n";
  }

  // member: paraset_byte33
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "paraset_byte33: ";
    rosidl_generator_traits::value_to_yaml(msg.paraset_byte33, out);
    out << "\n";
  }

  // member: paraset_byte32
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "paraset_byte32: ";
    rosidl_generator_traits::value_to_yaml(msg.paraset_byte32, out);
    out << "\n";
  }

  // member: paraset_byte31
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "paraset_byte31: ";
    rosidl_generator_traits::value_to_yaml(msg.paraset_byte31, out);
    out << "\n";
  }

  // member: paraset_byte30
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "paraset_byte30: ";
    rosidl_generator_traits::value_to_yaml(msg.paraset_byte30, out);
    out << "\n";
  }

  // member: paraset_byte29
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "paraset_byte29: ";
    rosidl_generator_traits::value_to_yaml(msg.paraset_byte29, out);
    out << "\n";
  }

  // member: paraset_byte28
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "paraset_byte28: ";
    rosidl_generator_traits::value_to_yaml(msg.paraset_byte28, out);
    out << "\n";
  }

  // member: paraset_byte27
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "paraset_byte27: ";
    rosidl_generator_traits::value_to_yaml(msg.paraset_byte27, out);
    out << "\n";
  }

  // member: paraset_byte26
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "paraset_byte26: ";
    rosidl_generator_traits::value_to_yaml(msg.paraset_byte26, out);
    out << "\n";
  }

  // member: paraset_byte25
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "paraset_byte25: ";
    rosidl_generator_traits::value_to_yaml(msg.paraset_byte25, out);
    out << "\n";
  }

  // member: paraset_byte24
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "paraset_byte24: ";
    rosidl_generator_traits::value_to_yaml(msg.paraset_byte24, out);
    out << "\n";
  }

  // member: paraset_byte23
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "paraset_byte23: ";
    rosidl_generator_traits::value_to_yaml(msg.paraset_byte23, out);
    out << "\n";
  }

  // member: paraset_byte22
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "paraset_byte22: ";
    rosidl_generator_traits::value_to_yaml(msg.paraset_byte22, out);
    out << "\n";
  }

  // member: paraset_byte21
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "paraset_byte21: ";
    rosidl_generator_traits::value_to_yaml(msg.paraset_byte21, out);
    out << "\n";
  }

  // member: paraset_byte20
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "paraset_byte20: ";
    rosidl_generator_traits::value_to_yaml(msg.paraset_byte20, out);
    out << "\n";
  }

  // member: paraset_byte19
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "paraset_byte19: ";
    rosidl_generator_traits::value_to_yaml(msg.paraset_byte19, out);
    out << "\n";
  }

  // member: paraset_byte18
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "paraset_byte18: ";
    rosidl_generator_traits::value_to_yaml(msg.paraset_byte18, out);
    out << "\n";
  }

  // member: paraset_byte17
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "paraset_byte17: ";
    rosidl_generator_traits::value_to_yaml(msg.paraset_byte17, out);
    out << "\n";
  }

  // member: paraset_byte16
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "paraset_byte16: ";
    rosidl_generator_traits::value_to_yaml(msg.paraset_byte16, out);
    out << "\n";
  }

  // member: paraset_byte15
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "paraset_byte15: ";
    rosidl_generator_traits::value_to_yaml(msg.paraset_byte15, out);
    out << "\n";
  }

  // member: paraset_byte14
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "paraset_byte14: ";
    rosidl_generator_traits::value_to_yaml(msg.paraset_byte14, out);
    out << "\n";
  }

  // member: paraset_byte13
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "paraset_byte13: ";
    rosidl_generator_traits::value_to_yaml(msg.paraset_byte13, out);
    out << "\n";
  }

  // member: paraset_byte12
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "paraset_byte12: ";
    rosidl_generator_traits::value_to_yaml(msg.paraset_byte12, out);
    out << "\n";
  }

  // member: paraset_byte11
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "paraset_byte11: ";
    rosidl_generator_traits::value_to_yaml(msg.paraset_byte11, out);
    out << "\n";
  }

  // member: paraset_byte10
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "paraset_byte10: ";
    rosidl_generator_traits::value_to_yaml(msg.paraset_byte10, out);
    out << "\n";
  }

  // member: paraset_byte9
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "paraset_byte9: ";
    rosidl_generator_traits::value_to_yaml(msg.paraset_byte9, out);
    out << "\n";
  }

  // member: paraset_byte8
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "paraset_byte8: ";
    rosidl_generator_traits::value_to_yaml(msg.paraset_byte8, out);
    out << "\n";
  }

  // member: paraset_byte7
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "paraset_byte7: ";
    rosidl_generator_traits::value_to_yaml(msg.paraset_byte7, out);
    out << "\n";
  }

  // member: paraset_byte6
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "paraset_byte6: ";
    rosidl_generator_traits::value_to_yaml(msg.paraset_byte6, out);
    out << "\n";
  }

  // member: paraset_byte5
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "paraset_byte5: ";
    rosidl_generator_traits::value_to_yaml(msg.paraset_byte5, out);
    out << "\n";
  }

  // member: paraset_byte4
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "paraset_byte4: ";
    rosidl_generator_traits::value_to_yaml(msg.paraset_byte4, out);
    out << "\n";
  }

  // member: paraset_byte3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "paraset_byte3: ";
    rosidl_generator_traits::value_to_yaml(msg.paraset_byte3, out);
    out << "\n";
  }

  // member: paraset_byte2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "paraset_byte2: ";
    rosidl_generator_traits::value_to_yaml(msg.paraset_byte2, out);
    out << "\n";
  }

  // member: paraset_byte1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "paraset_byte1: ";
    rosidl_generator_traits::value_to_yaml(msg.paraset_byte1, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Paraset & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace neobotix_usboard_msgs

namespace rosidl_generator_traits
{

[[deprecated("use neobotix_usboard_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const neobotix_usboard_msgs::msg::Paraset & msg,
  std::ostream & out, size_t indentation = 0)
{
  neobotix_usboard_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use neobotix_usboard_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const neobotix_usboard_msgs::msg::Paraset & msg)
{
  return neobotix_usboard_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<neobotix_usboard_msgs::msg::Paraset>()
{
  return "neobotix_usboard_msgs::msg::Paraset";
}

template<>
inline const char * name<neobotix_usboard_msgs::msg::Paraset>()
{
  return "neobotix_usboard_msgs/msg/Paraset";
}

template<>
struct has_fixed_size<neobotix_usboard_msgs::msg::Paraset>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<neobotix_usboard_msgs::msg::Paraset>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<neobotix_usboard_msgs::msg::Paraset>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // NEOBOTIX_USBOARD_MSGS__MSG__DETAIL__PARASET__TRAITS_HPP_

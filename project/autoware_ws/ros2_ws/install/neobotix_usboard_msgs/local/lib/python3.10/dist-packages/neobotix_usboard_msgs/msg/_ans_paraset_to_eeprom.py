# generated from rosidl_generator_py/resource/_idl.py.em
# with input from neobotix_usboard_msgs:msg/AnsParasetToEEPROM.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_AnsParasetToEEPROM(type):
    """Metaclass of message 'AnsParasetToEEPROM'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('neobotix_usboard_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'neobotix_usboard_msgs.msg.AnsParasetToEEPROM')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__ans_paraset_to_eeprom
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__ans_paraset_to_eeprom
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__ans_paraset_to_eeprom
            cls._TYPE_SUPPORT = module.type_support_msg__msg__ans_paraset_to_eeprom
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__ans_paraset_to_eeprom

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class AnsParasetToEEPROM(metaclass=Metaclass_AnsParasetToEEPROM):
    """Message class 'AnsParasetToEEPROM'."""

    __slots__ = [
        '_header',
        '_command',
        '_paraset_cksum_low_byte',
        '_paraset_cksum_high_byte',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'command': 'uint8',
        'paraset_cksum_low_byte': 'uint8',
        'paraset_cksum_high_byte': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.command = kwargs.get('command', int())
        self.paraset_cksum_low_byte = kwargs.get('paraset_cksum_low_byte', int())
        self.paraset_cksum_high_byte = kwargs.get('paraset_cksum_high_byte', int())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.header != other.header:
            return False
        if self.command != other.command:
            return False
        if self.paraset_cksum_low_byte != other.paraset_cksum_low_byte:
            return False
        if self.paraset_cksum_high_byte != other.paraset_cksum_high_byte:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if __debug__:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @builtins.property
    def command(self):
        """Message field 'command'."""
        return self._command

    @command.setter
    def command(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'command' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'command' field must be an unsigned integer in [0, 255]"
        self._command = value

    @builtins.property
    def paraset_cksum_low_byte(self):
        """Message field 'paraset_cksum_low_byte'."""
        return self._paraset_cksum_low_byte

    @paraset_cksum_low_byte.setter
    def paraset_cksum_low_byte(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'paraset_cksum_low_byte' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'paraset_cksum_low_byte' field must be an unsigned integer in [0, 255]"
        self._paraset_cksum_low_byte = value

    @builtins.property
    def paraset_cksum_high_byte(self):
        """Message field 'paraset_cksum_high_byte'."""
        return self._paraset_cksum_high_byte

    @paraset_cksum_high_byte.setter
    def paraset_cksum_high_byte(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'paraset_cksum_high_byte' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'paraset_cksum_high_byte' field must be an unsigned integer in [0, 255]"
        self._paraset_cksum_high_byte = value
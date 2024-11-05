# generated from rosidl_generator_py/resource/_idl.py.em
# with input from kartech_linear_actuator_msgs:msg/ReassignCommandIdCmd.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ReassignCommandIdCmd(type):
    """Metaclass of message 'ReassignCommandIdCmd'."""

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
            module = import_type_support('kartech_linear_actuator_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'kartech_linear_actuator_msgs.msg.ReassignCommandIdCmd')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__reassign_command_id_cmd
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__reassign_command_id_cmd
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__reassign_command_id_cmd
            cls._TYPE_SUPPORT = module.type_support_msg__msg__reassign_command_id_cmd
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__reassign_command_id_cmd

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


class ReassignCommandIdCmd(metaclass=Metaclass_ReassignCommandIdCmd):
    """Message class 'ReassignCommandIdCmd'."""

    __slots__ = [
        '_header',
        '_confirm',
        '_command_id_index',
        '_user_command_id',
        '_disable_default_command_id',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'confirm': 'boolean',
        'command_id_index': 'uint8',
        'user_command_id': 'uint32',
        'disable_default_command_id': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.confirm = kwargs.get('confirm', bool())
        self.command_id_index = kwargs.get('command_id_index', int())
        self.user_command_id = kwargs.get('user_command_id', int())
        self.disable_default_command_id = kwargs.get('disable_default_command_id', bool())

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
        if self.confirm != other.confirm:
            return False
        if self.command_id_index != other.command_id_index:
            return False
        if self.user_command_id != other.user_command_id:
            return False
        if self.disable_default_command_id != other.disable_default_command_id:
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
    def confirm(self):
        """Message field 'confirm'."""
        return self._confirm

    @confirm.setter
    def confirm(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'confirm' field must be of type 'bool'"
        self._confirm = value

    @builtins.property
    def command_id_index(self):
        """Message field 'command_id_index'."""
        return self._command_id_index

    @command_id_index.setter
    def command_id_index(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'command_id_index' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'command_id_index' field must be an unsigned integer in [0, 255]"
        self._command_id_index = value

    @builtins.property
    def user_command_id(self):
        """Message field 'user_command_id'."""
        return self._user_command_id

    @user_command_id.setter
    def user_command_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'user_command_id' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'user_command_id' field must be an unsigned integer in [0, 4294967295]"
        self._user_command_id = value

    @builtins.property
    def disable_default_command_id(self):
        """Message field 'disable_default_command_id'."""
        return self._disable_default_command_id

    @disable_default_command_id.setter
    def disable_default_command_id(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'disable_default_command_id' field must be of type 'bool'"
        self._disable_default_command_id = value

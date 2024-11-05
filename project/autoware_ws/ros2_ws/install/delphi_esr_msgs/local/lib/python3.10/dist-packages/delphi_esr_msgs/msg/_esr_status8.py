# generated from rosidl_generator_py/resource/_idl.py.em
# with input from delphi_esr_msgs:msg/EsrStatus8.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_EsrStatus8(type):
    """Metaclass of message 'EsrStatus8'."""

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
            module = import_type_support('delphi_esr_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'delphi_esr_msgs.msg.EsrStatus8')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__esr_status8
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__esr_status8
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__esr_status8
            cls._TYPE_SUPPORT = module.type_support_msg__msg__esr_status8
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__esr_status8

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


class EsrStatus8(metaclass=Metaclass_EsrStatus8):
    """Message class 'EsrStatus8'."""

    __slots__ = [
        '_header',
        '_canmsg',
        '_history_fault_0',
        '_history_fault_1',
        '_history_fault_2',
        '_history_fault_3',
        '_history_fault_4',
        '_history_fault_5',
        '_history_fault_6',
        '_history_fault_7',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'canmsg': 'string',
        'history_fault_0': 'uint8',
        'history_fault_1': 'uint8',
        'history_fault_2': 'uint8',
        'history_fault_3': 'uint8',
        'history_fault_4': 'uint8',
        'history_fault_5': 'uint8',
        'history_fault_6': 'uint8',
        'history_fault_7': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
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
        self.canmsg = kwargs.get('canmsg', str())
        self.history_fault_0 = kwargs.get('history_fault_0', int())
        self.history_fault_1 = kwargs.get('history_fault_1', int())
        self.history_fault_2 = kwargs.get('history_fault_2', int())
        self.history_fault_3 = kwargs.get('history_fault_3', int())
        self.history_fault_4 = kwargs.get('history_fault_4', int())
        self.history_fault_5 = kwargs.get('history_fault_5', int())
        self.history_fault_6 = kwargs.get('history_fault_6', int())
        self.history_fault_7 = kwargs.get('history_fault_7', int())

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
        if self.canmsg != other.canmsg:
            return False
        if self.history_fault_0 != other.history_fault_0:
            return False
        if self.history_fault_1 != other.history_fault_1:
            return False
        if self.history_fault_2 != other.history_fault_2:
            return False
        if self.history_fault_3 != other.history_fault_3:
            return False
        if self.history_fault_4 != other.history_fault_4:
            return False
        if self.history_fault_5 != other.history_fault_5:
            return False
        if self.history_fault_6 != other.history_fault_6:
            return False
        if self.history_fault_7 != other.history_fault_7:
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
    def canmsg(self):
        """Message field 'canmsg'."""
        return self._canmsg

    @canmsg.setter
    def canmsg(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'canmsg' field must be of type 'str'"
        self._canmsg = value

    @builtins.property
    def history_fault_0(self):
        """Message field 'history_fault_0'."""
        return self._history_fault_0

    @history_fault_0.setter
    def history_fault_0(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'history_fault_0' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'history_fault_0' field must be an unsigned integer in [0, 255]"
        self._history_fault_0 = value

    @builtins.property
    def history_fault_1(self):
        """Message field 'history_fault_1'."""
        return self._history_fault_1

    @history_fault_1.setter
    def history_fault_1(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'history_fault_1' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'history_fault_1' field must be an unsigned integer in [0, 255]"
        self._history_fault_1 = value

    @builtins.property
    def history_fault_2(self):
        """Message field 'history_fault_2'."""
        return self._history_fault_2

    @history_fault_2.setter
    def history_fault_2(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'history_fault_2' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'history_fault_2' field must be an unsigned integer in [0, 255]"
        self._history_fault_2 = value

    @builtins.property
    def history_fault_3(self):
        """Message field 'history_fault_3'."""
        return self._history_fault_3

    @history_fault_3.setter
    def history_fault_3(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'history_fault_3' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'history_fault_3' field must be an unsigned integer in [0, 255]"
        self._history_fault_3 = value

    @builtins.property
    def history_fault_4(self):
        """Message field 'history_fault_4'."""
        return self._history_fault_4

    @history_fault_4.setter
    def history_fault_4(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'history_fault_4' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'history_fault_4' field must be an unsigned integer in [0, 255]"
        self._history_fault_4 = value

    @builtins.property
    def history_fault_5(self):
        """Message field 'history_fault_5'."""
        return self._history_fault_5

    @history_fault_5.setter
    def history_fault_5(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'history_fault_5' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'history_fault_5' field must be an unsigned integer in [0, 255]"
        self._history_fault_5 = value

    @builtins.property
    def history_fault_6(self):
        """Message field 'history_fault_6'."""
        return self._history_fault_6

    @history_fault_6.setter
    def history_fault_6(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'history_fault_6' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'history_fault_6' field must be an unsigned integer in [0, 255]"
        self._history_fault_6 = value

    @builtins.property
    def history_fault_7(self):
        """Message field 'history_fault_7'."""
        return self._history_fault_7

    @history_fault_7.setter
    def history_fault_7(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'history_fault_7' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'history_fault_7' field must be an unsigned integer in [0, 255]"
        self._history_fault_7 = value

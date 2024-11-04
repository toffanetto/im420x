# generated from rosidl_generator_py/resource/_idl.py.em
# with input from delphi_srr_msgs:msg/SrrFeatureSwVersion.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SrrFeatureSwVersion(type):
    """Metaclass of message 'SrrFeatureSwVersion'."""

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
            module = import_type_support('delphi_srr_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'delphi_srr_msgs.msg.SrrFeatureSwVersion')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__srr_feature_sw_version
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__srr_feature_sw_version
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__srr_feature_sw_version
            cls._TYPE_SUPPORT = module.type_support_msg__msg__srr_feature_sw_version
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__srr_feature_sw_version

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


class SrrFeatureSwVersion(metaclass=Metaclass_SrrFeatureSwVersion):
    """Message class 'SrrFeatureSwVersion'."""

    __slots__ = [
        '_header',
        '_lcma_sw_version',
        '_cta_sw_version',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'lcma_sw_version': 'uint8',
        'cta_sw_version': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.lcma_sw_version = kwargs.get('lcma_sw_version', int())
        self.cta_sw_version = kwargs.get('cta_sw_version', int())

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
        if self.lcma_sw_version != other.lcma_sw_version:
            return False
        if self.cta_sw_version != other.cta_sw_version:
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
    def lcma_sw_version(self):
        """Message field 'lcma_sw_version'."""
        return self._lcma_sw_version

    @lcma_sw_version.setter
    def lcma_sw_version(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'lcma_sw_version' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'lcma_sw_version' field must be an unsigned integer in [0, 255]"
        self._lcma_sw_version = value

    @builtins.property
    def cta_sw_version(self):
        """Message field 'cta_sw_version'."""
        return self._cta_sw_version

    @cta_sw_version.setter
    def cta_sw_version(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'cta_sw_version' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'cta_sw_version' field must be an unsigned integer in [0, 255]"
        self._cta_sw_version = value

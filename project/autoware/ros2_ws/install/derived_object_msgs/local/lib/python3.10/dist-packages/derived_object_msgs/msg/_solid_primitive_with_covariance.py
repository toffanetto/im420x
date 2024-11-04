# generated from rosidl_generator_py/resource/_idl.py.em
# with input from derived_object_msgs:msg/SolidPrimitiveWithCovariance.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'dimensions'
# Member 'covariance'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SolidPrimitiveWithCovariance(type):
    """Metaclass of message 'SolidPrimitiveWithCovariance'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'BOX': 1,
        'SPHERE': 2,
        'CYLINDER': 3,
        'CONE': 4,
        'BOX_X': 0,
        'BOX_Y': 1,
        'BOX_Z': 2,
        'SPHERE_RADIUS': 0,
        'CYLINDER_HEIGHT': 0,
        'CYLINDER_RADIUS': 1,
        'CONE_HEIGHT': 0,
        'CONE_RADIUS': 1,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('derived_object_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'derived_object_msgs.msg.SolidPrimitiveWithCovariance')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__solid_primitive_with_covariance
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__solid_primitive_with_covariance
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__solid_primitive_with_covariance
            cls._TYPE_SUPPORT = module.type_support_msg__msg__solid_primitive_with_covariance
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__solid_primitive_with_covariance

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'BOX': cls.__constants['BOX'],
            'SPHERE': cls.__constants['SPHERE'],
            'CYLINDER': cls.__constants['CYLINDER'],
            'CONE': cls.__constants['CONE'],
            'BOX_X': cls.__constants['BOX_X'],
            'BOX_Y': cls.__constants['BOX_Y'],
            'BOX_Z': cls.__constants['BOX_Z'],
            'SPHERE_RADIUS': cls.__constants['SPHERE_RADIUS'],
            'CYLINDER_HEIGHT': cls.__constants['CYLINDER_HEIGHT'],
            'CYLINDER_RADIUS': cls.__constants['CYLINDER_RADIUS'],
            'CONE_HEIGHT': cls.__constants['CONE_HEIGHT'],
            'CONE_RADIUS': cls.__constants['CONE_RADIUS'],
        }

    @property
    def BOX(self):
        """Message constant 'BOX'."""
        return Metaclass_SolidPrimitiveWithCovariance.__constants['BOX']

    @property
    def SPHERE(self):
        """Message constant 'SPHERE'."""
        return Metaclass_SolidPrimitiveWithCovariance.__constants['SPHERE']

    @property
    def CYLINDER(self):
        """Message constant 'CYLINDER'."""
        return Metaclass_SolidPrimitiveWithCovariance.__constants['CYLINDER']

    @property
    def CONE(self):
        """Message constant 'CONE'."""
        return Metaclass_SolidPrimitiveWithCovariance.__constants['CONE']

    @property
    def BOX_X(self):
        """Message constant 'BOX_X'."""
        return Metaclass_SolidPrimitiveWithCovariance.__constants['BOX_X']

    @property
    def BOX_Y(self):
        """Message constant 'BOX_Y'."""
        return Metaclass_SolidPrimitiveWithCovariance.__constants['BOX_Y']

    @property
    def BOX_Z(self):
        """Message constant 'BOX_Z'."""
        return Metaclass_SolidPrimitiveWithCovariance.__constants['BOX_Z']

    @property
    def SPHERE_RADIUS(self):
        """Message constant 'SPHERE_RADIUS'."""
        return Metaclass_SolidPrimitiveWithCovariance.__constants['SPHERE_RADIUS']

    @property
    def CYLINDER_HEIGHT(self):
        """Message constant 'CYLINDER_HEIGHT'."""
        return Metaclass_SolidPrimitiveWithCovariance.__constants['CYLINDER_HEIGHT']

    @property
    def CYLINDER_RADIUS(self):
        """Message constant 'CYLINDER_RADIUS'."""
        return Metaclass_SolidPrimitiveWithCovariance.__constants['CYLINDER_RADIUS']

    @property
    def CONE_HEIGHT(self):
        """Message constant 'CONE_HEIGHT'."""
        return Metaclass_SolidPrimitiveWithCovariance.__constants['CONE_HEIGHT']

    @property
    def CONE_RADIUS(self):
        """Message constant 'CONE_RADIUS'."""
        return Metaclass_SolidPrimitiveWithCovariance.__constants['CONE_RADIUS']


class SolidPrimitiveWithCovariance(metaclass=Metaclass_SolidPrimitiveWithCovariance):
    """
    Message class 'SolidPrimitiveWithCovariance'.

    Constants:
      BOX
      SPHERE
      CYLINDER
      CONE
      BOX_X
      BOX_Y
      BOX_Z
      SPHERE_RADIUS
      CYLINDER_HEIGHT
      CYLINDER_RADIUS
      CONE_HEIGHT
      CONE_RADIUS
    """

    __slots__ = [
        '_type',
        '_dimensions',
        '_covariance',
    ]

    _fields_and_field_types = {
        'type': 'uint8',
        'dimensions': 'sequence<double>',
        'covariance': 'sequence<double>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.type = kwargs.get('type', int())
        self.dimensions = array.array('d', kwargs.get('dimensions', []))
        self.covariance = array.array('d', kwargs.get('covariance', []))

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
        if self.type != other.type:
            return False
        if self.dimensions != other.dimensions:
            return False
        if self.covariance != other.covariance:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property  # noqa: A003
    def type(self):  # noqa: A003
        """Message field 'type'."""
        return self._type

    @type.setter  # noqa: A003
    def type(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'type' field must be an unsigned integer in [0, 255]"
        self._type = value

    @builtins.property
    def dimensions(self):
        """Message field 'dimensions'."""
        return self._dimensions

    @dimensions.setter
    def dimensions(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'dimensions' array.array() must have the type code of 'd'"
            self._dimensions = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'dimensions' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._dimensions = array.array('d', value)

    @builtins.property
    def covariance(self):
        """Message field 'covariance'."""
        return self._covariance

    @covariance.setter
    def covariance(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'covariance' array.array() must have the type code of 'd'"
            self._covariance = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'covariance' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._covariance = array.array('d', value)

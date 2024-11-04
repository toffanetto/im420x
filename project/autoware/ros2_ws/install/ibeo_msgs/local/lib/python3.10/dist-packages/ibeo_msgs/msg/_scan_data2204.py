# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ibeo_msgs:msg/ScanData2204.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ScanData2204(type):
    """Metaclass of message 'ScanData2204'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'FRONT': 0,
        'REAR': 1,
        'SCANNER': 0,
        'VEHICLE': 1,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('ibeo_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'ibeo_msgs.msg.ScanData2204')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__scan_data2204
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__scan_data2204
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__scan_data2204
            cls._TYPE_SUPPORT = module.type_support_msg__msg__scan_data2204
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__scan_data2204

            from ibeo_msgs.msg import IbeoDataHeader
            if IbeoDataHeader.__class__._TYPE_SUPPORT is None:
                IbeoDataHeader.__class__.__import_type_support__()

            from ibeo_msgs.msg import ScanPoint2204
            if ScanPoint2204.__class__._TYPE_SUPPORT is None:
                ScanPoint2204.__class__.__import_type_support__()

            from ibeo_msgs.msg import ScannerInfo2204
            if ScannerInfo2204.__class__._TYPE_SUPPORT is None:
                ScannerInfo2204.__class__.__import_type_support__()

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'FRONT': cls.__constants['FRONT'],
            'REAR': cls.__constants['REAR'],
            'SCANNER': cls.__constants['SCANNER'],
            'VEHICLE': cls.__constants['VEHICLE'],
        }

    @property
    def FRONT(self):
        """Message constant 'FRONT'."""
        return Metaclass_ScanData2204.__constants['FRONT']

    @property
    def REAR(self):
        """Message constant 'REAR'."""
        return Metaclass_ScanData2204.__constants['REAR']

    @property
    def SCANNER(self):
        """Message constant 'SCANNER'."""
        return Metaclass_ScanData2204.__constants['SCANNER']

    @property
    def VEHICLE(self):
        """Message constant 'VEHICLE'."""
        return Metaclass_ScanData2204.__constants['VEHICLE']


class ScanData2204(metaclass=Metaclass_ScanData2204):
    """
    Message class 'ScanData2204'.

    Constants:
      FRONT
      REAR
      SCANNER
      VEHICLE
    """

    __slots__ = [
        '_header',
        '_ibeo_header',
        '_scan_start_time',
        '_scan_end_time_offset',
        '_ground_labeled',
        '_dirt_labeled',
        '_rain_labeled',
        '_fused_scan',
        '_mirror_side',
        '_coordinate_system',
        '_scan_number',
        '_scan_points',
        '_number_of_scanner_infos',
        '_scanner_info_list',
        '_scan_point_list',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'ibeo_header': 'ibeo_msgs/IbeoDataHeader',
        'scan_start_time': 'uint64',
        'scan_end_time_offset': 'uint32',
        'ground_labeled': 'boolean',
        'dirt_labeled': 'boolean',
        'rain_labeled': 'boolean',
        'fused_scan': 'boolean',
        'mirror_side': 'uint8',
        'coordinate_system': 'uint8',
        'scan_number': 'uint16',
        'scan_points': 'uint16',
        'number_of_scanner_infos': 'uint16',
        'scanner_info_list': 'sequence<ibeo_msgs/ScannerInfo2204>',
        'scan_point_list': 'sequence<ibeo_msgs/ScanPoint2204>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ibeo_msgs', 'msg'], 'IbeoDataHeader'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['ibeo_msgs', 'msg'], 'ScannerInfo2204')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['ibeo_msgs', 'msg'], 'ScanPoint2204')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        from ibeo_msgs.msg import IbeoDataHeader
        self.ibeo_header = kwargs.get('ibeo_header', IbeoDataHeader())
        self.scan_start_time = kwargs.get('scan_start_time', int())
        self.scan_end_time_offset = kwargs.get('scan_end_time_offset', int())
        self.ground_labeled = kwargs.get('ground_labeled', bool())
        self.dirt_labeled = kwargs.get('dirt_labeled', bool())
        self.rain_labeled = kwargs.get('rain_labeled', bool())
        self.fused_scan = kwargs.get('fused_scan', bool())
        self.mirror_side = kwargs.get('mirror_side', int())
        self.coordinate_system = kwargs.get('coordinate_system', int())
        self.scan_number = kwargs.get('scan_number', int())
        self.scan_points = kwargs.get('scan_points', int())
        self.number_of_scanner_infos = kwargs.get('number_of_scanner_infos', int())
        self.scanner_info_list = kwargs.get('scanner_info_list', [])
        self.scan_point_list = kwargs.get('scan_point_list', [])

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
        if self.ibeo_header != other.ibeo_header:
            return False
        if self.scan_start_time != other.scan_start_time:
            return False
        if self.scan_end_time_offset != other.scan_end_time_offset:
            return False
        if self.ground_labeled != other.ground_labeled:
            return False
        if self.dirt_labeled != other.dirt_labeled:
            return False
        if self.rain_labeled != other.rain_labeled:
            return False
        if self.fused_scan != other.fused_scan:
            return False
        if self.mirror_side != other.mirror_side:
            return False
        if self.coordinate_system != other.coordinate_system:
            return False
        if self.scan_number != other.scan_number:
            return False
        if self.scan_points != other.scan_points:
            return False
        if self.number_of_scanner_infos != other.number_of_scanner_infos:
            return False
        if self.scanner_info_list != other.scanner_info_list:
            return False
        if self.scan_point_list != other.scan_point_list:
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
    def ibeo_header(self):
        """Message field 'ibeo_header'."""
        return self._ibeo_header

    @ibeo_header.setter
    def ibeo_header(self, value):
        if __debug__:
            from ibeo_msgs.msg import IbeoDataHeader
            assert \
                isinstance(value, IbeoDataHeader), \
                "The 'ibeo_header' field must be a sub message of type 'IbeoDataHeader'"
        self._ibeo_header = value

    @builtins.property
    def scan_start_time(self):
        """Message field 'scan_start_time'."""
        return self._scan_start_time

    @scan_start_time.setter
    def scan_start_time(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'scan_start_time' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'scan_start_time' field must be an unsigned integer in [0, 18446744073709551615]"
        self._scan_start_time = value

    @builtins.property
    def scan_end_time_offset(self):
        """Message field 'scan_end_time_offset'."""
        return self._scan_end_time_offset

    @scan_end_time_offset.setter
    def scan_end_time_offset(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'scan_end_time_offset' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'scan_end_time_offset' field must be an unsigned integer in [0, 4294967295]"
        self._scan_end_time_offset = value

    @builtins.property
    def ground_labeled(self):
        """Message field 'ground_labeled'."""
        return self._ground_labeled

    @ground_labeled.setter
    def ground_labeled(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'ground_labeled' field must be of type 'bool'"
        self._ground_labeled = value

    @builtins.property
    def dirt_labeled(self):
        """Message field 'dirt_labeled'."""
        return self._dirt_labeled

    @dirt_labeled.setter
    def dirt_labeled(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'dirt_labeled' field must be of type 'bool'"
        self._dirt_labeled = value

    @builtins.property
    def rain_labeled(self):
        """Message field 'rain_labeled'."""
        return self._rain_labeled

    @rain_labeled.setter
    def rain_labeled(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'rain_labeled' field must be of type 'bool'"
        self._rain_labeled = value

    @builtins.property
    def fused_scan(self):
        """Message field 'fused_scan'."""
        return self._fused_scan

    @fused_scan.setter
    def fused_scan(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'fused_scan' field must be of type 'bool'"
        self._fused_scan = value

    @builtins.property
    def mirror_side(self):
        """Message field 'mirror_side'."""
        return self._mirror_side

    @mirror_side.setter
    def mirror_side(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'mirror_side' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'mirror_side' field must be an unsigned integer in [0, 255]"
        self._mirror_side = value

    @builtins.property
    def coordinate_system(self):
        """Message field 'coordinate_system'."""
        return self._coordinate_system

    @coordinate_system.setter
    def coordinate_system(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'coordinate_system' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'coordinate_system' field must be an unsigned integer in [0, 255]"
        self._coordinate_system = value

    @builtins.property
    def scan_number(self):
        """Message field 'scan_number'."""
        return self._scan_number

    @scan_number.setter
    def scan_number(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'scan_number' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'scan_number' field must be an unsigned integer in [0, 65535]"
        self._scan_number = value

    @builtins.property
    def scan_points(self):
        """Message field 'scan_points'."""
        return self._scan_points

    @scan_points.setter
    def scan_points(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'scan_points' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'scan_points' field must be an unsigned integer in [0, 65535]"
        self._scan_points = value

    @builtins.property
    def number_of_scanner_infos(self):
        """Message field 'number_of_scanner_infos'."""
        return self._number_of_scanner_infos

    @number_of_scanner_infos.setter
    def number_of_scanner_infos(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'number_of_scanner_infos' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'number_of_scanner_infos' field must be an unsigned integer in [0, 65535]"
        self._number_of_scanner_infos = value

    @builtins.property
    def scanner_info_list(self):
        """Message field 'scanner_info_list'."""
        return self._scanner_info_list

    @scanner_info_list.setter
    def scanner_info_list(self, value):
        if __debug__:
            from ibeo_msgs.msg import ScannerInfo2204
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
                 all(isinstance(v, ScannerInfo2204) for v in value) and
                 True), \
                "The 'scanner_info_list' field must be a set or sequence and each value of type 'ScannerInfo2204'"
        self._scanner_info_list = value

    @builtins.property
    def scan_point_list(self):
        """Message field 'scan_point_list'."""
        return self._scan_point_list

    @scan_point_list.setter
    def scan_point_list(self, value):
        if __debug__:
            from ibeo_msgs.msg import ScanPoint2204
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
                 all(isinstance(v, ScanPoint2204) for v in value) and
                 True), \
                "The 'scan_point_list' field must be a set or sequence and each value of type 'ScanPoint2204'"
        self._scan_point_list = value

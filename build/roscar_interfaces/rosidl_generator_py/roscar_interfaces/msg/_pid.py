# generated from rosidl_generator_py/resource/_idl.py.em
# with input from roscar_interfaces:msg/Pid.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'chassis_pid'
# Member 'gimbal_pid'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Pid(type):
    """Metaclass of message 'Pid'."""

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
            module = import_type_support('roscar_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'roscar_interfaces.msg.Pid')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__pid
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__pid
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__pid
            cls._TYPE_SUPPORT = module.type_support_msg__msg__pid
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__pid

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Pid(metaclass=Metaclass_Pid):
    """Message class 'Pid'."""

    __slots__ = [
        '_chassis_pid',
        '_gimbal_pid',
    ]

    _fields_and_field_types = {
        'chassis_pid': 'sequence<float>',
        'gimbal_pid': 'sequence<float>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.chassis_pid = array.array('f', kwargs.get('chassis_pid', []))
        self.gimbal_pid = array.array('f', kwargs.get('gimbal_pid', []))

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
        if self.chassis_pid != other.chassis_pid:
            return False
        if self.gimbal_pid != other.gimbal_pid:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def chassis_pid(self):
        """Message field 'chassis_pid'."""
        return self._chassis_pid

    @chassis_pid.setter
    def chassis_pid(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'chassis_pid' array.array() must have the type code of 'f'"
            self._chassis_pid = value
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
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'chassis_pid' field must be a set or sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._chassis_pid = array.array('f', value)

    @builtins.property
    def gimbal_pid(self):
        """Message field 'gimbal_pid'."""
        return self._gimbal_pid

    @gimbal_pid.setter
    def gimbal_pid(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'gimbal_pid' array.array() must have the type code of 'f'"
            self._gimbal_pid = value
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
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'gimbal_pid' field must be a set or sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._gimbal_pid = array.array('f', value)

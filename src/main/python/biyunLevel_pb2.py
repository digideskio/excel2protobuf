# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: biyunLevel.proto

import sys
_b=sys.version_info[0]<3 and (lambda x:x) or (lambda x:x.encode('latin1'))
from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
from google.protobuf import descriptor_pb2
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()




DESCRIPTOR = _descriptor.FileDescriptor(
  name='biyunLevel.proto',
  package='',
  serialized_pb=_b('\n\x10\x62iyunLevel.proto\"f\n\nbiyunLevel\x12\r\n\x05level\x18\x01 \x01(\r\x12\r\n\x05star1\x18\x02 \x01(\r\x12\r\n\x05star2\x18\x03 \x01(\r\x12\r\n\x05star3\x18\x04 \x01(\r\x12\r\n\x05star4\x18\x05 \x01(\r\x12\r\n\x05star5\x18\x06 \x01(\rB\x11\n\x0fwang.gnim.excel')
)
_sym_db.RegisterFileDescriptor(DESCRIPTOR)




_BIYUNLEVEL = _descriptor.Descriptor(
  name='biyunLevel',
  full_name='biyunLevel',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='level', full_name='biyunLevel.level', index=0,
      number=1, type=13, cpp_type=3, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='star1', full_name='biyunLevel.star1', index=1,
      number=2, type=13, cpp_type=3, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='star2', full_name='biyunLevel.star2', index=2,
      number=3, type=13, cpp_type=3, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='star3', full_name='biyunLevel.star3', index=3,
      number=4, type=13, cpp_type=3, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='star4', full_name='biyunLevel.star4', index=4,
      number=5, type=13, cpp_type=3, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='star5', full_name='biyunLevel.star5', index=5,
      number=6, type=13, cpp_type=3, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=20,
  serialized_end=122,
)

DESCRIPTOR.message_types_by_name['biyunLevel'] = _BIYUNLEVEL

biyunLevel = _reflection.GeneratedProtocolMessageType('biyunLevel', (_message.Message,), dict(
  DESCRIPTOR = _BIYUNLEVEL,
  __module__ = 'biyunLevel_pb2'
  # @@protoc_insertion_point(class_scope:biyunLevel)
  ))
_sym_db.RegisterMessage(biyunLevel)


DESCRIPTOR.has_options = True
DESCRIPTOR._options = _descriptor._ParseOptions(descriptor_pb2.FileOptions(), _b('\n\017wang.gnim.excel'))
# @@protoc_insertion_point(module_scope)

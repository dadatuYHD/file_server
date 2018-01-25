/* Generated by the protocol buffer compiler.  DO NOT EDIT! */

/* Do not generate deprecated warnings for self */
#ifndef PROTOBUF_C_NO_DEPRECATED
#define PROTOBUF_C_NO_DEPRECATED
#endif

#include "Message.pb-c.h"
void   file__data__init
                     (FILEDATA         *message)
{
  static FILEDATA init_value = FILE__DATA__INIT;
  *message = init_value;
}
size_t file__data__get_packed_size
                     (const FILEDATA *message)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &file__data__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t file__data__pack
                     (const FILEDATA *message,
                      uint8_t       *out)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &file__data__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t file__data__pack_to_buffer
                     (const FILEDATA *message,
                      ProtobufCBuffer *buffer)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &file__data__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
FILEDATA *
       file__data__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (FILEDATA *)
     protobuf_c_message_unpack (&file__data__descriptor,
                                allocator, len, data);
}
void   file__data__free_unpacked
                     (FILEDATA *message,
                      ProtobufCAllocator *allocator)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &file__data__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
static const ProtobufCFieldDescriptor file__data__field_descriptors[2] =
{
  {
    "p_cmd_buf",
    1,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    PROTOBUF_C_OFFSETOF(FILEDATA, p_cmd_buf),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "p_data_buf",
    2,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    PROTOBUF_C_OFFSETOF(FILEDATA, p_data_buf),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned file__data__field_indices_by_name[] = {
  0,   /* field[0] = p_cmd_buf */
  1,   /* field[1] = p_data_buf */
};
static const ProtobufCIntRange file__data__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 2 }
};
const ProtobufCMessageDescriptor file__data__descriptor =
{
  PROTOBUF_C_MESSAGE_DESCRIPTOR_MAGIC,
  "FILE_DATA",
  "FILEDATA",
  "FILEDATA",
  "",
  sizeof(FILEDATA),
  2,
  file__data__field_descriptors,
  file__data__field_indices_by_name,
  1,  file__data__number_ranges,
  (ProtobufCMessageInit) file__data__init,
  NULL,NULL,NULL    /* reserved[123] */
};
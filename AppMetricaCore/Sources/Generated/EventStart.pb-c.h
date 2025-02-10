/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: EventStart.proto */

#ifndef PROTOBUF_C_EventStart_2eproto__INCLUDED
#define PROTOBUF_C_EventStart_2eproto__INCLUDED

#include <AppMetricaProtobuf/AppMetricaProtobuf.h>

PROTOBUF_C__BEGIN_DECLS

#if PROTOBUF_C_VERSION_NUMBER < 1003000
# error This file was generated by a newer version of protobuf-c which is incompatible with your libprotobuf-c headers. Please update your headers.
#elif 1005001 < PROTOBUF_C_MIN_COMPILER_VERSION
# error This file was generated by an older version of protobuf-c which is incompatible with your libprotobuf-c headers. Please regenerate this file with a newer version of protobuf-c.
#endif


typedef struct AmaStartEvent__Value AmaStartEvent__Value;
typedef struct AmaStartEvent__Value__BinaryImage AmaStartEvent__Value__BinaryImage;


/* --- enums --- */


/* --- messages --- */

struct  AmaStartEvent__Value__BinaryImage
{
  ProtobufCMessage base;
  ProtobufCBinaryData uuid;
};
#define AMA_START_EVENT__VALUE__BINARY_IMAGE__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&ama_start_event__value__binary_image__descriptor) \
, {0,NULL} }


struct  AmaStartEvent__Value
{
  ProtobufCMessage base;
  /*
   * Android only field.
   */
  ama_protobuf_c_boolean has_build_id;
  ProtobufCBinaryData build_id;
  /*
   * iOS only field.
   */
  size_t n_binary_images;
  AmaStartEvent__Value__BinaryImage **binary_images;
};
#define AMA_START_EVENT__VALUE__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&ama_start_event__value__descriptor) \
, 0, {0,NULL}, 0,NULL }


/* AmaStartEvent__Value__BinaryImage methods */
void   ama_start_event__value__binary_image__init
                     (AmaStartEvent__Value__BinaryImage         *message);
/* AmaStartEvent__Value methods */
void   ama_start_event__value__init
                     (AmaStartEvent__Value         *message);
size_t ama_start_event__value__get_packed_size
                     (const AmaStartEvent__Value   *message);
size_t ama_start_event__value__pack
                     (const AmaStartEvent__Value   *message,
                      uint8_t             *out);
size_t ama_start_event__value__pack_to_buffer
                     (const AmaStartEvent__Value   *message,
                      ProtobufCBuffer     *buffer);
AmaStartEvent__Value *
       ama_start_event__value__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   ama_start_event__value__free_unpacked
                     (AmaStartEvent__Value *message,
                      ProtobufCAllocator *allocator);
/* --- per-message closures --- */

typedef void (*AmaStartEvent__Value__BinaryImage_Closure)
                 (const AmaStartEvent__Value__BinaryImage *message,
                  void *closure_data);
typedef void (*AmaStartEvent__Value_Closure)
                 (const AmaStartEvent__Value *message,
                  void *closure_data);

/* --- services --- */


/* --- descriptors --- */

extern const ProtobufCMessageDescriptor ama_start_event__value__descriptor;
extern const ProtobufCMessageDescriptor ama_start_event__value__binary_image__descriptor;

PROTOBUF_C__END_DECLS


#endif  /* PROTOBUF_C_EventStart_2eproto__INCLUDED */

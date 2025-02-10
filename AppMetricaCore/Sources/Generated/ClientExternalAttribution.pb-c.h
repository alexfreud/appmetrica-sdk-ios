/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: ClientExternalAttribution.proto */

#ifndef PROTOBUF_C_ClientExternalAttribution_2eproto__INCLUDED
#define PROTOBUF_C_ClientExternalAttribution_2eproto__INCLUDED

#include <AppMetricaProtobuf/AppMetricaProtobuf.h>

PROTOBUF_C__BEGIN_DECLS

#if PROTOBUF_C_VERSION_NUMBER < 1003000
# error This file was generated by a newer version of protobuf-c which is incompatible with your libprotobuf-c headers. Please update your headers.
#elif 1005001 < PROTOBUF_C_MIN_COMPILER_VERSION
# error This file was generated by an older version of protobuf-c which is incompatible with your libprotobuf-c headers. Please regenerate this file with a newer version of protobuf-c.
#endif


typedef struct Ama__ClientExternalAttribution Ama__ClientExternalAttribution;


/* --- enums --- */

typedef enum _Ama__ClientExternalAttribution__AttributionType {
  AMA__CLIENT_EXTERNAL_ATTRIBUTION__ATTRIBUTION_TYPE__UNKNOWN = 0,
  AMA__CLIENT_EXTERNAL_ATTRIBUTION__ATTRIBUTION_TYPE__APPSFLYER = 1,
  AMA__CLIENT_EXTERNAL_ATTRIBUTION__ATTRIBUTION_TYPE__ADJUST = 2,
  AMA__CLIENT_EXTERNAL_ATTRIBUTION__ATTRIBUTION_TYPE__KOCHAVA = 3,
  AMA__CLIENT_EXTERNAL_ATTRIBUTION__ATTRIBUTION_TYPE__TENJIN = 4,
  AMA__CLIENT_EXTERNAL_ATTRIBUTION__ATTRIBUTION_TYPE__AIRBRIDGE = 5,
  AMA__CLIENT_EXTERNAL_ATTRIBUTION__ATTRIBUTION_TYPE__SINGULAR = 6
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(AMA__CLIENT_EXTERNAL_ATTRIBUTION__ATTRIBUTION_TYPE)
} Ama__ClientExternalAttribution__AttributionType;

/* --- messages --- */

struct  Ama__ClientExternalAttribution
{
  ProtobufCMessage base;
  ama_protobuf_c_boolean has_attribution_type;
  Ama__ClientExternalAttribution__AttributionType attribution_type;
  /*
   * json
   */
  ama_protobuf_c_boolean has_value;
  ProtobufCBinaryData value;
};
#define AMA__CLIENT_EXTERNAL_ATTRIBUTION__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&ama__client_external_attribution__descriptor) \
, 0, AMA__CLIENT_EXTERNAL_ATTRIBUTION__ATTRIBUTION_TYPE__UNKNOWN, 0, {0,NULL} }


/* Ama__ClientExternalAttribution methods */
void   ama__client_external_attribution__init
                     (Ama__ClientExternalAttribution         *message);
size_t ama__client_external_attribution__get_packed_size
                     (const Ama__ClientExternalAttribution   *message);
size_t ama__client_external_attribution__pack
                     (const Ama__ClientExternalAttribution   *message,
                      uint8_t             *out);
size_t ama__client_external_attribution__pack_to_buffer
                     (const Ama__ClientExternalAttribution   *message,
                      ProtobufCBuffer     *buffer);
Ama__ClientExternalAttribution *
       ama__client_external_attribution__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   ama__client_external_attribution__free_unpacked
                     (Ama__ClientExternalAttribution *message,
                      ProtobufCAllocator *allocator);
/* --- per-message closures --- */

typedef void (*Ama__ClientExternalAttribution_Closure)
                 (const Ama__ClientExternalAttribution *message,
                  void *closure_data);

/* --- services --- */


/* --- descriptors --- */

extern const ProtobufCMessageDescriptor ama__client_external_attribution__descriptor;
extern const ProtobufCEnumDescriptor    ama__client_external_attribution__attribution_type__descriptor;

PROTOBUF_C__END_DECLS


#endif  /* PROTOBUF_C_ClientExternalAttribution_2eproto__INCLUDED */

/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: LocationMessage.proto */

#ifndef PROTOBUF_C_LocationMessage_2eproto__INCLUDED
#define PROTOBUF_C_LocationMessage_2eproto__INCLUDED

#include <AppMetricaProtobuf/AppMetricaProtobuf.h>

PROTOBUF_C__BEGIN_DECLS

#if PROTOBUF_C_VERSION_NUMBER < 1003000
# error This file was generated by a newer version of protobuf-c which is incompatible with your libprotobuf-c headers. Please update your headers.
#elif 1005001 < PROTOBUF_C_MIN_COMPILER_VERSION
# error This file was generated by an older version of protobuf-c which is incompatible with your libprotobuf-c headers. Please regenerate this file with a newer version of protobuf-c.
#endif


typedef struct Ama__LocationMessage Ama__LocationMessage;
typedef struct Ama__LocationMessage__Location Ama__LocationMessage__Location;
typedef struct Ama__LocationMessage__Visit Ama__LocationMessage__Visit;


/* --- enums --- */

typedef enum _Ama__LocationProvider {
  AMA__LOCATION_PROVIDER__PROVIDER_UNKNOWN = 0,
  AMA__LOCATION_PROVIDER__PROVIDER_GPS = 1,
  AMA__LOCATION_PROVIDER__PROVIDER_NETWORK = 3
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(AMA__LOCATION_PROVIDER)
} Ama__LocationProvider;

/* --- messages --- */

struct  Ama__LocationMessage__Location
{
  ProtobufCMessage base;
  uint64_t incremental_id;
  uint64_t collect_timestamp;
  ama_protobuf_c_boolean has_timestamp;
  uint64_t timestamp;
  double latitude;
  double longitude;
  ama_protobuf_c_boolean has_precision;
  uint32_t precision;
  ama_protobuf_c_boolean has_direction;
  uint32_t direction;
  ama_protobuf_c_boolean has_speed;
  uint32_t speed;
  ama_protobuf_c_boolean has_altitude;
  int32_t altitude;
  ama_protobuf_c_boolean has_provider;
  Ama__LocationProvider provider;
};
#define AMA__LOCATION_MESSAGE__LOCATION__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&ama__location_message__location__descriptor) \
, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, AMA__LOCATION_PROVIDER__PROVIDER_UNKNOWN }


struct  Ama__LocationMessage__Visit
{
  ProtobufCMessage base;
  ama_protobuf_c_boolean has_incremental_id;
  uint64_t incremental_id;
  ama_protobuf_c_boolean has_collect_timestamp;
  uint64_t collect_timestamp;
  ama_protobuf_c_boolean has_arrival_timestamp;
  uint64_t arrival_timestamp;
  ama_protobuf_c_boolean has_departure_timestamp;
  uint64_t departure_timestamp;
  ama_protobuf_c_boolean has_latitude;
  double latitude;
  ama_protobuf_c_boolean has_longitude;
  double longitude;
  ama_protobuf_c_boolean has_precision;
  double precision;
};
#define AMA__LOCATION_MESSAGE__VISIT__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&ama__location_message__visit__descriptor) \
, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }


struct  Ama__LocationMessage
{
  ProtobufCMessage base;
  size_t n_location;
  Ama__LocationMessage__Location **location;
  size_t n_visits;
  Ama__LocationMessage__Visit **visits;
};
#define AMA__LOCATION_MESSAGE__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&ama__location_message__descriptor) \
, 0,NULL, 0,NULL }


/* Ama__LocationMessage__Location methods */
void   ama__location_message__location__init
                     (Ama__LocationMessage__Location         *message);
/* Ama__LocationMessage__Visit methods */
void   ama__location_message__visit__init
                     (Ama__LocationMessage__Visit         *message);
/* Ama__LocationMessage methods */
void   ama__location_message__init
                     (Ama__LocationMessage         *message);
size_t ama__location_message__get_packed_size
                     (const Ama__LocationMessage   *message);
size_t ama__location_message__pack
                     (const Ama__LocationMessage   *message,
                      uint8_t             *out);
size_t ama__location_message__pack_to_buffer
                     (const Ama__LocationMessage   *message,
                      ProtobufCBuffer     *buffer);
Ama__LocationMessage *
       ama__location_message__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   ama__location_message__free_unpacked
                     (Ama__LocationMessage *message,
                      ProtobufCAllocator *allocator);
/* --- per-message closures --- */

typedef void (*Ama__LocationMessage__Location_Closure)
                 (const Ama__LocationMessage__Location *message,
                  void *closure_data);
typedef void (*Ama__LocationMessage__Visit_Closure)
                 (const Ama__LocationMessage__Visit *message,
                  void *closure_data);
typedef void (*Ama__LocationMessage_Closure)
                 (const Ama__LocationMessage *message,
                  void *closure_data);

/* --- services --- */


/* --- descriptors --- */

extern const ProtobufCEnumDescriptor    ama__location_provider__descriptor;
extern const ProtobufCMessageDescriptor ama__location_message__descriptor;
extern const ProtobufCMessageDescriptor ama__location_message__location__descriptor;
extern const ProtobufCMessageDescriptor ama__location_message__visit__descriptor;

PROTOBUF_C__END_DECLS


#endif  /* PROTOBUF_C_LocationMessage_2eproto__INCLUDED */

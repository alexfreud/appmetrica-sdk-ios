/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: AdRevenue.proto */

#ifndef PROTOBUF_C_AdRevenue_2eproto__INCLUDED
#define PROTOBUF_C_AdRevenue_2eproto__INCLUDED

#include <AppMetricaProtobuf/AppMetricaProtobuf.h>

PROTOBUF_C__BEGIN_DECLS

#if PROTOBUF_C_VERSION_NUMBER < 1003000
# error This file was generated by a newer version of protobuf-c which is incompatible with your libprotobuf-c headers. Please update your headers.
#elif 1005001 < PROTOBUF_C_MIN_COMPILER_VERSION
# error This file was generated by an older version of protobuf-c which is incompatible with your libprotobuf-c headers. Please regenerate this file with a newer version of protobuf-c.
#endif


typedef struct Ama__AdRevenue Ama__AdRevenue;
typedef struct Ama__AdRevenue__Decimal Ama__AdRevenue__Decimal;


/* --- enums --- */

typedef enum _Ama__AdRevenue__AdType {
  AMA__AD_REVENUE__AD_TYPE__UNKNOWN = 0,
  AMA__AD_REVENUE__AD_TYPE__NATIVE = 1,
  AMA__AD_REVENUE__AD_TYPE__BANNER = 2,
  AMA__AD_REVENUE__AD_TYPE__REWARDED = 3,
  AMA__AD_REVENUE__AD_TYPE__INTERSTITIAL = 4,
  AMA__AD_REVENUE__AD_TYPE__MREC = 5,
  AMA__AD_REVENUE__AD_TYPE__OTHER = 6,
  AMA__AD_REVENUE__AD_TYPE__APP_OPEN = 7
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(AMA__AD_REVENUE__AD_TYPE)
} Ama__AdRevenue__AdType;

/* --- messages --- */

struct  Ama__AdRevenue__Decimal
{
  ProtobufCMessage base;
  /*
   * Decimal value mantissa(signed)
   */
  ama_protobuf_c_boolean has_mantissa;
  int64_t mantissa;
  /*
   * Decimal value exponent(aka scale)
   */
  ama_protobuf_c_boolean has_exponent;
  int32_t exponent;
};
#define AMA__AD_REVENUE__DECIMAL__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&ama__ad_revenue__decimal__descriptor) \
, 0, 0ll, 0, 0 }


struct  Ama__AdRevenue
{
  ProtobufCMessage base;
  ama_protobuf_c_boolean has_data_source;
  ProtobufCBinaryData data_source;
  Ama__AdRevenue__Decimal *ad_revenue;
  ama_protobuf_c_boolean has_currency;
  ProtobufCBinaryData currency;
  ama_protobuf_c_boolean has_ad_type;
  Ama__AdRevenue__AdType ad_type;
  ama_protobuf_c_boolean has_ad_network;
  ProtobufCBinaryData ad_network;
  ama_protobuf_c_boolean has_ad_unit_id;
  ProtobufCBinaryData ad_unit_id;
  ama_protobuf_c_boolean has_ad_unit_name;
  ProtobufCBinaryData ad_unit_name;
  ama_protobuf_c_boolean has_ad_placement_id;
  ProtobufCBinaryData ad_placement_id;
  ama_protobuf_c_boolean has_ad_placement_name;
  ProtobufCBinaryData ad_placement_name;
  ama_protobuf_c_boolean has_precision;
  ProtobufCBinaryData precision;
  /*
   * in JSON format
   */
  ama_protobuf_c_boolean has_payload;
  ProtobufCBinaryData payload;
};
extern uint8_t ama__ad_revenue__data_source__default_value_data[];
#define AMA__AD_REVENUE__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&ama__ad_revenue__descriptor) \
, 0, { 6, ama__ad_revenue__data_source__default_value_data }, NULL, 0, {0,NULL}, 0, AMA__AD_REVENUE__AD_TYPE__UNKNOWN, 0, {0,NULL}, 0, {0,NULL}, 0, {0,NULL}, 0, {0,NULL}, 0, {0,NULL}, 0, {0,NULL}, 0, {0,NULL} }


/* Ama__AdRevenue__Decimal methods */
void   ama__ad_revenue__decimal__init
                     (Ama__AdRevenue__Decimal         *message);
/* Ama__AdRevenue methods */
void   ama__ad_revenue__init
                     (Ama__AdRevenue         *message);
size_t ama__ad_revenue__get_packed_size
                     (const Ama__AdRevenue   *message);
size_t ama__ad_revenue__pack
                     (const Ama__AdRevenue   *message,
                      uint8_t             *out);
size_t ama__ad_revenue__pack_to_buffer
                     (const Ama__AdRevenue   *message,
                      ProtobufCBuffer     *buffer);
Ama__AdRevenue *
       ama__ad_revenue__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   ama__ad_revenue__free_unpacked
                     (Ama__AdRevenue *message,
                      ProtobufCAllocator *allocator);
/* --- per-message closures --- */

typedef void (*Ama__AdRevenue__Decimal_Closure)
                 (const Ama__AdRevenue__Decimal *message,
                  void *closure_data);
typedef void (*Ama__AdRevenue_Closure)
                 (const Ama__AdRevenue *message,
                  void *closure_data);

/* --- services --- */


/* --- descriptors --- */

extern const ProtobufCMessageDescriptor ama__ad_revenue__descriptor;
extern const ProtobufCMessageDescriptor ama__ad_revenue__decimal__descriptor;
extern const ProtobufCEnumDescriptor    ama__ad_revenue__ad_type__descriptor;

PROTOBUF_C__END_DECLS


#endif  /* PROTOBUF_C_AdRevenue_2eproto__INCLUDED */

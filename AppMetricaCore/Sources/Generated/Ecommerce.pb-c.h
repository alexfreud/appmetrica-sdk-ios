/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: Ecommerce.proto */

#ifndef PROTOBUF_C_Ecommerce_2eproto__INCLUDED
#define PROTOBUF_C_Ecommerce_2eproto__INCLUDED

#include <AppMetricaProtobuf/AppMetricaProtobuf.h>

PROTOBUF_C__BEGIN_DECLS

#if PROTOBUF_C_VERSION_NUMBER < 1003000
# error This file was generated by a newer version of protobuf-c which is incompatible with your libprotobuf-c headers. Please update your headers.
#elif 1005001 < PROTOBUF_C_MIN_COMPILER_VERSION
# error This file was generated by an older version of protobuf-c which is incompatible with your libprotobuf-c headers. Please regenerate this file with a newer version of protobuf-c.
#endif


typedef struct Ama__ECommerceEvent Ama__ECommerceEvent;
typedef struct Ama__ECommerceEvent__Category Ama__ECommerceEvent__Category;
typedef struct Ama__ECommerceEvent__Payload Ama__ECommerceEvent__Payload;
typedef struct Ama__ECommerceEvent__Payload__Pair Ama__ECommerceEvent__Payload__Pair;
typedef struct Ama__ECommerceEvent__Screen Ama__ECommerceEvent__Screen;
typedef struct Ama__ECommerceEvent__Decimal Ama__ECommerceEvent__Decimal;
typedef struct Ama__ECommerceEvent__Amount Ama__ECommerceEvent__Amount;
typedef struct Ama__ECommerceEvent__Price Ama__ECommerceEvent__Price;
typedef struct Ama__ECommerceEvent__PromoCode Ama__ECommerceEvent__PromoCode;
typedef struct Ama__ECommerceEvent__Product Ama__ECommerceEvent__Product;
typedef struct Ama__ECommerceEvent__Referrer Ama__ECommerceEvent__Referrer;
typedef struct Ama__ECommerceEvent__CartItem Ama__ECommerceEvent__CartItem;
typedef struct Ama__ECommerceEvent__OrderCartItem Ama__ECommerceEvent__OrderCartItem;
typedef struct Ama__ECommerceEvent__Order Ama__ECommerceEvent__Order;
typedef struct Ama__ECommerceEvent__ShownScreenInfo Ama__ECommerceEvent__ShownScreenInfo;
typedef struct Ama__ECommerceEvent__ShownProductCardInfo Ama__ECommerceEvent__ShownProductCardInfo;
typedef struct Ama__ECommerceEvent__ShownProductDetailsInfo Ama__ECommerceEvent__ShownProductDetailsInfo;
typedef struct Ama__ECommerceEvent__CartActionInfo Ama__ECommerceEvent__CartActionInfo;
typedef struct Ama__ECommerceEvent__OrderInfo Ama__ECommerceEvent__OrderInfo;


/* --- enums --- */

typedef enum _Ama__ECommerceEvent__ECommerceEventType {
  AMA__ECOMMERCE_EVENT__ECOMMERCE_EVENT_TYPE__ECOMMERCE_EVENT_TYPE_UNDEFINED = 0,
  /*
   * (see shown_screen_info)
   */
  AMA__ECOMMERCE_EVENT__ECOMMERCE_EVENT_TYPE__ECOMMERCE_EVENT_TYPE_SHOW_SCREEN = 1,
  /*
   * (see shown_product_card_info)
   */
  AMA__ECOMMERCE_EVENT__ECOMMERCE_EVENT_TYPE__ECOMMERCE_EVENT_TYPE_SHOW_PRODUCT_CARD = 2,
  /*
   * (see shown_product_details_info)
   */
  AMA__ECOMMERCE_EVENT__ECOMMERCE_EVENT_TYPE__ECOMMERCE_EVENT_TYPE_SHOW_PRODUCT_DETAILS = 3,
  /*
   * (see cart_action_info)
   */
  AMA__ECOMMERCE_EVENT__ECOMMERCE_EVENT_TYPE__ECOMMERCE_EVENT_TYPE_ADD_TO_CART = 4,
  /*
   * (see cart_action_info)
   */
  AMA__ECOMMERCE_EVENT__ECOMMERCE_EVENT_TYPE__ECOMMERCE_EVENT_TYPE_REMOVE_FROM_CART = 5,
  /*
   * (see order_info)
   */
  AMA__ECOMMERCE_EVENT__ECOMMERCE_EVENT_TYPE__ECOMMERCE_EVENT_TYPE_BEGIN_CHECKOUT = 6,
  /*
   * (see order_info)
   */
  AMA__ECOMMERCE_EVENT__ECOMMERCE_EVENT_TYPE__ECOMMERCE_EVENT_TYPE_PURCHASE = 7
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(AMA__ECOMMERCE_EVENT__ECOMMERCE_EVENT_TYPE)
} Ama__ECommerceEvent__ECommerceEventType;

/* --- messages --- */

struct  Ama__ECommerceEvent__Category
{
  ProtobufCMessage base;
  /*
   * Up to 5 elements
   */
  size_t n_path;
  ProtobufCBinaryData *path;
};
#define AMA__ECOMMERCE_EVENT__CATEGORY__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&ama__ecommerce_event__category__descriptor) \
, 0,NULL }


struct  Ama__ECommerceEvent__Payload__Pair
{
  ProtobufCMessage base;
  ama_protobuf_c_boolean has_key;
  ProtobufCBinaryData key;
  ama_protobuf_c_boolean has_value;
  ProtobufCBinaryData value;
};
#define AMA__ECOMMERCE_EVENT__PAYLOAD__PAIR__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&ama__ecommerce_event__payload__pair__descriptor) \
, 0, {0,NULL}, 0, {0,NULL} }


struct  Ama__ECommerceEvent__Payload
{
  ProtobufCMessage base;
  size_t n_pairs;
  Ama__ECommerceEvent__Payload__Pair **pairs;
  ama_protobuf_c_boolean has_truncated_pairs_count;
  uint32_t truncated_pairs_count;
};
#define AMA__ECOMMERCE_EVENT__PAYLOAD__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&ama__ecommerce_event__payload__descriptor) \
, 0,NULL, 0, 0u }


struct  Ama__ECommerceEvent__Screen
{
  ProtobufCMessage base;
  ama_protobuf_c_boolean has_name;
  ProtobufCBinaryData name;
  Ama__ECommerceEvent__Category *category;
  ama_protobuf_c_boolean has_search_query;
  ProtobufCBinaryData search_query;
  Ama__ECommerceEvent__Payload *payload;
};
#define AMA__ECOMMERCE_EVENT__SCREEN__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&ama__ecommerce_event__screen__descriptor) \
, 0, {0,NULL}, NULL, 0, {0,NULL}, NULL }


struct  Ama__ECommerceEvent__Decimal
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
#define AMA__ECOMMERCE_EVENT__DECIMAL__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&ama__ecommerce_event__decimal__descriptor) \
, 0, 0ll, 0, 0 }


struct  Ama__ECommerceEvent__Amount
{
  ProtobufCMessage base;
  /*
   * Currency for money(BYN, RUB, USD). Unit type for internal components(wood, gold)
   */
  ama_protobuf_c_boolean has_unit_type;
  ProtobufCBinaryData unit_type;
  Ama__ECommerceEvent__Decimal *value;
};
#define AMA__ECOMMERCE_EVENT__AMOUNT__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&ama__ecommerce_event__amount__descriptor) \
, 0, {0,NULL}, NULL }


struct  Ama__ECommerceEvent__Price
{
  ProtobufCMessage base;
  Ama__ECommerceEvent__Amount *fiat;
  size_t n_internal_components;
  Ama__ECommerceEvent__Amount **internal_components;
};
#define AMA__ECOMMERCE_EVENT__PRICE__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&ama__ecommerce_event__price__descriptor) \
, NULL, 0,NULL }


struct  Ama__ECommerceEvent__PromoCode
{
  ProtobufCMessage base;
  ama_protobuf_c_boolean has_code;
  ProtobufCBinaryData code;
};
#define AMA__ECOMMERCE_EVENT__PROMO_CODE__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&ama__ecommerce_event__promo_code__descriptor) \
, 0, {0,NULL} }


struct  Ama__ECommerceEvent__Product
{
  ProtobufCMessage base;
  ama_protobuf_c_boolean has_sku;
  ProtobufCBinaryData sku;
  ama_protobuf_c_boolean has_name;
  ProtobufCBinaryData name;
  Ama__ECommerceEvent__Category *category;
  Ama__ECommerceEvent__Payload *payload;
  Ama__ECommerceEvent__Price *actual_price;
  Ama__ECommerceEvent__Price *original_price;
  size_t n_promo_codes;
  Ama__ECommerceEvent__PromoCode **promo_codes;
};
#define AMA__ECOMMERCE_EVENT__PRODUCT__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&ama__ecommerce_event__product__descriptor) \
, 0, {0,NULL}, 0, {0,NULL}, NULL, NULL, NULL, NULL, 0,NULL }


struct  Ama__ECommerceEvent__Referrer
{
  ProtobufCMessage base;
  ama_protobuf_c_boolean has_type;
  ProtobufCBinaryData type;
  ama_protobuf_c_boolean has_id;
  ProtobufCBinaryData id;
  Ama__ECommerceEvent__Screen *screen;
};
#define AMA__ECOMMERCE_EVENT__REFERRER__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&ama__ecommerce_event__referrer__descriptor) \
, 0, {0,NULL}, 0, {0,NULL}, NULL }


struct  Ama__ECommerceEvent__CartItem
{
  ProtobufCMessage base;
  Ama__ECommerceEvent__Product *product;
  Ama__ECommerceEvent__Referrer *referrer;
  Ama__ECommerceEvent__Decimal *quantity;
  Ama__ECommerceEvent__Price *revenue;
};
#define AMA__ECOMMERCE_EVENT__CART_ITEM__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&ama__ecommerce_event__cart_item__descriptor) \
, NULL, NULL, NULL, NULL }


struct  Ama__ECommerceEvent__OrderCartItem
{
  ProtobufCMessage base;
  /*
   * For sorting and consistency check. Used for `items` in Order.
   */
  ama_protobuf_c_boolean has_number_in_cart;
  uint32_t number_in_cart;
  Ama__ECommerceEvent__CartItem *item;
};
#define AMA__ECOMMERCE_EVENT__ORDER_CART_ITEM__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&ama__ecommerce_event__order_cart_item__descriptor) \
, 0, 0u, NULL }


struct  Ama__ECommerceEvent__Order
{
  ProtobufCMessage base;
  /*
   * Unique identifier of order generated by SDK (UUID v4).
   */
  ama_protobuf_c_boolean has_uuid;
  ProtobufCBinaryData uuid;
  /*
   * Identifier of the order, provided by app developer.
   */
  ama_protobuf_c_boolean has_order_id;
  ProtobufCBinaryData order_id;
  Ama__ECommerceEvent__Payload *payload;
  size_t n_items;
  Ama__ECommerceEvent__OrderCartItem **items;
  /*
   * In case of split of order items into several events.
   */
  ama_protobuf_c_boolean has_total_items_count;
  uint32_t total_items_count;
};
#define AMA__ECOMMERCE_EVENT__ORDER__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&ama__ecommerce_event__order__descriptor) \
, 0, {0,NULL}, 0, {0,NULL}, NULL, 0,NULL, 0, 0u }


struct  Ama__ECommerceEvent__ShownScreenInfo
{
  ProtobufCMessage base;
  Ama__ECommerceEvent__Screen *screen;
};
#define AMA__ECOMMERCE_EVENT__SHOWN_SCREEN_INFO__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&ama__ecommerce_event__shown_screen_info__descriptor) \
, NULL }


struct  Ama__ECommerceEvent__ShownProductCardInfo
{
  ProtobufCMessage base;
  Ama__ECommerceEvent__Product *product;
  Ama__ECommerceEvent__Screen *screen;
};
#define AMA__ECOMMERCE_EVENT__SHOWN_PRODUCT_CARD_INFO__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&ama__ecommerce_event__shown_product_card_info__descriptor) \
, NULL, NULL }


struct  Ama__ECommerceEvent__ShownProductDetailsInfo
{
  ProtobufCMessage base;
  Ama__ECommerceEvent__Product *product;
  Ama__ECommerceEvent__Referrer *referrer;
};
#define AMA__ECOMMERCE_EVENT__SHOWN_PRODUCT_DETAILS_INFO__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&ama__ecommerce_event__shown_product_details_info__descriptor) \
, NULL, NULL }


struct  Ama__ECommerceEvent__CartActionInfo
{
  ProtobufCMessage base;
  Ama__ECommerceEvent__CartItem *item;
};
#define AMA__ECOMMERCE_EVENT__CART_ACTION_INFO__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&ama__ecommerce_event__cart_action_info__descriptor) \
, NULL }


struct  Ama__ECommerceEvent__OrderInfo
{
  ProtobufCMessage base;
  Ama__ECommerceEvent__Order *order;
};
#define AMA__ECOMMERCE_EVENT__ORDER_INFO__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&ama__ecommerce_event__order_info__descriptor) \
, NULL }


struct  Ama__ECommerceEvent
{
  ProtobufCMessage base;
  ama_protobuf_c_boolean has_type;
  Ama__ECommerceEvent__ECommerceEventType type;
  /*
   * type = ECOMMERCE_EVENT_TYPE_SHOW_SCREEN
   */
  Ama__ECommerceEvent__ShownScreenInfo *shown_screen_info;
  /*
   * type = ECOMMERCE_EVENT_TYPE_SHOW_PRODUCT_CARD
   */
  Ama__ECommerceEvent__ShownProductCardInfo *shown_product_card_info;
  /*
   * type = ECOMMERCE_EVENT_TYPE_SHOW_PRODUCT_DETAILS
   */
  Ama__ECommerceEvent__ShownProductDetailsInfo *shown_product_details_info;
  /*
   * type = ECOMMERCE_EVENT_TYPE_ADD_TO_CART | ECOMMERCE_EVENT_TYPE_REMOVE_FROM_CART
   */
  Ama__ECommerceEvent__CartActionInfo *cart_action_info;
  /*
   * type = ECOMMERCE_EVENT_TYPE_BEGIN_CHECKOUT | ECOMMERCE_EVENT_TYPE_PURCHASE
   */
  Ama__ECommerceEvent__OrderInfo *order_info;
};
#define AMA__ECOMMERCE_EVENT__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&ama__ecommerce_event__descriptor) \
, 0, AMA__ECOMMERCE_EVENT__ECOMMERCE_EVENT_TYPE__ECOMMERCE_EVENT_TYPE_UNDEFINED, NULL, NULL, NULL, NULL, NULL }


/* Ama__ECommerceEvent__Category methods */
void   ama__ecommerce_event__category__init
                     (Ama__ECommerceEvent__Category         *message);
/* Ama__ECommerceEvent__Payload__Pair methods */
void   ama__ecommerce_event__payload__pair__init
                     (Ama__ECommerceEvent__Payload__Pair         *message);
/* Ama__ECommerceEvent__Payload methods */
void   ama__ecommerce_event__payload__init
                     (Ama__ECommerceEvent__Payload         *message);
/* Ama__ECommerceEvent__Screen methods */
void   ama__ecommerce_event__screen__init
                     (Ama__ECommerceEvent__Screen         *message);
/* Ama__ECommerceEvent__Decimal methods */
void   ama__ecommerce_event__decimal__init
                     (Ama__ECommerceEvent__Decimal         *message);
/* Ama__ECommerceEvent__Amount methods */
void   ama__ecommerce_event__amount__init
                     (Ama__ECommerceEvent__Amount         *message);
/* Ama__ECommerceEvent__Price methods */
void   ama__ecommerce_event__price__init
                     (Ama__ECommerceEvent__Price         *message);
/* Ama__ECommerceEvent__PromoCode methods */
void   ama__ecommerce_event__promo_code__init
                     (Ama__ECommerceEvent__PromoCode         *message);
/* Ama__ECommerceEvent__Product methods */
void   ama__ecommerce_event__product__init
                     (Ama__ECommerceEvent__Product         *message);
/* Ama__ECommerceEvent__Referrer methods */
void   ama__ecommerce_event__referrer__init
                     (Ama__ECommerceEvent__Referrer         *message);
/* Ama__ECommerceEvent__CartItem methods */
void   ama__ecommerce_event__cart_item__init
                     (Ama__ECommerceEvent__CartItem         *message);
/* Ama__ECommerceEvent__OrderCartItem methods */
void   ama__ecommerce_event__order_cart_item__init
                     (Ama__ECommerceEvent__OrderCartItem         *message);
/* Ama__ECommerceEvent__Order methods */
void   ama__ecommerce_event__order__init
                     (Ama__ECommerceEvent__Order         *message);
/* Ama__ECommerceEvent__ShownScreenInfo methods */
void   ama__ecommerce_event__shown_screen_info__init
                     (Ama__ECommerceEvent__ShownScreenInfo         *message);
/* Ama__ECommerceEvent__ShownProductCardInfo methods */
void   ama__ecommerce_event__shown_product_card_info__init
                     (Ama__ECommerceEvent__ShownProductCardInfo         *message);
/* Ama__ECommerceEvent__ShownProductDetailsInfo methods */
void   ama__ecommerce_event__shown_product_details_info__init
                     (Ama__ECommerceEvent__ShownProductDetailsInfo         *message);
/* Ama__ECommerceEvent__CartActionInfo methods */
void   ama__ecommerce_event__cart_action_info__init
                     (Ama__ECommerceEvent__CartActionInfo         *message);
/* Ama__ECommerceEvent__OrderInfo methods */
void   ama__ecommerce_event__order_info__init
                     (Ama__ECommerceEvent__OrderInfo         *message);
/* Ama__ECommerceEvent methods */
void   ama__ecommerce_event__init
                     (Ama__ECommerceEvent         *message);
size_t ama__ecommerce_event__get_packed_size
                     (const Ama__ECommerceEvent   *message);
size_t ama__ecommerce_event__pack
                     (const Ama__ECommerceEvent   *message,
                      uint8_t             *out);
size_t ama__ecommerce_event__pack_to_buffer
                     (const Ama__ECommerceEvent   *message,
                      ProtobufCBuffer     *buffer);
Ama__ECommerceEvent *
       ama__ecommerce_event__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   ama__ecommerce_event__free_unpacked
                     (Ama__ECommerceEvent *message,
                      ProtobufCAllocator *allocator);
/* --- per-message closures --- */

typedef void (*Ama__ECommerceEvent__Category_Closure)
                 (const Ama__ECommerceEvent__Category *message,
                  void *closure_data);
typedef void (*Ama__ECommerceEvent__Payload__Pair_Closure)
                 (const Ama__ECommerceEvent__Payload__Pair *message,
                  void *closure_data);
typedef void (*Ama__ECommerceEvent__Payload_Closure)
                 (const Ama__ECommerceEvent__Payload *message,
                  void *closure_data);
typedef void (*Ama__ECommerceEvent__Screen_Closure)
                 (const Ama__ECommerceEvent__Screen *message,
                  void *closure_data);
typedef void (*Ama__ECommerceEvent__Decimal_Closure)
                 (const Ama__ECommerceEvent__Decimal *message,
                  void *closure_data);
typedef void (*Ama__ECommerceEvent__Amount_Closure)
                 (const Ama__ECommerceEvent__Amount *message,
                  void *closure_data);
typedef void (*Ama__ECommerceEvent__Price_Closure)
                 (const Ama__ECommerceEvent__Price *message,
                  void *closure_data);
typedef void (*Ama__ECommerceEvent__PromoCode_Closure)
                 (const Ama__ECommerceEvent__PromoCode *message,
                  void *closure_data);
typedef void (*Ama__ECommerceEvent__Product_Closure)
                 (const Ama__ECommerceEvent__Product *message,
                  void *closure_data);
typedef void (*Ama__ECommerceEvent__Referrer_Closure)
                 (const Ama__ECommerceEvent__Referrer *message,
                  void *closure_data);
typedef void (*Ama__ECommerceEvent__CartItem_Closure)
                 (const Ama__ECommerceEvent__CartItem *message,
                  void *closure_data);
typedef void (*Ama__ECommerceEvent__OrderCartItem_Closure)
                 (const Ama__ECommerceEvent__OrderCartItem *message,
                  void *closure_data);
typedef void (*Ama__ECommerceEvent__Order_Closure)
                 (const Ama__ECommerceEvent__Order *message,
                  void *closure_data);
typedef void (*Ama__ECommerceEvent__ShownScreenInfo_Closure)
                 (const Ama__ECommerceEvent__ShownScreenInfo *message,
                  void *closure_data);
typedef void (*Ama__ECommerceEvent__ShownProductCardInfo_Closure)
                 (const Ama__ECommerceEvent__ShownProductCardInfo *message,
                  void *closure_data);
typedef void (*Ama__ECommerceEvent__ShownProductDetailsInfo_Closure)
                 (const Ama__ECommerceEvent__ShownProductDetailsInfo *message,
                  void *closure_data);
typedef void (*Ama__ECommerceEvent__CartActionInfo_Closure)
                 (const Ama__ECommerceEvent__CartActionInfo *message,
                  void *closure_data);
typedef void (*Ama__ECommerceEvent__OrderInfo_Closure)
                 (const Ama__ECommerceEvent__OrderInfo *message,
                  void *closure_data);
typedef void (*Ama__ECommerceEvent_Closure)
                 (const Ama__ECommerceEvent *message,
                  void *closure_data);

/* --- services --- */


/* --- descriptors --- */

extern const ProtobufCMessageDescriptor ama__ecommerce_event__descriptor;
extern const ProtobufCMessageDescriptor ama__ecommerce_event__category__descriptor;
extern const ProtobufCMessageDescriptor ama__ecommerce_event__payload__descriptor;
extern const ProtobufCMessageDescriptor ama__ecommerce_event__payload__pair__descriptor;
extern const ProtobufCMessageDescriptor ama__ecommerce_event__screen__descriptor;
extern const ProtobufCMessageDescriptor ama__ecommerce_event__decimal__descriptor;
extern const ProtobufCMessageDescriptor ama__ecommerce_event__amount__descriptor;
extern const ProtobufCMessageDescriptor ama__ecommerce_event__price__descriptor;
extern const ProtobufCMessageDescriptor ama__ecommerce_event__promo_code__descriptor;
extern const ProtobufCMessageDescriptor ama__ecommerce_event__product__descriptor;
extern const ProtobufCMessageDescriptor ama__ecommerce_event__referrer__descriptor;
extern const ProtobufCMessageDescriptor ama__ecommerce_event__cart_item__descriptor;
extern const ProtobufCMessageDescriptor ama__ecommerce_event__order_cart_item__descriptor;
extern const ProtobufCMessageDescriptor ama__ecommerce_event__order__descriptor;
extern const ProtobufCMessageDescriptor ama__ecommerce_event__shown_screen_info__descriptor;
extern const ProtobufCMessageDescriptor ama__ecommerce_event__shown_product_card_info__descriptor;
extern const ProtobufCMessageDescriptor ama__ecommerce_event__shown_product_details_info__descriptor;
extern const ProtobufCMessageDescriptor ama__ecommerce_event__cart_action_info__descriptor;
extern const ProtobufCMessageDescriptor ama__ecommerce_event__order_info__descriptor;
extern const ProtobufCEnumDescriptor    ama__ecommerce_event__ecommerce_event_type__descriptor;

PROTOBUF_C__END_DECLS


#endif  /* PROTOBUF_C_Ecommerce_2eproto__INCLUDED */

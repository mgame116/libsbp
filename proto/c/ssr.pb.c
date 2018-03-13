/* Automatically generated nanopb constant definitions */
/* Generated by nanopb-0.4.0-dev at Tue Mar 13 13:32:36 2018. */

#include "ssr.pb.h"

/* @@protoc_insertion_point(includes) */
#if PB_PROTO_HEADER_VERSION != 30
#error Regenerate this file with the current version of nanopb generator.
#endif



const pb_field_t swiftnav_sbp_ssr_CodeBiasesContent_fields[3] = {
    PB_FIELD(  1, UINT32  , SINGULAR, STATIC  , FIRST, swiftnav_sbp_ssr_CodeBiasesContent, code, code, 0),
    PB_FIELD(  2, SINT32  , SINGULAR, STATIC  , OTHER, swiftnav_sbp_ssr_CodeBiasesContent, value, code, 0),
    PB_LAST_FIELD
};

const pb_field_t swiftnav_sbp_ssr_PhaseBiasesContent_fields[6] = {
    PB_FIELD(  1, UINT32  , SINGULAR, STATIC  , FIRST, swiftnav_sbp_ssr_PhaseBiasesContent, code, code, 0),
    PB_FIELD(  2, UINT32  , SINGULAR, STATIC  , OTHER, swiftnav_sbp_ssr_PhaseBiasesContent, integer_indicator, code, 0),
    PB_FIELD(  3, UINT32  , SINGULAR, STATIC  , OTHER, swiftnav_sbp_ssr_PhaseBiasesContent, widelane_integer_indicator, integer_indicator, 0),
    PB_FIELD(  4, UINT32  , SINGULAR, STATIC  , OTHER, swiftnav_sbp_ssr_PhaseBiasesContent, discontinuity_counter, widelane_integer_indicator, 0),
    PB_FIELD(  5, SINT32  , SINGULAR, STATIC  , OTHER, swiftnav_sbp_ssr_PhaseBiasesContent, bias, discontinuity_counter, 0),
    PB_LAST_FIELD
};

const pb_field_t swiftnav_sbp_ssr_MsgSsrOrbitClock_fields[15] = {
    PB_FIELD(  1, MESSAGE , SINGULAR, STATIC  , FIRST, swiftnav_sbp_ssr_MsgSsrOrbitClock, time, time, &swiftnav_sbp_gnss_GpsTimeSec_fields),
    PB_FIELD(  2, MESSAGE , SINGULAR, STATIC  , OTHER, swiftnav_sbp_ssr_MsgSsrOrbitClock, sid, time, &swiftnav_sbp_gnss_GnssSignal_fields),
    PB_FIELD(  3, UINT32  , SINGULAR, STATIC  , OTHER, swiftnav_sbp_ssr_MsgSsrOrbitClock, update_interval, sid, 0),
    PB_FIELD(  4, UINT32  , SINGULAR, STATIC  , OTHER, swiftnav_sbp_ssr_MsgSsrOrbitClock, iod_ssr, update_interval, 0),
    PB_FIELD(  5, UINT32  , SINGULAR, STATIC  , OTHER, swiftnav_sbp_ssr_MsgSsrOrbitClock, iod, iod_ssr, 0),
    PB_FIELD(  6, SINT32  , SINGULAR, STATIC  , OTHER, swiftnav_sbp_ssr_MsgSsrOrbitClock, radial, iod, 0),
    PB_FIELD(  7, SINT32  , SINGULAR, STATIC  , OTHER, swiftnav_sbp_ssr_MsgSsrOrbitClock, along, radial, 0),
    PB_FIELD(  8, SINT32  , SINGULAR, STATIC  , OTHER, swiftnav_sbp_ssr_MsgSsrOrbitClock, cross, along, 0),
    PB_FIELD(  9, SINT32  , SINGULAR, STATIC  , OTHER, swiftnav_sbp_ssr_MsgSsrOrbitClock, dot_radial, cross, 0),
    PB_FIELD( 10, SINT32  , SINGULAR, STATIC  , OTHER, swiftnav_sbp_ssr_MsgSsrOrbitClock, dot_along, dot_radial, 0),
    PB_FIELD( 11, SINT32  , SINGULAR, STATIC  , OTHER, swiftnav_sbp_ssr_MsgSsrOrbitClock, dot_cross, dot_along, 0),
    PB_FIELD( 12, SINT32  , SINGULAR, STATIC  , OTHER, swiftnav_sbp_ssr_MsgSsrOrbitClock, c0, dot_cross, 0),
    PB_FIELD( 13, SINT32  , SINGULAR, STATIC  , OTHER, swiftnav_sbp_ssr_MsgSsrOrbitClock, c1, c0, 0),
    PB_FIELD( 14, SINT32  , SINGULAR, STATIC  , OTHER, swiftnav_sbp_ssr_MsgSsrOrbitClock, c2, c1, 0),
    PB_LAST_FIELD
};

const pb_field_t swiftnav_sbp_ssr_MsgSsrCodeBiases_fields[6] = {
    PB_FIELD(  1, MESSAGE , SINGULAR, STATIC  , FIRST, swiftnav_sbp_ssr_MsgSsrCodeBiases, time, time, &swiftnav_sbp_gnss_GpsTimeSec_fields),
    PB_FIELD(  2, MESSAGE , SINGULAR, STATIC  , OTHER, swiftnav_sbp_ssr_MsgSsrCodeBiases, sid, time, &swiftnav_sbp_gnss_GnssSignal_fields),
    PB_FIELD(  3, UINT32  , SINGULAR, STATIC  , OTHER, swiftnav_sbp_ssr_MsgSsrCodeBiases, update_interval, sid, 0),
    PB_FIELD(  4, UINT32  , SINGULAR, STATIC  , OTHER, swiftnav_sbp_ssr_MsgSsrCodeBiases, iod_ssr, update_interval, 0),
    PB_FIELD(  5, MESSAGE , REPEATED, CALLBACK, OTHER, swiftnav_sbp_ssr_MsgSsrCodeBiases, biases, iod_ssr, &swiftnav_sbp_ssr_CodeBiasesContent_fields),
    PB_LAST_FIELD
};

const pb_field_t swiftnav_sbp_ssr_MsgSsrPhaseBiases_fields[10] = {
    PB_FIELD(  1, MESSAGE , SINGULAR, STATIC  , FIRST, swiftnav_sbp_ssr_MsgSsrPhaseBiases, time, time, &swiftnav_sbp_gnss_GpsTimeSec_fields),
    PB_FIELD(  2, MESSAGE , SINGULAR, STATIC  , OTHER, swiftnav_sbp_ssr_MsgSsrPhaseBiases, sid, time, &swiftnav_sbp_gnss_GnssSignal_fields),
    PB_FIELD(  3, UINT32  , SINGULAR, STATIC  , OTHER, swiftnav_sbp_ssr_MsgSsrPhaseBiases, update_interval, sid, 0),
    PB_FIELD(  4, UINT32  , SINGULAR, STATIC  , OTHER, swiftnav_sbp_ssr_MsgSsrPhaseBiases, iod_ssr, update_interval, 0),
    PB_FIELD(  5, UINT32  , SINGULAR, STATIC  , OTHER, swiftnav_sbp_ssr_MsgSsrPhaseBiases, dispersive_bias, iod_ssr, 0),
    PB_FIELD(  6, UINT32  , SINGULAR, STATIC  , OTHER, swiftnav_sbp_ssr_MsgSsrPhaseBiases, mw_consistency, dispersive_bias, 0),
    PB_FIELD(  7, UINT32  , SINGULAR, STATIC  , OTHER, swiftnav_sbp_ssr_MsgSsrPhaseBiases, yaw, mw_consistency, 0),
    PB_FIELD(  8, SINT32  , SINGULAR, STATIC  , OTHER, swiftnav_sbp_ssr_MsgSsrPhaseBiases, yaw_rate, yaw, 0),
    PB_FIELD(  9, MESSAGE , REPEATED, CALLBACK, OTHER, swiftnav_sbp_ssr_MsgSsrPhaseBiases, biases, yaw_rate, &swiftnav_sbp_ssr_PhaseBiasesContent_fields),
    PB_LAST_FIELD
};


/* Check that field information fits in pb_field_t */
#if !defined(PB_FIELD_32BIT)
/* If you get an error here, it means that you need to define PB_FIELD_32BIT
 * compile-time option. You can do that in pb.h or on compiler command line.
 * 
 * The reason you need to do this is that some of your messages contain tag
 * numbers or field sizes that are larger than what can fit in 8 or 16 bit
 * field descriptors.
 */
PB_STATIC_ASSERT((pb_membersize(swiftnav_sbp_ssr_MsgSsrOrbitClock, time) < 65536 && pb_membersize(swiftnav_sbp_ssr_MsgSsrOrbitClock, sid) < 65536 && pb_membersize(swiftnav_sbp_ssr_MsgSsrCodeBiases, time) < 65536 && pb_membersize(swiftnav_sbp_ssr_MsgSsrCodeBiases, sid) < 65536 && pb_membersize(swiftnav_sbp_ssr_MsgSsrPhaseBiases, time) < 65536 && pb_membersize(swiftnav_sbp_ssr_MsgSsrPhaseBiases, sid) < 65536), YOU_MUST_DEFINE_PB_FIELD_32BIT_FOR_MESSAGES_swiftnav_sbp_ssr_CodeBiasesContent_swiftnav_sbp_ssr_PhaseBiasesContent_swiftnav_sbp_ssr_MsgSsrOrbitClock_swiftnav_sbp_ssr_MsgSsrCodeBiases_swiftnav_sbp_ssr_MsgSsrPhaseBiases)
#endif

#if !defined(PB_FIELD_16BIT) && !defined(PB_FIELD_32BIT)
/* If you get an error here, it means that you need to define PB_FIELD_16BIT
 * compile-time option. You can do that in pb.h or on compiler command line.
 * 
 * The reason you need to do this is that some of your messages contain tag
 * numbers or field sizes that are larger than what can fit in the default
 * 8 bit descriptors.
 */
PB_STATIC_ASSERT((pb_membersize(swiftnav_sbp_ssr_MsgSsrOrbitClock, time) < 256 && pb_membersize(swiftnav_sbp_ssr_MsgSsrOrbitClock, sid) < 256 && pb_membersize(swiftnav_sbp_ssr_MsgSsrCodeBiases, time) < 256 && pb_membersize(swiftnav_sbp_ssr_MsgSsrCodeBiases, sid) < 256 && pb_membersize(swiftnav_sbp_ssr_MsgSsrPhaseBiases, time) < 256 && pb_membersize(swiftnav_sbp_ssr_MsgSsrPhaseBiases, sid) < 256), YOU_MUST_DEFINE_PB_FIELD_16BIT_FOR_MESSAGES_swiftnav_sbp_ssr_CodeBiasesContent_swiftnav_sbp_ssr_PhaseBiasesContent_swiftnav_sbp_ssr_MsgSsrOrbitClock_swiftnav_sbp_ssr_MsgSsrCodeBiases_swiftnav_sbp_ssr_MsgSsrPhaseBiases)
#endif


/* @@protoc_insertion_point(eof) */

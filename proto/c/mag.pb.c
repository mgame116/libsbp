/* Automatically generated nanopb constant definitions */
/* Generated by nanopb-0.4.0-dev at Tue Mar 13 13:32:36 2018. */

#include "mag.pb.h"

/* @@protoc_insertion_point(includes) */
#if PB_PROTO_HEADER_VERSION != 30
#error Regenerate this file with the current version of nanopb generator.
#endif



const pb_field_t swiftnav_sbp_mag_MsgMagRaw_fields[6] = {
    PB_FIELD(  1, UINT32  , SINGULAR, STATIC  , FIRST, swiftnav_sbp_mag_MsgMagRaw, tow, tow, 0),
    PB_FIELD(  2, UINT32  , SINGULAR, STATIC  , OTHER, swiftnav_sbp_mag_MsgMagRaw, tow_f, tow, 0),
    PB_FIELD(  3, SINT32  , SINGULAR, STATIC  , OTHER, swiftnav_sbp_mag_MsgMagRaw, mag_x, tow_f, 0),
    PB_FIELD(  4, SINT32  , SINGULAR, STATIC  , OTHER, swiftnav_sbp_mag_MsgMagRaw, mag_y, mag_x, 0),
    PB_FIELD(  5, SINT32  , SINGULAR, STATIC  , OTHER, swiftnav_sbp_mag_MsgMagRaw, mag_z, mag_y, 0),
    PB_LAST_FIELD
};


/* @@protoc_insertion_point(eof) */

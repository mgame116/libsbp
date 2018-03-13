/* Automatically generated nanopb header */
/* Generated by nanopb-0.4.0-dev at Tue Mar 13 13:32:36 2018. */

#ifndef PB_SWIFTNAV_SBP_SETTINGS_SETTINGS_PB_H_INCLUDED
#define PB_SWIFTNAV_SBP_SETTINGS_SETTINGS_PB_H_INCLUDED
#include <pb.h>

/* @@protoc_insertion_point(includes) */
#if PB_PROTO_HEADER_VERSION != 30
#error Regenerate this file with the current version of nanopb generator.
#endif

#ifdef __cplusplus
extern "C" {
#endif

/* Struct definitions */
typedef struct _swiftnav_sbp_settings_MsgSettingsReadByIndexDone {
    char dummy_field;
/* @@protoc_insertion_point(struct:swiftnav_sbp_settings_MsgSettingsReadByIndexDone) */
} swiftnav_sbp_settings_MsgSettingsReadByIndexDone;

typedef struct _swiftnav_sbp_settings_MsgSettingsReadReq {
    pb_callback_t setting;
/* @@protoc_insertion_point(struct:swiftnav_sbp_settings_MsgSettingsReadReq) */
} swiftnav_sbp_settings_MsgSettingsReadReq;

typedef struct _swiftnav_sbp_settings_MsgSettingsReadResp {
    pb_callback_t setting;
/* @@protoc_insertion_point(struct:swiftnav_sbp_settings_MsgSettingsReadResp) */
} swiftnav_sbp_settings_MsgSettingsReadResp;

typedef struct _swiftnav_sbp_settings_MsgSettingsRegister {
    pb_callback_t setting;
/* @@protoc_insertion_point(struct:swiftnav_sbp_settings_MsgSettingsRegister) */
} swiftnav_sbp_settings_MsgSettingsRegister;

typedef struct _swiftnav_sbp_settings_MsgSettingsSave {
    char dummy_field;
/* @@protoc_insertion_point(struct:swiftnav_sbp_settings_MsgSettingsSave) */
} swiftnav_sbp_settings_MsgSettingsSave;

typedef struct _swiftnav_sbp_settings_MsgSettingsWrite {
    pb_callback_t setting;
/* @@protoc_insertion_point(struct:swiftnav_sbp_settings_MsgSettingsWrite) */
} swiftnav_sbp_settings_MsgSettingsWrite;

typedef struct _swiftnav_sbp_settings_MsgSettingsReadByIndexReq {
    uint32_t index;
/* @@protoc_insertion_point(struct:swiftnav_sbp_settings_MsgSettingsReadByIndexReq) */
} swiftnav_sbp_settings_MsgSettingsReadByIndexReq;

typedef struct _swiftnav_sbp_settings_MsgSettingsReadByIndexResp {
    uint32_t index;
    pb_callback_t setting;
/* @@protoc_insertion_point(struct:swiftnav_sbp_settings_MsgSettingsReadByIndexResp) */
} swiftnav_sbp_settings_MsgSettingsReadByIndexResp;

typedef struct _swiftnav_sbp_settings_MsgSettingsWriteResp {
    uint32_t status;
    pb_callback_t setting;
/* @@protoc_insertion_point(struct:swiftnav_sbp_settings_MsgSettingsWriteResp) */
} swiftnav_sbp_settings_MsgSettingsWriteResp;

/* Default values for struct fields */

/* Initializer values for message structs */
#define swiftnav_sbp_settings_MsgSettingsSave_init_default {0}
#define swiftnav_sbp_settings_MsgSettingsWrite_init_default {{{NULL}, NULL}}
#define swiftnav_sbp_settings_MsgSettingsWriteResp_init_default {0, {{NULL}, NULL}}
#define swiftnav_sbp_settings_MsgSettingsReadReq_init_default {{{NULL}, NULL}}
#define swiftnav_sbp_settings_MsgSettingsReadResp_init_default {{{NULL}, NULL}}
#define swiftnav_sbp_settings_MsgSettingsReadByIndexReq_init_default {0}
#define swiftnav_sbp_settings_MsgSettingsReadByIndexResp_init_default {0, {{NULL}, NULL}}
#define swiftnav_sbp_settings_MsgSettingsReadByIndexDone_init_default {0}
#define swiftnav_sbp_settings_MsgSettingsRegister_init_default {{{NULL}, NULL}}
#define swiftnav_sbp_settings_MsgSettingsSave_init_zero {0}
#define swiftnav_sbp_settings_MsgSettingsWrite_init_zero {{{NULL}, NULL}}
#define swiftnav_sbp_settings_MsgSettingsWriteResp_init_zero {0, {{NULL}, NULL}}
#define swiftnav_sbp_settings_MsgSettingsReadReq_init_zero {{{NULL}, NULL}}
#define swiftnav_sbp_settings_MsgSettingsReadResp_init_zero {{{NULL}, NULL}}
#define swiftnav_sbp_settings_MsgSettingsReadByIndexReq_init_zero {0}
#define swiftnav_sbp_settings_MsgSettingsReadByIndexResp_init_zero {0, {{NULL}, NULL}}
#define swiftnav_sbp_settings_MsgSettingsReadByIndexDone_init_zero {0}
#define swiftnav_sbp_settings_MsgSettingsRegister_init_zero {{{NULL}, NULL}}

/* Field tags (for use in manual encoding/decoding) */
#define swiftnav_sbp_settings_MsgSettingsReadReq_setting_tag 1
#define swiftnav_sbp_settings_MsgSettingsReadResp_setting_tag 1
#define swiftnav_sbp_settings_MsgSettingsRegister_setting_tag 1
#define swiftnav_sbp_settings_MsgSettingsWrite_setting_tag 1
#define swiftnav_sbp_settings_MsgSettingsReadByIndexReq_index_tag 1
#define swiftnav_sbp_settings_MsgSettingsReadByIndexResp_index_tag 1
#define swiftnav_sbp_settings_MsgSettingsReadByIndexResp_setting_tag 2
#define swiftnav_sbp_settings_MsgSettingsWriteResp_status_tag 1
#define swiftnav_sbp_settings_MsgSettingsWriteResp_setting_tag 2

/* Struct field encoding specification for nanopb */
extern const pb_field_t swiftnav_sbp_settings_MsgSettingsSave_fields[1];
extern const pb_field_t swiftnav_sbp_settings_MsgSettingsWrite_fields[2];
extern const pb_field_t swiftnav_sbp_settings_MsgSettingsWriteResp_fields[3];
extern const pb_field_t swiftnav_sbp_settings_MsgSettingsReadReq_fields[2];
extern const pb_field_t swiftnav_sbp_settings_MsgSettingsReadResp_fields[2];
extern const pb_field_t swiftnav_sbp_settings_MsgSettingsReadByIndexReq_fields[2];
extern const pb_field_t swiftnav_sbp_settings_MsgSettingsReadByIndexResp_fields[3];
extern const pb_field_t swiftnav_sbp_settings_MsgSettingsReadByIndexDone_fields[1];
extern const pb_field_t swiftnav_sbp_settings_MsgSettingsRegister_fields[2];

/* Maximum encoded size of messages (where known) */
#define swiftnav_sbp_settings_MsgSettingsSave_size 0
/* swiftnav_sbp_settings_MsgSettingsWrite_size depends on runtime parameters */
/* swiftnav_sbp_settings_MsgSettingsWriteResp_size depends on runtime parameters */
/* swiftnav_sbp_settings_MsgSettingsReadReq_size depends on runtime parameters */
/* swiftnav_sbp_settings_MsgSettingsReadResp_size depends on runtime parameters */
#define swiftnav_sbp_settings_MsgSettingsReadByIndexReq_size 6
/* swiftnav_sbp_settings_MsgSettingsReadByIndexResp_size depends on runtime parameters */
#define swiftnav_sbp_settings_MsgSettingsReadByIndexDone_size 0
/* swiftnav_sbp_settings_MsgSettingsRegister_size depends on runtime parameters */

/* Message IDs (where set with "msgid" option) */
#ifdef PB_MSGID

#define SETTINGS_MESSAGES \


#endif

#ifdef __cplusplus
} /* extern "C" */
#endif
/* @@protoc_insertion_point(eof) */

#endif

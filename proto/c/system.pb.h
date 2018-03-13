/* Automatically generated nanopb header */
/* Generated by nanopb-0.4.0-dev at Tue Mar 13 13:32:36 2018. */

#ifndef PB_SWIFTNAV_SBP_SYSTEM_SYSTEM_PB_H_INCLUDED
#define PB_SWIFTNAV_SBP_SYSTEM_SYSTEM_PB_H_INCLUDED
#include <pb.h>

/* @@protoc_insertion_point(includes) */
#if PB_PROTO_HEADER_VERSION != 30
#error Regenerate this file with the current version of nanopb generator.
#endif

#ifdef __cplusplus
extern "C" {
#endif

/* Struct definitions */
typedef struct _swiftnav_sbp_system_MsgDgnssStatus {
    uint32_t flags;
    uint32_t latency;
    uint32_t num_signals;
    pb_callback_t source;
/* @@protoc_insertion_point(struct:swiftnav_sbp_system_MsgDgnssStatus) */
} swiftnav_sbp_system_MsgDgnssStatus;

typedef struct _swiftnav_sbp_system_MsgHeartbeat {
    uint32_t flags;
/* @@protoc_insertion_point(struct:swiftnav_sbp_system_MsgHeartbeat) */
} swiftnav_sbp_system_MsgHeartbeat;

typedef struct _swiftnav_sbp_system_MsgInsStatus {
    uint32_t flags;
/* @@protoc_insertion_point(struct:swiftnav_sbp_system_MsgInsStatus) */
} swiftnav_sbp_system_MsgInsStatus;

typedef struct _swiftnav_sbp_system_MsgStartup {
    uint32_t cause;
    uint32_t startup_type;
/* @@protoc_insertion_point(struct:swiftnav_sbp_system_MsgStartup) */
} swiftnav_sbp_system_MsgStartup;

/* Default values for struct fields */

/* Initializer values for message structs */
#define swiftnav_sbp_system_MsgStartup_init_default {0, 0}
#define swiftnav_sbp_system_MsgDgnssStatus_init_default {0, 0, 0, {{NULL}, NULL}}
#define swiftnav_sbp_system_MsgHeartbeat_init_default {0}
#define swiftnav_sbp_system_MsgInsStatus_init_default {0}
#define swiftnav_sbp_system_MsgStartup_init_zero {0, 0}
#define swiftnav_sbp_system_MsgDgnssStatus_init_zero {0, 0, 0, {{NULL}, NULL}}
#define swiftnav_sbp_system_MsgHeartbeat_init_zero {0}
#define swiftnav_sbp_system_MsgInsStatus_init_zero {0}

/* Field tags (for use in manual encoding/decoding) */
#define swiftnav_sbp_system_MsgDgnssStatus_flags_tag 1
#define swiftnav_sbp_system_MsgDgnssStatus_latency_tag 2
#define swiftnav_sbp_system_MsgDgnssStatus_num_signals_tag 3
#define swiftnav_sbp_system_MsgDgnssStatus_source_tag 4
#define swiftnav_sbp_system_MsgHeartbeat_flags_tag 1
#define swiftnav_sbp_system_MsgInsStatus_flags_tag 1
#define swiftnav_sbp_system_MsgStartup_cause_tag 1
#define swiftnav_sbp_system_MsgStartup_startup_type_tag 2

/* Struct field encoding specification for nanopb */
extern const pb_field_t swiftnav_sbp_system_MsgStartup_fields[3];
extern const pb_field_t swiftnav_sbp_system_MsgDgnssStatus_fields[5];
extern const pb_field_t swiftnav_sbp_system_MsgHeartbeat_fields[2];
extern const pb_field_t swiftnav_sbp_system_MsgInsStatus_fields[2];

/* Maximum encoded size of messages (where known) */
#define swiftnav_sbp_system_MsgStartup_size      12
/* swiftnav_sbp_system_MsgDgnssStatus_size depends on runtime parameters */
#define swiftnav_sbp_system_MsgHeartbeat_size    6
#define swiftnav_sbp_system_MsgInsStatus_size    6

/* Message IDs (where set with "msgid" option) */
#ifdef PB_MSGID

#define SYSTEM_MESSAGES \


#endif

#ifdef __cplusplus
} /* extern "C" */
#endif
/* @@protoc_insertion_point(eof) */

#endif

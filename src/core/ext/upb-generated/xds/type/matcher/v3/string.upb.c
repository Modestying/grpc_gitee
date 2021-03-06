/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     xds/type/matcher/v3/string.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#include <stddef.h>
#include "upb/msg_internal.h"
#include "xds/type/matcher/v3/string.upb.h"
#include "xds/type/matcher/v3/regex.upb.h"
#include "validate/validate.upb.h"

#include "upb/port_def.inc"

static const upb_MiniTable_Sub xds_type_matcher_v3_StringMatcher_submsgs[1] = {
  {.submsg = &xds_type_matcher_v3_RegexMatcher_msginit},
};

static const upb_MiniTable_Field xds_type_matcher_v3_StringMatcher__fields[6] = {
  {1, UPB_SIZE(4, 8), UPB_SIZE(-13, -25), 0, 9, kUpb_FieldMode_Scalar | (upb_FieldRep_StringView << upb_FieldRep_Shift)},
  {2, UPB_SIZE(4, 8), UPB_SIZE(-13, -25), 0, 9, kUpb_FieldMode_Scalar | (upb_FieldRep_StringView << upb_FieldRep_Shift)},
  {3, UPB_SIZE(4, 8), UPB_SIZE(-13, -25), 0, 9, kUpb_FieldMode_Scalar | (upb_FieldRep_StringView << upb_FieldRep_Shift)},
  {5, UPB_SIZE(4, 8), UPB_SIZE(-13, -25), 0, 11, kUpb_FieldMode_Scalar | (upb_FieldRep_Pointer << upb_FieldRep_Shift)},
  {6, UPB_SIZE(0, 0), 0, 0, 8, kUpb_FieldMode_Scalar | (upb_FieldRep_1Byte << upb_FieldRep_Shift)},
  {7, UPB_SIZE(4, 8), UPB_SIZE(-13, -25), 0, 9, kUpb_FieldMode_Scalar | (upb_FieldRep_StringView << upb_FieldRep_Shift)},
};

const upb_MiniTable xds_type_matcher_v3_StringMatcher_msginit = {
  &xds_type_matcher_v3_StringMatcher_submsgs[0],
  &xds_type_matcher_v3_StringMatcher__fields[0],
  UPB_SIZE(16, 32), 6, upb_ExtMode_NonExtendable, 3, 255, 0,
};

static const upb_MiniTable_Sub xds_type_matcher_v3_ListStringMatcher_submsgs[1] = {
  {.submsg = &xds_type_matcher_v3_StringMatcher_msginit},
};

static const upb_MiniTable_Field xds_type_matcher_v3_ListStringMatcher__fields[1] = {
  {1, UPB_SIZE(0, 0), 0, 0, 11, kUpb_FieldMode_Array | (upb_FieldRep_Pointer << upb_FieldRep_Shift)},
};

const upb_MiniTable xds_type_matcher_v3_ListStringMatcher_msginit = {
  &xds_type_matcher_v3_ListStringMatcher_submsgs[0],
  &xds_type_matcher_v3_ListStringMatcher__fields[0],
  UPB_SIZE(8, 8), 1, upb_ExtMode_NonExtendable, 1, 255, 0,
};

static const upb_MiniTable *messages_layout[2] = {
  &xds_type_matcher_v3_StringMatcher_msginit,
  &xds_type_matcher_v3_ListStringMatcher_msginit,
};

const upb_MiniTable_File xds_type_matcher_v3_string_proto_upb_file_layout = {
  messages_layout,
  NULL,
  NULL,
  2,
  0,
  0,
};

#include "upb/port_undef.inc"


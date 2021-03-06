/*
 * !!! DO NOT EDIT THIS FILE !!!
 *
 * This file was automagically crafted by GED's model parser.
 */

#include "xcoder/ged_internal_api.h"
#include "ged_decoding_tables.h"
#include "ged_mapping_tables.h"
#include "ged_encoding_masks_tables.h"
#include "ged_disassembly_tables.h"
#include "ged_model_gen7.h"

namespace GEN7
{

/*!
 * Top level decoding table in the decoding chain for the format flowControlBrc.
 * The indices for the table are the GED_INS_FIELD enumerator values.
 */
static ged_ins_decoding_table_t flowControlBrcDecoding = DecodingTable349;

/*!
 * Top level encoding masks table in the encoding chain for the format flowControlBrc.
 * The table is a list of encoding masks entries terminated by a NO_MASKS entry.
 */
static ged_instruction_masks_table_t flowControlBrcEncodingMasks = EncodingMasksTable27;

#if GED_DISASSEMBLY

/*!
 * Top level disassembly table in the disassembly chain for the format flowControlBrc.
 * The table is a list of disassembly table pointers, terminated by a NULL.
 */
static ged_disassembly_table_t flowControlBrcDisassembly = DisassemblyBlockTable94;
#endif // GED_DISASSEMBLY

/*!
 * Top level decoding table in the decoding chain for the format flowControlBrd.
 * The indices for the table are the GED_INS_FIELD enumerator values.
 */
static ged_ins_decoding_table_t flowControlBrdDecoding = DecodingTable350;

/*!
 * Top level encoding masks table in the encoding chain for the format flowControlBrd.
 * The table is a list of encoding masks entries terminated by a NO_MASKS entry.
 */
static ged_instruction_masks_table_t flowControlBrdEncodingMasks = EncodingMasksTable29;

#if GED_DISASSEMBLY

/*!
 * Top level disassembly table in the disassembly chain for the format flowControlBrd.
 * The table is a list of disassembly table pointers, terminated by a NULL.
 */
static ged_disassembly_table_t flowControlBrdDisassembly = DisassemblyBlockTable94;
#endif // GED_DISASSEMBLY

/*!
 * Top level decoding table in the decoding chain for the format flowControlJmpi.
 * The indices for the table are the GED_INS_FIELD enumerator values.
 */
static ged_ins_decoding_table_t flowControlJmpiDecoding = DecodingTable351;

/*!
 * Top level encoding masks table in the encoding chain for the format flowControlJmpi.
 * The table is a list of encoding masks entries terminated by a NO_MASKS entry.
 */
static ged_instruction_masks_table_t flowControlJmpiEncodingMasks = EncodingMasksTable31;

#if GED_DISASSEMBLY

/*!
 * Top level disassembly table in the disassembly chain for the format flowControlJmpi.
 * The table is a list of disassembly table pointers, terminated by a NULL.
 */
static ged_disassembly_table_t flowControlJmpiDisassembly = DisassemblyBlockTable97;
#endif // GED_DISASSEMBLY

/*!
 * Top level decoding table in the decoding chain for the format flowControlJmpiCompact.
 * The indices for the table are the GED_INS_FIELD enumerator values.
 */
static ged_ins_decoding_table_t flowControlJmpiCompactDecoding = DecodingTable352;

/*!
 * Top level encoding masks table in the encoding chain for the format flowControlJmpiCompact.
 * The table is a list of encoding masks entries terminated by a NO_MASKS entry.
 */
static ged_instruction_masks_table_t flowControlJmpiCompactEncodingMasks = EncodingMasksTable33;

/*!
 * Top level mapping table in the mapping chain for the compact instruction format flowControlJmpiCompact.
 * The indices for the table are the GED_INS_FIELD enumerator values.
 */
static ged_compact_mapping_table_t flowControlJmpiCompactMapping = MappingTable23;

/*!
 * Top level decoding table in the decoding chain for the format flowControlNoUIP.
 * The indices for the table are the GED_INS_FIELD enumerator values.
 */
static ged_ins_decoding_table_t flowControlNoUIPDecoding = DecodingTable353;

/*!
 * Top level encoding masks table in the encoding chain for the format flowControlNoUIP.
 * The table is a list of encoding masks entries terminated by a NO_MASKS entry.
 */
static ged_instruction_masks_table_t flowControlNoUIPEncodingMasks = EncodingMasksTable23;

#if GED_DISASSEMBLY

/*!
 * Top level disassembly table in the disassembly chain for the format flowControlNoUIP.
 * The table is a list of disassembly table pointers, terminated by a NULL.
 */
static ged_disassembly_table_t flowControlNoUIPDisassembly = DisassemblyBlockTable89;
#endif // GED_DISASSEMBLY

/*!
 * Top level decoding table in the decoding chain for the format flowControlWithUIP.
 * The indices for the table are the GED_INS_FIELD enumerator values.
 */
static ged_ins_decoding_table_t flowControlWithUIPDecoding = DecodingTable354;

/*!
 * Top level encoding masks table in the encoding chain for the format flowControlWithUIP.
 * The table is a list of encoding masks entries terminated by a NO_MASKS entry.
 */
static ged_instruction_masks_table_t flowControlWithUIPEncodingMasks = EncodingMasksTable22;

#if GED_DISASSEMBLY

/*!
 * Top level disassembly table in the disassembly chain for the format flowControlWithUIP.
 * The table is a list of disassembly table pointers, terminated by a NULL.
 */
static ged_disassembly_table_t flowControlWithUIPDisassembly = DisassemblyBlockTable88;
#endif // GED_DISASSEMBLY

/*!
 * Top level decoding table in the decoding chain for the format illegal.
 * The indices for the table are the GED_INS_FIELD enumerator values.
 */
static ged_ins_decoding_table_t illegalDecoding = DecodingTable355;

/*!
 * Top level encoding masks table in the encoding chain for the format illegal.
 * The table is a list of encoding masks entries terminated by a NO_MASKS entry.
 */
static ged_instruction_masks_table_t illegalEncodingMasks = EncodingMasksTable10;

#if GED_DISASSEMBLY

/*!
 * Top level disassembly table in the disassembly chain for the format illegal.
 * The table is a list of disassembly table pointers, terminated by a NULL.
 */
static ged_disassembly_table_t illegalDisassembly = DisassemblyBlockTable48;
#endif // GED_DISASSEMBLY

/*!
 * Top level decoding table in the decoding chain for the format math.
 * The indices for the table are the GED_INS_FIELD enumerator values.
 */
static ged_ins_decoding_table_t mathDecoding = DecodingTable356;

/*!
 * Top level encoding masks table in the encoding chain for the format math.
 * The table is a list of encoding masks entries terminated by a NO_MASKS entry.
 */
static ged_instruction_masks_table_t mathEncodingMasks = EncodingMasksTable21;

#if GED_DISASSEMBLY

/*!
 * Top level disassembly table in the disassembly chain for the format math.
 * The table is a list of disassembly table pointers, terminated by a NULL.
 */
static ged_disassembly_table_t mathDisassembly = DisassemblyBlockTable87;
#endif // GED_DISASSEMBLY

/*!
 * Top level decoding table in the decoding chain for the format mathCompact.
 * The indices for the table are the GED_INS_FIELD enumerator values.
 */
static ged_ins_decoding_table_t mathCompactDecoding = DecodingTable357;

/*!
 * Top level encoding masks table in the encoding chain for the format mathCompact.
 * The table is a list of encoding masks entries terminated by a NO_MASKS entry.
 */
static ged_instruction_masks_table_t mathCompactEncodingMasks = EncodingMasksTable32;

/*!
 * Top level mapping table in the mapping chain for the compact instruction format mathCompact.
 * The indices for the table are the GED_INS_FIELD enumerator values.
 */
static ged_compact_mapping_table_t mathCompactMapping = MappingTable24;

/*!
 * Top level decoding table in the decoding chain for the format nop.
 * The indices for the table are the GED_INS_FIELD enumerator values.
 */
static ged_ins_decoding_table_t nopDecoding = DecodingTable358;

/*!
 * Top level encoding masks table in the encoding chain for the format nop.
 * The table is a list of encoding masks entries terminated by a NO_MASKS entry.
 */
static ged_instruction_masks_table_t nopEncodingMasks = EncodingMasksTable11;

#if GED_DISASSEMBLY

/*!
 * Top level disassembly table in the disassembly chain for the format nop.
 * The table is a list of disassembly table pointers, terminated by a NULL.
 */
static ged_disassembly_table_t nopDisassembly = DisassemblyBlockTable50;
#endif // GED_DISASSEMBLY

/*!
 * Top level decoding table in the decoding chain for the format oneSourceCommon.
 * The indices for the table are the GED_INS_FIELD enumerator values.
 */
static ged_ins_decoding_table_t oneSourceCommonDecoding = DecodingTable359;

/*!
 * Top level encoding masks table in the encoding chain for the format oneSourceCommon.
 * The table is a list of encoding masks entries terminated by a NO_MASKS entry.
 */
static ged_instruction_masks_table_t oneSourceCommonEncodingMasks = EncodingMasksTable8;

#if GED_DISASSEMBLY

/*!
 * Top level disassembly table in the disassembly chain for the format oneSourceCommon.
 * The table is a list of disassembly table pointers, terminated by a NULL.
 */
static ged_disassembly_table_t oneSourceCommonDisassembly = DisassemblyBlockTable44;
#endif // GED_DISASSEMBLY

/*!
 * Top level decoding table in the decoding chain for the format oneSourceCompact.
 * The indices for the table are the GED_INS_FIELD enumerator values.
 */
static ged_ins_decoding_table_t oneSourceCompactDecoding = DecodingTable360;

/*!
 * Top level encoding masks table in the encoding chain for the format oneSourceCompact.
 * The table is a list of encoding masks entries terminated by a NO_MASKS entry.
 */
static ged_instruction_masks_table_t oneSourceCompactEncodingMasks = EncodingMasksTable32;

/*!
 * Top level mapping table in the mapping chain for the compact instruction format oneSourceCompact.
 * The indices for the table are the GED_INS_FIELD enumerator values.
 */
static ged_compact_mapping_table_t oneSourceCompactMapping = MappingTable25;

/*!
 * Top level decoding table in the decoding chain for the format send.
 * The indices for the table are the GED_INS_FIELD enumerator values.
 */
static ged_ins_decoding_table_t sendDecoding = DecodingTable361;

/*!
 * Top level encoding masks table in the encoding chain for the format send.
 * The table is a list of encoding masks entries terminated by a NO_MASKS entry.
 */
static ged_instruction_masks_table_t sendEncodingMasks = EncodingMasksTable20;

#if GED_DISASSEMBLY

/*!
 * Top level disassembly table in the disassembly chain for the format send.
 * The table is a list of disassembly table pointers, terminated by a NULL.
 */
static ged_disassembly_table_t sendDisassembly = DisassemblyBlockTable76;
#endif // GED_DISASSEMBLY

/*!
 * Top level decoding table in the decoding chain for the format sendCompact.
 * The indices for the table are the GED_INS_FIELD enumerator values.
 */
static ged_ins_decoding_table_t sendCompactDecoding = DecodingTable362;

/*!
 * Top level encoding masks table in the encoding chain for the format sendCompact.
 * The table is a list of encoding masks entries terminated by a NO_MASKS entry.
 */
static ged_instruction_masks_table_t sendCompactEncodingMasks = EncodingMasksTable32;

/*!
 * Top level mapping table in the mapping chain for the compact instruction format sendCompact.
 * The indices for the table are the GED_INS_FIELD enumerator values.
 */
static ged_compact_mapping_table_t sendCompactMapping = MappingTable26;

/*!
 * Top level decoding table in the decoding chain for the format threeSource.
 * The indices for the table are the GED_INS_FIELD enumerator values.
 */
static ged_ins_decoding_table_t threeSourceDecoding = DecodingTable363;

/*!
 * Top level encoding masks table in the encoding chain for the format threeSource.
 * The table is a list of encoding masks entries terminated by a NO_MASKS entry.
 */
static ged_instruction_masks_table_t threeSourceEncodingMasks = EncodingMasksTable18;

#if GED_DISASSEMBLY

/*!
 * Top level disassembly table in the disassembly chain for the format threeSource.
 * The table is a list of disassembly table pointers, terminated by a NULL.
 */
static ged_disassembly_table_t threeSourceDisassembly = DisassemblyBlockTable58;
#endif // GED_DISASSEMBLY

/*!
 * Top level decoding table in the decoding chain for the format twoSourceCommon.
 * The indices for the table are the GED_INS_FIELD enumerator values.
 */
static ged_ins_decoding_table_t twoSourceCommonDecoding = DecodingTable364;

/*!
 * Top level encoding masks table in the encoding chain for the format twoSourceCommon.
 * The table is a list of encoding masks entries terminated by a NO_MASKS entry.
 */
static ged_instruction_masks_table_t twoSourceCommonEncodingMasks = EncodingMasksTable5;

#if GED_DISASSEMBLY

/*!
 * Top level disassembly table in the disassembly chain for the format twoSourceCommon.
 * The table is a list of disassembly table pointers, terminated by a NULL.
 */
static ged_disassembly_table_t twoSourceCommonDisassembly = DisassemblyBlockTable41;
#endif // GED_DISASSEMBLY

/*!
 * Top level decoding table in the decoding chain for the format twoSourceCompact.
 * The indices for the table are the GED_INS_FIELD enumerator values.
 */
static ged_ins_decoding_table_t twoSourceCompactDecoding = DecodingTable360;

/*!
 * Top level encoding masks table in the encoding chain for the format twoSourceCompact.
 * The table is a list of encoding masks entries terminated by a NO_MASKS entry.
 */
static ged_instruction_masks_table_t twoSourceCompactEncodingMasks = EncodingMasksTable32;

/*!
 * Top level mapping table in the mapping chain for the compact instruction format twoSourceCompact.
 * The indices for the table are the GED_INS_FIELD enumerator values.
 */
static ged_compact_mapping_table_t twoSourceCompactMapping = MappingTable27;

/*!
 * Top level decoding table in the decoding chain for the format wait.
 * The indices for the table are the GED_INS_FIELD enumerator values.
 */
static ged_ins_decoding_table_t waitDecoding = DecodingTable365;

/*!
 * Top level encoding masks table in the encoding chain for the format wait.
 * The table is a list of encoding masks entries terminated by a NO_MASKS entry.
 */
static ged_instruction_masks_table_t waitEncodingMasks = EncodingMasksTable9;

#if GED_DISASSEMBLY

/*!
 * Top level disassembly table in the disassembly chain for the format wait.
 * The table is a list of disassembly table pointers, terminated by a NULL.
 */
static ged_disassembly_table_t waitDisassembly = DisassemblyBlockTable47;
#endif // GED_DISASSEMBLY

/*!
 * Top level decoding table in the decoding chain for the format waitCompact.
 * The indices for the table are the GED_INS_FIELD enumerator values.
 */
static ged_ins_decoding_table_t waitCompactDecoding = DecodingTable360;

/*!
 * Top level encoding masks table in the encoding chain for the format waitCompact.
 * The table is a list of encoding masks entries terminated by a NO_MASKS entry.
 */
static ged_instruction_masks_table_t waitCompactEncodingMasks = EncodingMasksTable32;

/*!
 * Top level mapping table in the mapping chain for the compact instruction format waitCompact.
 * The indices for the table are the GED_INS_FIELD enumerator values.
 */
static ged_compact_mapping_table_t waitCompactMapping = MappingTable25;
OpcodeTables Opcodes[128] =
{
    illegalDecoding, illegalEncodingMasks, NULL, NULL, NULL, // 0
    oneSourceCommonDecoding, oneSourceCommonEncodingMasks, oneSourceCompactDecoding, oneSourceCompactEncodingMasks, oneSourceCompactMapping, // 1
    twoSourceCommonDecoding, twoSourceCommonEncodingMasks, twoSourceCompactDecoding, twoSourceCompactEncodingMasks, twoSourceCompactMapping, // 2
    oneSourceCommonDecoding, oneSourceCommonEncodingMasks, oneSourceCompactDecoding, oneSourceCompactEncodingMasks, oneSourceCompactMapping, // 3
    oneSourceCommonDecoding, oneSourceCommonEncodingMasks, oneSourceCompactDecoding, oneSourceCompactEncodingMasks, oneSourceCompactMapping, // 4
    twoSourceCommonDecoding, twoSourceCommonEncodingMasks, twoSourceCompactDecoding, twoSourceCompactEncodingMasks, twoSourceCompactMapping, // 5
    twoSourceCommonDecoding, twoSourceCommonEncodingMasks, twoSourceCompactDecoding, twoSourceCompactEncodingMasks, twoSourceCompactMapping, // 6
    twoSourceCommonDecoding, twoSourceCommonEncodingMasks, twoSourceCompactDecoding, twoSourceCompactEncodingMasks, twoSourceCompactMapping, // 7
    twoSourceCommonDecoding, twoSourceCommonEncodingMasks, twoSourceCompactDecoding, twoSourceCompactEncodingMasks, twoSourceCompactMapping, // 8
    twoSourceCommonDecoding, twoSourceCommonEncodingMasks, twoSourceCompactDecoding, twoSourceCompactEncodingMasks, twoSourceCompactMapping, // 9
    NULL, NULL, NULL, NULL, NULL, // 10
    NULL, NULL, NULL, NULL, NULL, // 11
    twoSourceCommonDecoding, twoSourceCommonEncodingMasks, twoSourceCompactDecoding, twoSourceCompactEncodingMasks, twoSourceCompactMapping, // 12
    NULL, NULL, NULL, NULL, NULL, // 13
    NULL, NULL, NULL, NULL, NULL, // 14
    NULL, NULL, NULL, NULL, NULL, // 15
    twoSourceCommonDecoding, twoSourceCommonEncodingMasks, twoSourceCompactDecoding, twoSourceCompactEncodingMasks, twoSourceCompactMapping, // 16
    twoSourceCommonDecoding, twoSourceCommonEncodingMasks, twoSourceCompactDecoding, twoSourceCompactEncodingMasks, twoSourceCompactMapping, // 17
    twoSourceCommonDecoding, twoSourceCommonEncodingMasks, twoSourceCompactDecoding, twoSourceCompactEncodingMasks, twoSourceCompactMapping, // 18
    oneSourceCommonDecoding, oneSourceCommonEncodingMasks, oneSourceCompactDecoding, oneSourceCompactEncodingMasks, oneSourceCompactMapping, // 19
    oneSourceCommonDecoding, oneSourceCommonEncodingMasks, oneSourceCompactDecoding, oneSourceCompactEncodingMasks, oneSourceCompactMapping, // 20
    NULL, NULL, NULL, NULL, NULL, // 21
    NULL, NULL, NULL, NULL, NULL, // 22
    oneSourceCommonDecoding, oneSourceCommonEncodingMasks, oneSourceCompactDecoding, oneSourceCompactEncodingMasks, oneSourceCompactMapping, // 23
    threeSourceDecoding, threeSourceEncodingMasks, NULL, NULL, NULL, // 24
    twoSourceCommonDecoding, twoSourceCommonEncodingMasks, twoSourceCompactDecoding, twoSourceCompactEncodingMasks, twoSourceCompactMapping, // 25
    threeSourceDecoding, threeSourceEncodingMasks, NULL, NULL, NULL, // 26
    NULL, NULL, NULL, NULL, NULL, // 27
    NULL, NULL, NULL, NULL, NULL, // 28
    NULL, NULL, NULL, NULL, NULL, // 29
    NULL, NULL, NULL, NULL, NULL, // 30
    NULL, NULL, NULL, NULL, NULL, // 31
    flowControlJmpiDecoding, flowControlJmpiEncodingMasks, flowControlJmpiCompactDecoding, flowControlJmpiCompactEncodingMasks, flowControlJmpiCompactMapping, // 32
    flowControlBrdDecoding, flowControlBrdEncodingMasks, NULL, NULL, NULL, // 33
    flowControlWithUIPDecoding, flowControlWithUIPEncodingMasks, NULL, NULL, NULL, // 34
    flowControlBrcDecoding, flowControlBrcEncodingMasks, NULL, NULL, NULL, // 35
    flowControlNoUIPDecoding, flowControlNoUIPEncodingMasks, NULL, NULL, NULL, // 36
    flowControlNoUIPDecoding, flowControlNoUIPEncodingMasks, NULL, NULL, NULL, // 37
    NULL, NULL, NULL, NULL, NULL, // 38
    flowControlNoUIPDecoding, flowControlNoUIPEncodingMasks, NULL, NULL, NULL, // 39
    flowControlWithUIPDecoding, flowControlWithUIPEncodingMasks, NULL, NULL, NULL, // 40
    flowControlWithUIPDecoding, flowControlWithUIPEncodingMasks, NULL, NULL, NULL, // 41
    flowControlWithUIPDecoding, flowControlWithUIPEncodingMasks, NULL, NULL, NULL, // 42
    NULL, NULL, NULL, NULL, NULL, // 43
    flowControlNoUIPDecoding, flowControlNoUIPEncodingMasks, NULL, NULL, NULL, // 44
    oneSourceCommonDecoding, oneSourceCommonEncodingMasks, oneSourceCompactDecoding, oneSourceCompactEncodingMasks, oneSourceCompactMapping, // 45
    NULL, NULL, NULL, NULL, NULL, // 46
    NULL, NULL, NULL, NULL, NULL, // 47
    waitDecoding, waitEncodingMasks, waitCompactDecoding, waitCompactEncodingMasks, waitCompactMapping, // 48
    sendDecoding, sendEncodingMasks, sendCompactDecoding, sendCompactEncodingMasks, sendCompactMapping, // 49
    sendDecoding, sendEncodingMasks, sendCompactDecoding, sendCompactEncodingMasks, sendCompactMapping, // 50
    NULL, NULL, NULL, NULL, NULL, // 51
    NULL, NULL, NULL, NULL, NULL, // 52
    NULL, NULL, NULL, NULL, NULL, // 53
    NULL, NULL, NULL, NULL, NULL, // 54
    NULL, NULL, NULL, NULL, NULL, // 55
    mathDecoding, mathEncodingMasks, mathCompactDecoding, mathCompactEncodingMasks, mathCompactMapping, // 56
    NULL, NULL, NULL, NULL, NULL, // 57
    NULL, NULL, NULL, NULL, NULL, // 58
    NULL, NULL, NULL, NULL, NULL, // 59
    NULL, NULL, NULL, NULL, NULL, // 60
    NULL, NULL, NULL, NULL, NULL, // 61
    NULL, NULL, NULL, NULL, NULL, // 62
    NULL, NULL, NULL, NULL, NULL, // 63
    twoSourceCommonDecoding, twoSourceCommonEncodingMasks, twoSourceCompactDecoding, twoSourceCompactEncodingMasks, twoSourceCompactMapping, // 64
    twoSourceCommonDecoding, twoSourceCommonEncodingMasks, twoSourceCompactDecoding, twoSourceCompactEncodingMasks, twoSourceCompactMapping, // 65
    twoSourceCommonDecoding, twoSourceCommonEncodingMasks, twoSourceCompactDecoding, twoSourceCompactEncodingMasks, twoSourceCompactMapping, // 66
    oneSourceCommonDecoding, oneSourceCommonEncodingMasks, oneSourceCompactDecoding, oneSourceCompactEncodingMasks, oneSourceCompactMapping, // 67
    oneSourceCommonDecoding, oneSourceCommonEncodingMasks, oneSourceCompactDecoding, oneSourceCompactEncodingMasks, oneSourceCompactMapping, // 68
    oneSourceCommonDecoding, oneSourceCommonEncodingMasks, oneSourceCompactDecoding, oneSourceCompactEncodingMasks, oneSourceCompactMapping, // 69
    oneSourceCommonDecoding, oneSourceCommonEncodingMasks, oneSourceCompactDecoding, oneSourceCompactEncodingMasks, oneSourceCompactMapping, // 70
    oneSourceCommonDecoding, oneSourceCommonEncodingMasks, oneSourceCompactDecoding, oneSourceCompactEncodingMasks, oneSourceCompactMapping, // 71
    twoSourceCommonDecoding, twoSourceCommonEncodingMasks, twoSourceCompactDecoding, twoSourceCompactEncodingMasks, twoSourceCompactMapping, // 72
    twoSourceCommonDecoding, twoSourceCommonEncodingMasks, twoSourceCompactDecoding, twoSourceCompactEncodingMasks, twoSourceCompactMapping, // 73
    oneSourceCommonDecoding, oneSourceCommonEncodingMasks, oneSourceCompactDecoding, oneSourceCompactEncodingMasks, oneSourceCompactMapping, // 74
    oneSourceCommonDecoding, oneSourceCommonEncodingMasks, oneSourceCompactDecoding, oneSourceCompactEncodingMasks, oneSourceCompactMapping, // 75
    oneSourceCommonDecoding, oneSourceCommonEncodingMasks, oneSourceCompactDecoding, oneSourceCompactEncodingMasks, oneSourceCompactMapping, // 76
    oneSourceCommonDecoding, oneSourceCommonEncodingMasks, oneSourceCompactDecoding, oneSourceCompactEncodingMasks, oneSourceCompactMapping, // 77
    twoSourceCommonDecoding, twoSourceCommonEncodingMasks, twoSourceCompactDecoding, twoSourceCompactEncodingMasks, twoSourceCompactMapping, // 78
    twoSourceCommonDecoding, twoSourceCommonEncodingMasks, twoSourceCompactDecoding, twoSourceCompactEncodingMasks, twoSourceCompactMapping, // 79
    twoSourceCommonDecoding, twoSourceCommonEncodingMasks, twoSourceCompactDecoding, twoSourceCompactEncodingMasks, twoSourceCompactMapping, // 80
    twoSourceCommonDecoding, twoSourceCommonEncodingMasks, twoSourceCompactDecoding, twoSourceCompactEncodingMasks, twoSourceCompactMapping, // 81
    NULL, NULL, NULL, NULL, NULL, // 82
    NULL, NULL, NULL, NULL, NULL, // 83
    twoSourceCommonDecoding, twoSourceCommonEncodingMasks, twoSourceCompactDecoding, twoSourceCompactEncodingMasks, twoSourceCompactMapping, // 84
    twoSourceCommonDecoding, twoSourceCommonEncodingMasks, twoSourceCompactDecoding, twoSourceCompactEncodingMasks, twoSourceCompactMapping, // 85
    twoSourceCommonDecoding, twoSourceCommonEncodingMasks, twoSourceCompactDecoding, twoSourceCompactEncodingMasks, twoSourceCompactMapping, // 86
    twoSourceCommonDecoding, twoSourceCommonEncodingMasks, twoSourceCompactDecoding, twoSourceCompactEncodingMasks, twoSourceCompactMapping, // 87
    NULL, NULL, NULL, NULL, NULL, // 88
    twoSourceCommonDecoding, twoSourceCommonEncodingMasks, twoSourceCompactDecoding, twoSourceCompactEncodingMasks, twoSourceCompactMapping, // 89
    twoSourceCommonDecoding, twoSourceCommonEncodingMasks, twoSourceCompactDecoding, twoSourceCompactEncodingMasks, twoSourceCompactMapping, // 90
    threeSourceDecoding, threeSourceEncodingMasks, NULL, NULL, NULL, // 91
    threeSourceDecoding, threeSourceEncodingMasks, NULL, NULL, NULL, // 92
    NULL, NULL, NULL, NULL, NULL, // 93
    NULL, NULL, NULL, NULL, NULL, // 94
    NULL, NULL, NULL, NULL, NULL, // 95
    NULL, NULL, NULL, NULL, NULL, // 96
    NULL, NULL, NULL, NULL, NULL, // 97
    NULL, NULL, NULL, NULL, NULL, // 98
    NULL, NULL, NULL, NULL, NULL, // 99
    NULL, NULL, NULL, NULL, NULL, // 100
    NULL, NULL, NULL, NULL, NULL, // 101
    NULL, NULL, NULL, NULL, NULL, // 102
    NULL, NULL, NULL, NULL, NULL, // 103
    NULL, NULL, NULL, NULL, NULL, // 104
    NULL, NULL, NULL, NULL, NULL, // 105
    NULL, NULL, NULL, NULL, NULL, // 106
    NULL, NULL, NULL, NULL, NULL, // 107
    NULL, NULL, NULL, NULL, NULL, // 108
    NULL, NULL, NULL, NULL, NULL, // 109
    NULL, NULL, NULL, NULL, NULL, // 110
    NULL, NULL, NULL, NULL, NULL, // 111
    NULL, NULL, NULL, NULL, NULL, // 112
    NULL, NULL, NULL, NULL, NULL, // 113
    NULL, NULL, NULL, NULL, NULL, // 114
    NULL, NULL, NULL, NULL, NULL, // 115
    NULL, NULL, NULL, NULL, NULL, // 116
    NULL, NULL, NULL, NULL, NULL, // 117
    NULL, NULL, NULL, NULL, NULL, // 118
    NULL, NULL, NULL, NULL, NULL, // 119
    NULL, NULL, NULL, NULL, NULL, // 120
    NULL, NULL, NULL, NULL, NULL, // 121
    NULL, NULL, NULL, NULL, NULL, // 122
    NULL, NULL, NULL, NULL, NULL, // 123
    NULL, NULL, NULL, NULL, NULL, // 124
    NULL, NULL, NULL, NULL, NULL, // 125
    nopDecoding, nopEncodingMasks, NULL, NULL, NULL, // 126
    NULL, NULL, NULL, NULL, NULL // 127
}; // Opcodes[]

#if GED_DISASSEMBLY

/*!
 * This table maps every possible opcode value (even for non-existing opcodes) to its respective top level disassembly table. Opcodes
 * that are not supported in this model are mapped to a NULL pointer.
 */
static ged_disassembly_table_t DisassemblyTopLevel[128] =
{
    illegalDisassembly, // 0
    oneSourceCommonDisassembly, // 1
    twoSourceCommonDisassembly, // 2
    oneSourceCommonDisassembly, // 3
    oneSourceCommonDisassembly, // 4
    twoSourceCommonDisassembly, // 5
    twoSourceCommonDisassembly, // 6
    twoSourceCommonDisassembly, // 7
    twoSourceCommonDisassembly, // 8
    twoSourceCommonDisassembly, // 9
    NULL, // 10
    NULL, // 11
    twoSourceCommonDisassembly, // 12
    NULL, // 13
    NULL, // 14
    NULL, // 15
    twoSourceCommonDisassembly, // 16
    twoSourceCommonDisassembly, // 17
    twoSourceCommonDisassembly, // 18
    oneSourceCommonDisassembly, // 19
    oneSourceCommonDisassembly, // 20
    NULL, // 21
    NULL, // 22
    oneSourceCommonDisassembly, // 23
    threeSourceDisassembly, // 24
    twoSourceCommonDisassembly, // 25
    threeSourceDisassembly, // 26
    NULL, // 27
    NULL, // 28
    NULL, // 29
    NULL, // 30
    NULL, // 31
    flowControlJmpiDisassembly, // 32
    flowControlBrdDisassembly, // 33
    flowControlWithUIPDisassembly, // 34
    flowControlBrcDisassembly, // 35
    flowControlNoUIPDisassembly, // 36
    flowControlNoUIPDisassembly, // 37
    NULL, // 38
    flowControlNoUIPDisassembly, // 39
    flowControlWithUIPDisassembly, // 40
    flowControlWithUIPDisassembly, // 41
    flowControlWithUIPDisassembly, // 42
    NULL, // 43
    flowControlNoUIPDisassembly, // 44
    oneSourceCommonDisassembly, // 45
    NULL, // 46
    NULL, // 47
    waitDisassembly, // 48
    sendDisassembly, // 49
    sendDisassembly, // 50
    NULL, // 51
    NULL, // 52
    NULL, // 53
    NULL, // 54
    NULL, // 55
    mathDisassembly, // 56
    NULL, // 57
    NULL, // 58
    NULL, // 59
    NULL, // 60
    NULL, // 61
    NULL, // 62
    NULL, // 63
    twoSourceCommonDisassembly, // 64
    twoSourceCommonDisassembly, // 65
    twoSourceCommonDisassembly, // 66
    oneSourceCommonDisassembly, // 67
    oneSourceCommonDisassembly, // 68
    oneSourceCommonDisassembly, // 69
    oneSourceCommonDisassembly, // 70
    oneSourceCommonDisassembly, // 71
    twoSourceCommonDisassembly, // 72
    twoSourceCommonDisassembly, // 73
    oneSourceCommonDisassembly, // 74
    oneSourceCommonDisassembly, // 75
    oneSourceCommonDisassembly, // 76
    oneSourceCommonDisassembly, // 77
    twoSourceCommonDisassembly, // 78
    twoSourceCommonDisassembly, // 79
    twoSourceCommonDisassembly, // 80
    twoSourceCommonDisassembly, // 81
    NULL, // 82
    NULL, // 83
    twoSourceCommonDisassembly, // 84
    twoSourceCommonDisassembly, // 85
    twoSourceCommonDisassembly, // 86
    twoSourceCommonDisassembly, // 87
    NULL, // 88
    twoSourceCommonDisassembly, // 89
    twoSourceCommonDisassembly, // 90
    threeSourceDisassembly, // 91
    threeSourceDisassembly, // 92
    NULL, // 93
    NULL, // 94
    NULL, // 95
    NULL, // 96
    NULL, // 97
    NULL, // 98
    NULL, // 99
    NULL, // 100
    NULL, // 101
    NULL, // 102
    NULL, // 103
    NULL, // 104
    NULL, // 105
    NULL, // 106
    NULL, // 107
    NULL, // 108
    NULL, // 109
    NULL, // 110
    NULL, // 111
    NULL, // 112
    NULL, // 113
    NULL, // 114
    NULL, // 115
    NULL, // 116
    NULL, // 117
    NULL, // 118
    NULL, // 119
    NULL, // 120
    NULL, // 121
    NULL, // 122
    NULL, // 123
    NULL, // 124
    NULL, // 125
    nopDisassembly, // 126
    NULL // 127
}; // DisassemblyTopLevel[]
#endif // GED_DISASSEMBLY

#if GED_DISASSEMBLY
const ged_disassembly_table_t GetDisassemblyTable(/* GED_OPCODE */ uint32_t opcode)
{
    return DisassemblyTopLevel[opcode];
}
#endif // GED_DISASSEMBLY
} // namespace GEN7

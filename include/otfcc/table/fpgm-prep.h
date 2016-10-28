#ifndef CARYLL_INCLUDE_TABLE_FPGM_PREP_H
#define CARYLL_INCLUDE_TABLE_FPGM_PREP_H

#include "table-common.h"

typedef struct {
	sds tag;
	uint32_t length;
	uint8_t *bytes;
} table_fpgm_prep;
void table_delete_fpgm_prep(table_fpgm_prep *table);
table_fpgm_prep *table_read_fpgm_prep(const caryll_Packet packet, const otfcc_Options *options, uint32_t tag);
void table_fpgm_dump_prep(const table_fpgm_prep *table, json_value *root, const otfcc_Options *options,
                          const char *tag);
table_fpgm_prep *table_fpgm_parse_prep(const json_value *root, const otfcc_Options *options, const char *tag);
caryll_Buffer *table_build_fpgm_prep(const table_fpgm_prep *table, const otfcc_Options *options);

#endif
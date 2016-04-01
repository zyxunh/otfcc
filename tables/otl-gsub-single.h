#ifndef CARYLL_TABLES_OTL_GSUB_SINGLE_H
#define CARYLL_TABLES_OTL_GSUB_SINGLE_H

#include "otl.h"

void caryll_delete_gsub_single(otl_lookup *lookup);
void caryll_read_gsub_single(font_file_pointer data, uint32_t tableLength, otl_lookup *lookup);
void caryll_gsub_single_to_json(otl_lookup *lookup, json_value *dump);

#endif

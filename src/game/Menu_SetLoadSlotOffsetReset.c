#include "common.h"

extern s32 s_load_slot_0025E6A8;
extern s32 s_load_offset;
extern s32 memoca_index_offset;

void Menu_SetLoadSlotOffsetReset(void) {
    s_load_slot_0025E6A8 = 0;
    s_load_offset = 0;
    memoca_index_offset = 0;
}

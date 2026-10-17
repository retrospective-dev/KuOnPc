#include "common.h"

extern s32 s_get_item_start;
extern s32 s_get_item_end;

s32 Menu_GetItemBufOn(void) {
    return s_get_item_start != s_get_item_end;
}

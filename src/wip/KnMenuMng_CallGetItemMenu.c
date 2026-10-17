#include "common.h"

extern s32 s_get_item_end;
extern u8 s_get_item_buf[];
extern u8 D_00A50034[];

s32 KnMenuMng_CallGetItemMenu(s32 arg0, s32 arg1) {
    s32 temp_a4;

    temp_a4 = s_get_item_end * 8;
    *(s32 *)(&s_get_item_buf[0] + temp_a4) = arg0 & 0xFFFF;
    *(s32 *)(&D_00A50034[0] + temp_a4) = arg1;
    s_get_item_end += 1;
    s_get_item_end = (s32) s_get_item_end % 10;
    return 1;
}

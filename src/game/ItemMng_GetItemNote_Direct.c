#include "common.h"

s32 KnMsgMng_GetMsgStr(s32 arg0);
void ItemMng_GetItemNote_Direct(s32 arg0) {
    KnMsgMng_GetMsgStr((arg0 & 0xFFFF) + 0x30D40);
}

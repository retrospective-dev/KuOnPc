#include "common.h"

s32 KnMsgMng_GetMsgStr(s32 arg0);
void ItemMng_GetDocument(s32 arg0, s32 arg1) {
    KnMsgMng_GetMsgStr((arg1 & 0xFFFF) + 1 + (((arg0 & 0xFFFF) + 0x35B60) * 0xA));
}

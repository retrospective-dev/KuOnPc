#include "common.h"
#include "kuon_types.h"

unsigned short *KnMsgMng_GetMsgStr(int msg_id);
u16 ItemMng_GetDocumentPageNum(u16 idx_) {
    s32 temp_a0;
    s32 var_s0;

    var_s0 = 0;
    do {
        temp_a0 = var_s0 + 1 + (((idx_ & 0xFFFF) + 0x35B60) * 0xA);
        var_s0 += 1;
    } while (KnMsgMng_GetMsgStr(temp_a0) != NULL);
    return (var_s0 - 1) & 0xFFFF;
}

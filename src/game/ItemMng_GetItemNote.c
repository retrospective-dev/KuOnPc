#include "common.h"
#include "kuon_types.h"

unsigned short *KnMsgMng_GetMsgStr(int msg_id);
extern S_aItemData s_aItemData[5][128];
s8 *ItemMng_GetItemNote(u16 type_, u16 idx_) {
    return KnMsgMng_GetMsgStr(s_aItemData[type_ & 0xFFFF][idx_ & 0xFFFF].id + 0x30D40);
}

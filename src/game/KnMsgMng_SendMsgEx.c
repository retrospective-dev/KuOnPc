#include "common.h"
#include "kuon_types.h"

int KnMsgMng_SendMsgExEx(int id, int priority, User_data user_data, int gene_id1, int gene_id2, int gene_id3, float gene_fdata1, float gene_fdata2, float gene_fdata3);
s32 KnMsgMng_SendMsgEx(s32 id, s32 priority, enum User_data user_data) {
    return KnMsgMng_SendMsgExEx(id, priority, user_data, 0, 0, 0, 0.0f, 0.0f, 0.0f);
}

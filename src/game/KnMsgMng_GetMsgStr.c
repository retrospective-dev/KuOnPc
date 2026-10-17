#include "common.h"

s32 MngState_UpdateExeCheck(void *arg0);
s32 MsgFileMng_GetMsgStr(void *arg0, s32 arg1);
extern s32 s_KnMsgMng[];
extern s32 D_00A07F40[];

s32 KnMsgMng_GetMsgStr(s32 arg0) {
    if (MngState_UpdateExeCheck(&s_KnMsgMng[0]) != 1) {
        return 0;
    }
    return MsgFileMng_GetMsgStr(&D_00A07F40[0], arg0);
}

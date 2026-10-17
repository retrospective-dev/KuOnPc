#include "common.h"

s32 MngState_UpdateExeCheck(void *arg0);
s32 MsgFileMng_GetMsgStr(void *arg0, s32 arg1);
extern u8 D_003AC899[];
extern s32 s_KnMsgMng[];
extern s32 D_00A07F40[];

s32 KnMsgMng_GetMapNameMsg(void) {
    s32 temp_s0;

    temp_s0 = D_003AC899[0] + 0x1AE78;
    if (MngState_UpdateExeCheck(&s_KnMsgMng[0]) != 1) {
        return 0;
    }
    return MsgFileMng_GetMsgStr(&D_00A07F40[0], temp_s0);
}

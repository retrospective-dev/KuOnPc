#include "common.h"

s32 MsgMng_Draw(u8 *arg0);
s32 MngState_DrawExeCheck(u8 *arg0);
extern u8 s_KnMsgMng[];
extern u8 D_00A07D30[];

s32 KnMsgMng_Draw(void) {
    if (MngState_DrawExeCheck(&s_KnMsgMng[0]) != 1) {
        return 1;
    }
    MsgMng_Draw(&D_00A07D30[0]);
    return 1;
}

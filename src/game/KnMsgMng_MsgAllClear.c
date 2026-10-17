#include "common.h"

s32 MsgMng_ClearList(void *arg0);
s32 TmpMenuMng_SetUDBlackDraw(void *arg0, s32 arg1);
extern s32 D_00A07D30[];
extern s32 g_TmpMenuMng[];

s32 KnMsgMng_MsgAllClear(void) {
    if (MsgMng_ClearList(&D_00A07D30[0]) == 0) {
        TmpMenuMng_SetUDBlackDraw(&g_TmpMenuMng[0], 1);
    }
    return 1;
}

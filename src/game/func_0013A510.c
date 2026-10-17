#include "common.h"

void FreeAllMyEquip(void);
void MyFree(void);
s32 KnMsgMng_MsgAllClear(void);
s32 TmpMenuMng_SetUDBlackDraw(void *arg0, s32 arg1);
s32 SND_SecRemovePlayer(void);
s32 KnMenuMng_ReMakeMenu(s32 arg0);
extern s32 g_TmpMenuMng[];

void func_0013A510(void) {
    KnMenuMng_ReMakeMenu(0x64);
    FreeAllMyEquip();
    MyFree();
    SND_SecRemovePlayer();
    KnMsgMng_MsgAllClear();
    TmpMenuMng_SetUDBlackDraw(&g_TmpMenuMng[0], 2);
}

#include "common.h"

s32 SList_SetLimitter(void *arg0, s16 arg1);
void * SList_Init(void *arg0, u32 arg1, s16 arg2);
extern void *s_pObjList_0025E604;
extern s32 D_00A4C9B0[];

void SfxMdl_InitMgr(void) {
    s_pObjList_0025E604 = SList_Init(&D_00A4C9B0[0], 0x400U, 8);
    SList_SetLimitter(s_pObjList_0025E604, 0x80);
}

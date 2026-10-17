#include "common.h"

void * SList_Init(void *arg0, u32 arg1, s16 arg2);
extern void *s_pObjList_0025E610;
extern void *s_pLogList;
extern s32 D_00A4D1C0[];
extern s32 D_00A4F9C0[];

s32 SfxTracer_Initialize(void) {
    s_pObjList_0025E610 = SList_Init(&D_00A4F9C0[0], 0x400U, 0x2C);
    s_pLogList = SList_Init(&D_00A4D1C0[0], 0x2800U, 0x30);
    return 1;
}

#include "common.h"

void * SList_Init(void *arg0, u32 arg1, s16 arg2);
extern void *s_pObjList_0025E608;
extern s32 s_data_buff[];

void SfxPLight_Initialize(void) {
    s_pObjList_0025E608 = SList_Init(&s_data_buff[0], 0x400U, 0x80);
}

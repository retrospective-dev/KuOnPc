#include "common.h"

void* fssdGetCalledRpcResult(void);
s32 fssdCallRpcStruct(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, void *arg5);
s32 func_00127A28(s32 *, void *, s32);
extern s32 s_StatPack[];

void fssdivagUpdateTrackStat(void) {
    fssdCallRpcStruct(0xA, 1, 0, 0x48, 0xE0000, NULL);
    func_00127A28(&s_StatPack[0], fssdGetCalledRpcResult(), 0x48);
}

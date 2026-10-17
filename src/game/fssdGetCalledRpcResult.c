#include "common.h"

extern u8 g_ucEeToIopRpcBuff[];

void* fssdGetCalledRpcResult(void) {
    return g_ucEeToIopRpcBuff;
}

#include "common.h"

void fssdCallRpc(s32, s32, s32, s32, s32);

void fssdsynthGetTransStatus(s32 arg0) {
    fssdCallRpc(4, 1, 0x800, arg0, 0);
}

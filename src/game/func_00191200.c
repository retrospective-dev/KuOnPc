#include "common.h"

s32 func_00187D50(s32 arg0, s32 arg1, s32 arg2);
void func_00191200(s32 arg0, s32 arg1, s32 arg2) {
    if (arg2 != 0) {
        func_00187D50(3, arg0 & 0xFFFF, arg1);
    }
}

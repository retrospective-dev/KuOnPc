#include "common.h"

void func_00170C20(u8 *arg0, s32 arg1);
extern u8 D_003AC8A8[];

void func_0016C6F0(u8 *arg0) {
    func_00170C20(arg0 + 4, (s32) D_003AC8A8[0]);
    *(s32 *)arg0 = 0;
}

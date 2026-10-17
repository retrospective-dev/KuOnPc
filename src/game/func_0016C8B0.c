#include "common.h"

void func_00170C20(u8 *arg0, s32 arg1);
s32 func_001A7D90(void);
void func_0016C8B0(u8 *arg0) {
    func_00170C20(arg0 + 4, func_001A7D90());
    *(s32 *)arg0 = 0;
}

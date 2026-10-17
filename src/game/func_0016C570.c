#include "common.h"

void func_00170C20(u8 *arg0, s32 arg1);
s32 func_00217DE0(void);
void func_0016C570(u8 *arg0) {
    func_00170C20(arg0 + 4, func_00217DE0());
    *(s32 *)arg0 = 0;
}

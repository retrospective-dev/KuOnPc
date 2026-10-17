#include "common.h"

void func_00127BE0(void* dst, s32 c, u32 n);
extern s32 PathMng[];

void FreeMovePath(void) {
    func_00127BE0(&PathMng[0], 0, 0x2200U);
}

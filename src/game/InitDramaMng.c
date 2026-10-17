#include "common.h"

void func_00127BE0(void* dst, s32 c, u32 n);
extern void *lpDramaMng;

void InitDramaMng(void) {
    func_00127BE0(lpDramaMng, 0, 0x18U);
}

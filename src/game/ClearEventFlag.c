#include "common.h"

void func_00127BE0(void* dst, s32 c, u32 n);
extern s32 GameEventFlag[];

void ClearEventFlag(void) {
    func_00127BE0(&GameEventFlag[0], 0, 0x100U);
}

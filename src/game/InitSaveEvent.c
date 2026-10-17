#include "common.h"

void func_00127BE0(void* dst, s32 c, u32 n);
extern s32 SaveEvent[];

void InitSaveEvent(void) {
    func_00127BE0(&SaveEvent[0], 0, 0x14U);
}

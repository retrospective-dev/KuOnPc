#include "common.h"

void func_00127BE0(void* dst, s32 c, u32 n);
extern s32 EneSaveSt[];

void InitEneSave(void) {
    func_00127BE0(&EneSaveSt[0], 0, 0x2800U);
}

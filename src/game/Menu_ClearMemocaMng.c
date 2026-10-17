#include "common.h"

void func_00127BE0(void* dst, s32 c, u32 n);
extern s8 MemocaMng[];
extern s8 D_00A51EA1[];
extern s8 D_00A51EA5[];

void Menu_ClearMemocaMng(void) {
    func_00127BE0(&MemocaMng[0], 0, 9U);
    D_00A51EA5[0] = 0;
    MemocaMng[0] = 2;
    D_00A51EA1[0] = 2;
}

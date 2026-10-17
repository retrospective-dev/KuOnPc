#include "common.h"

void func_00127BE0(void* dst, s32 c, u32 n);
extern s32 PhantomCounter;
extern s8 D_003AC8AC[];
extern s32 BlastMng[];

void InitBlast(void) {
    func_00127BE0(&BlastMng[0], 0, 0x100U);
    PhantomCounter = 0;
    D_003AC8AC[0] = 0;
}

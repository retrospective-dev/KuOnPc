#include "common.h"

void func_00152960(void);
void func_00153C70(void);
s32 func_001AC6C0(s32 arg0);
s32 func_001DAF70(s32 arg0);
extern u8 D_003AC8A4[];

void func_0013A560(void) {
    func_00152960();
    func_00153C70();
    func_001AC6C0(D_003AC8A4[0] + 1);
    func_001DAF70(0x4000);
}

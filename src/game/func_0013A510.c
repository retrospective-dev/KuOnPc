#include "common.h"

void func_001523E0(void);
void func_00153720(void);
s32 func_0017D470(void);
s32 func_0017E960(void *arg0, s32 arg1);
s32 func_001AC550(void);
s32 func_001DA670(s32 arg0);
extern s32 D_00A07F70[];

void func_0013A510(void) {
    func_001DA670(0x64);
    func_001523E0();
    func_00153720();
    func_001AC550();
    func_0017D470();
    func_0017E960(&D_00A07F70[0], 2);
}

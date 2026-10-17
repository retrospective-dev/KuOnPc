#include "common.h"
#include "kuon_types.h"
#include "m2c_macros.h"

void func_00170C20(Rv *Rp, int data);
int func_001AEE30(int iSndId, short sVol, short sPitch);
void func_0016CB10(Ss *ss) {
    func_00170C20(&ss->arg[4], func_001AEE30(ss->arg[0].val, M2C_FIELD(ss, u16 *, 0x10), M2C_FIELD(ss, u16 *, 0x18)));
    ss->kind = 0;
}

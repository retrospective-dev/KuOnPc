#include "common.h"
#include "kuon_types.h"

int func_0014F0F0(int Type, int CtrlId);
int func_0015FB00(MdlMng *lpEne);
void func_00170C20(Rv *Rp, int data);
extern MdlMng D_006A78D0[770];
void func_0016E350(Ss *ss) {
    if (func_0015FB00(&D_006A78D0[func_0014F0F0(2, ss->arg[0].val) + 0xA1]) != 0) {
        func_00170C20(&ss->arg[1], 1);
    } else {
        func_00170C20(&ss->arg[1], 0);
    }
    ss->kind = 0;
}

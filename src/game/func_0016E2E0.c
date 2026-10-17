#include "common.h"
#include "kuon_types.h"

void func_00151CB0(void);
int func_00151D70(MdlMng *lpMy);
void func_00170C20(Rv *Rp, int data);
extern MdlMng D_006B90D0[];

void func_0016E2E0(Ss *ss) {
    if (func_00151D70(&D_006B90D0[0]) != 0) {
        func_00151CB0();
        func_00170C20(ss->arg, 1);
    } else {
        func_00170C20(ss->arg, 0);
    }
    ss->kind = 0;
}

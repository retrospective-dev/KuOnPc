#include "common.h"
#include "kuon_types.h"

void func_00170C20(Rv *Rp, int data);
int func_0017A190(void);
int func_00181580(void);
void func_0016DCF0(Ss *ss) {
    if ((func_0017A190() != 0) || (func_00181580() != -1)) {
        func_00170C20(ss->arg, 1);
    } else {
        func_00170C20(ss->arg, 0);
    }
    ss->kind = 0;
}

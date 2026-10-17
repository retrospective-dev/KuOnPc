#include "common.h"
#include "kuon_types.h"

void func_00170C20(Rv *Rp, int data);
int func_001D9F50(Menu_id menu_id);
void func_0016C690(Ss *ss) {
    if (func_001D9F50(7) == 0) {
        func_00170C20(ss->arg, 0);
    } else {
        func_00170C20(ss->arg, 1);
    }
    ss->kind = 0;
}

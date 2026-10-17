#include "common.h"

s32 func_0017E700(u8 *arg0);
void func_0017E7A0(u8 *arg0);
extern u8 D_009BB6C0[];

s32 func_0016BD70(void) {
    if (func_0017E700(&D_009BB6C0[0]) != 1) {
        return 0;
    }
    func_0017E7A0(&D_009BB6C0[0]);
    return 1;
}

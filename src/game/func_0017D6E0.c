#include "common.h"

s32 func_0017C280(u8 *arg0);
s32 func_0017E6E0(u8 *arg0);
extern u8 D_00A07D10[];
extern u8 D_00A07D30[];

s32 func_0017D6E0(void) {
    if (func_0017E6E0(&D_00A07D10[0]) != 1) {
        return 1;
    }
    func_0017C280(&D_00A07D30[0]);
    return 1;
}

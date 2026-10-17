#include "common.h"
#include "kuon_types.h"

void func_0016C4C0(int EventFlag);
int func_0016C510(int EventFlag);
extern SaveEvent D_00799640;
extern u8 D_003AC899[];
extern u8 D_003AC8A4[];

s32 func_0014B890(void) {
    if ((D_003AC8A4[0] != 0) || (D_003AC899[0] != 0x33)) {
        return 0;
    }
    if (func_0016C510(0x47F) != 0) {
        return 0;
    }
    func_0016C4C0(0x47F);
    D_00799640.State = 3;
    return 1;
}

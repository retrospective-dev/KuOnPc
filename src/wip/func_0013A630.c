#include "common.h"

void func_0013A6B0(void);
void func_001819D0();
void func_001ACE80(void);
extern s8 D_003AC89F[];

void func_0013A630(void) {
    s8 sp10[16];
    s32 var_v0;
    s8 *var_v1;

    var_v0 = 0x10;
    var_v1 = sp10;
    if (var_v1 != NULL) {
        do {
            *var_v1 = 0;
            var_v0 -= 1;
            var_v1 += 1;
        } while (var_v0 != 0);
    }
    func_001819D0(0xA, sp10, 0x1E, 0, func_0013A6B0, 0, 0);
    D_003AC89F[0] = 0;
    func_001ACE80();
}

#include "common.h"

void func_0013A620(void);
void func_001819D0();
void func_001ACE80(void);
void func_0013A5A0(void) {
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
    func_001819D0(1, sp10, 0x1E, 0, func_0013A620, 0, 0);
    func_001ACE80();
}

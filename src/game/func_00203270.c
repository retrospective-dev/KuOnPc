#include "common.h"
#include "kuon_types.h"

Table *func_002043A0(void);
extern unsigned char D_0025E74C;
void func_00203270(u8 mode) {
    Table *temp_v0;
    u8 *var_a0;

    temp_v0 = func_002043A0();
    D_0025E74C = (mode & 0xFF) * 0xC;
    var_a0 = (u8 *)temp_v0 + (D_0025E74C * 0x1A0);
    if (*var_a0 == 0) {
        do {
            var_a0 += 0x1A0;
            D_0025E74C += 1;
        } while (*var_a0 == 0);
    }
}

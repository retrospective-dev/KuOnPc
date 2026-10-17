#include "common.h"
#include "kuon_types.h"

int func_0014F0F0(int Type, int CtrlId);
void func_0016C410(int EventFlag, unsigned char Flag);
unsigned char func_0016C440(int EventFlag);
void func_0016C4C0(int EventFlag);
void func_001B1290(unsigned char track);
extern MdlMng D_006A78D0[770];
s32 func_00193270(void) {
    MdlMng *temp_a0;

    temp_a0 = &D_006A78D0[func_0014F0F0(1, 0x23) + 0x30];
    temp_a0->bErase = 1;
    if (temp_a0->State[1] == 2) {
        func_001B1290(0U);
    }
    if ((func_0016C440(0x78) & 0xFF & 0xF0) == 0x30) {
        func_0016C4C0(0x79);
        func_0016C410(0x78, func_0016C440(0x78) & 0xFF & 0xF);
    }
    return 0;
}

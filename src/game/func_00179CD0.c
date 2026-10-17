#include "common.h"
#include "kuon_types.h"

DizzyMng *func_00179A50(unsigned char Mode, short PosX, short PosY, short SizeW, short SizeH);
extern u8 D_00A07A2C[];
extern s8 D_00A07A2F[];

void func_00179CD0(s32 Mode) {
    if (Mode != 0) {
        if (D_00A07A2C[0] == 0) {
            func_00179A50(4U, 0x100, 0xE0, 0x200, 0x1C0);
        }
    } else {
        D_00A07A2F[0] = 1;
    }
}

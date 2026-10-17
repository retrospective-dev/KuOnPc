#include "common.h"
#include "kuon_types.h"
#include "m2c_macros.h"

void func_0013D7A0(Pad *lpPadData, unsigned short *stick);
void func_001FBE20(unsigned char die_num, unsigned char DieState);
void func_001FE460(void);
unsigned char *func_00204390(void);
extern Pad *D_0025E350[2];
extern s8 D_003AC899[];
extern u8 D_003AC89A[];

void func_002027A0(void) {
    u16 sp3E;
    Pad *temp_s1;
    u8 *temp_s0;
    u8 temp_v0;
    u8 temp_v1;

    temp_s1 = D_0025E350[D_003AC89A[0]];
    temp_s0 = func_00204390();
    func_0013D7A0(temp_s1, &sp3E);
    if (((u64) ((s64) M2C_FIELD(temp_s1, u8 *, 0x21) << 0x39) >> 0x3F) != 0) {
        temp_v1 = M2C_FIELD(temp_s0, u8 *, 1);
        temp_v0 = M2C_FIELD(temp_s0, u8 *, 0);
        if (temp_v0 == temp_v1) {
            D_003AC899[0] = 8;
        } else if ((s32) temp_v1 < (s32) temp_v0) {
            D_003AC899[0] = 0x10;
        } else {
            D_003AC899[0] = 0x15;
            func_001FBE20(2U, 2U);
        }
        func_001FE460();
    }
}

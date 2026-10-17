#include "common.h"
#include "m2c_macros.h"

void GetAnalogPad(u8 *arg0, u8 *arg1);
void MGInitControl(void);
extern u8 lpPadData_0025E350;
extern s8 D_003AC899[];
extern u8 D_003AC89A[];

void PadOrderPlayer0(void) {
    u16 sp2E;
    u8 *temp_s0;

    temp_s0 = (unsigned char *) (*(s32 *)(&lpPadData_0025E350 + (D_003AC89A[0] * 4)));
    GetAnalogPad(temp_s0, &sp2E);
    if (((u64) ((s64) M2C_FIELD(temp_s0, u8 *, 0x21) << 0x39) >> 0x3F) != 0) {
        D_003AC899[0] = 9;
        MGInitControl();
    }
}

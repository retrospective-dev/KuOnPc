#include "common.h"
#include "kuon_types.h"
#include "m2c_macros.h"

void GetAnalogPad(Pad *lpPadData, unsigned short *stick);
void MGDiceAnimeStart(unsigned char die_num, unsigned char DieState);
void MGInitControl(void);
unsigned char *GetDiceNum(void);
extern Pad *lpPadData_0025E350[2];
extern s8 D_003AC899[];
extern u8 D_003AC89A[];

void PadViewOrder(void) {
    u16 sp3E;
    Pad *temp_s1;
    u8 *temp_s0;
    u8 temp_v0;
    u8 temp_v1;

    temp_s1 = lpPadData_0025E350[D_003AC89A[0]];
    temp_s0 = GetDiceNum();
    GetAnalogPad(temp_s1, &sp3E);
    if (((u64) ((s64) M2C_FIELD(temp_s1, u8 *, 0x21) << 0x39) >> 0x3F) != 0) {
        temp_v1 = M2C_FIELD(temp_s0, u8 *, 1);
        temp_v0 = M2C_FIELD(temp_s0, u8 *, 0);
        if (temp_v0 == temp_v1) {
            D_003AC899[0] = 8;
        } else if ((s32) temp_v1 < (s32) temp_v0) {
            D_003AC899[0] = 0x10;
        } else {
            D_003AC899[0] = 0x15;
            MGDiceAnimeStart(2U, 2U);
        }
        MGInitControl();
    }
}

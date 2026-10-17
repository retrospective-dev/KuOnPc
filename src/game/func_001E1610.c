#include "common.h"
#include "kuon_types.h"
#include "m2c_macros.h"

unsigned char func_001ACBE0(SndVolume SndVolume);
unsigned short func_001B0650(unsigned char Type);
extern G_pSndMng *D_0025E530;
extern int D_0025E708;
extern int D_0025E70C;
extern int D_0025E710;
extern int D_0025E714;
extern int D_0025E718;
extern int D_0025E71C;
extern int D_0025E720;
extern int D_0025E724;
extern u8 D_003AC8A5[];
extern u8 D_003AC8A6[];
extern s8 D_003AC8AE[];
extern u8 D_003AC8BC[];

void func_001E1610(void) {
    D_0025E724 = (s32) D_003AC8A6[0];
    D_0025E720 = (s32) D_003AC8A5[0];
    D_0025E71C = func_001B0650(0U) & 0xFFFF;
    D_0025E718 = func_001ACBE0(3) & 0xFF;
    D_0025E714 = func_001B0650(1U) & 0xFFFF;
    D_0025E710 = (s32) D_003AC8AE[0];
    D_0025E70C = (s32) M2C_FIELD(D_0025E530, u8 *, 0x2C);
    D_0025E708 = (s32) D_003AC8BC[0];
}

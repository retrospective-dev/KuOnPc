#include "common.h"
#include "kuon_types.h"

void func_0013DFB0(unsigned char bFlag);
int func_001AEE30(int iSndId, short sVol, short sPitch);
extern int D_0025E700;
extern int D_0025E704;
extern u8 D_003AC8A5[];

void func_001EEB30(void) {
    switch (D_003AC8A5[0]) {
    case 0:
        func_0013DFB0(1U);
        break;
    case 1:
        func_0013DFB0(0U);
        break;
    }
    if (D_0025E704 == 0) {
        if (D_0025E700 > 0) {
            D_0025E700 -= 1;
            return;
        }
        func_001AEE30(0x11, 0x64, 0);
    }
}

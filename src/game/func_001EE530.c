#include "common.h"
#include "kuon_types.h"

int func_001AEE30(int iSndId, short sVol, short sPitch);
extern int D_0025E700;
extern int D_0025E704;
extern u8 D_003AC8BC[];

void func_001EE530(void) {
    switch (D_003AC8BC[0]) {
    case 0:
        D_003AC8BC[0] = 1;
        break;
    case 1:
        D_003AC8BC[0] = 0;
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

#include "common.h"
#include "kuon_types.h"

int func_001AEE30(int iSndId, short sVol, short sPitch);
extern int D_0025E700;
extern int D_0025E704;
void func_001EC890(void) {
    if (D_0025E704 == 0) {
        if (D_0025E700 > 0) {
            D_0025E700 -= 1;
            return;
        }
        func_001AEE30(0x11, 0x64, 0);
    }
}

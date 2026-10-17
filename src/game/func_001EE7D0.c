#include "common.h"
#include "kuon_types.h"

void func_0013A6C0(unsigned char Type);
int func_001AEE30(int iSndId, short sVol, short sPitch);
void func_001D98C0(void);
extern int D_0025E700;
extern int D_0025E704;
extern u8 D_003AC8A6[];

void func_001EE7D0(void) {
    switch (D_003AC8A6[0]) {
    case 0:
        func_0013A6C0(1U);
        break;
    case 1:
        func_0013A6C0(0U);
        break;
    }
    func_001D98C0();
    if (D_0025E704 == 0) {
        if (D_0025E700 > 0) {
            D_0025E700 -= 1;
            return;
        }
        func_001AEE30(0x11, 0x64, 0);
    }
}

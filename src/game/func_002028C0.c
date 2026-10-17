#include "common.h"
#include "kuon_types.h"

void func_0013D7A0(Pad *lpPadData, unsigned short *stick);
void func_001FE460(void);
extern Pad *D_0025E350[2];
extern unsigned char D_0025E744;
extern s8 D_003AC899[];
extern u8 D_003AC89A[];

void func_002028C0(void) {
    u16 sp1E;

    func_0013D7A0(D_0025E350[D_003AC89A[0]], &sp1E);
    D_0025E744 -= 1;
    if ((s32) D_0025E744 <= 0) {
        D_003AC899[0] = 0xD;
        func_001FE460();
    }
}

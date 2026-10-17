#include "common.h"
#include "kuon_types.h"

void func_0013D7A0(Pad *lpPadData, unsigned short *stick);
void func_001FE460(void);
extern Pad *D_0025E350[2];
extern s8 D_003AC899[];
extern u8 D_003AC89A[];

void func_00202870(void) {
    u16 sp1E;

    func_0013D7A0(D_0025E350[D_003AC89A[0]], &sp1E);
    D_003AC899[0] = 0xF;
    func_001FE460();
}

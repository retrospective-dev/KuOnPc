#include "common.h"
#include "kuon_types.h"

void GetAnalogPad(Pad *lpPadData, unsigned short *stick);
void MGInitControl(void);
extern Pad *lpPadData_0025E350[2];
extern s8 D_003AC899[];
extern u8 D_003AC89A[];

void PadOrderCPU1(void) {
    u16 sp1E;

    GetAnalogPad(lpPadData_0025E350[D_003AC89A[0]], &sp1E);
    D_003AC899[0] = 0xF;
    MGInitControl();
}

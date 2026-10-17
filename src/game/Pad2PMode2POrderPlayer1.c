#include "common.h"

void GetAnalogPad(void *arg0, u16 *arg1);
void MGInitControl(void);
extern void *D_0025E354;
extern s8 D_003AC899[];

void Pad2PMode2POrderPlayer1(void) {
    u16 sp1E;

    GetAnalogPad(D_0025E354, &sp1E);
    D_003AC899[0] = 0x35;
    MGInitControl();
}

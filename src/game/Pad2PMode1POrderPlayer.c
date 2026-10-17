#include "common.h"

typedef struct {
    /* 0x00 */ u8 unk0[0x21];
    /* 0x21 */ u8 unk21;
} Unk_002002A0;

void GetAnalogPad(void *arg0, u16 *arg1);
void MGInitControl(void);
extern void *lpPadData_0025E350;
extern s8 D_003AC899[];

void Pad2PMode1POrderPlayer(void) {
    u16 sp2E;
    Unk_002002A0 *temp_s0;

    temp_s0 = lpPadData_0025E350;
    GetAnalogPad(temp_s0, &sp2E);
    if (((u64) ((s64) temp_s0->unk21 << 0x39) >> 0x3F) != 0) {
        D_003AC899[0] = 0x30;
        MGInitControl();
    }
}

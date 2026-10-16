#include "common.h"

typedef struct {
    /* 0x00 */ u8 unk0[0x21];
    /* 0x21 */ u8 unk21;
} Unk_002000A0;

void func_0013D7A0(void *arg0, u16 *arg1);
void func_001FE460(void);
extern void *D_0025E350;
extern s8 D_003AC899[];

void func_002000A0(void) {
    u16 sp2E;
    Unk_002000A0 *temp_s0;

    temp_s0 = D_0025E350;
    func_0013D7A0(temp_s0, &sp2E);
    if (((u64) ((s64) temp_s0->unk21 << 0x39) >> 0x3F) != 0) {
        D_003AC899[0] = 0x37;
        func_001FE460();
    }
}

#include "common.h"

typedef struct {
    /* 0x00 */ u8 unk0[0x21];
    /* 0x21 */ u8 unk21;
} Unk_002002F0_temp_s0;

typedef struct {
    /* 0x00 */ u8 unk0[0x21];
    /* 0x21 */ u8 unk21;
} Unk_002002F0_temp_s1;

void func_0013D7A0(void *arg0, u16 *arg1);
void func_001FE460(void);
extern void *D_0025E350;
extern void *D_0025E354;
extern s8 D_003AC899[];

void func_002002F0(void) {
    u16 sp3E;
    Unk_002002F0_temp_s0 *temp_s0;
    Unk_002002F0_temp_s1 *temp_s1;

    temp_s0 = D_0025E350;
    temp_s1 = D_0025E354;
    func_0013D7A0(temp_s0, &sp3E);
    func_0013D7A0(temp_s1, &sp3E);
    if ((((u64) ((s64) temp_s0->unk21 << 0x39) >> 0x3F) != 0) || (((u64) ((s64) temp_s1->unk21 << 0x39) >> 0x3F) != 0)) {
        D_003AC899[0] = 0x2F;
        func_001FE460();
    }
}

#include "common.h"

typedef struct {
    /* 0x00 */ u8 unk0[0x20];
    /* 0x20 */ s16 unk20;
} Unk_001BFC30;

void * func_0013C190(void *arg0, s32 arg1, s32 arg2);
s32 func_00103758(s32, s32, void *);
extern void * D_006B90DC[];
extern s32 D_006B90E0[];

void func_001BFC30(s32 arg0) {
    Unk_001BFC30 *temp_v0;

    temp_v0 = func_0013C190(D_006B90DC[0], 0, 0);
    func_00103758(arg0, D_006B90E0[0] + (temp_v0->unk20 << 6), temp_v0);
}

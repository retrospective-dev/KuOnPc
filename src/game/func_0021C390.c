#include "common.h"
#include "kuon_types.h"

typedef struct {
    /* 0x00 */ u8 unk0[0x68];
    /* 0x68 */ f32 unk68;
    /* 0x6C */ u8 unk6C[0x4];
    /* 0x70 */ f32 unk70;
} Unk_0021C390;

extern Unk_0021C390 *D_0025E790;

s32 func_0021C390(f32 fparg0, f32 fparg1) {
    D_0025E790->unk68 = fparg0;
    D_0025E790->unk70 = fparg1;
    return 0;
}

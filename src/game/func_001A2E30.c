#include "common.h"
#include "kuon_types.h"

typedef struct {
    /* 0x00 */ s32 unk0;
    /* 0x04 */ u8 unk4[0x8];
    /* 0x0C */ s32 unkC;
    /* 0x10 */ s32 unk10;
} Unk_001A2E30;

extern u8 D_0024B638[];

s32 func_001A2E30(Unk_001A2E30 *arg0) {
    if (!(D_0024B638[0] & 1)) {
        return 0;
    }
    if (arg0 == NULL) {
        return 0;
    }
    if (arg0->unk0 == 0) {
        return 0;
    }
    return arg0->unk10 < arg0->unkC;
}

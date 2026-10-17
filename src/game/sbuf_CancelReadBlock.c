#include "common.h"
#include "kuon_types.h"

typedef struct {
    /* 0x00 */ s32 unk0;
    /* 0x04 */ u8 unk4[0x4];
    /* 0x08 */ s32 unk8;
    /* 0x0C */ u8 unkC[0x8];
    /* 0x14 */ s32 unk14;
    /* 0x18 */ u8 unk18[0x4];
    /* 0x1C */ s16 unk1C;
} Unk_001A3010;

s32 func_0010D980(s32);
extern u8 D_0024B638[];
extern u8 s_SemaID_00A3E190[];

s32 sbuf_CancelReadBlock(Unk_001A3010 *arg0) {
    if (!(D_0024B638[0] & 1)) {
        return 0;
    }
    if (arg0 == NULL) {
        return 0;
    }
    if (arg0->unk0 == 0) {
        return 0;
    }
    if (arg0->unk14 == 0) {
        return 0;
    }
    arg0->unk14 = (s32) arg0->unk8;
    func_0010D980(*(s32 *)(&s_SemaID_00A3E190[0] + (arg0->unk1C * 4)));
    return 1;
}

#include "common.h"
#include "kuon_types.h"

typedef struct {
    /* 0x00 */ u8 unk0[0x4];
    /* 0x04 */ s32 unk4;
    /* 0x08 */ s32 unk8;
    /* 0x0C */ u8 unkC[0x4C];
    /* 0x58 */ s32 unk58;
    /* 0x5C */ u8 unk5C[0x10];
    /* 0x6C */ s32 unk6C;
} Unk_0019A250;

s32 func_00114D58(s32);
s32 func_0011A190(s32, s32, s32, s32);

s32 func_0019A250(Unk_0019A250 *arg0) {
    s32 var_s0;

    func_00114D58(arg0->unk58);
    func_00114D58(arg0->unk6C);
    var_s0 = 0;
    do {
        func_0011A190(1, 0x8010, var_s0 | 0x980, 0);
        func_0011A190(1, 0x8010, var_s0 | 0xA80, 0);
        var_s0 += 1;
    } while (var_s0 < 2);
    if (arg0->unk4 == 1) {
        func_0011A190(1, 0x8070, 0xA, 0x800);
    }
    do {

    } while (func_0011A190(1, 0x80F0, arg0->unk8, 0) == 0);
    return 1;
}

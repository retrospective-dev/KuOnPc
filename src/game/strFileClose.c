#include "common.h"
#include "kuon_types.h"

typedef struct {
    /* 0x00 */ s32 unk0;
    /* 0x04 */ u8 unk4[0x2C];
    /* 0x30 */ s32 unk30;
    /* 0x34 */ s32 unk34;
} Unk_0019C970;

s32 func_00112038(s32);
s32 func_00114D58(s32);
s32 func_0011BFD0();

s32 strFileClose(Unk_0019C970 *arg0) {
    s32 temp_a0;

    if (arg0->unk0 != 0) {
        func_0011BFD0();
    } else {
        func_00112038(arg0->unk34);
    }
    temp_a0 = arg0->unk30;
    if (temp_a0 != 0) {
        func_00114D58(temp_a0);
        arg0->unk30 = 0;
    }
    return 1;
}

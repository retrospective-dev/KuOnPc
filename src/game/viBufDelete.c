#include "common.h"
#include "kuon_types.h"

typedef struct {
    /* 0x00 */ u8 unk0[0x40];
    /* 0x40 */ s32 unk40;
} Unk_0019D090;

s32 func_0010D970(s32);
s32 func_001169A0();
s32 func_001169F8(s32, s32);

s32 viBufDelete(Unk_0019D090 *arg0) {
    s32 temp_a0;
    s32 temp_a1;

    func_001169A0();
    temp_a1 = *(s32 *)0x1000F520;
    temp_a0 = temp_a1 | 0x10000;
    *(s32 *)0x1000F590 = temp_a0;
    *(s32 *)0x1000B400 = 5;
    *(s32 *)0x1000F590 = (s32) (*(s32 *)0x1000F520 & 0xFFFEFFFF);
    func_001169F8(temp_a0, temp_a1);
    *(s32 *)0x1000B420 = 0;
    *(s32 *)0x1000B410 = 0;
    *(s32 *)0x1000B430 = 0;
    func_0010D970(arg0->unk40);
    return 1;
}

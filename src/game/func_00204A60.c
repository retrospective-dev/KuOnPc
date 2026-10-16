#include "common.h"

typedef struct {
    /* 0x00 */ u8 unk0[0x88];
    /* 0x88 */ void* unk88;
} Unk_00204A60;

void func_00204870(void);

void func_00204A60(s32 arg0, Unk_00204A60* arg1) {
    arg1->unk88 = func_00204870;
}

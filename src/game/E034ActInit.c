#include "common.h"

typedef struct {
    /* 0x00 */ u8 unk0[0x88];
    /* 0x88 */ void* unk88;
} Unk_00204A60;

void E034ActAttack(void);

void E034ActInit(s32 arg0, Unk_00204A60* arg1) {
    arg1->unk88 = E034ActAttack;
}

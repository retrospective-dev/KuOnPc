#include "common.h"

typedef struct {
    /* 0x00 */ u8 unk0[0x80];
    /* 0x80 */ void* unk80;
} Unk_001A89A0;

void P027ActStay(void);

void P027ActInit(s32 arg0, Unk_001A89A0* arg1) {
    arg1->unk80 = P027ActStay;
}

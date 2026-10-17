#include "common.h"

typedef struct {
    /* 0x0 */ void* unk0;
} Unk_001AA1D0;

void P030ThkStay(void);

void P030ThkInit(s32 arg0, Unk_001AA1D0* arg1) {
    arg1->unk0 = P030ThkStay;
}

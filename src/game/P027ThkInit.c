#include "common.h"

typedef struct {
    /* 0x0 */ void* unk0;
} Unk_001A8E70;

void P027ThkStay(void);

void P027ThkInit(s32 arg0, Unk_001A8E70* arg1) {
    arg1->unk0 = P027ThkStay;
}

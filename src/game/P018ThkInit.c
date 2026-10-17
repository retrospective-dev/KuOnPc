#include "common.h"

typedef struct {
    /* 0x0 */ void* unk0;
} Unk_001A92E0;

void P018ThkStay(void);

void P018ThkInit(s32 arg0, Unk_001A92E0* arg1) {
    arg1->unk0 = P018ThkStay;
}

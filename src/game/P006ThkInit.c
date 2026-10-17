#include "common.h"

typedef struct {
    /* 0x0 */ void* unk0;
} Unk_001A8860;

void P006ThkStay(void);

void P006ThkInit(s32 arg0, Unk_001A8860* arg1) {
    arg1->unk0 = P006ThkStay;
}

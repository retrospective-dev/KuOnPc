#include "common.h"

typedef struct {
    /* 0x0 */ void* unk0;
} Unk_00194590;

void P007ThkStay(void);

void P007ThkInit(s32 arg0, Unk_00194590* arg1) {
    arg1->unk0 = P007ThkStay;
}

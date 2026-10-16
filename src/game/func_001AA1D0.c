#include "common.h"

typedef struct {
    /* 0x0 */ void* unk0;
} Unk_001AA1D0;

void func_001AA1C0(void);

void func_001AA1D0(s32 arg0, Unk_001AA1D0* arg1) {
    arg1->unk0 = func_001AA1C0;
}

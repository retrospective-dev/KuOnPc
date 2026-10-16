#include "common.h"

typedef struct {
    /* 0x0 */ void* unk0;
} Unk_001A8E70;

void func_001A8E20(void);

void func_001A8E70(s32 arg0, Unk_001A8E70* arg1) {
    arg1->unk0 = func_001A8E20;
}

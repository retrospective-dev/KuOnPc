#include "common.h"

typedef struct {
    /* 0x0 */ void* unk0;
} Unk_00194590;

void func_001944D0(void);

void func_00194590(s32 arg0, Unk_00194590* arg1) {
    arg1->unk0 = func_001944D0;
}

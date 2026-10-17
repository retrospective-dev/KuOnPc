#include "common.h"

typedef struct {
    /* 0x00 */ u8 unk0[0x10];
    /* 0x10 */ s32 unk10;
} Unk_0017E770;

s32 GetTime(void);
void MngState_GetStartTime(Unk_0017E770 *arg0) {
    arg0->unk10 = GetTime();
}

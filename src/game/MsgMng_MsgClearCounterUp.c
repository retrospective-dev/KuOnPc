#include "common.h"

typedef struct {
    /* 0x000 */ u8 unk0[0x204];
    /* 0x204 */ s32 unk204;
} Unk_0017C080;

s32 MsgMng_MsgClearCounterUp(Unk_0017C080 *arg0) {
    if (arg0 == NULL) {
        return 0;
    }
    arg0->unk204 = (s32) (arg0->unk204 + 1);
    return 1;
}

#include "common.h"

/* From the Mulberry project (github.com/weirdbeardgame/Mulberry, MIT licence), Event0001.c */

typedef struct EVENT {
    /* 0x00 */ void (*InitFunc)(struct EVENT *);
    /* 0x04 */ void (*PlayFunc)(struct EVENT *);
    /* 0x08 */ void (*ActiFunc)(struct EVENT *);
    /* 0x0C */ u8 unkC[0x60 - 0xC];
} EVENT;

extern EVENT EventMngSt[50]; /* EventMngSt */

void InitS0001Event000(EVENT *);
void PlayS0001Event000(EVENT *);
void ActiS0001Event000(EVENT *);

void SetEventFuncS0001(void) {
    EventMngSt->InitFunc = InitS0001Event000;
    EventMngSt->PlayFunc = PlayS0001Event000;
    EventMngSt->ActiFunc = ActiS0001Event000;
}

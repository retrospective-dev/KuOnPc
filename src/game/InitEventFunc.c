#include "common.h"

/* From the Mulberry project (github.com/weirdbeardgame/Mulberry, MIT licence), Event.c */

typedef struct EVENT {
    /* 0x00 */ void (*InitFunc)(struct EVENT *);
    /* 0x04 */ void (*PlayFunc)(struct EVENT *);
    /* 0x08 */ void (*ActiFunc)(struct EVENT *);
    /* 0x0C */ u8 unkC[0x60 - 0xC];
} EVENT;

extern EVENT EventMngSt[50]; /* EventMngSt */

void InitEventFunc(void) {
    EVENT *lpEvent;

    lpEvent = EventMngSt;
    do {
        if (lpEvent->InitFunc != NULL) lpEvent->InitFunc(lpEvent);
    } while (++lpEvent != &EventMngSt[50]);
}

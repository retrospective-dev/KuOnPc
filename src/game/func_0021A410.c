#include "common.h"

/* From the Mulberry project (github.com/weirdbeardgame/Mulberry, MIT licence), Event0001.c */

typedef struct EVENT {
    /* 0x00 */ void (*InitFunc)(struct EVENT *);
    /* 0x04 */ void (*PlayFunc)(struct EVENT *);
    /* 0x08 */ void (*ActiFunc)(struct EVENT *);
    /* 0x0C */ u8 unkC[0x60 - 0xC];
} EVENT;

extern EVENT D_00A604D0[50]; /* EventMngSt */

void func_0021A390(EVENT *);
void func_0021A330(EVENT *);
void func_0021A280(EVENT *);

void func_0021A410(void) {
    D_00A604D0->InitFunc = func_0021A390;
    D_00A604D0->PlayFunc = func_0021A330;
    D_00A604D0->ActiFunc = func_0021A280;
}

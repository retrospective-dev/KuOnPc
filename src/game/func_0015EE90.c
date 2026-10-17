#include "common.h"

/* From the Mulberry project (github.com/weirdbeardgame/Mulberry, MIT licence), Binder.c */

typedef struct {
    /* 0x0 */ char appname[4];
    /* 0x4 */ unsigned int version;
    /* 0x8 */ unsigned int filesize;
    /* 0xC */ unsigned int filenum;
} LPBINDHEAD;

typedef struct {
    /* 0x0 */ unsigned short fileID;
    /* 0x2 */ unsigned short groupID;
    /* 0x4 */ unsigned int dataoffset;
    /* 0x8 */ unsigned int nameoffset;
} SHORT_OFFSET;

unsigned int func_0015EE90(LPBINDHEAD *lpBindHead, unsigned short Index) {
    unsigned int i;
    SHORT_OFFSET *lpOffset;

    if (lpBindHead == NULL) {
        return 0;
    }

    lpOffset = (SHORT_OFFSET *)(lpBindHead + 1);

    for (i = 0; i < lpBindHead->filenum; i++, lpOffset++) {
        if (lpOffset->fileID == Index) {
            return lpOffset->dataoffset;
        }
    }
    return 0;
}

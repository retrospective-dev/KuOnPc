#include "common.h"

extern s32 *lpMdlPacketMem;
extern s32 MdlPacketMemID;
extern s32 MdlPacketMem[];

void ResetMdlPacketMem(void) {
    MdlPacketMemID = 0;
    lpMdlPacketMem = &MdlPacketMem[0];
}

#include "common.h"
#include "kuon_types.h"

unsigned int *MakeTexListPacket(unsigned int *lpCurDMA, u8 *lpTexList);
extern unsigned char *lpMapTexFile_006FC110[4];
extern unsigned int MapTexPacket[4][32768];
void SetMapTexListFile(s32 index) {
    MakeTexListPacket(MapTexPacket[index], lpMapTexFile_006FC110[index]);
}

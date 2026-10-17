#include "common.h"

s32 EtcEventMng_EneExtGeneEvent_Start_Room(void *arg0);
extern s32 g_EtcEventMng[];

void SCR_SetEventMassSpiderStartRoom(s32 *arg0) {
    EtcEventMng_EneExtGeneEvent_Start_Room(&g_EtcEventMng[0]);
    *arg0 = 0;
}

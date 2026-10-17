#include "common.h"

s32 EtcEventMng_EneExtGeneEvent_End(void *arg0);
extern s32 g_EtcEventMng[];

void SCR_SetEventMassSpiderEnd(s32 *arg0) {
    EtcEventMng_EneExtGeneEvent_End(&g_EtcEventMng[0]);
    *arg0 = 0;
}

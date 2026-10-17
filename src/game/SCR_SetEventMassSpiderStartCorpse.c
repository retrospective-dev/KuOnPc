#include "common.h"

s32 EtcEventMng_EneExtGeneEvent_Start_Corpse(void *arg0);
extern s32 g_EtcEventMng[];

void SCR_SetEventMassSpiderStartCorpse(s32 *arg0) {
    EtcEventMng_EneExtGeneEvent_Start_Corpse(&g_EtcEventMng[0]);
    *arg0 = 0;
}

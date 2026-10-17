#include "common.h"

void MGInitCamData(void);
void MGInitControl(void);
extern s8 g_PrcStatus;
extern s8 D_0025E76D;

void ResetMiniGameData(void) {
    MGInitCamData();
    MGInitControl();
    g_PrcStatus = 0;
    D_0025E76D = 0;
}

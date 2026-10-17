#include "common.h"

void* sghGetGameInfo(void);
void sghEneThk_ScoreInit(void);
void* sghMap_GetMainTblMap(void);
void __sghMode_SelectEnemy(void) {
    s8 *temp_s0;

    temp_s0 = sghGetGameInfo();
    sghMap_GetMainTblMap();
    sghEneThk_ScoreInit();
    *temp_s0 = 3;
}

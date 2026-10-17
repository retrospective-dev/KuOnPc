#include "common.h"
#include "kuon_types.h"

void InitS0009Event000(Event *lpEvent);
extern Event EventMngSt[50];
void SetEventFuncS0009(void) {
    EventMngSt->InitFunc = InitS0009Event000;
}

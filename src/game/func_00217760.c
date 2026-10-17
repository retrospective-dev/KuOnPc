#include "common.h"
#include "kuon_types.h"

void func_002176C0(Event *lpEvent);
extern Event D_00A604D0[50];
void func_00217760(void) {
    D_00A604D0->InitFunc = func_002176C0;
}

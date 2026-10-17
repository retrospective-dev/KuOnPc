#include "common.h"

void func_001ACD10(s32 arg0);
void SND_SqRemove(void);
s32 SND_SecRemoveMap(void) {
    SND_SqRemove();
    func_001ACD10(4);
    func_001ACD10(3);
    return 0;
}

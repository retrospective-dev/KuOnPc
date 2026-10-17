#include "common.h"

s32 SND_SecLoadMap(s32 arg0);
void MGLoadModel(void);
void func_001FE730(void);
void func_0013A480(void) {
    func_001FE730();
    MGLoadModel();
    SND_SecLoadMap(0x3E8);
}

#include "common.h"

extern u8 SaveSys[];

void* GetSaveSystem(void) {
    return SaveSys;
}

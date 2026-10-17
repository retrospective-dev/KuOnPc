#include "common.h"

extern u8 SaveData[];

void* GetSaveData(void) {
    return SaveData;
}

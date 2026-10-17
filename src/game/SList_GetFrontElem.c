#include "common.h"

typedef struct {
    /* 0x0 */ u16 unk0;
} Unk_001D4690;

u16 SList_GetFrontElem(Unk_001D4690* arg0) {
    return arg0->unk0;
}

#include "common.h"

extern s32 s_stabilize_on;

void RtaMngSetstabilizeOnOff(s32 arg0) {
    s_stabilize_on = arg0;
}

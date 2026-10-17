#include "common.h"
#include "kuon_types.h"

int func_001B0CA0(unsigned char track, unsigned char type, int timer);
void func_001A1280(s32 StmIndex, s32 Error) {
    if ((StmIndex > 0) && (StmIndex < 7)) {
        if (Error == 0x31) {
            func_001B0CA0(0U, 5U, 0xA);
            func_001B0CA0(1U, 5U, 0xA);
            func_001B0CA0(2U, 5U, 0xA);
            func_001B0CA0(3U, 5U, 0xA);
            func_001B0CA0(4U, 5U, 0xA);
            func_001B0CA0(5U, 5U, 0xA);
            return;
        }
        func_001B0CA0(0U, 4U, 0x3C);
        func_001B0CA0(1U, 4U, 0x3C);
        func_001B0CA0(2U, 4U, 0x3C);
        func_001B0CA0(3U, 4U, 0x3C);
        func_001B0CA0(4U, 4U, 0x3C);
        func_001B0CA0(5U, 4U, 0x3C);
    }
}

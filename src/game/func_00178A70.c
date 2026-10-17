#include "common.h"
#include "kuon_types.h"

DizzyMng *func_00179A50(unsigned char Mode, short PosX, short PosY, short SizeW, short SizeH);
void func_00196E30(int bEnable_);
int func_001AC520(void);
void func_001AFD70(void);
int func_001AFE80(unsigned char track);
void func_001B05A0(int sceneNo, int id);
int func_001B0CA0(unsigned char track, unsigned char type, int timer);
extern DizzyMng D_009F6300;
extern s16 D_0025E460;
extern s8 D_0025E462;
extern s8 D_0025E463;
extern s8 D_003AC89F[];

void func_00178A70(void) {
    if (D_009F6300.Mode == 0) {
        func_00179A50(3U, 0x100, 0xE0, 0x200, 0x1C0);
        D_003AC89F[0] = 2;
        func_00196E30(0);
        func_001AFD70();
        func_001AC520();
        if (func_001AFE80(0U) == 0) {
            func_001B05A0(0, 4);
            D_0025E462 = 1;
        } else {
            func_001B0CA0(0U, 1U, 0x3C);
            D_0025E462 = 0;
        }
        if (func_001AFE80(5U) != 0) {
            func_001B0CA0(5U, 1U, 0x1E);
        }
        D_0025E460 = 0;
        D_0025E463 = 0;
    }
}

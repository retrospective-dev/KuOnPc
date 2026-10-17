#include "common.h"
#include "kuon_types.h"

void func_00127BE0(void* dst, s32 c, u32 n);
unsigned char *func_00138DC0(void);
void func_00150190(char *lpStrTop, int mode);
s32 func_00115AB8(s8 *, s32, s32 *);
s32 func_00125CD8(s32);
s32 func_00129770(s8 *, s32 *, u8 *, s32 *);
extern u8 D_00258E40[];
extern u8 D_00258E48[];
extern u8 D_00258E50[];
extern u8 D_00258E70[];
extern u8 D_00258E90[];
extern u8 D_00258EA0[];
extern u8 D_00258EC0[];
extern u8 D_00258EE0[];
extern u8 D_00258F00[];
extern u8 D_00258F20[];
extern u8 D_00258F30[];
extern u8 D_00258F50[];
extern u8 D_00258F68[];
extern u8 D_00258F80[];
extern u8 D_00258FA0[];
extern u8 D_00258FC0[];

void func_0013A7C0(void) {
    s8 sp690[128];
    s8 sp610[128];
    s8 sp590[128];
    s8 sp510[128];
    s8 sp490[128];
    s8 sp410[128];
    s8 sp390[128];
    s8 sp310[128];
    s8 sp290[128];
    s8 sp210[128];
    s8 sp190[128];
    s8 sp110[128];
    s8 sp90[128];
    s8 sp10[128];

    func_00127BE0(sp690, 0, 0x80U);
    func_00129770(sp690, &D_00258E40[0], func_00138DC0(), &D_00258E50[0]);
    func_00150190(sp690, 1);
    if (func_00115AB8(sp690, 0, &D_00258E48[0]) < 0) {
        func_00125CD8(0);
    }
    func_00127BE0(sp610, 0, 0x80U);
    func_00129770(sp610, &D_00258E40[0], func_00138DC0(), &D_00258E70[0]);
    func_00150190(sp610, 1);
    if (func_00115AB8(sp610, 0, &D_00258E48[0]) < 0) {
        func_00125CD8(0);
    }
    func_00127BE0(sp590, 0, 0x80U);
    func_00129770(sp590, &D_00258E40[0], func_00138DC0(), &D_00258E90[0]);
    func_00150190(sp590, 1);
    if (func_00115AB8(sp590, 0, &D_00258E48[0]) < 0) {
        func_00125CD8(0);
    }
    func_00127BE0(sp510, 0, 0x80U);
    func_00129770(sp510, &D_00258E40[0], func_00138DC0(), &D_00258EA0[0]);
    func_00150190(sp510, 1);
    if (func_00115AB8(sp510, 0, &D_00258E48[0]) < 0) {
        func_00125CD8(0);
    }
    func_00127BE0(sp490, 0, 0x80U);
    func_00129770(sp490, &D_00258E40[0], func_00138DC0(), &D_00258EC0[0]);
    func_00150190(sp490, 1);
    if (func_00115AB8(sp490, 0, &D_00258E48[0]) < 0) {
        func_00125CD8(0);
    }
    func_00127BE0(sp410, 0, 0x80U);
    func_00129770(sp410, &D_00258E40[0], func_00138DC0(), &D_00258EE0[0]);
    func_00150190(sp410, 1);
    if (func_00115AB8(sp410, 0, &D_00258E48[0]) < 0) {
        func_00125CD8(0);
    }
    func_00127BE0(sp390, 0, 0x80U);
    func_00129770(sp390, &D_00258E40[0], func_00138DC0(), &D_00258F00[0]);
    func_00150190(sp390, 1);
    if (func_00115AB8(sp390, 0, &D_00258E48[0]) < 0) {
        func_00125CD8(0);
    }
    func_00127BE0(sp310, 0, 0x80U);
    func_00129770(sp310, &D_00258E40[0], func_00138DC0(), &D_00258F20[0]);
    func_00150190(sp310, 1);
    if (func_00115AB8(sp310, 0, &D_00258E48[0]) < 0) {
        func_00125CD8(0);
    }
    func_00127BE0(sp290, 0, 0x80U);
    func_00129770(sp290, &D_00258E40[0], func_00138DC0(), &D_00258F30[0]);
    func_00150190(sp290, 1);
    if (func_00115AB8(sp290, 0, &D_00258E48[0]) < 0) {
        func_00125CD8(0);
    }
    func_00127BE0(sp210, 0, 0x80U);
    func_00129770(sp210, &D_00258E40[0], func_00138DC0(), &D_00258F50[0]);
    func_00150190(sp210, 1);
    if (func_00115AB8(sp210, 0, &D_00258E48[0]) < 0) {
        func_00125CD8(0);
    }
    func_00127BE0(sp190, 0, 0x80U);
    func_00129770(sp190, &D_00258E40[0], func_00138DC0(), &D_00258F68[0]);
    func_00150190(sp190, 1);
    if (func_00115AB8(sp190, 0, &D_00258E48[0]) < 0) {
        func_00125CD8(0);
    }
    func_00127BE0(sp110, 0, 0x80U);
    func_00129770(sp110, &D_00258E40[0], func_00138DC0(), &D_00258F80[0]);
    func_00150190(sp110, 1);
    if (func_00115AB8(sp110, 0, &D_00258E48[0]) < 0) {
        func_00125CD8(0);
    }
    func_00127BE0(sp90, 0, 0x80U);
    func_00129770(sp90, &D_00258E40[0], func_00138DC0(), &D_00258FA0[0]);
    func_00150190(sp90, 1);
    if (func_00115AB8(sp90, 0, &D_00258E48[0]) < 0) {
        func_00125CD8(0);
    }
    func_00127BE0(sp10, 0, 0x80U);
    func_00129770(sp10, &D_00258E40[0], func_00138DC0(), &D_00258FC0[0]);
    func_00150190(sp10, 1);
    if (func_00115AB8(sp10, 0, &D_00258E48[0]) < 0) {
        func_00125CD8(0);
    }
}

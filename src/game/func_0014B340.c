#include "common.h"

/* From the Mulberry project (github.com/weirdbeardgame/Mulberry, MIT licence), Memory.c */

typedef struct _allocmng {
    /* 0x00 */ unsigned char bUse;
    /* 0x01 */ unsigned char bFree;
    /* 0x02 */ unsigned short no;
    /* 0x04 */ unsigned int addr;
    /* 0x08 */ unsigned int addrB;
    /* 0x0C */ unsigned int size;
    /* 0x10 */ struct _allocmng *prev;
    /* 0x14 */ struct _allocmng *next;
    /* 0x18 */ char *lpfuncname;
} allocmng;

typedef unsigned int u_int;

extern allocmng D_0078B640[2048]; /* AllocMng */
#define AllocMng D_0078B640

static inline allocmng *getLpBaseMng(u_int size, u_int align) { // or macro?
  allocmng *lpBaseMng;
  unsigned int AlignAddr;
  unsigned int AlignSize;
  unsigned int OldEndAddr;

  lpBaseMng = AllocMng;

  while (1) {
    if (lpBaseMng->bUse != 0 && lpBaseMng->bFree != 0) {
      AlignAddr = ~(align - 1) & (lpBaseMng->addrB + align - 1);
      AlignAddr += size;
      if (AlignAddr <= lpBaseMng->addr + lpBaseMng->size) {
        return lpBaseMng;
      }
    }
    lpBaseMng++;
    if (lpBaseMng == &AllocMng[0x800]) {
      lpBaseMng = NULL;
      break;
    }
  }
  return lpBaseMng;
}

static inline allocmng *findUnusedAllocMng() { // or macro?
  allocmng *lpBaseMng;

  lpBaseMng = AllocMng;

  while (1) {
    if (lpBaseMng->bUse == 0) {
      lpBaseMng->bUse = 1;
      break;
    } else {
      lpBaseMng++;
      if (lpBaseMng == (&AllocMng[0x800])) {
        lpBaseMng = NULL;
        break;
      }
    }
  }
  return lpBaseMng;
}

static inline allocmng *findUnusedAllocMngAligned(u_int size,
                                                  unsigned int align) {
  allocmng *lpBaseMng;
  if (align == 0) {
    lpBaseMng = NULL;
  } else {
    lpBaseMng = AllocMng;

    while (1) {
      if (lpBaseMng->bUse == 0) {
        lpBaseMng->bUse = 1;
        lpBaseMng->addr = align;
        lpBaseMng->size = size;
        break;
      } else {
        lpBaseMng++;
        if (lpBaseMng == (&AllocMng[0x800])) {
          lpBaseMng = NULL;
          break;
        }
      }
    }
  }
  return lpBaseMng;
}

static inline int getAlignedAddress(int addr, volatile int align) {
  return (addr + align - 1) & ~(align - 1);
}

void *func_0014B340(u_int size /* r2 */, u_int align /* r2 */,
                            char *lpFuncName /* r2 */, char *lpUseName) {
  // Range: 0x14AD00 -> 0x14AF20
  allocmng *lpBaseMng;     // r9  $t1
  unsigned int AlignAddr;  // r10 $t2
  unsigned int AlignSize;  // r8  $t0
  unsigned int OldEndAddr; // r9  $t1
  allocmng *var_t0;
  u_int temp_v0, temp_a3;

  if ((lpBaseMng = getLpBaseMng(size, align)) != NULL) {

    lpBaseMng->bFree = 0;

    AlignAddr = getAlignedAddress(lpBaseMng->addrB, align);
    OldEndAddr = lpBaseMng->addr + lpBaseMng->size, temp_a3 = AlignAddr + size;

    if (temp_a3 == OldEndAddr) {

      lpBaseMng->addr = AlignAddr;
      lpBaseMng->size = size;
      lpBaseMng->lpfuncname = lpFuncName;
      return (void *)lpBaseMng->addr;
    }

    var_t0 = findUnusedAllocMng();
    var_t0->addr = temp_a3;
    var_t0->addrB = var_t0->addr;
    var_t0->size = OldEndAddr - temp_a3;
    var_t0->bFree = 1;

    var_t0->next = lpBaseMng->next;
    var_t0->next->prev = var_t0;
    var_t0->prev = lpBaseMng;
    lpBaseMng->next = var_t0;

    lpBaseMng->addr = AlignAddr;
    lpBaseMng->size = size;
    lpBaseMng->lpfuncname = lpFuncName;
    return (void *)lpBaseMng->addr;
  }

  var_t0 = AllocMng;
  AlignAddr = getAlignedAddress(var_t0->addr, align);
  temp_v0 = (AlignAddr - var_t0->addr);
  lpBaseMng = findUnusedAllocMngAligned(size, AlignAddr);

  lpBaseMng->addrB = var_t0->addr;
  lpBaseMng->lpfuncname = lpFuncName;

  var_t0->addr = AlignAddr + size;
  var_t0->addrB = var_t0->addr;
  var_t0->size -= size + temp_v0;

  if (var_t0->prev != NULL) {
    var_t0->prev->next = lpBaseMng;
    lpBaseMng->prev = var_t0->prev;
  }
  var_t0->prev = lpBaseMng;
  lpBaseMng->next = var_t0;

  return (void *)lpBaseMng->addr;
}

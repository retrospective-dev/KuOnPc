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

u_int func_0014B180(void *lpMem /* r2 */) {
  allocmng *lpBaseMng;
  allocmng *lpAllocMng;
  allocmng *lpLinkMng;
  unsigned int FreeAddr;
  unsigned int EndAddr;
  unsigned int FreeSize;
  lpBaseMng = AllocMng;

  for (lpAllocMng = lpBaseMng; lpAllocMng != &AllocMng[2048]; lpAllocMng++) {
    if (lpAllocMng->bUse == 0) {
      continue;
    }

    if (lpAllocMng->bFree != 0) {
      continue;
    }

    if (lpAllocMng->addr != (int)lpMem) {
      continue;
    }

    FreeSize = lpAllocMng->size;
    lpLinkMng = lpAllocMng->prev;

    while ((!!lpLinkMng && (lpLinkMng->bFree != 0))) {
      EndAddr = lpAllocMng->addr + lpAllocMng->size;
      lpAllocMng->addr = lpLinkMng->addrB;
      lpAllocMng->addrB = lpAllocMng->addr;
      lpAllocMng->size = EndAddr - lpAllocMng->addr;
      lpAllocMng->prev = (allocmng *)lpLinkMng->prev;
      if (lpAllocMng->prev) {
        lpAllocMng->prev->next = lpAllocMng;
      }

      lpLinkMng->bUse = 0;
      lpLinkMng->bFree = 0;
      lpLinkMng->next = (allocmng *)0x0;
      lpLinkMng->prev = (allocmng *)0x0;
      lpLinkMng = lpAllocMng->prev;
    }

    lpLinkMng = lpAllocMng->next;
    while (!!lpLinkMng && (lpLinkMng->bFree != 0)) {
      EndAddr = lpLinkMng->addr + lpLinkMng->size;
      lpAllocMng->size = EndAddr - lpAllocMng->addrB;
      lpAllocMng->addr = lpAllocMng->addrB;
      lpAllocMng->next = (allocmng *)lpLinkMng->next;

      if (lpAllocMng->next) {
        lpAllocMng->next->prev = lpAllocMng;
      }

      lpLinkMng->bUse = 0;
      lpLinkMng->bFree = 0;
      lpLinkMng->next = (allocmng *)0x0;
      lpLinkMng->prev = (allocmng *)0x0;
      lpLinkMng = lpAllocMng->next;
    }

    if (lpLinkMng == lpBaseMng) {
      lpBaseMng->size = lpBaseMng->addr - lpAllocMng->addrB + lpBaseMng->size;
      lpBaseMng->addr = lpAllocMng->addrB;
      lpBaseMng->addrB = lpBaseMng->addr;
      if (lpAllocMng->prev) {
        lpAllocMng->prev->next = lpBaseMng;
      }
      lpBaseMng->prev = lpAllocMng->prev;

      lpAllocMng->bUse = 0;
      lpAllocMng->bFree = 0;
      lpAllocMng->next = 0;
      lpAllocMng->prev = 0;
    } else {
      lpAllocMng->bFree = 1;
    }
    return FreeSize;
  }

  return 0;
}

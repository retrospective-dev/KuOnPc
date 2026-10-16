#ifndef M2C_MACROS_H
#define M2C_MACROS_H

/* Raw field access emitted by tools/m2c_batch.py when a function's struct accesses
 * couldn't be turned into a typedef yet (nested pointers, pointer arithmetic).
 * Phase 3 replaces these with real structs. */
#define M2C_FIELD(expr, type, offset) (*(type)((u8*)(expr) + (offset)))

#endif

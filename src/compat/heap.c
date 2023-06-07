#include "stdint.h"

// 3MiB heap - entire internal memory. Shoud be smaller, not sure what's
// realistic
uint8_t heap[3 * 1024 * 1024];

uintptr_t __heap_start = (uintptr_t)heap;

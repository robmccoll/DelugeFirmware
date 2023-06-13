#include "stdint.h"
#include "compat.h"

// 64MB external memory
uint8_t external_memory[64 * 1024 * 1024];

uintptr_t EXTERNAL_MEMORY_BEGIN = (uintptr_t)external_memory;
uintptr_t EXTERNAL_MEMORY_END = (uintptr_t)external_memory + 64 * 1024 * 1024;

void R_CACHE_L1Init() {
	// COMPAT: nothing to do
}

void __enable_fiq() {
	/* TODO COMPAT */
	LOG_COMPAT_TODO();
}

void __enable_irq() {
	/* TODO COMPAT */
	LOG_COMPAT_TODO();
}

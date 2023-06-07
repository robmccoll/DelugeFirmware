#include "stdint.h"

// 64MB external memory
uint8_t external_memory[64 * 1024 * 1024];

uintptr_t EXTERNAL_MEMORY_BEGIN = (uintptr_t)external_memory;
uintptr_t EXTERNAL_MEMORY_END = (uintptr_t)external_memory + 64 * 1024 * 1024;

void R_CACHE_L1Init() {
	/* TODO COMPAT */
}

void __enable_fiq() {
	/* TODO COMPAT */
}

void __enable_irq() {
	/* TODO COMPAT */
}

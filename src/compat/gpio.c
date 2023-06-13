#include "gpio.h"
#include "compat.h"

uint16_t readInput(uint8_t p, uint8_t q) {
	/* TODO COMPAT */
	LOG_COMPAT_TODO();
	return 0;
}

void setOutputState(uint8_t p, uint8_t q, uint16_t state) {
	/* TODO COMPAT */
	LOG_COMPAT_TODO_FMT("%d %d %d", p, q, state);
	return 0;
}

void setPinMux(uint8_t p, uint8_t q, uint8_t mux) {
	// COMPAT: probably don't need to worry about actually emulating pin I/O config
	return;
}

void setPinAsOutput(uint8_t p, uint8_t q) {
	// COMPAT: probably don't need to worry about actually emulating pin I/O config
	return;
}

void setPinAsInput(uint8_t p, uint8_t q) {
	// COMPAT: probably don't need to worry about actually emulating pin I/O config
	return;
}

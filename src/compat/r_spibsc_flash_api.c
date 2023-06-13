#include "r_spibsc_flash_api.h"
#include "compat.h"

int32_t R_SFLASH_ByteProgram(uint32_t addr, uint8_t* buf, int32_t size, uint32_t ch_no, uint32_t dual,
                             uint8_t data_width, uint8_t addr_mode) {
	/* TODO COMPAT */
	LOG_COMPAT_TODO();
	return 0;
}

int32_t R_SFLASH_ByteRead(uint32_t addr, uint8_t* buf, int32_t size, uint32_t ch_no, uint32_t dual, uint8_t data_width,
                          uint8_t addr_mode) {
	/* TODO COMPAT */
	LOG_COMPAT_TODO();
	return 0;
}

int32_t R_SFLASH_EraseSector(uint32_t addr, uint32_t ch_no, uint32_t dual, uint8_t data_width, uint8_t addr_mode) {
	/* TODO COMPAT */
	LOG_COMPAT_TODO();
	return 0;
}

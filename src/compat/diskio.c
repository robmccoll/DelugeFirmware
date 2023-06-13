#include "diskio.h"
#include "compat.h"

uint8_t currentlyAccessingCard = 0;

DSTATUS disk_initialize(BYTE pdrv) {
	/* TODO COMPAT */
	LOG_COMPAT_TODO();
	return 0;
}

DSTATUS disk_status(BYTE pdrv) {
	/* TODO COMPAT */
	LOG_COMPAT_TODO();
	return 0;
}

DRESULT disk_read(BYTE pdrv, BYTE* buff, LBA_t sector, UINT count) {
	/* TODO COMPAT */
	LOG_COMPAT_TODO();
	return RES_OK;
}

DRESULT disk_write(BYTE pdrv, const BYTE* buff, LBA_t sector, UINT count) {
	/* TODO COMPAT */
	LOG_COMPAT_TODO();
	return RES_OK;
}

DRESULT disk_ioctl(BYTE pdrv, BYTE cmd, void* buff) {
	/* TODO COMPAT */
	LOG_COMPAT_TODO();
	return RES_OK;
}

void disk_timerproc(UINT msPassed) {
	/* TODO COMPAT */
	LOG_COMPAT_TODO();
}

DRESULT disk_read_without_streaming_first(BYTE pdrv,    /* Physical drive nmuber to identify the drive */
                                          BYTE* buff,   /* Data buffer to store read data */
                                          DWORD sector, /* Sector address in LBA */
                                          UINT count    /* Number of sectors to read */
) {
	/* TODO COMPAT */
	LOG_COMPAT_TODO();
	return RES_OK;
}

#include "ff.h"

FRESULT f_open (FIL* fp, const TCHAR* path, BYTE mode) {
  /* COMPAT TODO */
  return FR_OK;
}


FRESULT f_close (FIL* fp) {
  /* COMPAT TODO */
  return FR_OK;
}

FRESULT f_read (FIL* fp, void* buff, UINT btr, UINT* br) {
  /* COMPAT TODO */
  return FR_OK;
}

FRESULT f_readdir (DIR* dp, FILINFO* fno) {
  /* COMPAT TODO */
  return FR_OK;
}

FRESULT f_write (FIL* fp, const void* buff, UINT btw, UINT* bw) {
  /* COMPAT TODO */
  return FR_OK;
}

FRESULT f_lseek (FIL* fp, FSIZE_t ofs) {
  /* COMPAT TODO */
  return FR_OK;
}

FRESULT f_truncate (FIL* fp) {
  /* COMPAT TODO */
  return FR_OK;
}

FRESULT f_opendir (DIR* dp, const TCHAR* path) {
  /* COMPAT TODO */
  return FR_OK;
}

FRESULT f_closedir (DIR* dp) {
  /* COMPAT TODO */
  return FR_OK;
}

FRESULT f_mkdir (const TCHAR* path) {
  /* COMPAT TODO */
  return FR_OK;
}

FRESULT f_mount (FATFS* fs, const TCHAR* path, BYTE opt) {
  /* COMPAT TODO */
  return FR_OK;
}

FRESULT f_rename (const TCHAR* path_old, const TCHAR* path_new) {
  /* COMPAT TODO */
  return FR_OK;
}

FRESULT f_stat (const TCHAR* path, FILINFO* fno) {
  /* COMPAT TODO */
  return FR_OK;
}

FRESULT f_unlink (const TCHAR* path) {
  /* COMPAT TODO */
  return FR_OK;
}

FRESULT f_readdir_get_filepointer (
	DIR* dp,			/* Pointer to the open directory object */
	FILINFO* fno,		/* Pointer to file information to return */
	FilePointer* filePointer
) {
  /* COMPAT TODO */
  return FR_OK;
}

FRESULT dir_find (	/* FR_OK(0):succeeded, !=0:error */
	DIR* dp					/* Pointer to the directory object with the file name */
) {
  /* COMPAT TODO */
  return FR_OK;
}

DWORD ld_clust (	/* Returns the top cluster value of the SFN entry */
	FATFS* fs,			/* Pointer to the fs object */
	const BYTE* dir		/* Pointer to the key entry */
) {
  /* COMPAT TODO */
  return 0;
}

DWORD ld_dword (const BYTE* ptr) {
  /* COMPAT TODO */
  return 0;
}

FRESULT create_name (	/* FR_OK: successful, FR_INVALID_NAME: could not create */
	DIR* dp,					/* Pointer to the directory object */
	const TCHAR** path			/* Pointer to pointer to the segment in the path string */
) {
  /* COMPAT TODO */
  return 0;
}

DWORD get_fat_from_fs (		/* 0xFFFFFFFF:Disk error, 1:Internal error, 2..0x7FFFFFFF:Cluster status */
	FATFS* fs,	// Changed by Rohan
	DWORD clst		/* Cluster number to get the value */
) {
  /* COMPAT TODO */
  return 0;
}

LBA_t clst2sect (	/* !=0:Sector number, 0:Failed (invalid cluster#) */
	FATFS* fs,		/* Filesystem object */
	DWORD clst		/* Cluster# to be converted */
) {
  /* COMPAT TODO */
  return (LBA_t){0};
}

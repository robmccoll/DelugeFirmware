#include "NE10_dsp.h"
#include "compat.h"

ne10_fft_r2c_cfg_int32_t ne10_fft_alloc_r2c_int32(ne10_int32_t nfft) {
	/* TODO COMPAT */
	LOG_COMPAT_TODO();
	return 0;
}

void ne10_fft_c2r_1d_int32_neon(ne10_int32_t* fout, ne10_fft_cpx_int32_t* fin, ne10_fft_r2c_cfg_int32_t cfg,
                                ne10_int32_t scaled_flag) {
	/* TODO COMPAT */
	LOG_COMPAT_TODO();
}

void ne10_fft_r2c_1d_int32_neon(ne10_fft_cpx_int32_t* fout, ne10_int32_t* fin, ne10_fft_r2c_cfg_int32_t cfg,
                                ne10_int32_t scaled_flag) {
	/* TODO COMPAT */
	LOG_COMPAT_TODO();
}

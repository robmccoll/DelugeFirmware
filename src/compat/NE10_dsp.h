/*
 *  Copyright 2012-16 ARM Limited and Contributors.
 *  All rights reserved.
 *
 *  Redistribution and use in source and binary forms, with or without
 *  modification, are permitted provided that the following conditions are met:
 *    * Redistributions of source code must retain the above copyright
 *      notice, this list of conditions and the following disclaimer.
 *    * Redistributions in binary form must reproduce the above copyright
 *      notice, this list of conditions and the following disclaimer in the
 *      documentation and/or other materials provided with the distribution.
 *    * Neither the name of ARM Limited nor the
 *      names of its contributors may be used to endorse or promote products
 *      derived from this software without specific prior written permission.
 *
 *  THIS SOFTWARE IS PROVIDED BY ARM LIMITED AND CONTRIBUTORS "AS IS" AND
 *  ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 *  WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 *  DISCLAIMED. IN NO EVENT SHALL ARM LIMITED AND CONTRIBUTORS BE LIABLE FOR ANY
 *  DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 *  (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 *  LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
 *  ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 *  (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 *  SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

/*
 * NE10 Library : inc/NE10_dsp.h
 */

#include "NE10_types.h"

#ifndef NE10_DSP_H
#define NE10_DSP_H

#ifdef __cplusplus
extern "C" {
#endif
/**
 * @defgroup C2C_FFT_IFFT Complex-to-Complex FFT (Floating & Fixed Point)
 * @ingroup groupDSPs
 * @{
 *
 * \par
 * A [Fast Fourier Transform (FFT)](https://en.wikipedia.org/wiki/Fast_Fourier_transform) is an efficient method
 * of computing the [Discrete Fourier Transform (DFT)](https://en.wikipedia.org/wiki/Discrete_Fourier_transform),
 * or its inverse. This set of functions implement complex-to-complex 1D FFTs, and the complementary
 * inverse transforms (IFFTs).
 *
 * \par
 * Where scaling controls are not provided, these functions scale the data by \f$1/N\f$ in the inverse transformation only. This
 * is a common convention, but may contrast with typical usage in some fields, where this scale factor may instead be applied in
 * the forwards transformation only, or where a scale factor of \f$1/\sqrt{N}\f$ may be applied in both transformations.
 *
 * \par
 * Separate versions are provided for floating point (FP32) and fixed point (Q31, Q15) data, each with
 * a plain C implementation, a NEON implementation, and a function pointer to select between these at runtime (see @ref ne10_init). More detailed
 * descriptions of these functions can be found alongside the relevant function pointers:
 *
 * \par
 * - FP32: @ref ne10_fft_c2c_1d_float32
 * - INT32 (Q31): @ref ne10_fft_c2c_1d_int32
 * - INT16 (Q15): @ref ne10_fft_c2c_1d_int16
 *
 * \par Supported lengths
 * Internally, the functions primarily utilize a mixed radix 2/4 decimation-in-time algorithm, supporting input sizes of the form 2<sup>N</sup>
 * (for integers N > 0). Some functions also support non-power-of-two input sizes using additional radices, and this is noted in the
 * relevant function descriptions where it applies.
 *
 * \par Memory layout
 * These functions operate out-of-place, using different buffers for their input and output. An additional temporary buffer is
 * also used internally to store intermediate results. The input and output buffers should be allocated by the user, and must
 * be of a size greater than or equal to `(fftSize * sizeof(ne10_fft_cpx_float32_t))` bytes, while the temporary buffer is
 * reserved during allocation of a "configuration structure" (for instance, via @ref ne10_fft_alloc_c2c_float32).
 *
 * \par
 * Input and output buffers interleave the real and imaginary parts of each complex element, storing these contiguously.
 * <pre>Format: { Re[0], Im[0], Re[1], Im[1], Re[2], Im[2], ..., Re[fftSize - 2], Im[fftSize - 2], Re[fftSize - 1], Im[fftSize - 1] }</pre>
 *
 *
 * \par Example usage
 * A single precision floating point FFT/IFFT example code snippet follows.
 *
 * \par
 * ```c
 * #include "NE10.h"
 *
 * ...
 *
 * {
 *     ne10_int32_t fftSize = 1024;
 *     ne10_fft_cfg_float32_t cfg = ne10_fft_alloc_c2c_float32_neon(fftSize);          // Allocate a configuration structure for C2C FP32 NEON FFTs of size fftSize
 *     ne10_fft_cpx_float32_t *in  = malloc(fftSize * sizeof(ne10_fft_cpx_float32_t)); // Allocate an input array of samples
 *     ne10_fft_cpx_float32_t *out = malloc(fftSize * sizeof(ne10_fft_cpx_float32_t)); // Allocate an output array of samples
 *
 *     ...
 *
 *     // FFT
 *     ne10_fft_c2c_1d_float32_neon(out, in, cfg, 0); // Call the FP32 C2C NEON implementation directly
 *
 *     ...
 *
 *     // IFFT
 *     ne10_fft_c2c_1d_float32_neon(out, in, cfg, 1); // Call the FP32 C2C NEON implementation directly (reusing the configuration structure!)
 *
 *     ...
 *
 *     NE10_FREE(out);                    // Free the allocated input array
 *     NE10_FREE(in);                     // Free the allocated output array
 *     ne10_fft_destroy_c2c_float32(cfg); // Free the allocated configuration structure
 * }
 * ```
 *
 * \par
 * The @ref ne10_fft_cfg_float32_t variable `cfg` is a pointer to a configuration structure. **For different inputs of the same size,
 * the same configuration structure can** (and should, where possible) **be reused**.
 *
 * \par
 * The contents of these configuration structures include:
 *
 * \par
 * - `cfg->twiddles`: a pointer to a table of "twiddle factors" that are used in computing the FFT/IFFT
 * - `cfg->factors`: a buffer of "factors", which suggests to the core algorithm how the input can be broken down into smaller calculations
 * - `cfg->buffer`: a pointer to a temporary buffer used internally in calculations that is allocated when the configuration
 *                  structure is set up
 */

extern ne10_fft_r2c_cfg_int32_t ne10_fft_alloc_r2c_int32(ne10_int32_t nfft);

/**
     * @brief Mixed radix-2/4 real-to-complex FFT of 32-bit fixed point Q31 data.
     *
     * @param[out]  *fout            pointer to the output buffer
     * @param[in]   *fin             pointer to the input buffer
     * @param[in]   cfg              pointer to the configuration structure (allocated via @ref ne10_fft_alloc_r2c_int32)
     * @param[in]   scaled_flag      scale flag (0: unscaled, 1: scaled)
     *
     * The function implements a mixed radix-2/4 real-to-complex FFT, supporting input lengths of
     * the form 2<sup>N</sup> (N > 0). Points to @ref ne10_fft_r2c_1d_int32_c or
     * @ref ne10_fft_r2c_1d_int32_neon. This is an out-of-place algorithm.
     * For usage information, please check test/test_suite_fft_int32.c.
     *
     * For the inverse transform (IFFT), call @ref ne10_fft_c2r_1d_int32.
     */
extern void ne10_fft_r2c_1d_int32_neon(ne10_fft_cpx_int32_t* fout, ne10_int32_t* fin, ne10_fft_r2c_cfg_int32_t cfg,
                                       ne10_int32_t scaled_flag);

/**
     * @brief Mixed radix-2/4 complex-to-real IFFT of 32-bit fixed point Q31 data.
     *
     * @param[out]  *fout            pointer to the output buffer
     * @param[in]   *fin             pointer to the input buffer
     * @param[in]   cfg              pointer to the configuration structure (allocated via @ref ne10_fft_alloc_r2c_int32)
     * @param[in]   scaled_flag      scale flag (0: unscaled, 1: scaled)
     *
     * The function implements a mixed radix-2/4 complex-to-real IFFT, supporting input lengths of
     * the form 2<sup>N</sup> (N > 0). Points to @ref ne10_fft_c2r_1d_int32_c or
     * @ref ne10_fft_c2r_1d_int32_neon. This is an out-of-place algorithm.
     * For usage information, please check test/test_suite_fft_int32.c.
     */
extern void ne10_fft_c2r_1d_int32_neon(ne10_int32_t* fout, ne10_fft_cpx_int32_t* fin, ne10_fft_r2c_cfg_int32_t cfg,
                                       ne10_int32_t scaled_flag);

#ifdef __cplusplus
}
#endif

#endif

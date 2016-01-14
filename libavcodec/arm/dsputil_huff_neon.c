#include <stdint.h>

#include "libavcodec/avcodec.h"
#include "libavcodec/dsputil.h"

#include "dsputil_arm.h"

#ifdef __ARM_NEON__
#include <arm_neon.h>
#endif

void diff_bytes_neon(uint8_t *dst, uint8_t *src1, uint8_t *src2, int w);

void diff_bytes_neon(uint8_t *dst, uint8_t *src1, uint8_t *src2, int w)
{
	long i = 0;
	// Align self
	for (i = 0; (((long)dst + i) & 0xf) && (i < w); i++) {
		dst[i] = src1[i] - src2[i];
	}
	dst  += i;
	src1 += i;
	src2 += i;
	w -= i;
#ifdef __ARM_NEON__
	for (i = 0; i < (w - 32); i += 32)
	{
		// load 32 pixels
		uint8x16_t src1PixelsA = vld1q_u8(src1 + i);
		uint8x16_t src2PixelsA = vld1q_u8(src2 + i);
		uint8x16_t src1PixelsB = vld1q_u8(src1 + i + 16);
		uint8x16_t src2PixelsB = vld1q_u8(src2 + i + 16);

		// subtract them
		uint8x16_t dstPixelsA = vsubq_u8(src1PixelsA, src2PixelsA);
		uint8x16_t dstPixelsB = vsubq_u8(src1PixelsB, src2PixelsB);

		// store the result
		vst1q_u8 (dst + i,    dstPixelsA);
		vst1q_u8 (dst + i + 16, dstPixelsB);

		// advance 32 pixels
	}
#endif
	// Tail end
	for (; i < w; i++) {
		dst[i] = src1[i] - src2[i];
	}
}

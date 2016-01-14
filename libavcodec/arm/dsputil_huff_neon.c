#include <stdint.h>

#include "libavcodec/avcodec.h"
#include "libavcodec/dsputil.h"

#include "dsputil_arm.h"
#include <arm_neon.h>

void diff_bytes_neon(uint8_t *dst, uint8_t *src1, uint8_t *src2, int w)
{
	long i = 0;
	while ((long)dst  & 0xf) {
		dst[i] = src1[i] - src2[i];
	}
	for (i = 0; i<(w/32); i++)
	{
		// load 32 pixels
		uint8x16_t src1PixelsA = vld1q_u8(src1);
		uint8x16_t src2PixelsA = vld1q_u8(src2);
		uint8x16_t src1PixelsB = vld1q_u8(src1+16);
		uint8x16_t src2PixelsB = vld1q_u8(src2+16);

		// subtract them
		uint8x16_t dstPixelsA = vsubq_u8(src1PixelsA, src2PixelsA);
		uint8x16_t dstPixelsB = vsubq_u8(src1PixelsB, src2PixelsB);

		// store the result
		vst1q_u8 (dst,    dstPixelsA);
		vst1q_u8 (dst+16, dstPixelsB);

		// advance 32 pixels
		src1+=32;
		src2+=32;
		dst+=32;
	}

	// Clean up
	for (; i < w; i++) {
		dst[i] = src1[i] - src2[i];
	}
}

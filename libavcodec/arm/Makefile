OBJS-$(CONFIG_AC3DSP)                  += arm/ac3dsp_init_arm.o         \
                                          arm/ac3dsp_arm.o

OBJS-$(CONFIG_AAC_DECODER)             += arm/sbrdsp_init_arm.o         \
                                          arm/aacpsdsp_init_arm.o

OBJS-$(CONFIG_DCA_DECODER)             += arm/dcadsp_init_arm.o         \

ARMV6-OBJS-$(CONFIG_AC3DSP)            += arm/ac3dsp_armv6.o

OBJS-$(CONFIG_FLAC_DECODER)            += arm/flacdsp_init_arm.o        \
                                          arm/flacdsp_arm.o             \

OBJS-$(CONFIG_MPEGAUDIODSP)            += arm/mpegaudiodsp_init_arm.o
ARMV6-OBJS-$(CONFIG_MPEGAUDIODSP)      += arm/mpegaudiodsp_fixed_armv6.o

OBJS-$(CONFIG_MPEGVIDEO)               += arm/mpegvideo_arm.o
OBJS-$(CONFIG_VP3DSP)                  += arm/vp3dsp_init_arm.o
OBJS-$(CONFIG_VP5_DECODER)             += arm/vp56dsp_init_arm.o
OBJS-$(CONFIG_VP6_DECODER)             += arm/vp56dsp_init_arm.o
OBJS-$(CONFIG_VP8_DECODER)             += arm/vp8dsp_init_arm.o
ARMV6-OBJS-$(CONFIG_VP8_DECODER)       += arm/vp8_armv6.o               \
                                          arm/vp8dsp_init_armv6.o       \
                                          arm/vp8dsp_armv6.o

OBJS-$(CONFIG_H264DSP)                 += arm/h264dsp_init_arm.o
OBJS-$(CONFIG_H264PRED)                += arm/h264pred_init_arm.o

OBJS-$(CONFIG_RV30_DECODER)            += arm/rv34dsp_init_arm.o
OBJS-$(CONFIG_RV40_DECODER)            += arm/rv34dsp_init_arm.o        \
                                          arm/rv40dsp_init_arm.o        \

OBJS-$(CONFIG_VIDEODSP)                += arm/videodsp_init_arm.o       \

OBJS                                   += arm/dsputil_init_arm.o        \
                                          arm/dsputil_arm.o             \
                                          arm/fft_init_arm.o            \
                                          arm/fft_fixed_init_arm.o      \
                                          arm/fmtconvert_init_arm.o     \
                                          arm/jrevdct_arm.o             \
                                          arm/simple_idct_arm.o         \

ARMV5TE-OBJS-$(CONFIG_MPEGVIDEO)       += arm/mpegvideo_armv5te.o       \
                                          arm/mpegvideo_armv5te_s.o     \

ARMV5TE-OBJS-$(CONFIG_VIDEODSP)        += arm/videodsp_init_armv5te.o   \
                                          arm/videodsp_armv5te.o        \

ARMV5TE-OBJS                           += arm/dsputil_init_armv5te.o    \
                                          arm/simple_idct_armv5te.o     \

ARMV6-OBJS                             += arm/dsputil_init_armv6.o      \
                                          arm/dsputil_armv6.o           \
                                          arm/simple_idct_armv6.o       \

VFP-OBJS-$(HAVE_ARMV6)                 += arm/fmtconvert_vfp.o

VFP-OBJS                               += arm/dsputil_vfp.o             \
                                          arm/dsputil_init_vfp.o        \

NEON-OBJS-$(CONFIG_FFT)                += arm/fft_neon.o                \
                                          arm/fft_fixed_neon.o          \

NEON-OBJS-$(CONFIG_MDCT)               += arm/mdct_neon.o               \
                                          arm/mdct_fixed_neon.o         \

NEON-OBJS-$(CONFIG_RDFT)               += arm/rdft_neon.o               \

NEON-OBJS-$(CONFIG_H264DSP)            += arm/h264dsp_neon.o            \
                                          arm/h264idct_neon.o           \
                                          arm/h264cmc_neon.o            \

NEON-OBJS-$(CONFIG_H264PRED)           += arm/h264pred_neon.o           \

NEON-OBJS-$(CONFIG_AC3DSP)             += arm/ac3dsp_neon.o

NEON-OBJS-$(CONFIG_AAC_DECODER)        += arm/sbrdsp_neon.o             \
                                          arm/aacpsdsp_neon.o

NEON-OBJS-$(CONFIG_DCA_DECODER)        += arm/dcadsp_neon.o             \
                                          arm/synth_filter_neon.o       \

NEON-OBJS-$(CONFIG_MPEGVIDEO)          += arm/mpegvideo_neon.o
NEON-OBJS-$(CONFIG_RV30_DECODER)       += arm/rv34dsp_neon.o
NEON-OBJS-$(CONFIG_RV40_DECODER)       += arm/rv34dsp_neon.o            \
                                          arm/rv40dsp_neon.o            \
                                          arm/h264cmc_neon.o            \

NEON-OBJS-$(CONFIG_VP3DSP)             += arm/vp3dsp_neon.o

NEON-OBJS-$(CONFIG_VP5_DECODER)        += arm/vp56dsp_neon.o            \

NEON-OBJS-$(CONFIG_VP6_DECODER)        += arm/vp56dsp_neon.o            \

NEON-OBJS-$(CONFIG_VP8_DECODER)        += arm/vp8dsp_init_neon.o        \
                                          arm/vp8dsp_neon.o

NEON-OBJS                              += arm/dsputil_init_neon.o       \
                                          arm/dsputil_neon.o            \
                                          arm/dsputil_huff_neon.o       \
                                          arm/fmtconvert_neon.o         \
                                          arm/int_neon.o                \
                                          arm/simple_idct_neon.o        \

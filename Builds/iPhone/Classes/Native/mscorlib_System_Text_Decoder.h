#pragma once
#include <stdint.h>
// System.Text.DecoderFallback
struct DecoderFallback_t4235;
// System.Text.DecoderFallbackBuffer
struct DecoderFallbackBuffer_t4236;
// System.Object
#include "mscorlib_System_Object.h"
// System.Text.Decoder
struct  Decoder_t2479  : public Object_t
{
	// System.Text.DecoderFallback System.Text.Decoder::fallback
	DecoderFallback_t4235 * ___fallback_0;
	// System.Text.DecoderFallbackBuffer System.Text.Decoder::fallback_buffer
	DecoderFallbackBuffer_t4236 * ___fallback_buffer_1;
};

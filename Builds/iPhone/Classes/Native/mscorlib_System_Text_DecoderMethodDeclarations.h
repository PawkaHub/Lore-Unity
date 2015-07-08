#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.Decoder
struct Decoder_t4104;
// System.Text.DecoderFallback
struct DecoderFallback_t5563;
// System.Text.DecoderFallbackBuffer
struct DecoderFallbackBuffer_t5564;
// System.Byte[]
struct ByteU5BU5D_t25;
// System.Char[]
struct CharU5BU5D_t583;

// System.Void System.Text.Decoder::.ctor()
extern "C" void Decoder__ctor_m22214 (Decoder_t4104 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.Decoder::set_Fallback(System.Text.DecoderFallback)
extern "C" void Decoder_set_Fallback_m22215 (Decoder_t4104 * __this, DecoderFallback_t5563 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.DecoderFallbackBuffer System.Text.Decoder::get_FallbackBuffer()
extern "C" DecoderFallbackBuffer_t5564 * Decoder_get_FallbackBuffer_m22216 (Decoder_t4104 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Decoder::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32)

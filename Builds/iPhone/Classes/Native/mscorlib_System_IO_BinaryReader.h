﻿#pragma once
#include <stdint.h>
// System.IO.Stream
struct Stream_t1271;
// System.Text.Encoding
struct Encoding_t602;
// System.Byte[]
struct ByteU5BU5D_t25;
// System.Text.Decoder
struct Decoder_t2479;
// System.Char[]
struct CharU5BU5D_t646;
// System.Object
#include "mscorlib_System_Object.h"
// System.IO.BinaryReader
struct  BinaryReader_t3964  : public Object_t
{
	// System.IO.Stream System.IO.BinaryReader::m_stream
	Stream_t1271 * ___m_stream_0;
	// System.Text.Encoding System.IO.BinaryReader::m_encoding
	Encoding_t602 * ___m_encoding_1;
	// System.Byte[] System.IO.BinaryReader::m_buffer
	ByteU5BU5D_t25* ___m_buffer_2;
	// System.Text.Decoder System.IO.BinaryReader::decoder
	Decoder_t2479 * ___decoder_3;
	// System.Char[] System.IO.BinaryReader::charBuffer
	CharU5BU5D_t646* ___charBuffer_4;
	// System.Boolean System.IO.BinaryReader::m_disposed
	bool ___m_disposed_5;
};

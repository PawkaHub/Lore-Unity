#pragma once
#include <stdint.h>
// System.Byte[]
struct ByteU5BU5D_t25;
// System.Char[]
struct CharU5BU5D_t583;
// System.Text.Encoding
struct Encoding_t680;
// System.Text.Decoder
struct Decoder_t4104;
// System.IO.Stream
struct Stream_t1751;
// System.Text.StringBuilder
struct StringBuilder_t696;
// System.IO.TextReader
#include "mscorlib_System_IO_TextReader.h"
// System.Xml.NonBlockingStreamReader
struct  NonBlockingStreamReader_t4103  : public TextReader_t3795
{
	// System.Byte[] System.Xml.NonBlockingStreamReader::input_buffer
	ByteU5BU5D_t25* ___input_buffer_1;
	// System.Char[] System.Xml.NonBlockingStreamReader::decoded_buffer
	CharU5BU5D_t583* ___decoded_buffer_2;
	// System.Int32 System.Xml.NonBlockingStreamReader::decoded_count
	int32_t ___decoded_count_3;
	// System.Int32 System.Xml.NonBlockingStreamReader::pos
	int32_t ___pos_4;
	// System.Int32 System.Xml.NonBlockingStreamReader::buffer_size
	int32_t ___buffer_size_5;
	// System.Text.Encoding System.Xml.NonBlockingStreamReader::encoding
	Encoding_t680 * ___encoding_6;
	// System.Text.Decoder System.Xml.NonBlockingStreamReader::decoder
	Decoder_t4104 * ___decoder_7;
	// System.IO.Stream System.Xml.NonBlockingStreamReader::base_stream
	Stream_t1751 * ___base_stream_8;
	// System.Boolean System.Xml.NonBlockingStreamReader::mayBlock
	bool ___mayBlock_9;
	// System.Text.StringBuilder System.Xml.NonBlockingStreamReader::line_builder
	StringBuilder_t696 * ___line_builder_10;
	// System.Boolean System.Xml.NonBlockingStreamReader::foundCR
	bool ___foundCR_11;
};

#pragma once
#include <stdint.h>
// System.Text.Encoding
struct Encoding_t680;
// System.IO.Stream
struct Stream_t1751;
// System.Byte[]
struct ByteU5BU5D_t25;
// System.Xml.XmlException
struct XmlException_t4099;
// System.IO.Stream
#include "mscorlib_System_IO_Stream.h"
// System.Xml.XmlInputStream
struct  XmlInputStream_t4101  : public Stream_t1751
{
	// System.Text.Encoding System.Xml.XmlInputStream::enc
	Encoding_t680 * ___enc_2;
	// System.IO.Stream System.Xml.XmlInputStream::stream
	Stream_t1751 * ___stream_3;
	// System.Byte[] System.Xml.XmlInputStream::buffer
	ByteU5BU5D_t25* ___buffer_4;
	// System.Int32 System.Xml.XmlInputStream::bufLength
	int32_t ___bufLength_5;
	// System.Int32 System.Xml.XmlInputStream::bufPos
	int32_t ___bufPos_6;
};
struct XmlInputStream_t4101_StaticFields{
	// System.Text.Encoding System.Xml.XmlInputStream::StrictUTF8
	Encoding_t680 * ___StrictUTF8_1;
	// System.Xml.XmlException System.Xml.XmlInputStream::encodingException
	XmlException_t4099 * ___encodingException_7;
};

#pragma once
#include <stdint.h>
// System.IO.Compression.DeflateStream
struct DeflateStream_t4221;
// System.IO.Stream
#include "mscorlib_System_IO_Stream.h"
// System.IO.Compression.GZipStream
struct  GZipStream_t4223  : public Stream_t1751
{
	// System.IO.Compression.DeflateStream System.IO.Compression.GZipStream::deflateStream
	DeflateStream_t4221 * ___deflateStream_1;
};

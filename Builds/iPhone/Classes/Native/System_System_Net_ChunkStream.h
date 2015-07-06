#pragma once
#include <stdint.h>
// System.Net.WebHeaderCollection
struct WebHeaderCollection_t4023;
// System.Text.StringBuilder
struct StringBuilder_t640;
// System.Collections.ArrayList
struct ArrayList_t3697;
// System.Object
#include "mscorlib_System_Object.h"
// System.Net.ChunkStream/State
#include "System_System_Net_ChunkStream_State.h"
// System.Net.ChunkStream
struct  ChunkStream_t4024  : public Object_t
{
	// System.Net.WebHeaderCollection System.Net.ChunkStream::headers
	WebHeaderCollection_t4023 * ___headers_0;
	// System.Int32 System.Net.ChunkStream::chunkSize
	int32_t ___chunkSize_1;
	// System.Int32 System.Net.ChunkStream::chunkRead
	int32_t ___chunkRead_2;
	// System.Net.ChunkStream/State System.Net.ChunkStream::state
	int32_t ___state_3;
	// System.Text.StringBuilder System.Net.ChunkStream::saved
	StringBuilder_t640 * ___saved_4;
	// System.Boolean System.Net.ChunkStream::sawCR
	bool ___sawCR_5;
	// System.Boolean System.Net.ChunkStream::gotit
	bool ___gotit_6;
	// System.Int32 System.Net.ChunkStream::trailerState
	int32_t ___trailerState_7;
	// System.Collections.ArrayList System.Net.ChunkStream::chunks
	ArrayList_t3697 * ___chunks_8;
};

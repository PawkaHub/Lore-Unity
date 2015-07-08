#pragma once
#include <stdint.h>
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Uri
struct Uri_t32;
// System.IO.Stream
struct Stream_t1751;
// Parse.Internal.TaskQueue
struct TaskQueue_t1798;
// System.Object
#include "mscorlib_System_Object.h"
// Parse.ParseFile
struct  ParseFile_t1827  : public Object_t
{
	// System.Object Parse.ParseFile::mutex
	Object_t * ___mutex_0;
	// System.String Parse.ParseFile::name
	String_t* ___name_1;
	// System.String Parse.ParseFile::mimeType
	String_t* ___mimeType_2;
	// System.Uri Parse.ParseFile::uri
	Uri_t32 * ___uri_3;
	// System.IO.Stream Parse.ParseFile::dataStream
	Stream_t1751 * ___dataStream_4;
	// Parse.Internal.TaskQueue Parse.ParseFile::taskQueue
	TaskQueue_t1798 * ___taskQueue_5;
};

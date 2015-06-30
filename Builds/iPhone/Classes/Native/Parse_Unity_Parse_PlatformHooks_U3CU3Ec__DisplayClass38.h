#pragma once
#include <stdint.h>
// System.Threading.Tasks.TaskCompletionSource`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>
struct TaskCompletionSource_1_t1505;
// System.Byte[]
struct ByteU5BU5D_t25;
// System.Collections.Hashtable
struct Hashtable_t1256;
// System.IDisposable
struct IDisposable_t567;
// System.Uri
struct Uri_t32;
// System.String
struct String_t;
// System.IProgress`1<Parse.ParseUploadProgressEventArgs>
struct IProgress_1_t1442;
// System.Object
#include "mscorlib_System_Object.h"
// System.Threading.CancellationToken
#include "Parse_Unity_System_Threading_CancellationToken.h"
// Parse.PlatformHooks/<>c__DisplayClass38
struct  U3CU3Ec__DisplayClass38_t1503  : public Object_t
{
	// System.Threading.Tasks.TaskCompletionSource`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>> Parse.PlatformHooks/<>c__DisplayClass38::tcs
	TaskCompletionSource_1_t1505 * ___tcs_0;
	// System.Byte[] Parse.PlatformHooks/<>c__DisplayClass38::bytes
	ByteU5BU5D_t25* ___bytes_1;
	// System.Collections.Hashtable Parse.PlatformHooks/<>c__DisplayClass38::headerTable
	Hashtable_t1256 * ___headerTable_2;
	// System.IDisposable Parse.PlatformHooks/<>c__DisplayClass38::toDisposeAfterReading
	Object_t * ___toDisposeAfterReading_3;
	// System.Uri Parse.PlatformHooks/<>c__DisplayClass38::uri
	Uri_t32 * ___uri_4;
	// System.String Parse.PlatformHooks/<>c__DisplayClass38::method
	String_t* ___method_5;
	// System.IProgress`1<Parse.ParseUploadProgressEventArgs> Parse.PlatformHooks/<>c__DisplayClass38::progress
	Object_t* ___progress_6;
	// System.Threading.CancellationToken Parse.PlatformHooks/<>c__DisplayClass38::cancellationToken
	CancellationToken_t1398  ___cancellationToken_7;
};

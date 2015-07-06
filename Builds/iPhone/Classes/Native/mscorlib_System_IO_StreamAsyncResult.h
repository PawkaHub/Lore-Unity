#pragma once
#include <stdint.h>
// System.Object
struct Object_t;
// System.Exception
struct Exception_t468;
// System.Threading.ManualResetEvent
struct ManualResetEvent_t3076;
// System.Object
#include "mscorlib_System_Object.h"
// System.IO.StreamAsyncResult
struct  StreamAsyncResult_t5075  : public Object_t
{
	// System.Object System.IO.StreamAsyncResult::state
	Object_t * ___state_0;
	// System.Boolean System.IO.StreamAsyncResult::completed
	bool ___completed_1;
	// System.Boolean System.IO.StreamAsyncResult::done
	bool ___done_2;
	// System.Exception System.IO.StreamAsyncResult::exc
	Exception_t468 * ___exc_3;
	// System.Int32 System.IO.StreamAsyncResult::nbytes
	int32_t ___nbytes_4;
	// System.Threading.ManualResetEvent System.IO.StreamAsyncResult::wh
	ManualResetEvent_t3076 * ___wh_5;
};

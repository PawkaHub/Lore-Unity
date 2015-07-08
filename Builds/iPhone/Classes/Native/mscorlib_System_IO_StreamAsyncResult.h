﻿#pragma once
#include <stdint.h>
// System.Object
struct Object_t;
// System.Exception
struct Exception_t496;
// System.Threading.ManualResetEvent
struct ManualResetEvent_t3314;
// System.Object
#include "mscorlib_System_Object.h"
// System.IO.StreamAsyncResult
struct  StreamAsyncResult_t5313  : public Object_t
{
	// System.Object System.IO.StreamAsyncResult::state
	Object_t * ___state_0;
	// System.Boolean System.IO.StreamAsyncResult::completed
	bool ___completed_1;
	// System.Boolean System.IO.StreamAsyncResult::done
	bool ___done_2;
	// System.Exception System.IO.StreamAsyncResult::exc
	Exception_t496 * ___exc_3;
	// System.Int32 System.IO.StreamAsyncResult::nbytes
	int32_t ___nbytes_4;
	// System.Threading.ManualResetEvent System.IO.StreamAsyncResult::wh
	ManualResetEvent_t3314 * ___wh_5;
};

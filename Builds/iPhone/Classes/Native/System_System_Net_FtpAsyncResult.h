#pragma once
#include <stdint.h>
// System.Net.FtpWebResponse
struct FtpWebResponse_t3609;
// System.Threading.ManualResetEvent
struct ManualResetEvent_t1270;
// System.Exception
struct Exception_t468;
// System.AsyncCallback
struct AsyncCallback_t449;
// System.IO.Stream
struct Stream_t1271;
// System.Object
struct Object_t;
// System.Object
#include "mscorlib_System_Object.h"
// System.Net.FtpAsyncResult
struct  FtpAsyncResult_t3610  : public Object_t
{
	// System.Net.FtpWebResponse System.Net.FtpAsyncResult::response
	FtpWebResponse_t3609 * ___response_0;
	// System.Threading.ManualResetEvent System.Net.FtpAsyncResult::waitHandle
	ManualResetEvent_t1270 * ___waitHandle_1;
	// System.Exception System.Net.FtpAsyncResult::exception
	Exception_t468 * ___exception_2;
	// System.AsyncCallback System.Net.FtpAsyncResult::callback
	AsyncCallback_t449 * ___callback_3;
	// System.IO.Stream System.Net.FtpAsyncResult::stream
	Stream_t1271 * ___stream_4;
	// System.Object System.Net.FtpAsyncResult::state
	Object_t * ___state_5;
	// System.Boolean System.Net.FtpAsyncResult::completed
	bool ___completed_6;
	// System.Boolean System.Net.FtpAsyncResult::synch
	bool ___synch_7;
	// System.Object System.Net.FtpAsyncResult::locker
	Object_t * ___locker_8;
};

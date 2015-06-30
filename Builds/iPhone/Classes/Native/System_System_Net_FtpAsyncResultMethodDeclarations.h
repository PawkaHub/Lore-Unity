#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.FtpAsyncResult
struct FtpAsyncResult_t3610;
// System.Object
struct Object_t;
// System.Threading.WaitHandle
struct WaitHandle_t1324;
// System.Exception
struct Exception_t468;
// System.Net.FtpWebResponse
struct FtpWebResponse_t3609;
// System.IO.Stream
struct Stream_t1271;
// System.AsyncCallback
struct AsyncCallback_t449;

// System.Void System.Net.FtpAsyncResult::.ctor(System.AsyncCallback,System.Object)
extern "C" void FtpAsyncResult__ctor_m15549 (FtpAsyncResult_t3610 * __this, AsyncCallback_t449 * ___callback, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Net.FtpAsyncResult::get_AsyncState()
extern "C" Object_t * FtpAsyncResult_get_AsyncState_m15550 (FtpAsyncResult_t3610 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.WaitHandle System.Net.FtpAsyncResult::get_AsyncWaitHandle()
extern "C" WaitHandle_t1324 * FtpAsyncResult_get_AsyncWaitHandle_m15551 (FtpAsyncResult_t3610 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.FtpAsyncResult::get_IsCompleted()
extern "C" bool FtpAsyncResult_get_IsCompleted_m15552 (FtpAsyncResult_t3610 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.FtpAsyncResult::get_GotException()
extern "C" bool FtpAsyncResult_get_GotException_m15553 (FtpAsyncResult_t3610 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Net.FtpAsyncResult::get_Exception()
extern "C" Exception_t468 * FtpAsyncResult_get_Exception_m15554 (FtpAsyncResult_t3610 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.FtpWebResponse System.Net.FtpAsyncResult::get_Response()
extern "C" FtpWebResponse_t3609 * FtpAsyncResult_get_Response_m15555 (FtpAsyncResult_t3610 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpAsyncResult::set_Stream(System.IO.Stream)
extern "C" void FtpAsyncResult_set_Stream_m15556 (FtpAsyncResult_t3610 * __this, Stream_t1271 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.FtpAsyncResult::WaitUntilComplete(System.Int32,System.Boolean)
extern "C" bool FtpAsyncResult_WaitUntilComplete_m15557 (FtpAsyncResult_t3610 * __this, int32_t ___timeout, bool ___exitContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpAsyncResult::SetCompleted(System.Boolean,System.Exception,System.Net.FtpWebResponse)
extern "C" void FtpAsyncResult_SetCompleted_m15558 (FtpAsyncResult_t3610 * __this, bool ___synch, Exception_t468 * ___exc, FtpWebResponse_t3609 * ___response, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpAsyncResult::SetCompleted(System.Boolean,System.Net.FtpWebResponse)
extern "C" void FtpAsyncResult_SetCompleted_m15559 (FtpAsyncResult_t3610 * __this, bool ___synch, FtpWebResponse_t3609 * ___response, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpAsyncResult::SetCompleted(System.Boolean,System.Exception)
extern "C" void FtpAsyncResult_SetCompleted_m15560 (FtpAsyncResult_t3610 * __this, bool ___synch, Exception_t468 * ___exc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpAsyncResult::DoCallback()
extern "C" void FtpAsyncResult_DoCallback_m15561 (FtpAsyncResult_t3610 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.FtpAsyncResult
struct FtpAsyncResult_t4283;
// System.Object
struct Object_t;
// System.Threading.WaitHandle
struct WaitHandle_t4241;
// System.Exception
struct Exception_t496;
// System.Net.FtpWebResponse
struct FtpWebResponse_t4282;
// System.IO.Stream
struct Stream_t1751;
// System.AsyncCallback
struct AsyncCallback_t477;

// System.Void System.Net.FtpAsyncResult::.ctor(System.AsyncCallback,System.Object)
extern "C" void FtpAsyncResult__ctor_m14021 (FtpAsyncResult_t4283 * __this, AsyncCallback_t477 * ___callback, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Net.FtpAsyncResult::get_AsyncState()
extern "C" Object_t * FtpAsyncResult_get_AsyncState_m14022 (FtpAsyncResult_t4283 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.WaitHandle System.Net.FtpAsyncResult::get_AsyncWaitHandle()
extern "C" WaitHandle_t4241 * FtpAsyncResult_get_AsyncWaitHandle_m14023 (FtpAsyncResult_t4283 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.FtpAsyncResult::get_IsCompleted()
extern "C" bool FtpAsyncResult_get_IsCompleted_m14024 (FtpAsyncResult_t4283 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.FtpAsyncResult::get_GotException()
extern "C" bool FtpAsyncResult_get_GotException_m14025 (FtpAsyncResult_t4283 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Net.FtpAsyncResult::get_Exception()
extern "C" Exception_t496 * FtpAsyncResult_get_Exception_m14026 (FtpAsyncResult_t4283 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.FtpWebResponse System.Net.FtpAsyncResult::get_Response()
extern "C" FtpWebResponse_t4282 * FtpAsyncResult_get_Response_m14027 (FtpAsyncResult_t4283 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpAsyncResult::set_Stream(System.IO.Stream)
extern "C" void FtpAsyncResult_set_Stream_m14028 (FtpAsyncResult_t4283 * __this, Stream_t1751 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.FtpAsyncResult::WaitUntilComplete(System.Int32,System.Boolean)
extern "C" bool FtpAsyncResult_WaitUntilComplete_m14029 (FtpAsyncResult_t4283 * __this, int32_t ___timeout, bool ___exitContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpAsyncResult::SetCompleted(System.Boolean,System.Exception,System.Net.FtpWebResponse)
extern "C" void FtpAsyncResult_SetCompleted_m14030 (FtpAsyncResult_t4283 * __this, bool ___synch, Exception_t496 * ___exc, FtpWebResponse_t4282 * ___response, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpAsyncResult::SetCompleted(System.Boolean,System.Net.FtpWebResponse)
extern "C" void FtpAsyncResult_SetCompleted_m14031 (FtpAsyncResult_t4283 * __this, bool ___synch, FtpWebResponse_t4282 * ___response, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpAsyncResult::SetCompleted(System.Boolean,System.Exception)
extern "C" void FtpAsyncResult_SetCompleted_m14032 (FtpAsyncResult_t4283 * __this, bool ___synch, Exception_t496 * ___exc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpAsyncResult::DoCallback()
extern "C" void FtpAsyncResult_DoCallback_m14033 (FtpAsyncResult_t4283 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

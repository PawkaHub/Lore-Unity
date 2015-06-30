#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult
struct ReceiveRecordAsyncResult_t1272;
// System.IO.Stream
struct Stream_t1271;
// System.Byte[]
struct ByteU5BU5D_t25;
// System.Object
struct Object_t;
// System.Exception
struct Exception_t468;
// System.Threading.WaitHandle
struct WaitHandle_t1324;
// System.AsyncCallback
struct AsyncCallback_t449;

// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::.ctor(System.AsyncCallback,System.Object,System.Byte[],System.IO.Stream)
extern "C" void ReceiveRecordAsyncResult__ctor_m6233 (ReceiveRecordAsyncResult_t1272 * __this, AsyncCallback_t449 * ___userCallback, Object_t * ___userState, ByteU5BU5D_t25* ___initialBuffer, Stream_t1271 * ___record, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_Record()
extern "C" Stream_t1271 * ReceiveRecordAsyncResult_get_Record_m6234 (ReceiveRecordAsyncResult_t1272 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_ResultingBuffer()
extern "C" ByteU5BU5D_t25* ReceiveRecordAsyncResult_get_ResultingBuffer_m6235 (ReceiveRecordAsyncResult_t1272 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_InitialBuffer()
extern "C" ByteU5BU5D_t25* ReceiveRecordAsyncResult_get_InitialBuffer_m6236 (ReceiveRecordAsyncResult_t1272 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_AsyncState()
extern "C" Object_t * ReceiveRecordAsyncResult_get_AsyncState_m6237 (ReceiveRecordAsyncResult_t1272 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_AsyncException()
extern "C" Exception_t468 * ReceiveRecordAsyncResult_get_AsyncException_m6238 (ReceiveRecordAsyncResult_t1272 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_CompletedWithError()
extern "C" bool ReceiveRecordAsyncResult_get_CompletedWithError_m6239 (ReceiveRecordAsyncResult_t1272 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.WaitHandle Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_AsyncWaitHandle()
extern "C" WaitHandle_t1324 * ReceiveRecordAsyncResult_get_AsyncWaitHandle_m6240 (ReceiveRecordAsyncResult_t1272 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_IsCompleted()
extern "C" bool ReceiveRecordAsyncResult_get_IsCompleted_m6241 (ReceiveRecordAsyncResult_t1272 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::SetComplete(System.Exception,System.Byte[])
extern "C" void ReceiveRecordAsyncResult_SetComplete_m6242 (ReceiveRecordAsyncResult_t1272 * __this, Exception_t468 * ___ex, ByteU5BU5D_t25* ___resultingBuffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::SetComplete(System.Exception)
extern "C" void ReceiveRecordAsyncResult_SetComplete_m6243 (ReceiveRecordAsyncResult_t1272 * __this, Exception_t468 * ___ex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::SetComplete(System.Byte[])
extern "C" void ReceiveRecordAsyncResult_SetComplete_m6244 (ReceiveRecordAsyncResult_t1272 * __this, ByteU5BU5D_t25* ___resultingBuffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;

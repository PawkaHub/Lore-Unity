#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult
struct ReceiveRecordAsyncResult_t4376;
// System.IO.Stream
struct Stream_t1494;
// System.Byte[]
struct ByteU5BU5D_t25;
// System.Object
struct Object_t;
// System.Exception
struct Exception_t468;
// System.Threading.WaitHandle
struct WaitHandle_t4003;
// System.AsyncCallback
struct AsyncCallback_t449;

// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::.ctor(System.AsyncCallback,System.Object,System.Byte[],System.IO.Stream)
extern "C" void ReceiveRecordAsyncResult__ctor_m15731 (ReceiveRecordAsyncResult_t4376 * __this, AsyncCallback_t449 * ___userCallback, Object_t * ___userState, ByteU5BU5D_t25* ___initialBuffer, Stream_t1494 * ___record, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_Record()
extern "C" Stream_t1494 * ReceiveRecordAsyncResult_get_Record_m15732 (ReceiveRecordAsyncResult_t4376 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_ResultingBuffer()
extern "C" ByteU5BU5D_t25* ReceiveRecordAsyncResult_get_ResultingBuffer_m15733 (ReceiveRecordAsyncResult_t4376 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_InitialBuffer()
extern "C" ByteU5BU5D_t25* ReceiveRecordAsyncResult_get_InitialBuffer_m15734 (ReceiveRecordAsyncResult_t4376 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_AsyncState()
extern "C" Object_t * ReceiveRecordAsyncResult_get_AsyncState_m15735 (ReceiveRecordAsyncResult_t4376 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_AsyncException()
extern "C" Exception_t468 * ReceiveRecordAsyncResult_get_AsyncException_m15736 (ReceiveRecordAsyncResult_t4376 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_CompletedWithError()
extern "C" bool ReceiveRecordAsyncResult_get_CompletedWithError_m15737 (ReceiveRecordAsyncResult_t4376 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.WaitHandle Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_AsyncWaitHandle()
extern "C" WaitHandle_t4003 * ReceiveRecordAsyncResult_get_AsyncWaitHandle_m15738 (ReceiveRecordAsyncResult_t4376 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_IsCompleted()
extern "C" bool ReceiveRecordAsyncResult_get_IsCompleted_m15739 (ReceiveRecordAsyncResult_t4376 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::SetComplete(System.Exception,System.Byte[])
extern "C" void ReceiveRecordAsyncResult_SetComplete_m15740 (ReceiveRecordAsyncResult_t4376 * __this, Exception_t468 * ___ex, ByteU5BU5D_t25* ___resultingBuffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::SetComplete(System.Exception)
extern "C" void ReceiveRecordAsyncResult_SetComplete_m15741 (ReceiveRecordAsyncResult_t4376 * __this, Exception_t468 * ___ex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::SetComplete(System.Byte[])
extern "C" void ReceiveRecordAsyncResult_SetComplete_m15742 (ReceiveRecordAsyncResult_t4376 * __this, ByteU5BU5D_t25* ___resultingBuffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;

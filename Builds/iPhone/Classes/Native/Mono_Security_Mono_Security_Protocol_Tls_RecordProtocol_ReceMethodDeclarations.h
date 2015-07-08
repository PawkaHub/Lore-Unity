#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult
struct ReceiveRecordAsyncResult_t4614;
// System.IO.Stream
struct Stream_t1751;
// System.Byte[]
struct ByteU5BU5D_t25;
// System.Object
struct Object_t;
// System.Exception
struct Exception_t496;
// System.Threading.WaitHandle
struct WaitHandle_t4241;
// System.AsyncCallback
struct AsyncCallback_t477;

// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::.ctor(System.AsyncCallback,System.Object,System.Byte[],System.IO.Stream)
extern "C" void ReceiveRecordAsyncResult__ctor_m16150 (ReceiveRecordAsyncResult_t4614 * __this, AsyncCallback_t477 * ___userCallback, Object_t * ___userState, ByteU5BU5D_t25* ___initialBuffer, Stream_t1751 * ___record, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_Record()
extern "C" Stream_t1751 * ReceiveRecordAsyncResult_get_Record_m16151 (ReceiveRecordAsyncResult_t4614 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_ResultingBuffer()
extern "C" ByteU5BU5D_t25* ReceiveRecordAsyncResult_get_ResultingBuffer_m16152 (ReceiveRecordAsyncResult_t4614 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_InitialBuffer()
extern "C" ByteU5BU5D_t25* ReceiveRecordAsyncResult_get_InitialBuffer_m16153 (ReceiveRecordAsyncResult_t4614 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_AsyncState()
extern "C" Object_t * ReceiveRecordAsyncResult_get_AsyncState_m16154 (ReceiveRecordAsyncResult_t4614 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_AsyncException()
extern "C" Exception_t496 * ReceiveRecordAsyncResult_get_AsyncException_m16155 (ReceiveRecordAsyncResult_t4614 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_CompletedWithError()
extern "C" bool ReceiveRecordAsyncResult_get_CompletedWithError_m16156 (ReceiveRecordAsyncResult_t4614 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.WaitHandle Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_AsyncWaitHandle()
extern "C" WaitHandle_t4241 * ReceiveRecordAsyncResult_get_AsyncWaitHandle_m16157 (ReceiveRecordAsyncResult_t4614 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_IsCompleted()
extern "C" bool ReceiveRecordAsyncResult_get_IsCompleted_m16158 (ReceiveRecordAsyncResult_t4614 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::SetComplete(System.Exception,System.Byte[])
extern "C" void ReceiveRecordAsyncResult_SetComplete_m16159 (ReceiveRecordAsyncResult_t4614 * __this, Exception_t496 * ___ex, ByteU5BU5D_t25* ___resultingBuffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::SetComplete(System.Exception)
extern "C" void ReceiveRecordAsyncResult_SetComplete_m16160 (ReceiveRecordAsyncResult_t4614 * __this, Exception_t496 * ___ex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::SetComplete(System.Byte[])
extern "C" void ReceiveRecordAsyncResult_SetComplete_m16161 (ReceiveRecordAsyncResult_t4614 * __this, ByteU5BU5D_t25* ___resultingBuffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;

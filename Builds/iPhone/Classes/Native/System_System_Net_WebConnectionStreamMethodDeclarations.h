#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.WebConnectionStream
struct WebConnectionStream_t4301;
// System.Net.WebConnection
struct WebConnection_t4304;
// System.Byte[]
struct ByteU5BU5D_t25;
// System.Net.HttpWebRequest
struct HttpWebRequest_t4305;
// System.IAsyncResult
struct IAsyncResult_t476;
// System.AsyncCallback
struct AsyncCallback_t477;
// System.Object
struct Object_t;
// System.IO.SeekOrigin
#include "mscorlib_System_IO_SeekOrigin.h"

// System.Void System.Net.WebConnectionStream::.ctor(System.Net.WebConnection)
extern "C" void WebConnectionStream__ctor_m14405 (WebConnectionStream_t4301 * __this, WebConnection_t4304 * ___cnc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::.ctor(System.Net.WebConnection,System.Net.HttpWebRequest)
extern "C" void WebConnectionStream__ctor_m14406 (WebConnectionStream_t4301 * __this, WebConnection_t4304 * ___cnc, HttpWebRequest_t4305 * ___request, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::.cctor()
extern "C" void WebConnectionStream__cctor_m14407 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebConnectionStream::IsNtlmAuth()
extern "C" bool WebConnectionStream_IsNtlmAuth_m14408 (WebConnectionStream_t4301 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::CheckResponseInBuffer()
extern "C" void WebConnectionStream_CheckResponseInBuffer_m14409 (WebConnectionStream_t4301 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebConnection System.Net.WebConnectionStream::get_Connection()
extern "C" WebConnection_t4304 * WebConnectionStream_get_Connection_m14410 (WebConnectionStream_t4301 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.WebConnectionStream::get_ReadTimeout()
extern "C" int32_t WebConnectionStream_get_ReadTimeout_m14411 (WebConnectionStream_t4301 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.WebConnectionStream::get_WriteTimeout()
extern "C" int32_t WebConnectionStream_get_WriteTimeout_m14412 (WebConnectionStream_t4301 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebConnectionStream::get_CompleteRequestWritten()
extern "C" bool WebConnectionStream_get_CompleteRequestWritten_m14413 (WebConnectionStream_t4301 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::set_SendChunked(System.Boolean)
extern "C" void WebConnectionStream_set_SendChunked_m14414 (WebConnectionStream_t4301 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::set_ReadBuffer(System.Byte[])
extern "C" void WebConnectionStream_set_ReadBuffer_m14415 (WebConnectionStream_t4301 * __this, ByteU5BU5D_t25* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::set_ReadBufferOffset(System.Int32)
extern "C" void WebConnectionStream_set_ReadBufferOffset_m14416 (WebConnectionStream_t4301 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::set_ReadBufferSize(System.Int32)
extern "C" void WebConnectionStream_set_ReadBufferSize_m14417 (WebConnectionStream_t4301 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Net.WebConnectionStream::get_WriteBuffer()
extern "C" ByteU5BU5D_t25* WebConnectionStream_get_WriteBuffer_m14418 (WebConnectionStream_t4301 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.WebConnectionStream::get_WriteBufferLength()
extern "C" int32_t WebConnectionStream_get_WriteBufferLength_m14419 (WebConnectionStream_t4301 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::ForceCompletion()
extern "C" void WebConnectionStream_ForceCompletion_m14420 (WebConnectionStream_t4301 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::CheckComplete()
extern "C" void WebConnectionStream_CheckComplete_m14421 (WebConnectionStream_t4301 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::ReadAll()
extern "C" void WebConnectionStream_ReadAll_m14422 (WebConnectionStream_t4301 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::WriteCallbackWrapper(System.IAsyncResult)
extern "C" void WebConnectionStream_WriteCallbackWrapper_m14423 (WebConnectionStream_t4301 * __this, Object_t * ___r, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::ReadCallbackWrapper(System.IAsyncResult)
extern "C" void WebConnectionStream_ReadCallbackWrapper_m14424 (WebConnectionStream_t4301 * __this, Object_t * ___r, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.WebConnectionStream::Read(System.Byte[],System.Int32,System.Int32)
extern "C" int32_t WebConnectionStream_Read_m14425 (WebConnectionStream_t4301 * __this, ByteU5BU5D_t25* ___buffer, int32_t ___offset, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.WebConnectionStream::BeginRead(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C" Object_t * WebConnectionStream_BeginRead_m14426 (WebConnectionStream_t4301 * __this, ByteU5BU5D_t25* ___buffer, int32_t ___offset, int32_t ___size, AsyncCallback_t477 * ___cb, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.WebConnectionStream::EndRead(System.IAsyncResult)
extern "C" int32_t WebConnectionStream_EndRead_m14427 (WebConnectionStream_t4301 * __this, Object_t * ___r, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::WriteRequestAsyncCB(System.IAsyncResult)
extern "C" void WebConnectionStream_WriteRequestAsyncCB_m14428 (WebConnectionStream_t4301 * __this, Object_t * ___r, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.WebConnectionStream::BeginWrite(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C" Object_t * WebConnectionStream_BeginWrite_m14429 (WebConnectionStream_t4301 * __this, ByteU5BU5D_t25* ___buffer, int32_t ___offset, int32_t ___size, AsyncCallback_t477 * ___cb, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::CheckWriteOverflow(System.Int64,System.Int64,System.Int64)
extern "C" void WebConnectionStream_CheckWriteOverflow_m14430 (WebConnectionStream_t4301 * __this, int64_t ___contentLength, int64_t ___totalWritten, int64_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::EndWrite(System.IAsyncResult)
extern "C" void WebConnectionStream_EndWrite_m14431 (WebConnectionStream_t4301 * __this, Object_t * ___r, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::Write(System.Byte[],System.Int32,System.Int32)
extern "C" void WebConnectionStream_Write_m14432 (WebConnectionStream_t4301 * __this, ByteU5BU5D_t25* ___buffer, int32_t ___offset, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::Flush()
extern "C" void WebConnectionStream_Flush_m14433 (WebConnectionStream_t4301 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::SetHeaders(System.Byte[])
extern "C" void WebConnectionStream_SetHeaders_m14434 (WebConnectionStream_t4301 * __this, ByteU5BU5D_t25* ___buffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebConnectionStream::get_RequestWritten()
extern "C" bool WebConnectionStream_get_RequestWritten_m14435 (WebConnectionStream_t4301 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.WebConnectionStream::WriteRequestAsync(System.AsyncCallback,System.Object)
extern "C" Object_t * WebConnectionStream_WriteRequestAsync_m14436 (WebConnectionStream_t4301 * __this, AsyncCallback_t477 * ___cb, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::WriteHeaders()
extern "C" void WebConnectionStream_WriteHeaders_m14437 (WebConnectionStream_t4301 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::WriteRequest()
extern "C" void WebConnectionStream_WriteRequest_m14438 (WebConnectionStream_t4301 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::InternalClose()
extern "C" void WebConnectionStream_InternalClose_m14439 (WebConnectionStream_t4301 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::Close()
extern "C" void WebConnectionStream_Close_m14440 (WebConnectionStream_t4301 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::KillBuffer()
extern "C" void WebConnectionStream_KillBuffer_m14441 (WebConnectionStream_t4301 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.WebConnectionStream::Seek(System.Int64,System.IO.SeekOrigin)
extern "C" int64_t WebConnectionStream_Seek_m14442 (WebConnectionStream_t4301 * __this, int64_t ___a, int32_t ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::SetLength(System.Int64)
extern "C" void WebConnectionStream_SetLength_m14443 (WebConnectionStream_t4301 * __this, int64_t ___a, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebConnectionStream::get_CanSeek()
extern "C" bool WebConnectionStream_get_CanSeek_m14444 (WebConnectionStream_t4301 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebConnectionStream::get_CanRead()
extern "C" bool WebConnectionStream_get_CanRead_m14445 (WebConnectionStream_t4301 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebConnectionStream::get_CanWrite()
extern "C" bool WebConnectionStream_get_CanWrite_m14446 (WebConnectionStream_t4301 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.WebConnectionStream::get_Length()
extern "C" int64_t WebConnectionStream_get_Length_m14447 (WebConnectionStream_t4301 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.WebConnectionStream::get_Position()
extern "C" int64_t WebConnectionStream_get_Position_m14448 (WebConnectionStream_t4301 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::set_Position(System.Int64)
extern "C" void WebConnectionStream_set_Position_m14449 (WebConnectionStream_t4301 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;

#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.FtpDataStream
struct FtpDataStream_t3614;
// System.Net.FtpWebRequest
struct FtpWebRequest_t3613;
// System.IO.Stream
struct Stream_t1271;
// System.Byte[]
struct ByteU5BU5D_t25;
// System.IAsyncResult
struct IAsyncResult_t448;
// System.AsyncCallback
struct AsyncCallback_t449;
// System.Object
struct Object_t;
// System.IO.SeekOrigin
#include "mscorlib_System_IO_SeekOrigin.h"

// System.Void System.Net.FtpDataStream::.ctor(System.Net.FtpWebRequest,System.IO.Stream,System.Boolean)
extern "C" void FtpDataStream__ctor_m15570 (FtpDataStream_t3614 * __this, FtpWebRequest_t3613 * ___request, Stream_t1271 * ___stream, bool ___isRead, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpDataStream::System.IDisposable.Dispose()
extern "C" void FtpDataStream_System_IDisposable_Dispose_m15571 (FtpDataStream_t3614 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.FtpDataStream::get_CanRead()
extern "C" bool FtpDataStream_get_CanRead_m15572 (FtpDataStream_t3614 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.FtpDataStream::get_CanWrite()
extern "C" bool FtpDataStream_get_CanWrite_m15573 (FtpDataStream_t3614 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.FtpDataStream::get_CanSeek()
extern "C" bool FtpDataStream_get_CanSeek_m15574 (FtpDataStream_t3614 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.FtpDataStream::get_Length()
extern "C" int64_t FtpDataStream_get_Length_m15575 (FtpDataStream_t3614 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.FtpDataStream::get_Position()
extern "C" int64_t FtpDataStream_get_Position_m15576 (FtpDataStream_t3614 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpDataStream::set_Position(System.Int64)
extern "C" void FtpDataStream_set_Position_m15577 (FtpDataStream_t3614 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpDataStream::Close()
extern "C" void FtpDataStream_Close_m15578 (FtpDataStream_t3614 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpDataStream::Flush()
extern "C" void FtpDataStream_Flush_m15579 (FtpDataStream_t3614 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.FtpDataStream::Seek(System.Int64,System.IO.SeekOrigin)
extern "C" int64_t FtpDataStream_Seek_m15580 (FtpDataStream_t3614 * __this, int64_t ___offset, int32_t ___origin, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpDataStream::SetLength(System.Int64)
extern "C" void FtpDataStream_SetLength_m15581 (FtpDataStream_t3614 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.FtpDataStream::ReadInternal(System.Byte[],System.Int32,System.Int32)
extern "C" int32_t FtpDataStream_ReadInternal_m15582 (FtpDataStream_t3614 * __this, ByteU5BU5D_t25* ___buffer, int32_t ___offset, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.FtpDataStream::BeginRead(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C" Object_t * FtpDataStream_BeginRead_m15583 (FtpDataStream_t3614 * __this, ByteU5BU5D_t25* ___buffer, int32_t ___offset, int32_t ___size, AsyncCallback_t449 * ___cb, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.FtpDataStream::EndRead(System.IAsyncResult)
extern "C" int32_t FtpDataStream_EndRead_m15584 (FtpDataStream_t3614 * __this, Object_t * ___asyncResult, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.FtpDataStream::Read(System.Byte[],System.Int32,System.Int32)
extern "C" int32_t FtpDataStream_Read_m15585 (FtpDataStream_t3614 * __this, ByteU5BU5D_t25* ___buffer, int32_t ___offset, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpDataStream::WriteInternal(System.Byte[],System.Int32,System.Int32)
extern "C" void FtpDataStream_WriteInternal_m15586 (FtpDataStream_t3614 * __this, ByteU5BU5D_t25* ___buffer, int32_t ___offset, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.FtpDataStream::BeginWrite(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C" Object_t * FtpDataStream_BeginWrite_m15587 (FtpDataStream_t3614 * __this, ByteU5BU5D_t25* ___buffer, int32_t ___offset, int32_t ___size, AsyncCallback_t449 * ___cb, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpDataStream::EndWrite(System.IAsyncResult)
extern "C" void FtpDataStream_EndWrite_m15588 (FtpDataStream_t3614 * __this, Object_t * ___asyncResult, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpDataStream::Write(System.Byte[],System.Int32,System.Int32)
extern "C" void FtpDataStream_Write_m15589 (FtpDataStream_t3614 * __this, ByteU5BU5D_t25* ___buffer, int32_t ___offset, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpDataStream::Finalize()
extern "C" void FtpDataStream_Finalize_m15590 (FtpDataStream_t3614 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpDataStream::Dispose(System.Boolean)
extern "C" void FtpDataStream_Dispose_m15591 (FtpDataStream_t3614 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpDataStream::CheckDisposed()
extern "C" void FtpDataStream_CheckDisposed_m15592 (FtpDataStream_t3614 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

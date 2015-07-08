#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.Security.AuthenticatedStream
struct AuthenticatedStream_t4224;
// System.IO.Stream
struct Stream_t1751;

// System.Void System.Net.Security.AuthenticatedStream::.ctor(System.IO.Stream,System.Boolean)
extern "C" void AuthenticatedStream__ctor_m13666 (AuthenticatedStream_t4224 * __this, Stream_t1751 * ___innerStream, bool ___leaveInnerStreamOpen, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream System.Net.Security.AuthenticatedStream::get_InnerStream()
extern "C" Stream_t1751 * AuthenticatedStream_get_InnerStream_m13667 (AuthenticatedStream_t4224 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Security.AuthenticatedStream::get_IsAuthenticated()
// System.Boolean System.Net.Security.AuthenticatedStream::get_LeaveInnerStreamOpen()
extern "C" bool AuthenticatedStream_get_LeaveInnerStreamOpen_m13668 (AuthenticatedStream_t4224 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Security.AuthenticatedStream::Dispose(System.Boolean)
extern "C" void AuthenticatedStream_Dispose_m13669 (AuthenticatedStream_t4224 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;

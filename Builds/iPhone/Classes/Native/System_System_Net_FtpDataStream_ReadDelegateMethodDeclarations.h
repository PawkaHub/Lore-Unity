﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.FtpDataStream/ReadDelegate
struct ReadDelegate_t3612;
// System.Object
struct Object_t;
// System.Byte[]
struct ByteU5BU5D_t25;
// System.IAsyncResult
struct IAsyncResult_t448;
// System.AsyncCallback
struct AsyncCallback_t449;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Net.FtpDataStream/ReadDelegate::.ctor(System.Object,System.IntPtr)
extern "C" void ReadDelegate__ctor_m15566 (ReadDelegate_t3612 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.FtpDataStream/ReadDelegate::Invoke(System.Byte[],System.Int32,System.Int32)
extern "C" int32_t ReadDelegate_Invoke_m15567 (ReadDelegate_t3612 * __this, ByteU5BU5D_t25* ___buffer, int32_t ___offset, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
#include "mscorlib_ArrayTypes.h"
// System.Byte
#include "mscorlib_System_Byte.h"
extern "C" int32_t pinvoke_delegate_wrapper_ReadDelegate_t3612(Il2CppObject* delegate, ByteU5BU5D_t25* ___buffer, int32_t ___offset, int32_t ___size);
// System.IAsyncResult System.Net.FtpDataStream/ReadDelegate::BeginInvoke(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C" Object_t * ReadDelegate_BeginInvoke_m15568 (ReadDelegate_t3612 * __this, ByteU5BU5D_t25* ___buffer, int32_t ___offset, int32_t ___size, AsyncCallback_t449 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.FtpDataStream/ReadDelegate::EndInvoke(System.IAsyncResult)
extern "C" int32_t ReadDelegate_EndInvoke_m15569 (ReadDelegate_t3612 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
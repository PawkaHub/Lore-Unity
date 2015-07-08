﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.FtpDataStream/WriteDelegate
struct WriteDelegate_t4284;
// System.Object
struct Object_t;
// System.Byte[]
struct ByteU5BU5D_t25;
// System.IAsyncResult
struct IAsyncResult_t476;
// System.AsyncCallback
struct AsyncCallback_t477;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Net.FtpDataStream/WriteDelegate::.ctor(System.Object,System.IntPtr)
extern "C" void WriteDelegate__ctor_m14034 (WriteDelegate_t4284 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpDataStream/WriteDelegate::Invoke(System.Byte[],System.Int32,System.Int32)
extern "C" void WriteDelegate_Invoke_m14035 (WriteDelegate_t4284 * __this, ByteU5BU5D_t25* ___buffer, int32_t ___offset, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
#include "mscorlib_ArrayTypes.h"
// System.Byte
#include "mscorlib_System_Byte.h"
extern "C" void pinvoke_delegate_wrapper_WriteDelegate_t4284(Il2CppObject* delegate, ByteU5BU5D_t25* ___buffer, int32_t ___offset, int32_t ___size);
// System.IAsyncResult System.Net.FtpDataStream/WriteDelegate::BeginInvoke(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C" Object_t * WriteDelegate_BeginInvoke_m14036 (WriteDelegate_t4284 * __this, ByteU5BU5D_t25* ___buffer, int32_t ___offset, int32_t ___size, AsyncCallback_t477 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpDataStream/WriteDelegate::EndInvoke(System.IAsyncResult)
extern "C" void WriteDelegate_EndInvoke_m14037 (WriteDelegate_t4284 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;

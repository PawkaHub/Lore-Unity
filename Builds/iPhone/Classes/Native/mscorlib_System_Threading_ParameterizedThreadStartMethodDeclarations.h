#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.ParameterizedThreadStart
struct ParameterizedThreadStart_t2716;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t476;
// System.AsyncCallback
struct AsyncCallback_t477;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Threading.ParameterizedThreadStart::.ctor(System.Object,System.IntPtr)
extern "C" void ParameterizedThreadStart__ctor_m9364 (ParameterizedThreadStart_t2716 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.ParameterizedThreadStart::Invoke(System.Object)
extern "C" void ParameterizedThreadStart_Invoke_m23346 (ParameterizedThreadStart_t2716 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_ParameterizedThreadStart_t2716(Il2CppObject* delegate, Object_t * ___obj);
// System.IAsyncResult System.Threading.ParameterizedThreadStart::BeginInvoke(System.Object,System.AsyncCallback,System.Object)
extern "C" Object_t * ParameterizedThreadStart_BeginInvoke_m23347 (ParameterizedThreadStart_t2716 * __this, Object_t * ___obj, AsyncCallback_t477 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.ParameterizedThreadStart::EndInvoke(System.IAsyncResult)
extern "C" void ParameterizedThreadStart_EndInvoke_m23348 (ParameterizedThreadStart_t2716 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;

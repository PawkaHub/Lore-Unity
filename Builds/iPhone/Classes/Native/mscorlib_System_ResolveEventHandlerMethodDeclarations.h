#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.ResolveEventHandler
struct ResolveEventHandler_t5603;
// System.Object
struct Object_t;
// System.Reflection.Assembly
struct Assembly_t2045;
// System.ResolveEventArgs
struct ResolveEventArgs_t5654;
// System.IAsyncResult
struct IAsyncResult_t476;
// System.AsyncCallback
struct AsyncCallback_t477;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.ResolveEventHandler::.ctor(System.Object,System.IntPtr)
extern "C" void ResolveEventHandler__ctor_m23372 (ResolveEventHandler_t5603 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.ResolveEventHandler::Invoke(System.Object,System.ResolveEventArgs)
extern "C" Assembly_t2045 * ResolveEventHandler_Invoke_m23373 (ResolveEventHandler_t5603 * __this, Object_t * ___sender, ResolveEventArgs_t5654 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" Assembly_t2045 * pinvoke_delegate_wrapper_ResolveEventHandler_t5603(Il2CppObject* delegate, Object_t * ___sender, ResolveEventArgs_t5654 * ___args);
// System.IAsyncResult System.ResolveEventHandler::BeginInvoke(System.Object,System.ResolveEventArgs,System.AsyncCallback,System.Object)
extern "C" Object_t * ResolveEventHandler_BeginInvoke_m23374 (ResolveEventHandler_t5603 * __this, Object_t * ___sender, ResolveEventArgs_t5654 * ___args, AsyncCallback_t477 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.ResolveEventHandler::EndInvoke(System.IAsyncResult)
extern "C" Assembly_t2045 * ResolveEventHandler_EndInvoke_m23375 (ResolveEventHandler_t5603 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;

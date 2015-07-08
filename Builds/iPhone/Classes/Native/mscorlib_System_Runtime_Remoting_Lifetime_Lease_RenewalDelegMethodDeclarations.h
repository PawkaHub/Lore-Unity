#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Remoting.Lifetime.Lease/RenewalDelegate
struct RenewalDelegate_t5419;
// System.Object
struct Object_t;
// System.Runtime.Remoting.Lifetime.ILease
struct ILease_t5418;
// System.IAsyncResult
struct IAsyncResult_t476;
// System.AsyncCallback
struct AsyncCallback_t477;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"

// System.Void System.Runtime.Remoting.Lifetime.Lease/RenewalDelegate::.ctor(System.Object,System.IntPtr)
extern "C" void RenewalDelegate__ctor_m21420 (RenewalDelegate_t5419 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.Runtime.Remoting.Lifetime.Lease/RenewalDelegate::Invoke(System.Runtime.Remoting.Lifetime.ILease)
extern "C" TimeSpan_t629  RenewalDelegate_Invoke_m21421 (RenewalDelegate_t5419 * __this, Object_t * ___lease, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" TimeSpan_t629  pinvoke_delegate_wrapper_RenewalDelegate_t5419(Il2CppObject* delegate, Object_t * ___lease);
// System.IAsyncResult System.Runtime.Remoting.Lifetime.Lease/RenewalDelegate::BeginInvoke(System.Runtime.Remoting.Lifetime.ILease,System.AsyncCallback,System.Object)
extern "C" Object_t * RenewalDelegate_BeginInvoke_m21422 (RenewalDelegate_t5419 * __this, Object_t * ___lease, AsyncCallback_t477 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.Runtime.Remoting.Lifetime.Lease/RenewalDelegate::EndInvoke(System.IAsyncResult)
extern "C" TimeSpan_t629  RenewalDelegate_EndInvoke_m21423 (RenewalDelegate_t5419 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;

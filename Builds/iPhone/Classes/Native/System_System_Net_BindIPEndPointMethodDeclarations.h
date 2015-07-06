#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.BindIPEndPoint
struct BindIPEndPoint_t4074;
// System.Object
struct Object_t;
// System.Net.IPEndPoint
struct IPEndPoint_t4057;
// System.Net.ServicePoint
struct ServicePoint_t4054;
// System.IAsyncResult
struct IAsyncResult_t448;
// System.AsyncCallback
struct AsyncCallback_t449;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Net.BindIPEndPoint::.ctor(System.Object,System.IntPtr)
extern "C" void BindIPEndPoint__ctor_m14831 (BindIPEndPoint_t4074 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPEndPoint System.Net.BindIPEndPoint::Invoke(System.Net.ServicePoint,System.Net.IPEndPoint,System.Int32)
extern "C" IPEndPoint_t4057 * BindIPEndPoint_Invoke_m14832 (BindIPEndPoint_t4074 * __this, ServicePoint_t4054 * ___servicePoint, IPEndPoint_t4057 * ___remoteEndPoint, int32_t ___retryCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" IPEndPoint_t4057 * pinvoke_delegate_wrapper_BindIPEndPoint_t4074(Il2CppObject* delegate, ServicePoint_t4054 * ___servicePoint, IPEndPoint_t4057 * ___remoteEndPoint, int32_t ___retryCount);
// System.IAsyncResult System.Net.BindIPEndPoint::BeginInvoke(System.Net.ServicePoint,System.Net.IPEndPoint,System.Int32,System.AsyncCallback,System.Object)
extern "C" Object_t * BindIPEndPoint_BeginInvoke_m14833 (BindIPEndPoint_t4074 * __this, ServicePoint_t4054 * ___servicePoint, IPEndPoint_t4057 * ___remoteEndPoint, int32_t ___retryCount, AsyncCallback_t449 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPEndPoint System.Net.BindIPEndPoint::EndInvoke(System.IAsyncResult)
extern "C" IPEndPoint_t4057 * BindIPEndPoint_EndInvoke_m14834 (BindIPEndPoint_t4074 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;

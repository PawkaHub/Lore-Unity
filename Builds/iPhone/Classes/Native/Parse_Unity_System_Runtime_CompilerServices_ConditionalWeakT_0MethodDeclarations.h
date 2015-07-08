#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.CompilerServices.ConditionalWeakTable`2/CreateValueCallback<System.Object,System.IComparable>
struct CreateValueCallback_t1771;
// System.Object
struct Object_t;
// System.IComparable
struct IComparable_t43;
// System.IAsyncResult
struct IAsyncResult_t476;
// System.AsyncCallback
struct AsyncCallback_t477;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Runtime.CompilerServices.ConditionalWeakTable`2/CreateValueCallback<System.Object,System.IComparable>::.ctor(System.Object,System.IntPtr)
// System.Runtime.CompilerServices.ConditionalWeakTable`2/CreateValueCallback<System.Object,System.Object>
#include "Parse_Unity_System_Runtime_CompilerServices_ConditionalWeakT_3MethodDeclarations.h"
#define CreateValueCallback__ctor_m8950(__this, ___object, ___method, method) (( void (*) (CreateValueCallback_t1771 *, Object_t *, IntPtr_t, const MethodInfo*))CreateValueCallback__ctor_m38371_gshared)(__this, ___object, ___method, method)
// TValue System.Runtime.CompilerServices.ConditionalWeakTable`2/CreateValueCallback<System.Object,System.IComparable>::Invoke(TKey)
#define CreateValueCallback_Invoke_m39449(__this, ___key, method) (( Object_t * (*) (CreateValueCallback_t1771 *, Object_t *, const MethodInfo*))CreateValueCallback_Invoke_m38372_gshared)(__this, ___key, method)
// System.IAsyncResult System.Runtime.CompilerServices.ConditionalWeakTable`2/CreateValueCallback<System.Object,System.IComparable>::BeginInvoke(TKey,System.AsyncCallback,System.Object)
#define CreateValueCallback_BeginInvoke_m39450(__this, ___key, ___callback, ___object, method) (( Object_t * (*) (CreateValueCallback_t1771 *, Object_t *, AsyncCallback_t477 *, Object_t *, const MethodInfo*))CreateValueCallback_BeginInvoke_m38373_gshared)(__this, ___key, ___callback, ___object, method)
// TValue System.Runtime.CompilerServices.ConditionalWeakTable`2/CreateValueCallback<System.Object,System.IComparable>::EndInvoke(System.IAsyncResult)
#define CreateValueCallback_EndInvoke_m39451(__this, ___result, method) (( Object_t * (*) (CreateValueCallback_t1771 *, Object_t *, const MethodInfo*))CreateValueCallback_EndInvoke_m38374_gshared)(__this, ___result, method)

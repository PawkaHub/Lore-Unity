#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<UnityParseHelpers.Loom/DelayedQueueItem>
struct Predicate_1_t6472;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t476;
// System.AsyncCallback
struct AsyncCallback_t477;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityParseHelpers.Loom/DelayedQueueItem
#include "AssemblyU2DCSharp_UnityParseHelpers_Loom_DelayedQueueItem.h"

// System.Void System.Predicate`1<UnityParseHelpers.Loom/DelayedQueueItem>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m28364_gshared (Predicate_1_t6472 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m28364(__this, ___object, ___method, method) (( void (*) (Predicate_1_t6472 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m28364_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<UnityParseHelpers.Loom/DelayedQueueItem>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m28365_gshared (Predicate_1_t6472 * __this, DelayedQueueItem_t323  ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m28365(__this, ___obj, method) (( bool (*) (Predicate_1_t6472 *, DelayedQueueItem_t323 , const MethodInfo*))Predicate_1_Invoke_m28365_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<UnityParseHelpers.Loom/DelayedQueueItem>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m28366_gshared (Predicate_1_t6472 * __this, DelayedQueueItem_t323  ___obj, AsyncCallback_t477 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m28366(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t6472 *, DelayedQueueItem_t323 , AsyncCallback_t477 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m28366_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<UnityParseHelpers.Loom/DelayedQueueItem>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m28367_gshared (Predicate_1_t6472 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m28367(__this, ___result, method) (( bool (*) (Predicate_1_t6472 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m28367_gshared)(__this, ___result, method)

#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<UnityParseHelpers.Loom/DelayedQueueItem>
struct Comparison_1_t6475;
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

// System.Void System.Comparison`1<UnityParseHelpers.Loom/DelayedQueueItem>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m28374_gshared (Comparison_1_t6475 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m28374(__this, ___object, ___method, method) (( void (*) (Comparison_1_t6475 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m28374_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<UnityParseHelpers.Loom/DelayedQueueItem>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m28375_gshared (Comparison_1_t6475 * __this, DelayedQueueItem_t323  ___x, DelayedQueueItem_t323  ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m28375(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t6475 *, DelayedQueueItem_t323 , DelayedQueueItem_t323 , const MethodInfo*))Comparison_1_Invoke_m28375_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<UnityParseHelpers.Loom/DelayedQueueItem>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m28376_gshared (Comparison_1_t6475 * __this, DelayedQueueItem_t323  ___x, DelayedQueueItem_t323  ___y, AsyncCallback_t477 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m28376(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t6475 *, DelayedQueueItem_t323 , DelayedQueueItem_t323 , AsyncCallback_t477 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m28376_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<UnityParseHelpers.Loom/DelayedQueueItem>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m28377_gshared (Comparison_1_t6475 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m28377(__this, ___result, method) (( int32_t (*) (Comparison_1_t6475 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m28377_gshared)(__this, ___result, method)

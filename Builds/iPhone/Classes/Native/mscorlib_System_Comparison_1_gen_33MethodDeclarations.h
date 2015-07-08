#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<UnityParseHelpers.Loom/ConditionalQueueItem>
struct Comparison_1_t6486;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t476;
// System.AsyncCallback
struct AsyncCallback_t477;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityParseHelpers.Loom/ConditionalQueueItem
#include "AssemblyU2DCSharp_UnityParseHelpers_Loom_ConditionalQueueIte.h"

// System.Void System.Comparison`1<UnityParseHelpers.Loom/ConditionalQueueItem>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m28532_gshared (Comparison_1_t6486 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m28532(__this, ___object, ___method, method) (( void (*) (Comparison_1_t6486 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m28532_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<UnityParseHelpers.Loom/ConditionalQueueItem>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m28533_gshared (Comparison_1_t6486 * __this, ConditionalQueueItem_t326  ___x, ConditionalQueueItem_t326  ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m28533(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t6486 *, ConditionalQueueItem_t326 , ConditionalQueueItem_t326 , const MethodInfo*))Comparison_1_Invoke_m28533_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<UnityParseHelpers.Loom/ConditionalQueueItem>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m28534_gshared (Comparison_1_t6486 * __this, ConditionalQueueItem_t326  ___x, ConditionalQueueItem_t326  ___y, AsyncCallback_t477 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m28534(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t6486 *, ConditionalQueueItem_t326 , ConditionalQueueItem_t326 , AsyncCallback_t477 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m28534_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<UnityParseHelpers.Loom/ConditionalQueueItem>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m28535_gshared (Comparison_1_t6486 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m28535(__this, ___result, method) (( int32_t (*) (Comparison_1_t6486 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m28535_gshared)(__this, ___result, method)

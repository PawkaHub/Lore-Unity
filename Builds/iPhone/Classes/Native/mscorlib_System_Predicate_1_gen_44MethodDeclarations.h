#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<UnityParseHelpers.Loom/ConditionalQueueItem>
struct Predicate_1_t6483;
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

// System.Void System.Predicate`1<UnityParseHelpers.Loom/ConditionalQueueItem>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m28522_gshared (Predicate_1_t6483 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m28522(__this, ___object, ___method, method) (( void (*) (Predicate_1_t6483 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m28522_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<UnityParseHelpers.Loom/ConditionalQueueItem>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m28523_gshared (Predicate_1_t6483 * __this, ConditionalQueueItem_t326  ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m28523(__this, ___obj, method) (( bool (*) (Predicate_1_t6483 *, ConditionalQueueItem_t326 , const MethodInfo*))Predicate_1_Invoke_m28523_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<UnityParseHelpers.Loom/ConditionalQueueItem>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m28524_gshared (Predicate_1_t6483 * __this, ConditionalQueueItem_t326  ___obj, AsyncCallback_t477 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m28524(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t6483 *, ConditionalQueueItem_t326 , AsyncCallback_t477 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m28524_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<UnityParseHelpers.Loom/ConditionalQueueItem>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m28525_gshared (Predicate_1_t6483 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m28525(__this, ___result, method) (( bool (*) (Predicate_1_t6483 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m28525_gshared)(__this, ___result, method)

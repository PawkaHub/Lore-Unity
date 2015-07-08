#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<UnityEngine.Vector3>
struct Predicate_1_t6299;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t476;
// System.AsyncCallback
struct AsyncCallback_t477;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void System.Predicate`1<UnityEngine.Vector3>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m25578_gshared (Predicate_1_t6299 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m25578(__this, ___object, ___method, method) (( void (*) (Predicate_1_t6299 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m25578_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<UnityEngine.Vector3>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m25579_gshared (Predicate_1_t6299 * __this, Vector3_t53  ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m25579(__this, ___obj, method) (( bool (*) (Predicate_1_t6299 *, Vector3_t53 , const MethodInfo*))Predicate_1_Invoke_m25579_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<UnityEngine.Vector3>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m25580_gshared (Predicate_1_t6299 * __this, Vector3_t53  ___obj, AsyncCallback_t477 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m25580(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t6299 *, Vector3_t53 , AsyncCallback_t477 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m25580_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<UnityEngine.Vector3>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m25581_gshared (Predicate_1_t6299 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m25581(__this, ___result, method) (( bool (*) (Predicate_1_t6299 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m25581_gshared)(__this, ___result, method)

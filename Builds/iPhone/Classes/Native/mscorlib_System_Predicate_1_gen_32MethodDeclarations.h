#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<UnityEngine.Color32>
struct Predicate_1_t5045;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t448;
// System.AsyncCallback
struct AsyncCallback_t449;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.Color32
#include "UnityEngine_UnityEngine_Color32.h"

// System.Void System.Predicate`1<UnityEngine.Color32>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m25010_gshared (Predicate_1_t5045 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m25010(__this, ___object, ___method, method) (( void (*) (Predicate_1_t5045 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m25010_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<UnityEngine.Color32>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m25011_gshared (Predicate_1_t5045 * __this, Color32_t89  ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m25011(__this, ___obj, method) (( bool (*) (Predicate_1_t5045 *, Color32_t89 , const MethodInfo*))Predicate_1_Invoke_m25011_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<UnityEngine.Color32>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m25012_gshared (Predicate_1_t5045 * __this, Color32_t89  ___obj, AsyncCallback_t449 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m25012(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t5045 *, Color32_t89 , AsyncCallback_t449 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m25012_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<UnityEngine.Color32>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m25013_gshared (Predicate_1_t5045 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m25013(__this, ___result, method) (( bool (*) (Predicate_1_t5045 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m25013_gshared)(__this, ___result, method)

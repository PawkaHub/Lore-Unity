#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<UnityEngine.Vector3>
struct Predicate_1_t6061;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t448;
// System.AsyncCallback
struct AsyncCallback_t449;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void System.Predicate`1<UnityEngine.Vector3>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m25161_gshared (Predicate_1_t6061 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m25161(__this, ___object, ___method, method) (( void (*) (Predicate_1_t6061 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m25161_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<UnityEngine.Vector3>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m25162_gshared (Predicate_1_t6061 * __this, Vector3_t53  ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m25162(__this, ___obj, method) (( bool (*) (Predicate_1_t6061 *, Vector3_t53 , const MethodInfo*))Predicate_1_Invoke_m25162_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<UnityEngine.Vector3>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m25163_gshared (Predicate_1_t6061 * __this, Vector3_t53  ___obj, AsyncCallback_t449 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m25163(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t6061 *, Vector3_t53 , AsyncCallback_t449 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m25163_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<UnityEngine.Vector3>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m25164_gshared (Predicate_1_t6061 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m25164(__this, ___result, method) (( bool (*) (Predicate_1_t6061 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m25164_gshared)(__this, ___result, method)

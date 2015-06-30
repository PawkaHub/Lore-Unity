#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<UnityEngine.CanvasGroup>
struct Predicate_1_t5928;
// System.Object
struct Object_t;
// UnityEngine.CanvasGroup
struct CanvasGroup_t211;
// System.IAsyncResult
struct IAsyncResult_t448;
// System.AsyncCallback
struct AsyncCallback_t449;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Predicate`1<UnityEngine.CanvasGroup>::.ctor(System.Object,System.IntPtr)
// System.Predicate`1<System.Object>
#include "mscorlib_System_Predicate_1_gen_17MethodDeclarations.h"
#define Predicate_1__ctor_m38418(__this, ___object, ___method, method) (( void (*) (Predicate_1_t5928 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m22656_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<UnityEngine.CanvasGroup>::Invoke(T)
#define Predicate_1_Invoke_m38419(__this, ___obj, method) (( bool (*) (Predicate_1_t5928 *, CanvasGroup_t211 *, const MethodInfo*))Predicate_1_Invoke_m22657_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<UnityEngine.CanvasGroup>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Predicate_1_BeginInvoke_m38420(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t5928 *, CanvasGroup_t211 *, AsyncCallback_t449 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m22658_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<UnityEngine.CanvasGroup>::EndInvoke(System.IAsyncResult)
#define Predicate_1_EndInvoke_m38421(__this, ___result, method) (( bool (*) (Predicate_1_t5928 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m22659_gshared)(__this, ___result, method)

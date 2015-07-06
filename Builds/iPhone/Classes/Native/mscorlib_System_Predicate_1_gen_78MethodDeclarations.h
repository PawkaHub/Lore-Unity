#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<System.WeakReference>
struct Predicate_1_t6839;
// System.Object
struct Object_t;
// System.WeakReference
struct WeakReference_t2556;
// System.IAsyncResult
struct IAsyncResult_t448;
// System.AsyncCallback
struct AsyncCallback_t449;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Predicate`1<System.WeakReference>::.ctor(System.Object,System.IntPtr)
// System.Predicate`1<System.Object>
#include "mscorlib_System_Predicate_1_gen_17MethodDeclarations.h"
#define Predicate_1__ctor_m37712(__this, ___object, ___method, method) (( void (*) (Predicate_1_t6839 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m23999_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<System.WeakReference>::Invoke(T)
#define Predicate_1_Invoke_m37713(__this, ___obj, method) (( bool (*) (Predicate_1_t6839 *, WeakReference_t2556 *, const MethodInfo*))Predicate_1_Invoke_m24000_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<System.WeakReference>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Predicate_1_BeginInvoke_m37714(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t6839 *, WeakReference_t2556 *, AsyncCallback_t449 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m24001_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<System.WeakReference>::EndInvoke(System.IAsyncResult)
#define Predicate_1_EndInvoke_m37715(__this, ___result, method) (( bool (*) (Predicate_1_t6839 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m24002_gshared)(__this, ___result, method)

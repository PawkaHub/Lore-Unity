#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<Parse.ParseRole>
struct Predicate_1_t7785;
// System.Object
struct Object_t;
// Parse.ParseRole
struct ParseRole_t1631;
// System.IAsyncResult
struct IAsyncResult_t448;
// System.AsyncCallback
struct AsyncCallback_t449;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Predicate`1<Parse.ParseRole>::.ctor(System.Object,System.IntPtr)
// System.Predicate`1<System.Object>
#include "mscorlib_System_Predicate_1_gen_17MethodDeclarations.h"
#define Predicate_1__ctor_m50013(__this, ___object, ___method, method) (( void (*) (Predicate_1_t7785 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m23999_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<Parse.ParseRole>::Invoke(T)
#define Predicate_1_Invoke_m50014(__this, ___obj, method) (( bool (*) (Predicate_1_t7785 *, ParseRole_t1631 *, const MethodInfo*))Predicate_1_Invoke_m24000_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<Parse.ParseRole>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Predicate_1_BeginInvoke_m50015(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t7785 *, ParseRole_t1631 *, AsyncCallback_t449 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m24001_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<Parse.ParseRole>::EndInvoke(System.IAsyncResult)
#define Predicate_1_EndInvoke_m50016(__this, ___result, method) (( bool (*) (Predicate_1_t7785 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m24002_gshared)(__this, ___result, method)

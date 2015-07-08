#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<Parse.ParseObject>
struct Predicate_1_t7337;
// System.Object
struct Object_t;
// Parse.ParseObject
struct ParseObject_t596;
// System.IAsyncResult
struct IAsyncResult_t476;
// System.AsyncCallback
struct AsyncCallback_t477;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Predicate`1<Parse.ParseObject>::.ctor(System.Object,System.IntPtr)
// System.Predicate`1<System.Object>
#include "mscorlib_System_Predicate_1_gen_17MethodDeclarations.h"
#define Predicate_1__ctor_m41430(__this, ___object, ___method, method) (( void (*) (Predicate_1_t7337 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m24416_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<Parse.ParseObject>::Invoke(T)
#define Predicate_1_Invoke_m41431(__this, ___obj, method) (( bool (*) (Predicate_1_t7337 *, ParseObject_t596 *, const MethodInfo*))Predicate_1_Invoke_m24417_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<Parse.ParseObject>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Predicate_1_BeginInvoke_m41432(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t7337 *, ParseObject_t596 *, AsyncCallback_t477 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m24418_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<Parse.ParseObject>::EndInvoke(System.IAsyncResult)
#define Predicate_1_EndInvoke_m41433(__this, ___result, method) (( bool (*) (Predicate_1_t7337 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m24419_gshared)(__this, ___result, method)

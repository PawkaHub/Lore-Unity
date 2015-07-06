#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_t6803;
// System.Object
struct Object_t;
// System.Threading.Tasks.Task
struct Task_t723;
// System.IAsyncResult
struct IAsyncResult_t448;
// System.AsyncCallback
struct AsyncCallback_t449;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Predicate`1<System.Threading.Tasks.Task>::.ctor(System.Object,System.IntPtr)
// System.Predicate`1<System.Object>
#include "mscorlib_System_Predicate_1_gen_17MethodDeclarations.h"
#define Predicate_1__ctor_m37349(__this, ___object, ___method, method) (( void (*) (Predicate_1_t6803 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m23999_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<System.Threading.Tasks.Task>::Invoke(T)
#define Predicate_1_Invoke_m37350(__this, ___obj, method) (( bool (*) (Predicate_1_t6803 *, Task_t723 *, const MethodInfo*))Predicate_1_Invoke_m24000_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<System.Threading.Tasks.Task>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Predicate_1_BeginInvoke_m37351(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t6803 *, Task_t723 *, AsyncCallback_t449 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m24001_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<System.Threading.Tasks.Task>::EndInvoke(System.IAsyncResult)
#define Predicate_1_EndInvoke_m37352(__this, ___result, method) (( bool (*) (Predicate_1_t6803 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m24002_gshared)(__this, ___result, method)

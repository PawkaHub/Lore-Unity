#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<Consolation.Console/Log>
struct Predicate_1_t6386;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t448;
// System.AsyncCallback
struct AsyncCallback_t449;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// Consolation.Console/Log
#include "AssemblyU2DCSharp_Consolation_Console_Log.h"

// System.Void System.Predicate`1<Consolation.Console/Log>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m30404_gshared (Predicate_1_t6386 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m30404(__this, ___object, ___method, method) (( void (*) (Predicate_1_t6386 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m30404_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<Consolation.Console/Log>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m30405_gshared (Predicate_1_t6386 * __this, Log_t539  ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m30405(__this, ___obj, method) (( bool (*) (Predicate_1_t6386 *, Log_t539 , const MethodInfo*))Predicate_1_Invoke_m30405_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<Consolation.Console/Log>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m30406_gshared (Predicate_1_t6386 * __this, Log_t539  ___obj, AsyncCallback_t449 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m30406(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t6386 *, Log_t539 , AsyncCallback_t449 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m30406_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<Consolation.Console/Log>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m30407_gshared (Predicate_1_t6386 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m30407(__this, ___result, method) (( bool (*) (Predicate_1_t6386 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m30407_gshared)(__this, ___result, method)

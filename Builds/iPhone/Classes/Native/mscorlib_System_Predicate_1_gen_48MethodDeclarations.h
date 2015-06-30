#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<Consolation.Console/Log>
struct Predicate_1_t5298;
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
extern "C" void Predicate_1__ctor_m28905_gshared (Predicate_1_t5298 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m28905(__this, ___object, ___method, method) (( void (*) (Predicate_1_t5298 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m28905_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<Consolation.Console/Log>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m28906_gshared (Predicate_1_t5298 * __this, Log_t536  ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m28906(__this, ___obj, method) (( bool (*) (Predicate_1_t5298 *, Log_t536 , const MethodInfo*))Predicate_1_Invoke_m28906_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<Consolation.Console/Log>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m28907_gshared (Predicate_1_t5298 * __this, Log_t536  ___obj, AsyncCallback_t449 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m28907(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t5298 *, Log_t536 , AsyncCallback_t449 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m28907_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<Consolation.Console/Log>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m28908_gshared (Predicate_1_t5298 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m28908(__this, ___result, method) (( bool (*) (Predicate_1_t5298 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m28908_gshared)(__this, ___result, method)

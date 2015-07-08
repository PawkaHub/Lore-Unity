#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<Consolation.Console/Log>
struct Predicate_1_t6712;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t476;
// System.AsyncCallback
struct AsyncCallback_t477;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// Consolation.Console/Log
#include "AssemblyU2DCSharp_Consolation_Console_Log.h"

// System.Void System.Predicate`1<Consolation.Console/Log>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m31776_gshared (Predicate_1_t6712 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m31776(__this, ___object, ___method, method) (( void (*) (Predicate_1_t6712 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m31776_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<Consolation.Console/Log>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m31777_gshared (Predicate_1_t6712 * __this, Log_t563  ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m31777(__this, ___obj, method) (( bool (*) (Predicate_1_t6712 *, Log_t563 , const MethodInfo*))Predicate_1_Invoke_m31777_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<Consolation.Console/Log>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m31778_gshared (Predicate_1_t6712 * __this, Log_t563  ___obj, AsyncCallback_t477 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m31778(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t6712 *, Log_t563 , AsyncCallback_t477 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m31778_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<Consolation.Console/Log>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m31779_gshared (Predicate_1_t6712 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m31779(__this, ___result, method) (( bool (*) (Predicate_1_t6712 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m31779_gshared)(__this, ___result, method)

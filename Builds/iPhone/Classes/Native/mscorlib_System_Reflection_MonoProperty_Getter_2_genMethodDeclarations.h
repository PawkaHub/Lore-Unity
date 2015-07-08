#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.MonoProperty/Getter`2<System.Object,System.Object>
struct Getter_2_t9846;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t476;
// System.AsyncCallback
struct AsyncCallback_t477;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Reflection.MonoProperty/Getter`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void Getter_2__ctor_m73225_gshared (Getter_2_t9846 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Getter_2__ctor_m73225(__this, ___object, ___method, method) (( void (*) (Getter_2_t9846 *, Object_t *, IntPtr_t, const MethodInfo*))Getter_2__ctor_m73225_gshared)(__this, ___object, ___method, method)
// R System.Reflection.MonoProperty/Getter`2<System.Object,System.Object>::Invoke(T)
extern "C" Object_t * Getter_2_Invoke_m73226_gshared (Getter_2_t9846 * __this, Object_t * ____this, const MethodInfo* method);
#define Getter_2_Invoke_m73226(__this, ____this, method) (( Object_t * (*) (Getter_2_t9846 *, Object_t *, const MethodInfo*))Getter_2_Invoke_m73226_gshared)(__this, ____this, method)
// System.IAsyncResult System.Reflection.MonoProperty/Getter`2<System.Object,System.Object>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Getter_2_BeginInvoke_m73227_gshared (Getter_2_t9846 * __this, Object_t * ____this, AsyncCallback_t477 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Getter_2_BeginInvoke_m73227(__this, ____this, ___callback, ___object, method) (( Object_t * (*) (Getter_2_t9846 *, Object_t *, AsyncCallback_t477 *, Object_t *, const MethodInfo*))Getter_2_BeginInvoke_m73227_gshared)(__this, ____this, ___callback, ___object, method)
// R System.Reflection.MonoProperty/Getter`2<System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern "C" Object_t * Getter_2_EndInvoke_m73228_gshared (Getter_2_t9846 * __this, Object_t * ___result, const MethodInfo* method);
#define Getter_2_EndInvoke_m73228(__this, ___result, method) (( Object_t * (*) (Getter_2_t9846 *, Object_t *, const MethodInfo*))Getter_2_EndInvoke_m73228_gshared)(__this, ___result, method)

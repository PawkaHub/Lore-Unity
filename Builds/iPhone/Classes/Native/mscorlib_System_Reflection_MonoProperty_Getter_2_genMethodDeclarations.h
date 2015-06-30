#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.MonoProperty/Getter`2<System.Object,System.Object>
struct Getter_2_t6386;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t448;
// System.AsyncCallback
struct AsyncCallback_t449;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Reflection.MonoProperty/Getter`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void Getter_2__ctor_m44998_gshared (Getter_2_t6386 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Getter_2__ctor_m44998(__this, ___object, ___method, method) (( void (*) (Getter_2_t6386 *, Object_t *, IntPtr_t, const MethodInfo*))Getter_2__ctor_m44998_gshared)(__this, ___object, ___method, method)
// R System.Reflection.MonoProperty/Getter`2<System.Object,System.Object>::Invoke(T)
extern "C" Object_t * Getter_2_Invoke_m44999_gshared (Getter_2_t6386 * __this, Object_t * ____this, const MethodInfo* method);
#define Getter_2_Invoke_m44999(__this, ____this, method) (( Object_t * (*) (Getter_2_t6386 *, Object_t *, const MethodInfo*))Getter_2_Invoke_m44999_gshared)(__this, ____this, method)
// System.IAsyncResult System.Reflection.MonoProperty/Getter`2<System.Object,System.Object>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Getter_2_BeginInvoke_m45000_gshared (Getter_2_t6386 * __this, Object_t * ____this, AsyncCallback_t449 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Getter_2_BeginInvoke_m45000(__this, ____this, ___callback, ___object, method) (( Object_t * (*) (Getter_2_t6386 *, Object_t *, AsyncCallback_t449 *, Object_t *, const MethodInfo*))Getter_2_BeginInvoke_m45000_gshared)(__this, ____this, ___callback, ___object, method)
// R System.Reflection.MonoProperty/Getter`2<System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern "C" Object_t * Getter_2_EndInvoke_m45001_gshared (Getter_2_t6386 * __this, Object_t * ___result, const MethodInfo* method);
#define Getter_2_EndInvoke_m45001(__this, ___result, method) (( Object_t * (*) (Getter_2_t6386 *, Object_t *, const MethodInfo*))Getter_2_EndInvoke_m45001_gshared)(__this, ___result, method)

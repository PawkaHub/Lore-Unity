#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<System.Boolean>
struct Comparison_1_t8009;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t476;
// System.AsyncCallback
struct AsyncCallback_t477;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Comparison`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
// System.Comparison`1<System.Byte>
#include "mscorlib_System_Comparison_1_gen_40MethodDeclarations.h"
#define Comparison_1__ctor_m50093(__this, ___object, ___method, method) (( void (*) (Comparison_1_t8009 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m31229_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<System.Boolean>::Invoke(T,T)
#define Comparison_1_Invoke_m50094(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t8009 *, bool, bool, const MethodInfo*))Comparison_1_Invoke_m31230_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<System.Boolean>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
#define Comparison_1_BeginInvoke_m50095(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t8009 *, bool, bool, AsyncCallback_t477 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m31231_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<System.Boolean>::EndInvoke(System.IAsyncResult)
#define Comparison_1_EndInvoke_m50096(__this, ___result, method) (( int32_t (*) (Comparison_1_t8009 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m31232_gshared)(__this, ___result, method)

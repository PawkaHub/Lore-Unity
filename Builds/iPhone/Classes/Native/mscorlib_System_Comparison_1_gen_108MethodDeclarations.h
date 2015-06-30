#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<UnityEngine.Events.PersistentCall>
struct Comparison_1_t6265;
// System.Object
struct Object_t;
// UnityEngine.Events.PersistentCall
struct PersistentCall_t2908;
// System.IAsyncResult
struct IAsyncResult_t448;
// System.AsyncCallback
struct AsyncCallback_t449;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Comparison`1<UnityEngine.Events.PersistentCall>::.ctor(System.Object,System.IntPtr)
// System.Comparison`1<System.Object>
#include "mscorlib_System_Comparison_1_gen_5MethodDeclarations.h"
#define Comparison_1__ctor_m43300(__this, ___object, ___method, method) (( void (*) (Comparison_1_t6265 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m22686_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<UnityEngine.Events.PersistentCall>::Invoke(T,T)
#define Comparison_1_Invoke_m43301(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t6265 *, PersistentCall_t2908 *, PersistentCall_t2908 *, const MethodInfo*))Comparison_1_Invoke_m22687_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<UnityEngine.Events.PersistentCall>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
#define Comparison_1_BeginInvoke_m43302(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t6265 *, PersistentCall_t2908 *, PersistentCall_t2908 *, AsyncCallback_t449 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m22688_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<UnityEngine.Events.PersistentCall>::EndInvoke(System.IAsyncResult)
#define Comparison_1_EndInvoke_m43303(__this, ___result, method) (( int32_t (*) (Comparison_1_t6265 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m22689_gshared)(__this, ___result, method)

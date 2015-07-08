#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Single,System.Object>
struct Transform_1_t7019;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t476;
// System.AsyncCallback
struct AsyncCallback_t477;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Single,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m37240_gshared (Transform_1_t7019 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m37240(__this, ___object, ___method, method) (( void (*) (Transform_1_t7019 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m37240_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Single,System.Object>::Invoke(TKey,TValue)
extern "C" Object_t * Transform_1_Invoke_m37241_gshared (Transform_1_t7019 * __this, Object_t * ___key, float ___value, const MethodInfo* method);
#define Transform_1_Invoke_m37241(__this, ___key, ___value, method) (( Object_t * (*) (Transform_1_t7019 *, Object_t *, float, const MethodInfo*))Transform_1_Invoke_m37241_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Single,System.Object>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m37242_gshared (Transform_1_t7019 * __this, Object_t * ___key, float ___value, AsyncCallback_t477 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m37242(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t7019 *, Object_t *, float, AsyncCallback_t477 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m37242_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Single,System.Object>::EndInvoke(System.IAsyncResult)
extern "C" Object_t * Transform_1_EndInvoke_m37243_gshared (Transform_1_t7019 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m37243(__this, ___result, method) (( Object_t * (*) (Transform_1_t7019 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m37243_gshared)(__this, ___result, method)

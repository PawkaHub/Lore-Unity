#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Object>
struct Transform_1_t7312;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t476;
// System.AsyncCallback
struct AsyncCallback_t477;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m40975_gshared (Transform_1_t7312 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m40975(__this, ___object, ___method, method) (( void (*) (Transform_1_t7312 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m40975_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Object>::Invoke(TKey,TValue)
extern "C" Object_t * Transform_1_Invoke_m40976_gshared (Transform_1_t7312 * __this, Object_t * ___key, uint8_t ___value, const MethodInfo* method);
#define Transform_1_Invoke_m40976(__this, ___key, ___value, method) (( Object_t * (*) (Transform_1_t7312 *, Object_t *, uint8_t, const MethodInfo*))Transform_1_Invoke_m40976_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Object>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m40977_gshared (Transform_1_t7312 * __this, Object_t * ___key, uint8_t ___value, AsyncCallback_t477 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m40977(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t7312 *, Object_t *, uint8_t, AsyncCallback_t477 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m40977_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Object>::EndInvoke(System.IAsyncResult)
extern "C" Object_t * Transform_1_EndInvoke_m40978_gshared (Transform_1_t7312 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m40978(__this, ___result, method) (( Object_t * (*) (Transform_1_t7312 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m40978_gshared)(__this, ___result, method)

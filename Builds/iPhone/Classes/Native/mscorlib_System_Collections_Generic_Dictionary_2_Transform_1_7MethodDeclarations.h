#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Byte,System.Int32,System.Byte>
struct Transform_1_t4936;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t448;
// System.AsyncCallback
struct AsyncCallback_t449;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Byte,System.Int32,System.Byte>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m23283_gshared (Transform_1_t4936 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m23283(__this, ___object, ___method, method) (( void (*) (Transform_1_t4936 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m23283_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Byte,System.Int32,System.Byte>::Invoke(TKey,TValue)
extern "C" uint8_t Transform_1_Invoke_m23284_gshared (Transform_1_t4936 * __this, uint8_t ___key, int32_t ___value, const MethodInfo* method);
#define Transform_1_Invoke_m23284(__this, ___key, ___value, method) (( uint8_t (*) (Transform_1_t4936 *, uint8_t, int32_t, const MethodInfo*))Transform_1_Invoke_m23284_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Byte,System.Int32,System.Byte>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m23285_gshared (Transform_1_t4936 * __this, uint8_t ___key, int32_t ___value, AsyncCallback_t449 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m23285(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t4936 *, uint8_t, int32_t, AsyncCallback_t449 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m23285_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Byte,System.Int32,System.Byte>::EndInvoke(System.IAsyncResult)
extern "C" uint8_t Transform_1_EndInvoke_m23286_gshared (Transform_1_t4936 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m23286(__this, ___result, method) (( uint8_t (*) (Transform_1_t4936 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m23286_gshared)(__this, ___result, method)

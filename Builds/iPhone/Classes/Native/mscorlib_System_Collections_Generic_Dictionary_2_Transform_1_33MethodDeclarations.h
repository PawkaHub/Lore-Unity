#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,UnityEngine.Color,System.Collections.DictionaryEntry>
struct Transform_1_t6393;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t448;
// System.AsyncCallback
struct AsyncCallback_t449;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,UnityEngine.Color,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m30593_gshared (Transform_1_t6393 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m30593(__this, ___object, ___method, method) (( void (*) (Transform_1_t6393 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m30593_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,UnityEngine.Color,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
extern "C" DictionaryEntry_t679  Transform_1_Invoke_m30594_gshared (Transform_1_t6393 * __this, int32_t ___key, Color_t121  ___value, const MethodInfo* method);
#define Transform_1_Invoke_m30594(__this, ___key, ___value, method) (( DictionaryEntry_t679  (*) (Transform_1_t6393 *, int32_t, Color_t121 , const MethodInfo*))Transform_1_Invoke_m30594_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,UnityEngine.Color,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m30595_gshared (Transform_1_t6393 * __this, int32_t ___key, Color_t121  ___value, AsyncCallback_t449 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m30595(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t6393 *, int32_t, Color_t121 , AsyncCallback_t449 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m30595_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,UnityEngine.Color,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
extern "C" DictionaryEntry_t679  Transform_1_EndInvoke_m30596_gshared (Transform_1_t6393 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m30596(__this, ___result, method) (( DictionaryEntry_t679  (*) (Transform_1_t6393 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m30596_gshared)(__this, ___result, method)

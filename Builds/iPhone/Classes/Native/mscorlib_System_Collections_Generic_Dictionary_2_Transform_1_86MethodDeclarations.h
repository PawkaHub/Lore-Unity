#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.DateTime,System.Collections.DictionaryEntry>
struct Transform_1_t8167;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t476;
// System.AsyncCallback
struct AsyncCallback_t477;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.DateTime,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m52073_gshared (Transform_1_t8167 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m52073(__this, ___object, ___method, method) (( void (*) (Transform_1_t8167 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m52073_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.DateTime,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
extern "C" DictionaryEntry_t748  Transform_1_Invoke_m52075_gshared (Transform_1_t8167 * __this, Object_t * ___key, DateTime_t1953  ___value, const MethodInfo* method);
#define Transform_1_Invoke_m52075(__this, ___key, ___value, method) (( DictionaryEntry_t748  (*) (Transform_1_t8167 *, Object_t *, DateTime_t1953 , const MethodInfo*))Transform_1_Invoke_m52075_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.DateTime,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m52077_gshared (Transform_1_t8167 * __this, Object_t * ___key, DateTime_t1953  ___value, AsyncCallback_t477 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m52077(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t8167 *, Object_t *, DateTime_t1953 , AsyncCallback_t477 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m52077_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.DateTime,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
extern "C" DictionaryEntry_t748  Transform_1_EndInvoke_m52079_gshared (Transform_1_t8167 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m52079(__this, ___result, method) (( DictionaryEntry_t748  (*) (Transform_1_t8167 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m52079_gshared)(__this, ___result, method)

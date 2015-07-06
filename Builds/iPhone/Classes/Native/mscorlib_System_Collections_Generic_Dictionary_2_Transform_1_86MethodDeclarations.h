#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.DateTime,System.Collections.DictionaryEntry>
struct Transform_1_t7885;
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
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.DateTime,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m51158_gshared (Transform_1_t7885 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m51158(__this, ___object, ___method, method) (( void (*) (Transform_1_t7885 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m51158_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.DateTime,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
extern "C" DictionaryEntry_t679  Transform_1_Invoke_m51160_gshared (Transform_1_t7885 * __this, Object_t * ___key, DateTime_t1705  ___value, const MethodInfo* method);
#define Transform_1_Invoke_m51160(__this, ___key, ___value, method) (( DictionaryEntry_t679  (*) (Transform_1_t7885 *, Object_t *, DateTime_t1705 , const MethodInfo*))Transform_1_Invoke_m51160_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.DateTime,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m51162_gshared (Transform_1_t7885 * __this, Object_t * ___key, DateTime_t1705  ___value, AsyncCallback_t449 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m51162(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t7885 *, Object_t *, DateTime_t1705 , AsyncCallback_t449 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m51162_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.DateTime,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
extern "C" DictionaryEntry_t679  Transform_1_EndInvoke_m51164_gshared (Transform_1_t7885 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m51164(__this, ___result, method) (( DictionaryEntry_t679  (*) (Transform_1_t7885 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m51164_gshared)(__this, ___result, method)

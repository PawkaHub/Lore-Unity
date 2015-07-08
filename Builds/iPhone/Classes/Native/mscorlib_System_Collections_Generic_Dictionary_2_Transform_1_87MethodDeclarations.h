#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.DateTime,System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>
struct Transform_1_t8176;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t476;
// System.AsyncCallback
struct AsyncCallback_t477;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_52.h"
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.DateTime,System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m52296_gshared (Transform_1_t8176 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m52296(__this, ___object, ___method, method) (( void (*) (Transform_1_t8176 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m52296_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.DateTime,System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::Invoke(TKey,TValue)
extern "C" KeyValuePair_2_t8096  Transform_1_Invoke_m52297_gshared (Transform_1_t8176 * __this, Object_t * ___key, DateTime_t1953  ___value, const MethodInfo* method);
#define Transform_1_Invoke_m52297(__this, ___key, ___value, method) (( KeyValuePair_2_t8096  (*) (Transform_1_t8176 *, Object_t *, DateTime_t1953 , const MethodInfo*))Transform_1_Invoke_m52297_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.DateTime,System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m52298_gshared (Transform_1_t8176 * __this, Object_t * ___key, DateTime_t1953  ___value, AsyncCallback_t477 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m52298(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t8176 *, Object_t *, DateTime_t1953 , AsyncCallback_t477 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m52298_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.DateTime,System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::EndInvoke(System.IAsyncResult)
extern "C" KeyValuePair_2_t8096  Transform_1_EndInvoke_m52299_gshared (Transform_1_t8176 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m52299(__this, ___result, method) (( KeyValuePair_2_t8096  (*) (Transform_1_t8176 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m52299_gshared)(__this, ___result, method)

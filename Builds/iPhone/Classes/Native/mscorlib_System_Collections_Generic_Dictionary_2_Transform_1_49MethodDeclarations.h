#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Single,System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>
struct Transform_1_t7023;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t476;
// System.AsyncCallback
struct AsyncCallback_t477;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_35.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Single,System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m37272_gshared (Transform_1_t7023 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m37272(__this, ___object, ___method, method) (( void (*) (Transform_1_t7023 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m37272_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Single,System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::Invoke(TKey,TValue)
extern "C" KeyValuePair_2_t7014  Transform_1_Invoke_m37273_gshared (Transform_1_t7023 * __this, Object_t * ___key, float ___value, const MethodInfo* method);
#define Transform_1_Invoke_m37273(__this, ___key, ___value, method) (( KeyValuePair_2_t7014  (*) (Transform_1_t7023 *, Object_t *, float, const MethodInfo*))Transform_1_Invoke_m37273_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Single,System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m37274_gshared (Transform_1_t7023 * __this, Object_t * ___key, float ___value, AsyncCallback_t477 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m37274(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t7023 *, Object_t *, float, AsyncCallback_t477 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m37274_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Single,System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::EndInvoke(System.IAsyncResult)
extern "C" KeyValuePair_2_t7014  Transform_1_EndInvoke_m37275_gshared (Transform_1_t7023 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m37275(__this, ___result, method) (( KeyValuePair_2_t7014  (*) (Transform_1_t7023 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m37275_gshared)(__this, ___result, method)

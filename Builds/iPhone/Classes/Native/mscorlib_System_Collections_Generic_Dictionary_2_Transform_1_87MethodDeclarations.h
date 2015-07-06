#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.DateTime,System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>
struct Transform_1_t7894;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t448;
// System.AsyncCallback
struct AsyncCallback_t449;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_52.h"
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.DateTime,System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m51381_gshared (Transform_1_t7894 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m51381(__this, ___object, ___method, method) (( void (*) (Transform_1_t7894 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m51381_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.DateTime,System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::Invoke(TKey,TValue)
extern "C" KeyValuePair_2_t7814  Transform_1_Invoke_m51382_gshared (Transform_1_t7894 * __this, Object_t * ___key, DateTime_t1705  ___value, const MethodInfo* method);
#define Transform_1_Invoke_m51382(__this, ___key, ___value, method) (( KeyValuePair_2_t7814  (*) (Transform_1_t7894 *, Object_t *, DateTime_t1705 , const MethodInfo*))Transform_1_Invoke_m51382_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.DateTime,System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m51383_gshared (Transform_1_t7894 * __this, Object_t * ___key, DateTime_t1705  ___value, AsyncCallback_t449 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m51383(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t7894 *, Object_t *, DateTime_t1705 , AsyncCallback_t449 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m51383_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.DateTime,System.Collections.Generic.KeyValuePair`2<System.Object,System.DateTime>>::EndInvoke(System.IAsyncResult)
extern "C" KeyValuePair_2_t7814  Transform_1_EndInvoke_m51384_gshared (Transform_1_t7894 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m51384(__this, ___result, method) (( KeyValuePair_2_t7814  (*) (Transform_1_t7894 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m51384_gshared)(__this, ___result, method)

#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,Parse.ParseGeoPoint,System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>
struct Transform_1_t7921;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t448;
// System.AsyncCallback
struct AsyncCallback_t449;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_53.h"
// Parse.ParseGeoPoint
#include "Parse_Unity_Parse_ParseGeoPoint.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,Parse.ParseGeoPoint,System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m51744_gshared (Transform_1_t7921 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m51744(__this, ___object, ___method, method) (( void (*) (Transform_1_t7921 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m51744_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,Parse.ParseGeoPoint,System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::Invoke(TKey,TValue)
extern "C" KeyValuePair_2_t7823  Transform_1_Invoke_m51745_gshared (Transform_1_t7921 * __this, Object_t * ___key, ParseGeoPoint_t1579  ___value, const MethodInfo* method);
#define Transform_1_Invoke_m51745(__this, ___key, ___value, method) (( KeyValuePair_2_t7823  (*) (Transform_1_t7921 *, Object_t *, ParseGeoPoint_t1579 , const MethodInfo*))Transform_1_Invoke_m51745_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,Parse.ParseGeoPoint,System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m51746_gshared (Transform_1_t7921 * __this, Object_t * ___key, ParseGeoPoint_t1579  ___value, AsyncCallback_t449 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m51746(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t7921 *, Object_t *, ParseGeoPoint_t1579 , AsyncCallback_t449 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m51746_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,Parse.ParseGeoPoint,System.Collections.Generic.KeyValuePair`2<System.Object,Parse.ParseGeoPoint>>::EndInvoke(System.IAsyncResult)
extern "C" KeyValuePair_2_t7823  Transform_1_EndInvoke_m51747_gshared (Transform_1_t7921 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m51747(__this, ___result, method) (( KeyValuePair_2_t7823  (*) (Transform_1_t7921 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m51747_gshared)(__this, ___result, method)

#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,Parse.ParseGeoPoint,Parse.ParseGeoPoint>
struct Transform_1_t7920;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t448;
// System.AsyncCallback
struct AsyncCallback_t449;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// Parse.ParseGeoPoint
#include "Parse_Unity_Parse_ParseGeoPoint.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,Parse.ParseGeoPoint,Parse.ParseGeoPoint>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m51740_gshared (Transform_1_t7920 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m51740(__this, ___object, ___method, method) (( void (*) (Transform_1_t7920 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m51740_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,Parse.ParseGeoPoint,Parse.ParseGeoPoint>::Invoke(TKey,TValue)
extern "C" ParseGeoPoint_t1579  Transform_1_Invoke_m51741_gshared (Transform_1_t7920 * __this, Object_t * ___key, ParseGeoPoint_t1579  ___value, const MethodInfo* method);
#define Transform_1_Invoke_m51741(__this, ___key, ___value, method) (( ParseGeoPoint_t1579  (*) (Transform_1_t7920 *, Object_t *, ParseGeoPoint_t1579 , const MethodInfo*))Transform_1_Invoke_m51741_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,Parse.ParseGeoPoint,Parse.ParseGeoPoint>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m51742_gshared (Transform_1_t7920 * __this, Object_t * ___key, ParseGeoPoint_t1579  ___value, AsyncCallback_t449 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m51742(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t7920 *, Object_t *, ParseGeoPoint_t1579 , AsyncCallback_t449 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m51742_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,Parse.ParseGeoPoint,Parse.ParseGeoPoint>::EndInvoke(System.IAsyncResult)
extern "C" ParseGeoPoint_t1579  Transform_1_EndInvoke_m51743_gshared (Transform_1_t7920 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m51743(__this, ___result, method) (( ParseGeoPoint_t1579  (*) (Transform_1_t7920 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m51743_gshared)(__this, ___result, method)

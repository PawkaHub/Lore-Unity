#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.ObjectPool`1<System.Object>
struct ObjectPool_1_t6199;
// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t6198;
// System.Object
struct Object_t;

// System.Void UnityEngine.UI.ObjectPool`1<System.Object>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
extern "C" void ObjectPool_1__ctor_m27307_gshared (ObjectPool_1_t6199 * __this, UnityAction_1_t6198 * ___actionOnGet, UnityAction_1_t6198 * ___actionOnRelease, const MethodInfo* method);
#define ObjectPool_1__ctor_m27307(__this, ___actionOnGet, ___actionOnRelease, method) (( void (*) (ObjectPool_1_t6199 *, UnityAction_1_t6198 *, UnityAction_1_t6198 *, const MethodInfo*))ObjectPool_1__ctor_m27307_gshared)(__this, ___actionOnGet, ___actionOnRelease, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Object>::get_countAll()
extern "C" int32_t ObjectPool_1_get_countAll_m27309_gshared (ObjectPool_1_t6199 * __this, const MethodInfo* method);
#define ObjectPool_1_get_countAll_m27309(__this, method) (( int32_t (*) (ObjectPool_1_t6199 *, const MethodInfo*))ObjectPool_1_get_countAll_m27309_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Object>::set_countAll(System.Int32)
extern "C" void ObjectPool_1_set_countAll_m27311_gshared (ObjectPool_1_t6199 * __this, int32_t ___value, const MethodInfo* method);
#define ObjectPool_1_set_countAll_m27311(__this, ___value, method) (( void (*) (ObjectPool_1_t6199 *, int32_t, const MethodInfo*))ObjectPool_1_set_countAll_m27311_gshared)(__this, ___value, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Object>::get_countActive()
extern "C" int32_t ObjectPool_1_get_countActive_m27313_gshared (ObjectPool_1_t6199 * __this, const MethodInfo* method);
#define ObjectPool_1_get_countActive_m27313(__this, method) (( int32_t (*) (ObjectPool_1_t6199 *, const MethodInfo*))ObjectPool_1_get_countActive_m27313_gshared)(__this, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Object>::get_countInactive()
extern "C" int32_t ObjectPool_1_get_countInactive_m27315_gshared (ObjectPool_1_t6199 * __this, const MethodInfo* method);
#define ObjectPool_1_get_countInactive_m27315(__this, method) (( int32_t (*) (ObjectPool_1_t6199 *, const MethodInfo*))ObjectPool_1_get_countInactive_m27315_gshared)(__this, method)
// T UnityEngine.UI.ObjectPool`1<System.Object>::Get()
extern "C" Object_t * ObjectPool_1_Get_m27317_gshared (ObjectPool_1_t6199 * __this, const MethodInfo* method);
#define ObjectPool_1_Get_m27317(__this, method) (( Object_t * (*) (ObjectPool_1_t6199 *, const MethodInfo*))ObjectPool_1_Get_m27317_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Object>::Release(T)
extern "C" void ObjectPool_1_Release_m27319_gshared (ObjectPool_1_t6199 * __this, Object_t * ___element, const MethodInfo* method);
#define ObjectPool_1_Release_m27319(__this, ___element, method) (( void (*) (ObjectPool_1_t6199 *, Object_t *, const MethodInfo*))ObjectPool_1_Release_m27319_gshared)(__this, ___element, method)

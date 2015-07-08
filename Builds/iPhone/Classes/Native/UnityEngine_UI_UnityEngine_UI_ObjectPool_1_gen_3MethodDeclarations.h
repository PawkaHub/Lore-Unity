#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.ObjectPool`1<System.Object>
struct ObjectPool_1_t6437;
// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t6436;
// System.Object
struct Object_t;

// System.Void UnityEngine.UI.ObjectPool`1<System.Object>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
extern "C" void ObjectPool_1__ctor_m27724_gshared (ObjectPool_1_t6437 * __this, UnityAction_1_t6436 * ___actionOnGet, UnityAction_1_t6436 * ___actionOnRelease, const MethodInfo* method);
#define ObjectPool_1__ctor_m27724(__this, ___actionOnGet, ___actionOnRelease, method) (( void (*) (ObjectPool_1_t6437 *, UnityAction_1_t6436 *, UnityAction_1_t6436 *, const MethodInfo*))ObjectPool_1__ctor_m27724_gshared)(__this, ___actionOnGet, ___actionOnRelease, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Object>::get_countAll()
extern "C" int32_t ObjectPool_1_get_countAll_m27726_gshared (ObjectPool_1_t6437 * __this, const MethodInfo* method);
#define ObjectPool_1_get_countAll_m27726(__this, method) (( int32_t (*) (ObjectPool_1_t6437 *, const MethodInfo*))ObjectPool_1_get_countAll_m27726_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Object>::set_countAll(System.Int32)
extern "C" void ObjectPool_1_set_countAll_m27728_gshared (ObjectPool_1_t6437 * __this, int32_t ___value, const MethodInfo* method);
#define ObjectPool_1_set_countAll_m27728(__this, ___value, method) (( void (*) (ObjectPool_1_t6437 *, int32_t, const MethodInfo*))ObjectPool_1_set_countAll_m27728_gshared)(__this, ___value, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Object>::get_countActive()
extern "C" int32_t ObjectPool_1_get_countActive_m27730_gshared (ObjectPool_1_t6437 * __this, const MethodInfo* method);
#define ObjectPool_1_get_countActive_m27730(__this, method) (( int32_t (*) (ObjectPool_1_t6437 *, const MethodInfo*))ObjectPool_1_get_countActive_m27730_gshared)(__this, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Object>::get_countInactive()
extern "C" int32_t ObjectPool_1_get_countInactive_m27732_gshared (ObjectPool_1_t6437 * __this, const MethodInfo* method);
#define ObjectPool_1_get_countInactive_m27732(__this, method) (( int32_t (*) (ObjectPool_1_t6437 *, const MethodInfo*))ObjectPool_1_get_countInactive_m27732_gshared)(__this, method)
// T UnityEngine.UI.ObjectPool`1<System.Object>::Get()
extern "C" Object_t * ObjectPool_1_Get_m27734_gshared (ObjectPool_1_t6437 * __this, const MethodInfo* method);
#define ObjectPool_1_Get_m27734(__this, method) (( Object_t * (*) (ObjectPool_1_t6437 *, const MethodInfo*))ObjectPool_1_Get_m27734_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Object>::Release(T)
extern "C" void ObjectPool_1_Release_m27736_gshared (ObjectPool_1_t6437 * __this, Object_t * ___element, const MethodInfo* method);
#define ObjectPool_1_Release_m27736(__this, ___element, method) (( void (*) (ObjectPool_1_t6437 *, Object_t *, const MethodInfo*))ObjectPool_1_Release_m27736_gshared)(__this, ___element, method)

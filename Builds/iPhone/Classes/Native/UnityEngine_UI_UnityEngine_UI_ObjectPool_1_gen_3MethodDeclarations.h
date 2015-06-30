#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.ObjectPool`1<System.Object>
struct ObjectPool_1_t5111;
// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t5110;
// System.Object
struct Object_t;

// System.Void UnityEngine.UI.ObjectPool`1<System.Object>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
extern "C" void ObjectPool_1__ctor_m25887_gshared (ObjectPool_1_t5111 * __this, UnityAction_1_t5110 * ___actionOnGet, UnityAction_1_t5110 * ___actionOnRelease, const MethodInfo* method);
#define ObjectPool_1__ctor_m25887(__this, ___actionOnGet, ___actionOnRelease, method) (( void (*) (ObjectPool_1_t5111 *, UnityAction_1_t5110 *, UnityAction_1_t5110 *, const MethodInfo*))ObjectPool_1__ctor_m25887_gshared)(__this, ___actionOnGet, ___actionOnRelease, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Object>::get_countAll()
extern "C" int32_t ObjectPool_1_get_countAll_m25889_gshared (ObjectPool_1_t5111 * __this, const MethodInfo* method);
#define ObjectPool_1_get_countAll_m25889(__this, method) (( int32_t (*) (ObjectPool_1_t5111 *, const MethodInfo*))ObjectPool_1_get_countAll_m25889_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Object>::set_countAll(System.Int32)
extern "C" void ObjectPool_1_set_countAll_m25891_gshared (ObjectPool_1_t5111 * __this, int32_t ___value, const MethodInfo* method);
#define ObjectPool_1_set_countAll_m25891(__this, ___value, method) (( void (*) (ObjectPool_1_t5111 *, int32_t, const MethodInfo*))ObjectPool_1_set_countAll_m25891_gshared)(__this, ___value, method)
// T UnityEngine.UI.ObjectPool`1<System.Object>::Get()
extern "C" Object_t * ObjectPool_1_Get_m25893_gshared (ObjectPool_1_t5111 * __this, const MethodInfo* method);
#define ObjectPool_1_Get_m25893(__this, method) (( Object_t * (*) (ObjectPool_1_t5111 *, const MethodInfo*))ObjectPool_1_Get_m25893_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Object>::Release(T)
extern "C" void ObjectPool_1_Release_m25895_gshared (ObjectPool_1_t5111 * __this, Object_t * ___element, const MethodInfo* method);
#define ObjectPool_1_Release_m25895(__this, ___element, method) (( void (*) (ObjectPool_1_t5111 *, Object_t *, const MethodInfo*))ObjectPool_1_Release_m25895_gshared)(__this, ___element, method)

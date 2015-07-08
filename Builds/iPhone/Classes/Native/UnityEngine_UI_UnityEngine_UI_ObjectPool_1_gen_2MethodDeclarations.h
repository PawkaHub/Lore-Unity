#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>
struct ObjectPool_1_t1220;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Component>>
struct UnityAction_1_t1221;
// System.Collections.Generic.List`1<UnityEngine.Component>
struct List_1_t491;

// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
// UnityEngine.UI.ObjectPool`1<System.Object>
#include "UnityEngine_UI_UnityEngine_UI_ObjectPool_1_gen_3MethodDeclarations.h"
#define ObjectPool_1__ctor_m5509(__this, ___actionOnGet, ___actionOnRelease, method) (( void (*) (ObjectPool_1_t1220 *, UnityAction_1_t1221 *, UnityAction_1_t1221 *, const MethodInfo*))ObjectPool_1__ctor_m27724_gshared)(__this, ___actionOnGet, ___actionOnRelease, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::get_countAll()
#define ObjectPool_1_get_countAll_m34551(__this, method) (( int32_t (*) (ObjectPool_1_t1220 *, const MethodInfo*))ObjectPool_1_get_countAll_m27726_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::set_countAll(System.Int32)
#define ObjectPool_1_set_countAll_m34552(__this, ___value, method) (( void (*) (ObjectPool_1_t1220 *, int32_t, const MethodInfo*))ObjectPool_1_set_countAll_m27728_gshared)(__this, ___value, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::get_countActive()
#define ObjectPool_1_get_countActive_m34553(__this, method) (( int32_t (*) (ObjectPool_1_t1220 *, const MethodInfo*))ObjectPool_1_get_countActive_m27730_gshared)(__this, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::get_countInactive()
#define ObjectPool_1_get_countInactive_m34554(__this, method) (( int32_t (*) (ObjectPool_1_t1220 *, const MethodInfo*))ObjectPool_1_get_countInactive_m27732_gshared)(__this, method)
// T UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::Get()
#define ObjectPool_1_Get_m5510(__this, method) (( List_1_t491 * (*) (ObjectPool_1_t1220 *, const MethodInfo*))ObjectPool_1_Get_m27734_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::Release(T)
#define ObjectPool_1_Release_m5511(__this, ___element, method) (( void (*) (ObjectPool_1_t1220 *, List_1_t491 *, const MethodInfo*))ObjectPool_1_Release_m27736_gshared)(__this, ___element, method)

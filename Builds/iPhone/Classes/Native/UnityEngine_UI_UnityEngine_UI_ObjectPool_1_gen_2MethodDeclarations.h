#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>
struct ObjectPool_1_t941;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Component>>
struct UnityAction_1_t942;
// System.Collections.Generic.List`1<UnityEngine.Component>
struct List_1_t463;

// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
// UnityEngine.UI.ObjectPool`1<System.Object>
#include "UnityEngine_UI_UnityEngine_UI_ObjectPool_1_gen_3MethodDeclarations.h"
#define ObjectPool_1__ctor_m5049(__this, ___actionOnGet, ___actionOnRelease, method) (( void (*) (ObjectPool_1_t941 *, UnityAction_1_t942 *, UnityAction_1_t942 *, const MethodInfo*))ObjectPool_1__ctor_m27307_gshared)(__this, ___actionOnGet, ___actionOnRelease, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::get_countAll()
#define ObjectPool_1_get_countAll_m33102(__this, method) (( int32_t (*) (ObjectPool_1_t941 *, const MethodInfo*))ObjectPool_1_get_countAll_m27309_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::set_countAll(System.Int32)
#define ObjectPool_1_set_countAll_m33103(__this, ___value, method) (( void (*) (ObjectPool_1_t941 *, int32_t, const MethodInfo*))ObjectPool_1_set_countAll_m27311_gshared)(__this, ___value, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::get_countActive()
#define ObjectPool_1_get_countActive_m33104(__this, method) (( int32_t (*) (ObjectPool_1_t941 *, const MethodInfo*))ObjectPool_1_get_countActive_m27313_gshared)(__this, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::get_countInactive()
#define ObjectPool_1_get_countInactive_m33105(__this, method) (( int32_t (*) (ObjectPool_1_t941 *, const MethodInfo*))ObjectPool_1_get_countInactive_m27315_gshared)(__this, method)
// T UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::Get()
#define ObjectPool_1_Get_m5050(__this, method) (( List_1_t463 * (*) (ObjectPool_1_t941 *, const MethodInfo*))ObjectPool_1_Get_m27317_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::Release(T)
#define ObjectPool_1_Release_m5051(__this, ___element, method) (( void (*) (ObjectPool_1_t941 *, List_1_t463 *, const MethodInfo*))ObjectPool_1_Release_m27319_gshared)(__this, ___element, method)

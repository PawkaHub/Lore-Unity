#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>
struct ObjectPool_1_t2030;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>
struct UnityAction_1_t2033;
// System.Collections.Generic.List`1<UnityEngine.UIVertex>
struct List_1_t2058;

// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
// UnityEngine.UI.ObjectPool`1<System.Object>
#include "UnityEngine_UI_UnityEngine_UI_ObjectPool_1_gen_3MethodDeclarations.h"
#define ObjectPool_1__ctor_m9364(__this, ___actionOnGet, ___actionOnRelease, method) (( void (*) (ObjectPool_1_t2030 *, UnityAction_1_t2033 *, UnityAction_1_t2033 *, const MethodInfo*))ObjectPool_1__ctor_m25887_gshared)(__this, ___actionOnGet, ___actionOnRelease, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>::get_countAll()
#define ObjectPool_1_get_countAll_m37531(__this, method) (( int32_t (*) (ObjectPool_1_t2030 *, const MethodInfo*))ObjectPool_1_get_countAll_m25889_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>::set_countAll(System.Int32)
#define ObjectPool_1_set_countAll_m37532(__this, ___value, method) (( void (*) (ObjectPool_1_t2030 *, int32_t, const MethodInfo*))ObjectPool_1_set_countAll_m25891_gshared)(__this, ___value, method)
// T UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>::Get()
#define ObjectPool_1_Get_m9370(__this, method) (( List_1_t2058 * (*) (ObjectPool_1_t2030 *, const MethodInfo*))ObjectPool_1_Get_m25893_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>::Release(T)
#define ObjectPool_1_Release_m9372(__this, ___element, method) (( void (*) (ObjectPool_1_t2030 *, List_1_t2058 *, const MethodInfo*))ObjectPool_1_Release_m25895_gshared)(__this, ___element, method)

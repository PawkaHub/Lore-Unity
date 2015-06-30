#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>
struct ObjectPool_1_t2121;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Component>>
struct UnityAction_1_t2122;
// System.Collections.Generic.List`1<UnityEngine.Component>
struct List_1_t463;

// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
// UnityEngine.UI.ObjectPool`1<System.Object>
#include "UnityEngine_UI_UnityEngine_UI_ObjectPool_1_gen_3MethodDeclarations.h"
#define ObjectPool_1__ctor_m9608(__this, ___actionOnGet, ___actionOnRelease, method) (( void (*) (ObjectPool_1_t2121 *, UnityAction_1_t2122 *, UnityAction_1_t2122 *, const MethodInfo*))ObjectPool_1__ctor_m25887_gshared)(__this, ___actionOnGet, ___actionOnRelease, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::get_countAll()
#define ObjectPool_1_get_countAll_m38797(__this, method) (( int32_t (*) (ObjectPool_1_t2121 *, const MethodInfo*))ObjectPool_1_get_countAll_m25889_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::set_countAll(System.Int32)
#define ObjectPool_1_set_countAll_m38798(__this, ___value, method) (( void (*) (ObjectPool_1_t2121 *, int32_t, const MethodInfo*))ObjectPool_1_set_countAll_m25891_gshared)(__this, ___value, method)
// T UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::Get()
#define ObjectPool_1_Get_m9609(__this, method) (( List_1_t463 * (*) (ObjectPool_1_t2121 *, const MethodInfo*))ObjectPool_1_Get_m25893_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::Release(T)
#define ObjectPool_1_Release_m9610(__this, ___element, method) (( void (*) (ObjectPool_1_t2121 *, List_1_t463 *, const MethodInfo*))ObjectPool_1_Release_m25895_gshared)(__this, ___element, method)

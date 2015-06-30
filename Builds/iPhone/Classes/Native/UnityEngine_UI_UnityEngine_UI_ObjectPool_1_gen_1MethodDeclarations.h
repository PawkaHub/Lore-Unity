#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>
struct ObjectPool_1_t2118;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>
struct UnityAction_1_t2119;
// System.Collections.Generic.List`1<UnityEngine.Canvas>
struct List_1_t2154;

// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
// UnityEngine.UI.ObjectPool`1<System.Object>
#include "UnityEngine_UI_UnityEngine_UI_ObjectPool_1_gen_3MethodDeclarations.h"
#define ObjectPool_1__ctor_m9604(__this, ___actionOnGet, ___actionOnRelease, method) (( void (*) (ObjectPool_1_t2118 *, UnityAction_1_t2119 *, UnityAction_1_t2119 *, const MethodInfo*))ObjectPool_1__ctor_m25887_gshared)(__this, ___actionOnGet, ___actionOnRelease, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::get_countAll()
#define ObjectPool_1_get_countAll_m38780(__this, method) (( int32_t (*) (ObjectPool_1_t2118 *, const MethodInfo*))ObjectPool_1_get_countAll_m25889_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::set_countAll(System.Int32)
#define ObjectPool_1_set_countAll_m38781(__this, ___value, method) (( void (*) (ObjectPool_1_t2118 *, int32_t, const MethodInfo*))ObjectPool_1_set_countAll_m25891_gshared)(__this, ___value, method)
// T UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::Get()
#define ObjectPool_1_Get_m9605(__this, method) (( List_1_t2154 * (*) (ObjectPool_1_t2118 *, const MethodInfo*))ObjectPool_1_Get_m25893_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::Release(T)
#define ObjectPool_1_Release_m9606(__this, ___element, method) (( void (*) (ObjectPool_1_t2118 *, List_1_t2154 *, const MethodInfo*))ObjectPool_1_Release_m25895_gshared)(__this, ___element, method)

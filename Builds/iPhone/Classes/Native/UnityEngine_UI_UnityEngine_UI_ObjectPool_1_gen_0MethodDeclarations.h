#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>
struct ObjectPool_1_t845;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>
struct UnityAction_1_t848;
// System.Collections.Generic.List`1<UnityEngine.UIVertex>
struct List_1_t878;

// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
// UnityEngine.UI.ObjectPool`1<System.Object>
#include "UnityEngine_UI_UnityEngine_UI_ObjectPool_1_gen_3MethodDeclarations.h"
#define ObjectPool_1__ctor_m4794(__this, ___actionOnGet, ___actionOnRelease, method) (( void (*) (ObjectPool_1_t845 *, UnityAction_1_t848 *, UnityAction_1_t848 *, const MethodInfo*))ObjectPool_1__ctor_m27307_gshared)(__this, ___actionOnGet, ___actionOnRelease, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>::get_countAll()
#define ObjectPool_1_get_countAll_m31799(__this, method) (( int32_t (*) (ObjectPool_1_t845 *, const MethodInfo*))ObjectPool_1_get_countAll_m27309_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>::set_countAll(System.Int32)
#define ObjectPool_1_set_countAll_m31800(__this, ___value, method) (( void (*) (ObjectPool_1_t845 *, int32_t, const MethodInfo*))ObjectPool_1_set_countAll_m27311_gshared)(__this, ___value, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>::get_countActive()
#define ObjectPool_1_get_countActive_m31801(__this, method) (( int32_t (*) (ObjectPool_1_t845 *, const MethodInfo*))ObjectPool_1_get_countActive_m27313_gshared)(__this, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>::get_countInactive()
#define ObjectPool_1_get_countInactive_m31802(__this, method) (( int32_t (*) (ObjectPool_1_t845 *, const MethodInfo*))ObjectPool_1_get_countInactive_m27315_gshared)(__this, method)
// T UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>::Get()
#define ObjectPool_1_Get_m4800(__this, method) (( List_1_t878 * (*) (ObjectPool_1_t845 *, const MethodInfo*))ObjectPool_1_Get_m27317_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>::Release(T)
#define ObjectPool_1_Release_m4802(__this, ___element, method) (( void (*) (ObjectPool_1_t845 *, List_1_t878 *, const MethodInfo*))ObjectPool_1_Release_m27319_gshared)(__this, ___element, method)

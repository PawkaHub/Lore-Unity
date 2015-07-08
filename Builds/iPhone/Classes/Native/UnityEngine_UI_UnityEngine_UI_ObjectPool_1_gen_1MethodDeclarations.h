﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>
struct ObjectPool_1_t1217;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>
struct UnityAction_1_t1218;
// System.Collections.Generic.List`1<UnityEngine.Canvas>
struct List_1_t1239;

// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
// UnityEngine.UI.ObjectPool`1<System.Object>
#include "UnityEngine_UI_UnityEngine_UI_ObjectPool_1_gen_3MethodDeclarations.h"
#define ObjectPool_1__ctor_m5505(__this, ___actionOnGet, ___actionOnRelease, method) (( void (*) (ObjectPool_1_t1217 *, UnityAction_1_t1218 *, UnityAction_1_t1218 *, const MethodInfo*))ObjectPool_1__ctor_m27724_gshared)(__this, ___actionOnGet, ___actionOnRelease, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::get_countAll()
#define ObjectPool_1_get_countAll_m34532(__this, method) (( int32_t (*) (ObjectPool_1_t1217 *, const MethodInfo*))ObjectPool_1_get_countAll_m27726_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::set_countAll(System.Int32)
#define ObjectPool_1_set_countAll_m34533(__this, ___value, method) (( void (*) (ObjectPool_1_t1217 *, int32_t, const MethodInfo*))ObjectPool_1_set_countAll_m27728_gshared)(__this, ___value, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::get_countActive()
#define ObjectPool_1_get_countActive_m34534(__this, method) (( int32_t (*) (ObjectPool_1_t1217 *, const MethodInfo*))ObjectPool_1_get_countActive_m27730_gshared)(__this, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::get_countInactive()
#define ObjectPool_1_get_countInactive_m34535(__this, method) (( int32_t (*) (ObjectPool_1_t1217 *, const MethodInfo*))ObjectPool_1_get_countInactive_m27732_gshared)(__this, method)
// T UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::Get()
#define ObjectPool_1_Get_m5506(__this, method) (( List_1_t1239 * (*) (ObjectPool_1_t1217 *, const MethodInfo*))ObjectPool_1_Get_m27734_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::Release(T)
#define ObjectPool_1_Release_m5507(__this, ___element, method) (( void (*) (ObjectPool_1_t1217 *, List_1_t1239 *, const MethodInfo*))ObjectPool_1_Release_m27736_gshared)(__this, ___element, method)

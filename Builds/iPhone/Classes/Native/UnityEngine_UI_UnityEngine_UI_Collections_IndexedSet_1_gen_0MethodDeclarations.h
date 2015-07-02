﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>
struct IndexedSet_1_t2171;
// UnityEngine.UI.Graphic
struct Graphic_t219;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UI.Graphic>
struct IEnumerator_1_t6950;
// UnityEngine.UI.Graphic[]
struct GraphicU5BU5D_t231;
// System.Predicate`1<UnityEngine.UI.Graphic>
struct Predicate_1_t5893;
// System.Comparison`1<UnityEngine.UI.Graphic>
struct Comparison_1_t2036;

// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::.ctor()
// UnityEngine.UI.Collections.IndexedSet`1<System.Object>
#include "UnityEngine_UI_UnityEngine_UI_Collections_IndexedSet_1_gen_1MethodDeclarations.h"
#define IndexedSet_1__ctor_m9397(__this, method) (( void (*) (IndexedSet_1_t2171 *, const MethodInfo*))IndexedSet_1__ctor_m37173_gshared)(__this, method)
// System.Collections.IEnumerator UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::System.Collections.IEnumerable.GetEnumerator()
#define IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m38019(__this, method) (( Object_t * (*) (IndexedSet_1_t2171 *, const MethodInfo*))IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m37175_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::Add(T)
#define IndexedSet_1_Add_m38020(__this, ___item, method) (( void (*) (IndexedSet_1_t2171 *, Graphic_t219 *, const MethodInfo*))IndexedSet_1_Add_m37177_gshared)(__this, ___item, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::Remove(T)
#define IndexedSet_1_Remove_m38021(__this, ___item, method) (( bool (*) (IndexedSet_1_t2171 *, Graphic_t219 *, const MethodInfo*))IndexedSet_1_Remove_m37179_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<T> UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::GetEnumerator()
#define IndexedSet_1_GetEnumerator_m38022(__this, method) (( Object_t* (*) (IndexedSet_1_t2171 *, const MethodInfo*))IndexedSet_1_GetEnumerator_m37181_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::Clear()
#define IndexedSet_1_Clear_m38023(__this, method) (( void (*) (IndexedSet_1_t2171 *, const MethodInfo*))IndexedSet_1_Clear_m37183_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::Contains(T)
#define IndexedSet_1_Contains_m38024(__this, ___item, method) (( bool (*) (IndexedSet_1_t2171 *, Graphic_t219 *, const MethodInfo*))IndexedSet_1_Contains_m37185_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::CopyTo(T[],System.Int32)
#define IndexedSet_1_CopyTo_m38025(__this, ___array, ___arrayIndex, method) (( void (*) (IndexedSet_1_t2171 *, GraphicU5BU5D_t231*, int32_t, const MethodInfo*))IndexedSet_1_CopyTo_m37187_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::get_Count()
#define IndexedSet_1_get_Count_m38026(__this, method) (( int32_t (*) (IndexedSet_1_t2171 *, const MethodInfo*))IndexedSet_1_get_Count_m37189_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::get_IsReadOnly()
#define IndexedSet_1_get_IsReadOnly_m38027(__this, method) (( bool (*) (IndexedSet_1_t2171 *, const MethodInfo*))IndexedSet_1_get_IsReadOnly_m37191_gshared)(__this, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::IndexOf(T)
#define IndexedSet_1_IndexOf_m38028(__this, ___item, method) (( int32_t (*) (IndexedSet_1_t2171 *, Graphic_t219 *, const MethodInfo*))IndexedSet_1_IndexOf_m37193_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::Insert(System.Int32,T)
#define IndexedSet_1_Insert_m38029(__this, ___index, ___item, method) (( void (*) (IndexedSet_1_t2171 *, int32_t, Graphic_t219 *, const MethodInfo*))IndexedSet_1_Insert_m37195_gshared)(__this, ___index, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::RemoveAt(System.Int32)
#define IndexedSet_1_RemoveAt_m38030(__this, ___index, method) (( void (*) (IndexedSet_1_t2171 *, int32_t, const MethodInfo*))IndexedSet_1_RemoveAt_m37197_gshared)(__this, ___index, method)
// T UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::get_Item(System.Int32)
#define IndexedSet_1_get_Item_m38031(__this, ___index, method) (( Graphic_t219 * (*) (IndexedSet_1_t2171 *, int32_t, const MethodInfo*))IndexedSet_1_get_Item_m37199_gshared)(__this, ___index, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::set_Item(System.Int32,T)
#define IndexedSet_1_set_Item_m38032(__this, ___index, ___value, method) (( void (*) (IndexedSet_1_t2171 *, int32_t, Graphic_t219 *, const MethodInfo*))IndexedSet_1_set_Item_m37201_gshared)(__this, ___index, ___value, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::RemoveAll(System.Predicate`1<T>)
#define IndexedSet_1_RemoveAll_m38033(__this, ___match, method) (( void (*) (IndexedSet_1_t2171 *, Predicate_1_t5893 *, const MethodInfo*))IndexedSet_1_RemoveAll_m37202_gshared)(__this, ___match, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::Sort(System.Comparison`1<T>)
#define IndexedSet_1_Sort_m38034(__this, ___sortLayoutFunction, method) (( void (*) (IndexedSet_1_t2171 *, Comparison_1_t2036 *, const MethodInfo*))IndexedSet_1_Sort_m37203_gshared)(__this, ___sortLayoutFunction, method)
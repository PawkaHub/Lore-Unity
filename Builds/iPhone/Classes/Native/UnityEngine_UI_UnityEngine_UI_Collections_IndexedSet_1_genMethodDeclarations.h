#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.ICanvasElement>
struct IndexedSet_1_t1127;
// UnityEngine.UI.ICanvasElement
struct ICanvasElement_t1048;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UI.ICanvasElement>
struct IEnumerator_1_t10142;
// UnityEngine.UI.ICanvasElement[]
struct ICanvasElementU5BU5D_t6800;
// System.Predicate`1<UnityEngine.UI.ICanvasElement>
struct Predicate_1_t1129;
// System.Comparison`1<UnityEngine.UI.ICanvasElement>
struct Comparison_1_t1128;

// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.ICanvasElement>::.ctor()
// UnityEngine.UI.Collections.IndexedSet`1<System.Object>
#include "UnityEngine_UI_UnityEngine_UI_Collections_IndexedSet_1_gen_1MethodDeclarations.h"
#define IndexedSet_1__ctor_m5306(__this, method) (( void (*) (IndexedSet_1_t1127 *, const MethodInfo*))IndexedSet_1__ctor_m33065_gshared)(__this, method)
// System.Collections.IEnumerator UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.ICanvasElement>::System.Collections.IEnumerable.GetEnumerator()
#define IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m33066(__this, method) (( Object_t * (*) (IndexedSet_1_t1127 *, const MethodInfo*))IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m33067_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.ICanvasElement>::Add(T)
#define IndexedSet_1_Add_m33068(__this, ___item, method) (( void (*) (IndexedSet_1_t1127 *, Object_t *, const MethodInfo*))IndexedSet_1_Add_m33069_gshared)(__this, ___item, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.ICanvasElement>::Remove(T)
#define IndexedSet_1_Remove_m33070(__this, ___item, method) (( bool (*) (IndexedSet_1_t1127 *, Object_t *, const MethodInfo*))IndexedSet_1_Remove_m33071_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<T> UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.ICanvasElement>::GetEnumerator()
#define IndexedSet_1_GetEnumerator_m33072(__this, method) (( Object_t* (*) (IndexedSet_1_t1127 *, const MethodInfo*))IndexedSet_1_GetEnumerator_m33073_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.ICanvasElement>::Clear()
#define IndexedSet_1_Clear_m33074(__this, method) (( void (*) (IndexedSet_1_t1127 *, const MethodInfo*))IndexedSet_1_Clear_m33075_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.ICanvasElement>::Contains(T)
#define IndexedSet_1_Contains_m33076(__this, ___item, method) (( bool (*) (IndexedSet_1_t1127 *, Object_t *, const MethodInfo*))IndexedSet_1_Contains_m33077_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.ICanvasElement>::CopyTo(T[],System.Int32)
#define IndexedSet_1_CopyTo_m33078(__this, ___array, ___arrayIndex, method) (( void (*) (IndexedSet_1_t1127 *, ICanvasElementU5BU5D_t6800*, int32_t, const MethodInfo*))IndexedSet_1_CopyTo_m33079_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.ICanvasElement>::get_Count()
#define IndexedSet_1_get_Count_m33080(__this, method) (( int32_t (*) (IndexedSet_1_t1127 *, const MethodInfo*))IndexedSet_1_get_Count_m33081_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.ICanvasElement>::get_IsReadOnly()
#define IndexedSet_1_get_IsReadOnly_m33082(__this, method) (( bool (*) (IndexedSet_1_t1127 *, const MethodInfo*))IndexedSet_1_get_IsReadOnly_m33083_gshared)(__this, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.ICanvasElement>::IndexOf(T)
#define IndexedSet_1_IndexOf_m33084(__this, ___item, method) (( int32_t (*) (IndexedSet_1_t1127 *, Object_t *, const MethodInfo*))IndexedSet_1_IndexOf_m33085_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.ICanvasElement>::Insert(System.Int32,T)
#define IndexedSet_1_Insert_m33086(__this, ___index, ___item, method) (( void (*) (IndexedSet_1_t1127 *, int32_t, Object_t *, const MethodInfo*))IndexedSet_1_Insert_m33087_gshared)(__this, ___index, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.ICanvasElement>::RemoveAt(System.Int32)
#define IndexedSet_1_RemoveAt_m33088(__this, ___index, method) (( void (*) (IndexedSet_1_t1127 *, int32_t, const MethodInfo*))IndexedSet_1_RemoveAt_m33089_gshared)(__this, ___index, method)
// T UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.ICanvasElement>::get_Item(System.Int32)
#define IndexedSet_1_get_Item_m33090(__this, ___index, method) (( Object_t * (*) (IndexedSet_1_t1127 *, int32_t, const MethodInfo*))IndexedSet_1_get_Item_m33091_gshared)(__this, ___index, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.ICanvasElement>::set_Item(System.Int32,T)
#define IndexedSet_1_set_Item_m33092(__this, ___index, ___value, method) (( void (*) (IndexedSet_1_t1127 *, int32_t, Object_t *, const MethodInfo*))IndexedSet_1_set_Item_m33093_gshared)(__this, ___index, ___value, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.ICanvasElement>::RemoveAll(System.Predicate`1<T>)
#define IndexedSet_1_RemoveAll_m5311(__this, ___match, method) (( void (*) (IndexedSet_1_t1127 *, Predicate_1_t1129 *, const MethodInfo*))IndexedSet_1_RemoveAll_m33094_gshared)(__this, ___match, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.ICanvasElement>::Sort(System.Comparison`1<T>)
#define IndexedSet_1_Sort_m5312(__this, ___sortLayoutFunction, method) (( void (*) (IndexedSet_1_t1127 *, Comparison_1_t1128 *, const MethodInfo*))IndexedSet_1_Sort_m33095_gshared)(__this, ___sortLayoutFunction, method)

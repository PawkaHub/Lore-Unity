#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>
struct IndexedSet_1_t1255;
// UnityEngine.UI.Graphic
struct Graphic_t219;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UI.Graphic>
struct IEnumerator_1_t10171;
// UnityEngine.UI.Graphic[]
struct GraphicU5BU5D_t231;
// System.Predicate`1<UnityEngine.UI.Graphic>
struct Predicate_1_t6827;
// System.Comparison`1<UnityEngine.UI.Graphic>
struct Comparison_1_t1139;

// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::.ctor()
// UnityEngine.UI.Collections.IndexedSet`1<System.Object>
#include "UnityEngine_UI_UnityEngine_UI_Collections_IndexedSet_1_gen_1MethodDeclarations.h"
#define IndexedSet_1__ctor_m5359(__this, method) (( void (*) (IndexedSet_1_t1255 *, const MethodInfo*))IndexedSet_1__ctor_m33065_gshared)(__this, method)
// System.Collections.IEnumerator UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::System.Collections.IEnumerable.GetEnumerator()
#define IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m33768(__this, method) (( Object_t * (*) (IndexedSet_1_t1255 *, const MethodInfo*))IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m33067_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::Add(T)
#define IndexedSet_1_Add_m33769(__this, ___item, method) (( void (*) (IndexedSet_1_t1255 *, Graphic_t219 *, const MethodInfo*))IndexedSet_1_Add_m33069_gshared)(__this, ___item, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::Remove(T)
#define IndexedSet_1_Remove_m33770(__this, ___item, method) (( bool (*) (IndexedSet_1_t1255 *, Graphic_t219 *, const MethodInfo*))IndexedSet_1_Remove_m33071_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<T> UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::GetEnumerator()
#define IndexedSet_1_GetEnumerator_m33771(__this, method) (( Object_t* (*) (IndexedSet_1_t1255 *, const MethodInfo*))IndexedSet_1_GetEnumerator_m33073_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::Clear()
#define IndexedSet_1_Clear_m33772(__this, method) (( void (*) (IndexedSet_1_t1255 *, const MethodInfo*))IndexedSet_1_Clear_m33075_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::Contains(T)
#define IndexedSet_1_Contains_m33773(__this, ___item, method) (( bool (*) (IndexedSet_1_t1255 *, Graphic_t219 *, const MethodInfo*))IndexedSet_1_Contains_m33077_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::CopyTo(T[],System.Int32)
#define IndexedSet_1_CopyTo_m33774(__this, ___array, ___arrayIndex, method) (( void (*) (IndexedSet_1_t1255 *, GraphicU5BU5D_t231*, int32_t, const MethodInfo*))IndexedSet_1_CopyTo_m33079_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::get_Count()
#define IndexedSet_1_get_Count_m33775(__this, method) (( int32_t (*) (IndexedSet_1_t1255 *, const MethodInfo*))IndexedSet_1_get_Count_m33081_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::get_IsReadOnly()
#define IndexedSet_1_get_IsReadOnly_m33776(__this, method) (( bool (*) (IndexedSet_1_t1255 *, const MethodInfo*))IndexedSet_1_get_IsReadOnly_m33083_gshared)(__this, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::IndexOf(T)
#define IndexedSet_1_IndexOf_m33777(__this, ___item, method) (( int32_t (*) (IndexedSet_1_t1255 *, Graphic_t219 *, const MethodInfo*))IndexedSet_1_IndexOf_m33085_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::Insert(System.Int32,T)
#define IndexedSet_1_Insert_m33778(__this, ___index, ___item, method) (( void (*) (IndexedSet_1_t1255 *, int32_t, Graphic_t219 *, const MethodInfo*))IndexedSet_1_Insert_m33087_gshared)(__this, ___index, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::RemoveAt(System.Int32)
#define IndexedSet_1_RemoveAt_m33779(__this, ___index, method) (( void (*) (IndexedSet_1_t1255 *, int32_t, const MethodInfo*))IndexedSet_1_RemoveAt_m33089_gshared)(__this, ___index, method)
// T UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::get_Item(System.Int32)
#define IndexedSet_1_get_Item_m33780(__this, ___index, method) (( Graphic_t219 * (*) (IndexedSet_1_t1255 *, int32_t, const MethodInfo*))IndexedSet_1_get_Item_m33091_gshared)(__this, ___index, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::set_Item(System.Int32,T)
#define IndexedSet_1_set_Item_m33781(__this, ___index, ___value, method) (( void (*) (IndexedSet_1_t1255 *, int32_t, Graphic_t219 *, const MethodInfo*))IndexedSet_1_set_Item_m33093_gshared)(__this, ___index, ___value, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::RemoveAll(System.Predicate`1<T>)
#define IndexedSet_1_RemoveAll_m33782(__this, ___match, method) (( void (*) (IndexedSet_1_t1255 *, Predicate_1_t6827 *, const MethodInfo*))IndexedSet_1_RemoveAll_m33094_gshared)(__this, ___match, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::Sort(System.Comparison`1<T>)
#define IndexedSet_1_Sort_m33783(__this, ___sortLayoutFunction, method) (( void (*) (IndexedSet_1_t1255 *, Comparison_1_t1139 *, const MethodInfo*))IndexedSet_1_Sort_m33095_gshared)(__this, ___sortLayoutFunction, method)

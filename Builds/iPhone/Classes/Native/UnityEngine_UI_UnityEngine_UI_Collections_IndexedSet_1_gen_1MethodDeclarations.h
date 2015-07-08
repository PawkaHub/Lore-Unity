#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.Collections.IndexedSet`1<System.Object>
struct IndexedSet_1_t6799;
// System.Object
struct Object_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t838;
// System.Object[]
struct ObjectU5BU5D_t21;
// System.Predicate`1<System.Object>
struct Predicate_1_t6210;
// System.Comparison`1<System.Object>
struct Comparison_1_t6217;

// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::.ctor()
extern "C" void IndexedSet_1__ctor_m33065_gshared (IndexedSet_1_t6799 * __this, const MethodInfo* method);
#define IndexedSet_1__ctor_m33065(__this, method) (( void (*) (IndexedSet_1_t6799 *, const MethodInfo*))IndexedSet_1__ctor_m33065_gshared)(__this, method)
// System.Collections.IEnumerator UnityEngine.UI.Collections.IndexedSet`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m33067_gshared (IndexedSet_1_t6799 * __this, const MethodInfo* method);
#define IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m33067(__this, method) (( Object_t * (*) (IndexedSet_1_t6799 *, const MethodInfo*))IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m33067_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Add(T)
extern "C" void IndexedSet_1_Add_m33069_gshared (IndexedSet_1_t6799 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Add_m33069(__this, ___item, method) (( void (*) (IndexedSet_1_t6799 *, Object_t *, const MethodInfo*))IndexedSet_1_Add_m33069_gshared)(__this, ___item, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Remove(T)
extern "C" bool IndexedSet_1_Remove_m33071_gshared (IndexedSet_1_t6799 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Remove_m33071(__this, ___item, method) (( bool (*) (IndexedSet_1_t6799 *, Object_t *, const MethodInfo*))IndexedSet_1_Remove_m33071_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<T> UnityEngine.UI.Collections.IndexedSet`1<System.Object>::GetEnumerator()
extern "C" Object_t* IndexedSet_1_GetEnumerator_m33073_gshared (IndexedSet_1_t6799 * __this, const MethodInfo* method);
#define IndexedSet_1_GetEnumerator_m33073(__this, method) (( Object_t* (*) (IndexedSet_1_t6799 *, const MethodInfo*))IndexedSet_1_GetEnumerator_m33073_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Clear()
extern "C" void IndexedSet_1_Clear_m33075_gshared (IndexedSet_1_t6799 * __this, const MethodInfo* method);
#define IndexedSet_1_Clear_m33075(__this, method) (( void (*) (IndexedSet_1_t6799 *, const MethodInfo*))IndexedSet_1_Clear_m33075_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Contains(T)
extern "C" bool IndexedSet_1_Contains_m33077_gshared (IndexedSet_1_t6799 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Contains_m33077(__this, ___item, method) (( bool (*) (IndexedSet_1_t6799 *, Object_t *, const MethodInfo*))IndexedSet_1_Contains_m33077_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void IndexedSet_1_CopyTo_m33079_gshared (IndexedSet_1_t6799 * __this, ObjectU5BU5D_t21* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define IndexedSet_1_CopyTo_m33079(__this, ___array, ___arrayIndex, method) (( void (*) (IndexedSet_1_t6799 *, ObjectU5BU5D_t21*, int32_t, const MethodInfo*))IndexedSet_1_CopyTo_m33079_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_Count()
extern "C" int32_t IndexedSet_1_get_Count_m33081_gshared (IndexedSet_1_t6799 * __this, const MethodInfo* method);
#define IndexedSet_1_get_Count_m33081(__this, method) (( int32_t (*) (IndexedSet_1_t6799 *, const MethodInfo*))IndexedSet_1_get_Count_m33081_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_IsReadOnly()
extern "C" bool IndexedSet_1_get_IsReadOnly_m33083_gshared (IndexedSet_1_t6799 * __this, const MethodInfo* method);
#define IndexedSet_1_get_IsReadOnly_m33083(__this, method) (( bool (*) (IndexedSet_1_t6799 *, const MethodInfo*))IndexedSet_1_get_IsReadOnly_m33083_gshared)(__this, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<System.Object>::IndexOf(T)
extern "C" int32_t IndexedSet_1_IndexOf_m33085_gshared (IndexedSet_1_t6799 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_IndexOf_m33085(__this, ___item, method) (( int32_t (*) (IndexedSet_1_t6799 *, Object_t *, const MethodInfo*))IndexedSet_1_IndexOf_m33085_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Insert(System.Int32,T)
extern "C" void IndexedSet_1_Insert_m33087_gshared (IndexedSet_1_t6799 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Insert_m33087(__this, ___index, ___item, method) (( void (*) (IndexedSet_1_t6799 *, int32_t, Object_t *, const MethodInfo*))IndexedSet_1_Insert_m33087_gshared)(__this, ___index, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::RemoveAt(System.Int32)
extern "C" void IndexedSet_1_RemoveAt_m33089_gshared (IndexedSet_1_t6799 * __this, int32_t ___index, const MethodInfo* method);
#define IndexedSet_1_RemoveAt_m33089(__this, ___index, method) (( void (*) (IndexedSet_1_t6799 *, int32_t, const MethodInfo*))IndexedSet_1_RemoveAt_m33089_gshared)(__this, ___index, method)
// T UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * IndexedSet_1_get_Item_m33091_gshared (IndexedSet_1_t6799 * __this, int32_t ___index, const MethodInfo* method);
#define IndexedSet_1_get_Item_m33091(__this, ___index, method) (( Object_t * (*) (IndexedSet_1_t6799 *, int32_t, const MethodInfo*))IndexedSet_1_get_Item_m33091_gshared)(__this, ___index, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::set_Item(System.Int32,T)
extern "C" void IndexedSet_1_set_Item_m33093_gshared (IndexedSet_1_t6799 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define IndexedSet_1_set_Item_m33093(__this, ___index, ___value, method) (( void (*) (IndexedSet_1_t6799 *, int32_t, Object_t *, const MethodInfo*))IndexedSet_1_set_Item_m33093_gshared)(__this, ___index, ___value, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::RemoveAll(System.Predicate`1<T>)
extern "C" void IndexedSet_1_RemoveAll_m33094_gshared (IndexedSet_1_t6799 * __this, Predicate_1_t6210 * ___match, const MethodInfo* method);
#define IndexedSet_1_RemoveAll_m33094(__this, ___match, method) (( void (*) (IndexedSet_1_t6799 *, Predicate_1_t6210 *, const MethodInfo*))IndexedSet_1_RemoveAll_m33094_gshared)(__this, ___match, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Sort(System.Comparison`1<T>)
extern "C" void IndexedSet_1_Sort_m33095_gshared (IndexedSet_1_t6799 * __this, Comparison_1_t6217 * ___sortLayoutFunction, const MethodInfo* method);
#define IndexedSet_1_Sort_m33095(__this, ___sortLayoutFunction, method) (( void (*) (IndexedSet_1_t6799 *, Comparison_1_t6217 *, const MethodInfo*))IndexedSet_1_Sort_m33095_gshared)(__this, ___sortLayoutFunction, method)

#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.Collections.IndexedSet`1<System.Object>
struct IndexedSet_1_t5856;
// System.Object
struct Object_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t718;
// System.Object[]
struct ObjectU5BU5D_t21;
// System.Predicate`1<System.Object>
struct Predicate_1_t4882;
// System.Comparison`1<System.Object>
struct Comparison_1_t4889;

// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::.ctor()
extern "C" void IndexedSet_1__ctor_m37173_gshared (IndexedSet_1_t5856 * __this, const MethodInfo* method);
#define IndexedSet_1__ctor_m37173(__this, method) (( void (*) (IndexedSet_1_t5856 *, const MethodInfo*))IndexedSet_1__ctor_m37173_gshared)(__this, method)
// System.Collections.IEnumerator UnityEngine.UI.Collections.IndexedSet`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m37175_gshared (IndexedSet_1_t5856 * __this, const MethodInfo* method);
#define IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m37175(__this, method) (( Object_t * (*) (IndexedSet_1_t5856 *, const MethodInfo*))IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m37175_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Add(T)
extern "C" void IndexedSet_1_Add_m37177_gshared (IndexedSet_1_t5856 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Add_m37177(__this, ___item, method) (( void (*) (IndexedSet_1_t5856 *, Object_t *, const MethodInfo*))IndexedSet_1_Add_m37177_gshared)(__this, ___item, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Remove(T)
extern "C" bool IndexedSet_1_Remove_m37179_gshared (IndexedSet_1_t5856 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Remove_m37179(__this, ___item, method) (( bool (*) (IndexedSet_1_t5856 *, Object_t *, const MethodInfo*))IndexedSet_1_Remove_m37179_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<T> UnityEngine.UI.Collections.IndexedSet`1<System.Object>::GetEnumerator()
extern "C" Object_t* IndexedSet_1_GetEnumerator_m37181_gshared (IndexedSet_1_t5856 * __this, const MethodInfo* method);
#define IndexedSet_1_GetEnumerator_m37181(__this, method) (( Object_t* (*) (IndexedSet_1_t5856 *, const MethodInfo*))IndexedSet_1_GetEnumerator_m37181_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Clear()
extern "C" void IndexedSet_1_Clear_m37183_gshared (IndexedSet_1_t5856 * __this, const MethodInfo* method);
#define IndexedSet_1_Clear_m37183(__this, method) (( void (*) (IndexedSet_1_t5856 *, const MethodInfo*))IndexedSet_1_Clear_m37183_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Contains(T)
extern "C" bool IndexedSet_1_Contains_m37185_gshared (IndexedSet_1_t5856 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Contains_m37185(__this, ___item, method) (( bool (*) (IndexedSet_1_t5856 *, Object_t *, const MethodInfo*))IndexedSet_1_Contains_m37185_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void IndexedSet_1_CopyTo_m37187_gshared (IndexedSet_1_t5856 * __this, ObjectU5BU5D_t21* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define IndexedSet_1_CopyTo_m37187(__this, ___array, ___arrayIndex, method) (( void (*) (IndexedSet_1_t5856 *, ObjectU5BU5D_t21*, int32_t, const MethodInfo*))IndexedSet_1_CopyTo_m37187_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_Count()
extern "C" int32_t IndexedSet_1_get_Count_m37189_gshared (IndexedSet_1_t5856 * __this, const MethodInfo* method);
#define IndexedSet_1_get_Count_m37189(__this, method) (( int32_t (*) (IndexedSet_1_t5856 *, const MethodInfo*))IndexedSet_1_get_Count_m37189_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_IsReadOnly()
extern "C" bool IndexedSet_1_get_IsReadOnly_m37191_gshared (IndexedSet_1_t5856 * __this, const MethodInfo* method);
#define IndexedSet_1_get_IsReadOnly_m37191(__this, method) (( bool (*) (IndexedSet_1_t5856 *, const MethodInfo*))IndexedSet_1_get_IsReadOnly_m37191_gshared)(__this, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<System.Object>::IndexOf(T)
extern "C" int32_t IndexedSet_1_IndexOf_m37193_gshared (IndexedSet_1_t5856 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_IndexOf_m37193(__this, ___item, method) (( int32_t (*) (IndexedSet_1_t5856 *, Object_t *, const MethodInfo*))IndexedSet_1_IndexOf_m37193_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Insert(System.Int32,T)
extern "C" void IndexedSet_1_Insert_m37195_gshared (IndexedSet_1_t5856 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Insert_m37195(__this, ___index, ___item, method) (( void (*) (IndexedSet_1_t5856 *, int32_t, Object_t *, const MethodInfo*))IndexedSet_1_Insert_m37195_gshared)(__this, ___index, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::RemoveAt(System.Int32)
extern "C" void IndexedSet_1_RemoveAt_m37197_gshared (IndexedSet_1_t5856 * __this, int32_t ___index, const MethodInfo* method);
#define IndexedSet_1_RemoveAt_m37197(__this, ___index, method) (( void (*) (IndexedSet_1_t5856 *, int32_t, const MethodInfo*))IndexedSet_1_RemoveAt_m37197_gshared)(__this, ___index, method)
// T UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * IndexedSet_1_get_Item_m37199_gshared (IndexedSet_1_t5856 * __this, int32_t ___index, const MethodInfo* method);
#define IndexedSet_1_get_Item_m37199(__this, ___index, method) (( Object_t * (*) (IndexedSet_1_t5856 *, int32_t, const MethodInfo*))IndexedSet_1_get_Item_m37199_gshared)(__this, ___index, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::set_Item(System.Int32,T)
extern "C" void IndexedSet_1_set_Item_m37201_gshared (IndexedSet_1_t5856 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define IndexedSet_1_set_Item_m37201(__this, ___index, ___value, method) (( void (*) (IndexedSet_1_t5856 *, int32_t, Object_t *, const MethodInfo*))IndexedSet_1_set_Item_m37201_gshared)(__this, ___index, ___value, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::RemoveAll(System.Predicate`1<T>)
extern "C" void IndexedSet_1_RemoveAll_m37202_gshared (IndexedSet_1_t5856 * __this, Predicate_1_t4882 * ___match, const MethodInfo* method);
#define IndexedSet_1_RemoveAll_m37202(__this, ___match, method) (( void (*) (IndexedSet_1_t5856 *, Predicate_1_t4882 *, const MethodInfo*))IndexedSet_1_RemoveAll_m37202_gshared)(__this, ___match, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Sort(System.Comparison`1<T>)
extern "C" void IndexedSet_1_Sort_m37203_gshared (IndexedSet_1_t5856 * __this, Comparison_1_t4889 * ___sortLayoutFunction, const MethodInfo* method);
#define IndexedSet_1_Sort_m37203(__this, ___sortLayoutFunction, method) (( void (*) (IndexedSet_1_t5856 *, Comparison_1_t4889 *, const MethodInfo*))IndexedSet_1_Sort_m37203_gshared)(__this, ___sortLayoutFunction, method)

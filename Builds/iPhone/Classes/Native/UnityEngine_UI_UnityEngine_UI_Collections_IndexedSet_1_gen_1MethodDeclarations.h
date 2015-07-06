#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.Collections.IndexedSet`1<System.Object>
struct IndexedSet_1_t6456;
// System.Object
struct Object_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t744;
// System.Object[]
struct ObjectU5BU5D_t21;
// System.Predicate`1<System.Object>
struct Predicate_1_t5972;
// System.Comparison`1<System.Object>
struct Comparison_1_t5979;

// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::.ctor()
extern "C" void IndexedSet_1__ctor_m31434_gshared (IndexedSet_1_t6456 * __this, const MethodInfo* method);
#define IndexedSet_1__ctor_m31434(__this, method) (( void (*) (IndexedSet_1_t6456 *, const MethodInfo*))IndexedSet_1__ctor_m31434_gshared)(__this, method)
// System.Collections.IEnumerator UnityEngine.UI.Collections.IndexedSet`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m31436_gshared (IndexedSet_1_t6456 * __this, const MethodInfo* method);
#define IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m31436(__this, method) (( Object_t * (*) (IndexedSet_1_t6456 *, const MethodInfo*))IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m31436_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Add(T)
extern "C" void IndexedSet_1_Add_m31438_gshared (IndexedSet_1_t6456 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Add_m31438(__this, ___item, method) (( void (*) (IndexedSet_1_t6456 *, Object_t *, const MethodInfo*))IndexedSet_1_Add_m31438_gshared)(__this, ___item, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Remove(T)
extern "C" bool IndexedSet_1_Remove_m31440_gshared (IndexedSet_1_t6456 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Remove_m31440(__this, ___item, method) (( bool (*) (IndexedSet_1_t6456 *, Object_t *, const MethodInfo*))IndexedSet_1_Remove_m31440_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<T> UnityEngine.UI.Collections.IndexedSet`1<System.Object>::GetEnumerator()
extern "C" Object_t* IndexedSet_1_GetEnumerator_m31442_gshared (IndexedSet_1_t6456 * __this, const MethodInfo* method);
#define IndexedSet_1_GetEnumerator_m31442(__this, method) (( Object_t* (*) (IndexedSet_1_t6456 *, const MethodInfo*))IndexedSet_1_GetEnumerator_m31442_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Clear()
extern "C" void IndexedSet_1_Clear_m31444_gshared (IndexedSet_1_t6456 * __this, const MethodInfo* method);
#define IndexedSet_1_Clear_m31444(__this, method) (( void (*) (IndexedSet_1_t6456 *, const MethodInfo*))IndexedSet_1_Clear_m31444_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Contains(T)
extern "C" bool IndexedSet_1_Contains_m31446_gshared (IndexedSet_1_t6456 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Contains_m31446(__this, ___item, method) (( bool (*) (IndexedSet_1_t6456 *, Object_t *, const MethodInfo*))IndexedSet_1_Contains_m31446_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void IndexedSet_1_CopyTo_m31448_gshared (IndexedSet_1_t6456 * __this, ObjectU5BU5D_t21* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define IndexedSet_1_CopyTo_m31448(__this, ___array, ___arrayIndex, method) (( void (*) (IndexedSet_1_t6456 *, ObjectU5BU5D_t21*, int32_t, const MethodInfo*))IndexedSet_1_CopyTo_m31448_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_Count()
extern "C" int32_t IndexedSet_1_get_Count_m31450_gshared (IndexedSet_1_t6456 * __this, const MethodInfo* method);
#define IndexedSet_1_get_Count_m31450(__this, method) (( int32_t (*) (IndexedSet_1_t6456 *, const MethodInfo*))IndexedSet_1_get_Count_m31450_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_IsReadOnly()
extern "C" bool IndexedSet_1_get_IsReadOnly_m31452_gshared (IndexedSet_1_t6456 * __this, const MethodInfo* method);
#define IndexedSet_1_get_IsReadOnly_m31452(__this, method) (( bool (*) (IndexedSet_1_t6456 *, const MethodInfo*))IndexedSet_1_get_IsReadOnly_m31452_gshared)(__this, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<System.Object>::IndexOf(T)
extern "C" int32_t IndexedSet_1_IndexOf_m31454_gshared (IndexedSet_1_t6456 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_IndexOf_m31454(__this, ___item, method) (( int32_t (*) (IndexedSet_1_t6456 *, Object_t *, const MethodInfo*))IndexedSet_1_IndexOf_m31454_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Insert(System.Int32,T)
extern "C" void IndexedSet_1_Insert_m31456_gshared (IndexedSet_1_t6456 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Insert_m31456(__this, ___index, ___item, method) (( void (*) (IndexedSet_1_t6456 *, int32_t, Object_t *, const MethodInfo*))IndexedSet_1_Insert_m31456_gshared)(__this, ___index, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::RemoveAt(System.Int32)
extern "C" void IndexedSet_1_RemoveAt_m31458_gshared (IndexedSet_1_t6456 * __this, int32_t ___index, const MethodInfo* method);
#define IndexedSet_1_RemoveAt_m31458(__this, ___index, method) (( void (*) (IndexedSet_1_t6456 *, int32_t, const MethodInfo*))IndexedSet_1_RemoveAt_m31458_gshared)(__this, ___index, method)
// T UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * IndexedSet_1_get_Item_m31460_gshared (IndexedSet_1_t6456 * __this, int32_t ___index, const MethodInfo* method);
#define IndexedSet_1_get_Item_m31460(__this, ___index, method) (( Object_t * (*) (IndexedSet_1_t6456 *, int32_t, const MethodInfo*))IndexedSet_1_get_Item_m31460_gshared)(__this, ___index, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::set_Item(System.Int32,T)
extern "C" void IndexedSet_1_set_Item_m31462_gshared (IndexedSet_1_t6456 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define IndexedSet_1_set_Item_m31462(__this, ___index, ___value, method) (( void (*) (IndexedSet_1_t6456 *, int32_t, Object_t *, const MethodInfo*))IndexedSet_1_set_Item_m31462_gshared)(__this, ___index, ___value, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::RemoveAll(System.Predicate`1<T>)
extern "C" void IndexedSet_1_RemoveAll_m31463_gshared (IndexedSet_1_t6456 * __this, Predicate_1_t5972 * ___match, const MethodInfo* method);
#define IndexedSet_1_RemoveAll_m31463(__this, ___match, method) (( void (*) (IndexedSet_1_t6456 *, Predicate_1_t5972 *, const MethodInfo*))IndexedSet_1_RemoveAll_m31463_gshared)(__this, ___match, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Sort(System.Comparison`1<T>)
extern "C" void IndexedSet_1_Sort_m31464_gshared (IndexedSet_1_t6456 * __this, Comparison_1_t5979 * ___sortLayoutFunction, const MethodInfo* method);
#define IndexedSet_1_Sort_m31464(__this, ___sortLayoutFunction, method) (( void (*) (IndexedSet_1_t6456 *, Comparison_1_t5979 *, const MethodInfo*))IndexedSet_1_Sort_m31464_gshared)(__this, ___sortLayoutFunction, method)

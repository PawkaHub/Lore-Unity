#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.UIVertex>
struct List_1_t588;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<UnityEngine.UIVertex>
struct IEnumerable_1_t10111;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_t584;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UIVertex>
struct IEnumerator_1_t10112;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Collections.Generic.ICollection`1<UnityEngine.UIVertex>
struct ICollection_1_t1262;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UIVertex>
struct ReadOnlyCollection_1_t6741;
// System.Predicate`1<UnityEngine.UIVertex>
struct Predicate_1_t6745;
// System.Collections.Generic.IComparer`1<UnityEngine.UIVertex>
struct IComparer_1_t10113;
// System.Comparison`1<UnityEngine.UIVertex>
struct Comparison_1_t6748;
// UnityEngine.UIVertex
#include "UnityEngine_UnityEngine_UIVertex.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.UIVertex>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_74.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::.ctor()
extern "C" void List_1__ctor_m3646_gshared (List_1_t588 * __this, const MethodInfo* method);
#define List_1__ctor_m3646(__this, method) (( void (*) (List_1_t588 *, const MethodInfo*))List_1__ctor_m3646_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m32052_gshared (List_1_t588 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m32052(__this, ___collection, method) (( void (*) (List_1_t588 *, Object_t*, const MethodInfo*))List_1__ctor_m32052_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::.ctor(System.Int32)
extern "C" void List_1__ctor_m18011_gshared (List_1_t588 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m18011(__this, ___capacity, method) (( void (*) (List_1_t588 *, int32_t, const MethodInfo*))List_1__ctor_m18011_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m32053_gshared (List_1_t588 * __this, UIVertexU5BU5D_t584* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m32053(__this, ___data, ___size, method) (( void (*) (List_1_t588 *, UIVertexU5BU5D_t584*, int32_t, const MethodInfo*))List_1__ctor_m32053_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::.cctor()
extern "C" void List_1__cctor_m32054_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m32054(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m32054_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m32055_gshared (List_1_t588 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m32055(__this, method) (( Object_t* (*) (List_1_t588 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m32055_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m32056_gshared (List_1_t588 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m32056(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t588 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m32056_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m32057_gshared (List_1_t588 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m32057(__this, method) (( Object_t * (*) (List_1_t588 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m32057_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m32058_gshared (List_1_t588 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m32058(__this, ___item, method) (( int32_t (*) (List_1_t588 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m32058_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m32059_gshared (List_1_t588 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m32059(__this, ___item, method) (( bool (*) (List_1_t588 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m32059_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m32060_gshared (List_1_t588 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m32060(__this, ___item, method) (( int32_t (*) (List_1_t588 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m32060_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m32061_gshared (List_1_t588 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m32061(__this, ___index, ___item, method) (( void (*) (List_1_t588 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m32061_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m32062_gshared (List_1_t588 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m32062(__this, ___item, method) (( void (*) (List_1_t588 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m32062_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m32063_gshared (List_1_t588 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m32063(__this, method) (( bool (*) (List_1_t588 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m32063_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m32064_gshared (List_1_t588 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m32064(__this, method) (( bool (*) (List_1_t588 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m32064_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m32065_gshared (List_1_t588 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m32065(__this, method) (( Object_t * (*) (List_1_t588 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m32065_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m32066_gshared (List_1_t588 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m32066(__this, method) (( bool (*) (List_1_t588 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m32066_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m32067_gshared (List_1_t588 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m32067(__this, method) (( bool (*) (List_1_t588 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m32067_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m32068_gshared (List_1_t588 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m32068(__this, ___index, method) (( Object_t * (*) (List_1_t588 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m32068_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m32069_gshared (List_1_t588 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m32069(__this, ___index, ___value, method) (( void (*) (List_1_t588 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m32069_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Add(T)
extern "C" void List_1_Add_m32070_gshared (List_1_t588 * __this, UIVertex_t585  ___item, const MethodInfo* method);
#define List_1_Add_m32070(__this, ___item, method) (( void (*) (List_1_t588 *, UIVertex_t585 , const MethodInfo*))List_1_Add_m32070_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m32071_gshared (List_1_t588 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m32071(__this, ___newCount, method) (( void (*) (List_1_t588 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m32071_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m32072_gshared (List_1_t588 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m32072(__this, ___idx, ___count, method) (( void (*) (List_1_t588 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m32072_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m32073_gshared (List_1_t588 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m32073(__this, ___collection, method) (( void (*) (List_1_t588 *, Object_t*, const MethodInfo*))List_1_AddCollection_m32073_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m32074_gshared (List_1_t588 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m32074(__this, ___enumerable, method) (( void (*) (List_1_t588 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m32074_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m32075_gshared (List_1_t588 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m32075(__this, ___collection, method) (( void (*) (List_1_t588 *, Object_t*, const MethodInfo*))List_1_AddRange_m32075_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.UIVertex>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t6741 * List_1_AsReadOnly_m32076_gshared (List_1_t588 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m32076(__this, method) (( ReadOnlyCollection_1_t6741 * (*) (List_1_t588 *, const MethodInfo*))List_1_AsReadOnly_m32076_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Clear()
extern "C" void List_1_Clear_m32077_gshared (List_1_t588 * __this, const MethodInfo* method);
#define List_1_Clear_m32077(__this, method) (( void (*) (List_1_t588 *, const MethodInfo*))List_1_Clear_m32077_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::Contains(T)
extern "C" bool List_1_Contains_m32078_gshared (List_1_t588 * __this, UIVertex_t585  ___item, const MethodInfo* method);
#define List_1_Contains_m32078(__this, ___item, method) (( bool (*) (List_1_t588 *, UIVertex_t585 , const MethodInfo*))List_1_Contains_m32078_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m32079_gshared (List_1_t588 * __this, UIVertexU5BU5D_t584* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m32079(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t588 *, UIVertexU5BU5D_t584*, int32_t, const MethodInfo*))List_1_CopyTo_m32079_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.UIVertex>::Find(System.Predicate`1<T>)
extern "C" UIVertex_t585  List_1_Find_m32080_gshared (List_1_t588 * __this, Predicate_1_t6745 * ___match, const MethodInfo* method);
#define List_1_Find_m32080(__this, ___match, method) (( UIVertex_t585  (*) (List_1_t588 *, Predicate_1_t6745 *, const MethodInfo*))List_1_Find_m32080_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m32081_gshared (Object_t * __this /* static, unused */, Predicate_1_t6745 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m32081(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t6745 *, const MethodInfo*))List_1_CheckMatch_m32081_gshared)(__this /* static, unused */, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.UIVertex>::FindAll(System.Predicate`1<T>)
extern "C" List_1_t588 * List_1_FindAll_m32082_gshared (List_1_t588 * __this, Predicate_1_t6745 * ___match, const MethodInfo* method);
#define List_1_FindAll_m32082(__this, ___match, method) (( List_1_t588 * (*) (List_1_t588 *, Predicate_1_t6745 *, const MethodInfo*))List_1_FindAll_m32082_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.UIVertex>::FindAllStackBits(System.Predicate`1<T>)
extern "C" List_1_t588 * List_1_FindAllStackBits_m32083_gshared (List_1_t588 * __this, Predicate_1_t6745 * ___match, const MethodInfo* method);
#define List_1_FindAllStackBits_m32083(__this, ___match, method) (( List_1_t588 * (*) (List_1_t588 *, Predicate_1_t6745 *, const MethodInfo*))List_1_FindAllStackBits_m32083_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.UIVertex>::FindAllList(System.Predicate`1<T>)
extern "C" List_1_t588 * List_1_FindAllList_m32084_gshared (List_1_t588 * __this, Predicate_1_t6745 * ___match, const MethodInfo* method);
#define List_1_FindAllList_m32084(__this, ___match, method) (( List_1_t588 * (*) (List_1_t588 *, Predicate_1_t6745 *, const MethodInfo*))List_1_FindAllList_m32084_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::FindIndex(System.Predicate`1<T>)
extern "C" int32_t List_1_FindIndex_m32085_gshared (List_1_t588 * __this, Predicate_1_t6745 * ___match, const MethodInfo* method);
#define List_1_FindIndex_m32085(__this, ___match, method) (( int32_t (*) (List_1_t588 *, Predicate_1_t6745 *, const MethodInfo*))List_1_FindIndex_m32085_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m32086_gshared (List_1_t588 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t6745 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m32086(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t588 *, int32_t, int32_t, Predicate_1_t6745 *, const MethodInfo*))List_1_GetIndex_m32086_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.UIVertex>::GetEnumerator()
extern "C" Enumerator_t6740  List_1_GetEnumerator_m32087_gshared (List_1_t588 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m32087(__this, method) (( Enumerator_t6740  (*) (List_1_t588 *, const MethodInfo*))List_1_GetEnumerator_m32087_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.UIVertex>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t588 * List_1_GetRange_m32088_gshared (List_1_t588 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m32088(__this, ___index, ___count, method) (( List_1_t588 * (*) (List_1_t588 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m32088_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m32089_gshared (List_1_t588 * __this, UIVertex_t585  ___item, const MethodInfo* method);
#define List_1_IndexOf_m32089(__this, ___item, method) (( int32_t (*) (List_1_t588 *, UIVertex_t585 , const MethodInfo*))List_1_IndexOf_m32089_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m32090_gshared (List_1_t588 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m32090(__this, ___start, ___delta, method) (( void (*) (List_1_t588 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m32090_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m32091_gshared (List_1_t588 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m32091(__this, ___index, method) (( void (*) (List_1_t588 *, int32_t, const MethodInfo*))List_1_CheckIndex_m32091_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m32092_gshared (List_1_t588 * __this, int32_t ___index, UIVertex_t585  ___item, const MethodInfo* method);
#define List_1_Insert_m32092(__this, ___index, ___item, method) (( void (*) (List_1_t588 *, int32_t, UIVertex_t585 , const MethodInfo*))List_1_Insert_m32092_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m32093_gshared (List_1_t588 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m32093(__this, ___collection, method) (( void (*) (List_1_t588 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m32093_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m32094_gshared (List_1_t588 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m32094(__this, ___index, ___collection, method) (( void (*) (List_1_t588 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m32094_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m32095_gshared (List_1_t588 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m32095(__this, ___index, ___collection, method) (( void (*) (List_1_t588 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m32095_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m32096_gshared (List_1_t588 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m32096(__this, ___index, ___enumerable, method) (( void (*) (List_1_t588 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m32096_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::Remove(T)
extern "C" bool List_1_Remove_m32097_gshared (List_1_t588 * __this, UIVertex_t585  ___item, const MethodInfo* method);
#define List_1_Remove_m32097(__this, ___item, method) (( bool (*) (List_1_t588 *, UIVertex_t585 , const MethodInfo*))List_1_Remove_m32097_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m32098_gshared (List_1_t588 * __this, Predicate_1_t6745 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m32098(__this, ___match, method) (( int32_t (*) (List_1_t588 *, Predicate_1_t6745 *, const MethodInfo*))List_1_RemoveAll_m32098_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m32099_gshared (List_1_t588 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m32099(__this, ___index, method) (( void (*) (List_1_t588 *, int32_t, const MethodInfo*))List_1_RemoveAt_m32099_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m32100_gshared (List_1_t588 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m32100(__this, ___index, ___count, method) (( void (*) (List_1_t588 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m32100_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Reverse()
extern "C" void List_1_Reverse_m32101_gshared (List_1_t588 * __this, const MethodInfo* method);
#define List_1_Reverse_m32101(__this, method) (( void (*) (List_1_t588 *, const MethodInfo*))List_1_Reverse_m32101_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Sort()
extern "C" void List_1_Sort_m32102_gshared (List_1_t588 * __this, const MethodInfo* method);
#define List_1_Sort_m32102(__this, method) (( void (*) (List_1_t588 *, const MethodInfo*))List_1_Sort_m32102_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m32103_gshared (List_1_t588 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m32103(__this, ___comparer, method) (( void (*) (List_1_t588 *, Object_t*, const MethodInfo*))List_1_Sort_m32103_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m32104_gshared (List_1_t588 * __this, Comparison_1_t6748 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m32104(__this, ___comparison, method) (( void (*) (List_1_t588 *, Comparison_1_t6748 *, const MethodInfo*))List_1_Sort_m32104_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.UIVertex>::ToArray()
extern "C" UIVertexU5BU5D_t584* List_1_ToArray_m3706_gshared (List_1_t588 * __this, const MethodInfo* method);
#define List_1_ToArray_m3706(__this, method) (( UIVertexU5BU5D_t584* (*) (List_1_t588 *, const MethodInfo*))List_1_ToArray_m3706_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::TrimExcess()
extern "C" void List_1_TrimExcess_m32105_gshared (List_1_t588 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m32105(__this, method) (( void (*) (List_1_t588 *, const MethodInfo*))List_1_TrimExcess_m32105_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m5348_gshared (List_1_t588 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m5348(__this, method) (( int32_t (*) (List_1_t588 *, const MethodInfo*))List_1_get_Capacity_m5348_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m5349_gshared (List_1_t588 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m5349(__this, ___value, method) (( void (*) (List_1_t588 *, int32_t, const MethodInfo*))List_1_set_Capacity_m5349_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::get_Count()
extern "C" int32_t List_1_get_Count_m32106_gshared (List_1_t588 * __this, const MethodInfo* method);
#define List_1_get_Count_m32106(__this, method) (( int32_t (*) (List_1_t588 *, const MethodInfo*))List_1_get_Count_m32106_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.UIVertex>::get_Item(System.Int32)
extern "C" UIVertex_t585  List_1_get_Item_m32107_gshared (List_1_t588 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m32107(__this, ___index, method) (( UIVertex_t585  (*) (List_1_t588 *, int32_t, const MethodInfo*))List_1_get_Item_m32107_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m32108_gshared (List_1_t588 * __this, int32_t ___index, UIVertex_t585  ___value, const MethodInfo* method);
#define List_1_set_Item_m32108(__this, ___index, ___value, method) (( void (*) (List_1_t588 *, int32_t, UIVertex_t585 , const MethodInfo*))List_1_set_Item_m32108_gshared)(__this, ___index, ___value, method)

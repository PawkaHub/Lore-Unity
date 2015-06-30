#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.UILineInfo>
struct List_1_t2815;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<UnityEngine.UILineInfo>
struct IEnumerable_1_t7078;
// UnityEngine.UILineInfo[]
struct UILineInfoU5BU5D_t2930;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UILineInfo>
struct IEnumerator_1_t7079;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Collections.Generic.ICollection`1<UnityEngine.UILineInfo>
struct ICollection_1_t2179;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UILineInfo>
struct ReadOnlyCollection_1_t6127;
// System.Predicate`1<UnityEngine.UILineInfo>
struct Predicate_1_t6131;
// System.Collections.Generic.IComparer`1<UnityEngine.UILineInfo>
struct IComparer_1_t7080;
// System.Comparison`1<UnityEngine.UILineInfo>
struct Comparison_1_t6134;
// UnityEngine.UILineInfo
#include "UnityEngine_UnityEngine_UILineInfo.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.UILineInfo>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_105.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::.ctor()
extern "C" void List_1__ctor_m41438_gshared (List_1_t2815 * __this, const MethodInfo* method);
#define List_1__ctor_m41438(__this, method) (( void (*) (List_1_t2815 *, const MethodInfo*))List_1__ctor_m41438_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m41439_gshared (List_1_t2815 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m41439(__this, ___collection, method) (( void (*) (List_1_t2815 *, Object_t*, const MethodInfo*))List_1__ctor_m41439_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::.ctor(System.Int32)
extern "C" void List_1__ctor_m13721_gshared (List_1_t2815 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m13721(__this, ___capacity, method) (( void (*) (List_1_t2815 *, int32_t, const MethodInfo*))List_1__ctor_m13721_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m41440_gshared (List_1_t2815 * __this, UILineInfoU5BU5D_t2930* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m41440(__this, ___data, ___size, method) (( void (*) (List_1_t2815 *, UILineInfoU5BU5D_t2930*, int32_t, const MethodInfo*))List_1__ctor_m41440_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::.cctor()
extern "C" void List_1__cctor_m41441_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m41441(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m41441_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m41442_gshared (List_1_t2815 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m41442(__this, method) (( Object_t* (*) (List_1_t2815 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m41442_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m41443_gshared (List_1_t2815 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m41443(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t2815 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m41443_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m41444_gshared (List_1_t2815 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m41444(__this, method) (( Object_t * (*) (List_1_t2815 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m41444_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m41445_gshared (List_1_t2815 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m41445(__this, ___item, method) (( int32_t (*) (List_1_t2815 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m41445_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m41446_gshared (List_1_t2815 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m41446(__this, ___item, method) (( bool (*) (List_1_t2815 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m41446_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m41447_gshared (List_1_t2815 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m41447(__this, ___item, method) (( int32_t (*) (List_1_t2815 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m41447_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m41448_gshared (List_1_t2815 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m41448(__this, ___index, ___item, method) (( void (*) (List_1_t2815 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m41448_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m41449_gshared (List_1_t2815 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m41449(__this, ___item, method) (( void (*) (List_1_t2815 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m41449_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m41450_gshared (List_1_t2815 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m41450(__this, method) (( bool (*) (List_1_t2815 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m41450_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m41451_gshared (List_1_t2815 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m41451(__this, method) (( bool (*) (List_1_t2815 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m41451_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m41452_gshared (List_1_t2815 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m41452(__this, method) (( Object_t * (*) (List_1_t2815 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m41452_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m41453_gshared (List_1_t2815 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m41453(__this, method) (( bool (*) (List_1_t2815 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m41453_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m41454_gshared (List_1_t2815 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m41454(__this, method) (( bool (*) (List_1_t2815 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m41454_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m41455_gshared (List_1_t2815 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m41455(__this, ___index, method) (( Object_t * (*) (List_1_t2815 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m41455_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m41456_gshared (List_1_t2815 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m41456(__this, ___index, ___value, method) (( void (*) (List_1_t2815 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m41456_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Add(T)
extern "C" void List_1_Add_m41457_gshared (List_1_t2815 * __this, UILineInfo_t2175  ___item, const MethodInfo* method);
#define List_1_Add_m41457(__this, ___item, method) (( void (*) (List_1_t2815 *, UILineInfo_t2175 , const MethodInfo*))List_1_Add_m41457_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m41458_gshared (List_1_t2815 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m41458(__this, ___newCount, method) (( void (*) (List_1_t2815 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m41458_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m41459_gshared (List_1_t2815 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m41459(__this, ___idx, ___count, method) (( void (*) (List_1_t2815 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m41459_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m41460_gshared (List_1_t2815 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m41460(__this, ___collection, method) (( void (*) (List_1_t2815 *, Object_t*, const MethodInfo*))List_1_AddCollection_m41460_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m41461_gshared (List_1_t2815 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m41461(__this, ___enumerable, method) (( void (*) (List_1_t2815 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m41461_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m41462_gshared (List_1_t2815 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m41462(__this, ___collection, method) (( void (*) (List_1_t2815 *, Object_t*, const MethodInfo*))List_1_AddRange_m41462_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.UILineInfo>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t6127 * List_1_AsReadOnly_m41463_gshared (List_1_t2815 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m41463(__this, method) (( ReadOnlyCollection_1_t6127 * (*) (List_1_t2815 *, const MethodInfo*))List_1_AsReadOnly_m41463_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Clear()
extern "C" void List_1_Clear_m41464_gshared (List_1_t2815 * __this, const MethodInfo* method);
#define List_1_Clear_m41464(__this, method) (( void (*) (List_1_t2815 *, const MethodInfo*))List_1_Clear_m41464_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Contains(T)
extern "C" bool List_1_Contains_m41465_gshared (List_1_t2815 * __this, UILineInfo_t2175  ___item, const MethodInfo* method);
#define List_1_Contains_m41465(__this, ___item, method) (( bool (*) (List_1_t2815 *, UILineInfo_t2175 , const MethodInfo*))List_1_Contains_m41465_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m41466_gshared (List_1_t2815 * __this, UILineInfoU5BU5D_t2930* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m41466(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t2815 *, UILineInfoU5BU5D_t2930*, int32_t, const MethodInfo*))List_1_CopyTo_m41466_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Find(System.Predicate`1<T>)
extern "C" UILineInfo_t2175  List_1_Find_m41467_gshared (List_1_t2815 * __this, Predicate_1_t6131 * ___match, const MethodInfo* method);
#define List_1_Find_m41467(__this, ___match, method) (( UILineInfo_t2175  (*) (List_1_t2815 *, Predicate_1_t6131 *, const MethodInfo*))List_1_Find_m41467_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m41468_gshared (Object_t * __this /* static, unused */, Predicate_1_t6131 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m41468(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t6131 *, const MethodInfo*))List_1_CheckMatch_m41468_gshared)(__this /* static, unused */, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.UILineInfo>::FindAll(System.Predicate`1<T>)
extern "C" List_1_t2815 * List_1_FindAll_m41469_gshared (List_1_t2815 * __this, Predicate_1_t6131 * ___match, const MethodInfo* method);
#define List_1_FindAll_m41469(__this, ___match, method) (( List_1_t2815 * (*) (List_1_t2815 *, Predicate_1_t6131 *, const MethodInfo*))List_1_FindAll_m41469_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.UILineInfo>::FindAllStackBits(System.Predicate`1<T>)
extern "C" List_1_t2815 * List_1_FindAllStackBits_m41470_gshared (List_1_t2815 * __this, Predicate_1_t6131 * ___match, const MethodInfo* method);
#define List_1_FindAllStackBits_m41470(__this, ___match, method) (( List_1_t2815 * (*) (List_1_t2815 *, Predicate_1_t6131 *, const MethodInfo*))List_1_FindAllStackBits_m41470_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.UILineInfo>::FindAllList(System.Predicate`1<T>)
extern "C" List_1_t2815 * List_1_FindAllList_m41471_gshared (List_1_t2815 * __this, Predicate_1_t6131 * ___match, const MethodInfo* method);
#define List_1_FindAllList_m41471(__this, ___match, method) (( List_1_t2815 * (*) (List_1_t2815 *, Predicate_1_t6131 *, const MethodInfo*))List_1_FindAllList_m41471_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::FindIndex(System.Predicate`1<T>)
extern "C" int32_t List_1_FindIndex_m41472_gshared (List_1_t2815 * __this, Predicate_1_t6131 * ___match, const MethodInfo* method);
#define List_1_FindIndex_m41472(__this, ___match, method) (( int32_t (*) (List_1_t2815 *, Predicate_1_t6131 *, const MethodInfo*))List_1_FindIndex_m41472_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m41473_gshared (List_1_t2815 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t6131 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m41473(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t2815 *, int32_t, int32_t, Predicate_1_t6131 *, const MethodInfo*))List_1_GetIndex_m41473_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.UILineInfo>::GetEnumerator()
extern "C" Enumerator_t6126  List_1_GetEnumerator_m41474_gshared (List_1_t2815 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m41474(__this, method) (( Enumerator_t6126  (*) (List_1_t2815 *, const MethodInfo*))List_1_GetEnumerator_m41474_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.UILineInfo>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t2815 * List_1_GetRange_m41475_gshared (List_1_t2815 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m41475(__this, ___index, ___count, method) (( List_1_t2815 * (*) (List_1_t2815 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m41475_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m41476_gshared (List_1_t2815 * __this, UILineInfo_t2175  ___item, const MethodInfo* method);
#define List_1_IndexOf_m41476(__this, ___item, method) (( int32_t (*) (List_1_t2815 *, UILineInfo_t2175 , const MethodInfo*))List_1_IndexOf_m41476_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m41477_gshared (List_1_t2815 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m41477(__this, ___start, ___delta, method) (( void (*) (List_1_t2815 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m41477_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m41478_gshared (List_1_t2815 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m41478(__this, ___index, method) (( void (*) (List_1_t2815 *, int32_t, const MethodInfo*))List_1_CheckIndex_m41478_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m41479_gshared (List_1_t2815 * __this, int32_t ___index, UILineInfo_t2175  ___item, const MethodInfo* method);
#define List_1_Insert_m41479(__this, ___index, ___item, method) (( void (*) (List_1_t2815 *, int32_t, UILineInfo_t2175 , const MethodInfo*))List_1_Insert_m41479_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m41480_gshared (List_1_t2815 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m41480(__this, ___collection, method) (( void (*) (List_1_t2815 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m41480_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m41481_gshared (List_1_t2815 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m41481(__this, ___index, ___collection, method) (( void (*) (List_1_t2815 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m41481_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m41482_gshared (List_1_t2815 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m41482(__this, ___index, ___collection, method) (( void (*) (List_1_t2815 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m41482_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m41483_gshared (List_1_t2815 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m41483(__this, ___index, ___enumerable, method) (( void (*) (List_1_t2815 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m41483_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Remove(T)
extern "C" bool List_1_Remove_m41484_gshared (List_1_t2815 * __this, UILineInfo_t2175  ___item, const MethodInfo* method);
#define List_1_Remove_m41484(__this, ___item, method) (( bool (*) (List_1_t2815 *, UILineInfo_t2175 , const MethodInfo*))List_1_Remove_m41484_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m41485_gshared (List_1_t2815 * __this, Predicate_1_t6131 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m41485(__this, ___match, method) (( int32_t (*) (List_1_t2815 *, Predicate_1_t6131 *, const MethodInfo*))List_1_RemoveAll_m41485_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m41486_gshared (List_1_t2815 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m41486(__this, ___index, method) (( void (*) (List_1_t2815 *, int32_t, const MethodInfo*))List_1_RemoveAt_m41486_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m41487_gshared (List_1_t2815 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m41487(__this, ___index, ___count, method) (( void (*) (List_1_t2815 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m41487_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Reverse()
extern "C" void List_1_Reverse_m41488_gshared (List_1_t2815 * __this, const MethodInfo* method);
#define List_1_Reverse_m41488(__this, method) (( void (*) (List_1_t2815 *, const MethodInfo*))List_1_Reverse_m41488_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Sort()
extern "C" void List_1_Sort_m41489_gshared (List_1_t2815 * __this, const MethodInfo* method);
#define List_1_Sort_m41489(__this, method) (( void (*) (List_1_t2815 *, const MethodInfo*))List_1_Sort_m41489_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m41490_gshared (List_1_t2815 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m41490(__this, ___comparer, method) (( void (*) (List_1_t2815 *, Object_t*, const MethodInfo*))List_1_Sort_m41490_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m41491_gshared (List_1_t2815 * __this, Comparison_1_t6134 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m41491(__this, ___comparison, method) (( void (*) (List_1_t2815 *, Comparison_1_t6134 *, const MethodInfo*))List_1_Sort_m41491_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.UILineInfo>::ToArray()
extern "C" UILineInfoU5BU5D_t2930* List_1_ToArray_m41492_gshared (List_1_t2815 * __this, const MethodInfo* method);
#define List_1_ToArray_m41492(__this, method) (( UILineInfoU5BU5D_t2930* (*) (List_1_t2815 *, const MethodInfo*))List_1_ToArray_m41492_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::TrimExcess()
extern "C" void List_1_TrimExcess_m41493_gshared (List_1_t2815 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m41493(__this, method) (( void (*) (List_1_t2815 *, const MethodInfo*))List_1_TrimExcess_m41493_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m41494_gshared (List_1_t2815 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m41494(__this, method) (( int32_t (*) (List_1_t2815 *, const MethodInfo*))List_1_get_Capacity_m41494_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m41495_gshared (List_1_t2815 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m41495(__this, ___value, method) (( void (*) (List_1_t2815 *, int32_t, const MethodInfo*))List_1_set_Capacity_m41495_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::get_Count()
extern "C" int32_t List_1_get_Count_m41496_gshared (List_1_t2815 * __this, const MethodInfo* method);
#define List_1_get_Count_m41496(__this, method) (( int32_t (*) (List_1_t2815 *, const MethodInfo*))List_1_get_Count_m41496_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.UILineInfo>::get_Item(System.Int32)
extern "C" UILineInfo_t2175  List_1_get_Item_m41497_gshared (List_1_t2815 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m41497(__this, ___index, method) (( UILineInfo_t2175  (*) (List_1_t2815 *, int32_t, const MethodInfo*))List_1_get_Item_m41497_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m41498_gshared (List_1_t2815 * __this, int32_t ___index, UILineInfo_t2175  ___value, const MethodInfo* method);
#define List_1_set_Item_m41498(__this, ___index, ___value, method) (( void (*) (List_1_t2815 *, int32_t, UILineInfo_t2175 , const MethodInfo*))List_1_set_Item_m41498_gshared)(__this, ___index, ___value, method)

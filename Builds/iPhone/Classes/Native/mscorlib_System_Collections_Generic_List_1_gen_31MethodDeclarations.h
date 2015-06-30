#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Single>
struct List_1_t701;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Single>
struct IEnumerable_1_t6630;
// System.Single[]
struct SingleU5BU5D_t168;
// System.Collections.Generic.IEnumerator`1<System.Single>
struct IEnumerator_1_t6631;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Collections.Generic.ICollection`1<System.Single>
struct ICollection_1_t6632;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Single>
struct ReadOnlyCollection_1_t5280;
// System.Predicate`1<System.Single>
struct Predicate_1_t5285;
// System.Collections.Generic.IComparer`1<System.Single>
struct IComparer_1_t6633;
// System.Comparison`1<System.Single>
struct Comparison_1_t5289;
// System.Collections.Generic.List`1/Enumerator<System.Single>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_66.h"

// System.Void System.Collections.Generic.List`1<System.Single>::.ctor()
extern "C" void List_1__ctor_m28600_gshared (List_1_t701 * __this, const MethodInfo* method);
#define List_1__ctor_m28600(__this, method) (( void (*) (List_1_t701 *, const MethodInfo*))List_1__ctor_m28600_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Single>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m28601_gshared (List_1_t701 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m28601(__this, ___collection, method) (( void (*) (List_1_t701 *, Object_t*, const MethodInfo*))List_1__ctor_m28601_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Single>::.ctor(System.Int32)
extern "C" void List_1__ctor_m3272_gshared (List_1_t701 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m3272(__this, ___capacity, method) (( void (*) (List_1_t701 *, int32_t, const MethodInfo*))List_1__ctor_m3272_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Single>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m28602_gshared (List_1_t701 * __this, SingleU5BU5D_t168* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m28602(__this, ___data, ___size, method) (( void (*) (List_1_t701 *, SingleU5BU5D_t168*, int32_t, const MethodInfo*))List_1__ctor_m28602_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Single>::.cctor()
extern "C" void List_1__cctor_m28603_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m28603(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m28603_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Single>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m28604_gshared (List_1_t701 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m28604(__this, method) (( Object_t* (*) (List_1_t701 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m28604_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Single>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m28605_gshared (List_1_t701 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m28605(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t701 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m28605_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Single>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m28606_gshared (List_1_t701 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m28606(__this, method) (( Object_t * (*) (List_1_t701 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m28606_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Single>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m28607_gshared (List_1_t701 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m28607(__this, ___item, method) (( int32_t (*) (List_1_t701 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m28607_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Single>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m28608_gshared (List_1_t701 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m28608(__this, ___item, method) (( bool (*) (List_1_t701 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m28608_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Single>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m28609_gshared (List_1_t701 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m28609(__this, ___item, method) (( int32_t (*) (List_1_t701 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m28609_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Single>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m28610_gshared (List_1_t701 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m28610(__this, ___index, ___item, method) (( void (*) (List_1_t701 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m28610_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Single>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m28611_gshared (List_1_t701 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m28611(__this, ___item, method) (( void (*) (List_1_t701 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m28611_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Single>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m28612_gshared (List_1_t701 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m28612(__this, method) (( bool (*) (List_1_t701 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m28612_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Single>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m28613_gshared (List_1_t701 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m28613(__this, method) (( bool (*) (List_1_t701 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m28613_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Single>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m28614_gshared (List_1_t701 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m28614(__this, method) (( Object_t * (*) (List_1_t701 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m28614_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Single>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m28615_gshared (List_1_t701 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m28615(__this, method) (( bool (*) (List_1_t701 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m28615_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Single>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m28616_gshared (List_1_t701 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m28616(__this, method) (( bool (*) (List_1_t701 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m28616_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Single>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m28617_gshared (List_1_t701 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m28617(__this, ___index, method) (( Object_t * (*) (List_1_t701 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m28617_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Single>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m28618_gshared (List_1_t701 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m28618(__this, ___index, ___value, method) (( void (*) (List_1_t701 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m28618_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Single>::Add(T)
extern "C" void List_1_Add_m28619_gshared (List_1_t701 * __this, float ___item, const MethodInfo* method);
#define List_1_Add_m28619(__this, ___item, method) (( void (*) (List_1_t701 *, float, const MethodInfo*))List_1_Add_m28619_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Single>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m28620_gshared (List_1_t701 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m28620(__this, ___newCount, method) (( void (*) (List_1_t701 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m28620_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Single>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m28621_gshared (List_1_t701 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m28621(__this, ___idx, ___count, method) (( void (*) (List_1_t701 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m28621_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Single>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m28622_gshared (List_1_t701 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m28622(__this, ___collection, method) (( void (*) (List_1_t701 *, Object_t*, const MethodInfo*))List_1_AddCollection_m28622_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Single>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m28623_gshared (List_1_t701 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m28623(__this, ___enumerable, method) (( void (*) (List_1_t701 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m28623_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Single>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m28624_gshared (List_1_t701 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m28624(__this, ___collection, method) (( void (*) (List_1_t701 *, Object_t*, const MethodInfo*))List_1_AddRange_m28624_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Single>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t5280 * List_1_AsReadOnly_m28625_gshared (List_1_t701 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m28625(__this, method) (( ReadOnlyCollection_1_t5280 * (*) (List_1_t701 *, const MethodInfo*))List_1_AsReadOnly_m28625_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Single>::Clear()
extern "C" void List_1_Clear_m28626_gshared (List_1_t701 * __this, const MethodInfo* method);
#define List_1_Clear_m28626(__this, method) (( void (*) (List_1_t701 *, const MethodInfo*))List_1_Clear_m28626_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Single>::Contains(T)
extern "C" bool List_1_Contains_m28627_gshared (List_1_t701 * __this, float ___item, const MethodInfo* method);
#define List_1_Contains_m28627(__this, ___item, method) (( bool (*) (List_1_t701 *, float, const MethodInfo*))List_1_Contains_m28627_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Single>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m28628_gshared (List_1_t701 * __this, SingleU5BU5D_t168* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m28628(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t701 *, SingleU5BU5D_t168*, int32_t, const MethodInfo*))List_1_CopyTo_m28628_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Single>::Find(System.Predicate`1<T>)
extern "C" float List_1_Find_m28629_gshared (List_1_t701 * __this, Predicate_1_t5285 * ___match, const MethodInfo* method);
#define List_1_Find_m28629(__this, ___match, method) (( float (*) (List_1_t701 *, Predicate_1_t5285 *, const MethodInfo*))List_1_Find_m28629_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Single>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m28630_gshared (Object_t * __this /* static, unused */, Predicate_1_t5285 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m28630(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t5285 *, const MethodInfo*))List_1_CheckMatch_m28630_gshared)(__this /* static, unused */, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Single>::FindAll(System.Predicate`1<T>)
extern "C" List_1_t701 * List_1_FindAll_m28631_gshared (List_1_t701 * __this, Predicate_1_t5285 * ___match, const MethodInfo* method);
#define List_1_FindAll_m28631(__this, ___match, method) (( List_1_t701 * (*) (List_1_t701 *, Predicate_1_t5285 *, const MethodInfo*))List_1_FindAll_m28631_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Single>::FindAllStackBits(System.Predicate`1<T>)
extern "C" List_1_t701 * List_1_FindAllStackBits_m28632_gshared (List_1_t701 * __this, Predicate_1_t5285 * ___match, const MethodInfo* method);
#define List_1_FindAllStackBits_m28632(__this, ___match, method) (( List_1_t701 * (*) (List_1_t701 *, Predicate_1_t5285 *, const MethodInfo*))List_1_FindAllStackBits_m28632_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Single>::FindAllList(System.Predicate`1<T>)
extern "C" List_1_t701 * List_1_FindAllList_m28633_gshared (List_1_t701 * __this, Predicate_1_t5285 * ___match, const MethodInfo* method);
#define List_1_FindAllList_m28633(__this, ___match, method) (( List_1_t701 * (*) (List_1_t701 *, Predicate_1_t5285 *, const MethodInfo*))List_1_FindAllList_m28633_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Single>::FindIndex(System.Predicate`1<T>)
extern "C" int32_t List_1_FindIndex_m28634_gshared (List_1_t701 * __this, Predicate_1_t5285 * ___match, const MethodInfo* method);
#define List_1_FindIndex_m28634(__this, ___match, method) (( int32_t (*) (List_1_t701 *, Predicate_1_t5285 *, const MethodInfo*))List_1_FindIndex_m28634_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Single>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m28635_gshared (List_1_t701 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t5285 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m28635(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t701 *, int32_t, int32_t, Predicate_1_t5285 *, const MethodInfo*))List_1_GetIndex_m28635_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Single>::GetEnumerator()
extern "C" Enumerator_t5278  List_1_GetEnumerator_m28636_gshared (List_1_t701 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m28636(__this, method) (( Enumerator_t5278  (*) (List_1_t701 *, const MethodInfo*))List_1_GetEnumerator_m28636_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Single>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t701 * List_1_GetRange_m28637_gshared (List_1_t701 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m28637(__this, ___index, ___count, method) (( List_1_t701 * (*) (List_1_t701 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m28637_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Single>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m28638_gshared (List_1_t701 * __this, float ___item, const MethodInfo* method);
#define List_1_IndexOf_m28638(__this, ___item, method) (( int32_t (*) (List_1_t701 *, float, const MethodInfo*))List_1_IndexOf_m28638_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Single>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m28639_gshared (List_1_t701 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m28639(__this, ___start, ___delta, method) (( void (*) (List_1_t701 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m28639_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Single>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m28640_gshared (List_1_t701 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m28640(__this, ___index, method) (( void (*) (List_1_t701 *, int32_t, const MethodInfo*))List_1_CheckIndex_m28640_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Single>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m28641_gshared (List_1_t701 * __this, int32_t ___index, float ___item, const MethodInfo* method);
#define List_1_Insert_m28641(__this, ___index, ___item, method) (( void (*) (List_1_t701 *, int32_t, float, const MethodInfo*))List_1_Insert_m28641_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Single>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m28642_gshared (List_1_t701 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m28642(__this, ___collection, method) (( void (*) (List_1_t701 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m28642_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Single>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m28643_gshared (List_1_t701 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m28643(__this, ___index, ___collection, method) (( void (*) (List_1_t701 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m28643_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Single>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m28644_gshared (List_1_t701 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m28644(__this, ___index, ___collection, method) (( void (*) (List_1_t701 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m28644_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Single>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m28645_gshared (List_1_t701 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m28645(__this, ___index, ___enumerable, method) (( void (*) (List_1_t701 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m28645_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Single>::Remove(T)
extern "C" bool List_1_Remove_m28646_gshared (List_1_t701 * __this, float ___item, const MethodInfo* method);
#define List_1_Remove_m28646(__this, ___item, method) (( bool (*) (List_1_t701 *, float, const MethodInfo*))List_1_Remove_m28646_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Single>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m28647_gshared (List_1_t701 * __this, Predicate_1_t5285 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m28647(__this, ___match, method) (( int32_t (*) (List_1_t701 *, Predicate_1_t5285 *, const MethodInfo*))List_1_RemoveAll_m28647_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Single>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m28648_gshared (List_1_t701 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m28648(__this, ___index, method) (( void (*) (List_1_t701 *, int32_t, const MethodInfo*))List_1_RemoveAt_m28648_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Single>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m28649_gshared (List_1_t701 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m28649(__this, ___index, ___count, method) (( void (*) (List_1_t701 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m28649_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Single>::Reverse()
extern "C" void List_1_Reverse_m28650_gshared (List_1_t701 * __this, const MethodInfo* method);
#define List_1_Reverse_m28650(__this, method) (( void (*) (List_1_t701 *, const MethodInfo*))List_1_Reverse_m28650_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Single>::Sort()
extern "C" void List_1_Sort_m28651_gshared (List_1_t701 * __this, const MethodInfo* method);
#define List_1_Sort_m28651(__this, method) (( void (*) (List_1_t701 *, const MethodInfo*))List_1_Sort_m28651_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Single>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m28652_gshared (List_1_t701 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m28652(__this, ___comparer, method) (( void (*) (List_1_t701 *, Object_t*, const MethodInfo*))List_1_Sort_m28652_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Single>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m28653_gshared (List_1_t701 * __this, Comparison_1_t5289 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m28653(__this, ___comparison, method) (( void (*) (List_1_t701 *, Comparison_1_t5289 *, const MethodInfo*))List_1_Sort_m28653_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Single>::ToArray()
extern "C" SingleU5BU5D_t168* List_1_ToArray_m3273_gshared (List_1_t701 * __this, const MethodInfo* method);
#define List_1_ToArray_m3273(__this, method) (( SingleU5BU5D_t168* (*) (List_1_t701 *, const MethodInfo*))List_1_ToArray_m3273_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Single>::TrimExcess()
extern "C" void List_1_TrimExcess_m28654_gshared (List_1_t701 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m28654(__this, method) (( void (*) (List_1_t701 *, const MethodInfo*))List_1_TrimExcess_m28654_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Single>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m28655_gshared (List_1_t701 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m28655(__this, method) (( int32_t (*) (List_1_t701 *, const MethodInfo*))List_1_get_Capacity_m28655_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Single>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m28656_gshared (List_1_t701 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m28656(__this, ___value, method) (( void (*) (List_1_t701 *, int32_t, const MethodInfo*))List_1_set_Capacity_m28656_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Single>::get_Count()
extern "C" int32_t List_1_get_Count_m28657_gshared (List_1_t701 * __this, const MethodInfo* method);
#define List_1_get_Count_m28657(__this, method) (( int32_t (*) (List_1_t701 *, const MethodInfo*))List_1_get_Count_m28657_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Single>::get_Item(System.Int32)
extern "C" float List_1_get_Item_m28658_gshared (List_1_t701 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m28658(__this, ___index, method) (( float (*) (List_1_t701 *, int32_t, const MethodInfo*))List_1_get_Item_m28658_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Single>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m28659_gshared (List_1_t701 * __this, int32_t ___index, float ___value, const MethodInfo* method);
#define List_1_set_Item_m28659(__this, ___index, ___value, method) (( void (*) (List_1_t701 *, int32_t, float, const MethodInfo*))List_1_set_Item_m28659_gshared)(__this, ___index, ___value, method)

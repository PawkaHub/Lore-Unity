#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<FriendInfo>
struct List_1_t454;
// System.Object
struct Object_t;
// FriendInfo
struct FriendInfo_t402;
// System.Collections.Generic.IEnumerable`1<FriendInfo>
struct IEnumerable_1_t9706;
// FriendInfo[]
struct FriendInfoU5BU5D_t6223;
// System.Collections.Generic.IEnumerator`1<FriendInfo>
struct IEnumerator_1_t9707;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Collections.Generic.ICollection`1<FriendInfo>
struct ICollection_1_t9708;
// System.Collections.ObjectModel.ReadOnlyCollection`1<FriendInfo>
struct ReadOnlyCollection_1_t6225;
// System.Predicate`1<FriendInfo>
struct Predicate_1_t6226;
// System.Collections.Generic.IComparer`1<FriendInfo>
struct IComparer_1_t9709;
// System.Comparison`1<FriendInfo>
struct Comparison_1_t6227;
// System.Collections.Generic.List`1/Enumerator<FriendInfo>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_3.h"

// System.Void System.Collections.Generic.List`1<FriendInfo>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_genMethodDeclarations.h"
#define List_1__ctor_m27712(__this, method) (( void (*) (List_1_t454 *, const MethodInfo*))List_1__ctor_m84_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<FriendInfo>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m27713(__this, ___collection, method) (( void (*) (List_1_t454 *, Object_t*, const MethodInfo*))List_1__ctor_m3251_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<FriendInfo>::.ctor(System.Int32)
#define List_1__ctor_m3225(__this, ___capacity, method) (( void (*) (List_1_t454 *, int32_t, const MethodInfo*))List_1__ctor_m23875_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<FriendInfo>::.ctor(T[],System.Int32)
#define List_1__ctor_m27714(__this, ___data, ___size, method) (( void (*) (List_1_t454 *, FriendInfoU5BU5D_t6223*, int32_t, const MethodInfo*))List_1__ctor_m23876_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<FriendInfo>::.cctor()
#define List_1__cctor_m27715(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m23877_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<FriendInfo>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m27716(__this, method) (( Object_t* (*) (List_1_t454 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m17814_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<FriendInfo>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m27717(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t454 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m17797_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<FriendInfo>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m27718(__this, method) (( Object_t * (*) (List_1_t454 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m17793_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<FriendInfo>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m27719(__this, ___item, method) (( int32_t (*) (List_1_t454 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m17802_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<FriendInfo>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m27720(__this, ___item, method) (( bool (*) (List_1_t454 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m17804_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<FriendInfo>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m27721(__this, ___item, method) (( int32_t (*) (List_1_t454 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m17805_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<FriendInfo>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m27722(__this, ___index, ___item, method) (( void (*) (List_1_t454 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m17806_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<FriendInfo>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m27723(__this, ___item, method) (( void (*) (List_1_t454 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m17807_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<FriendInfo>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m27724(__this, method) (( bool (*) (List_1_t454 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m17809_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<FriendInfo>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m27725(__this, method) (( bool (*) (List_1_t454 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m17795_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<FriendInfo>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m27726(__this, method) (( Object_t * (*) (List_1_t454 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m17796_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<FriendInfo>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m27727(__this, method) (( bool (*) (List_1_t454 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m17798_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<FriendInfo>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m27728(__this, method) (( bool (*) (List_1_t454 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m17799_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<FriendInfo>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m27729(__this, ___index, method) (( Object_t * (*) (List_1_t454 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m17800_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<FriendInfo>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m27730(__this, ___index, ___value, method) (( void (*) (List_1_t454 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m17801_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<FriendInfo>::Add(T)
#define List_1_Add_m27731(__this, ___item, method) (( void (*) (List_1_t454 *, FriendInfo_t402 *, const MethodInfo*))List_1_Add_m17810_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<FriendInfo>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m27732(__this, ___newCount, method) (( void (*) (List_1_t454 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m23878_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<FriendInfo>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m27733(__this, ___idx, ___count, method) (( void (*) (List_1_t454 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m23879_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<FriendInfo>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m27734(__this, ___collection, method) (( void (*) (List_1_t454 *, Object_t*, const MethodInfo*))List_1_AddCollection_m23880_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<FriendInfo>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m27735(__this, ___enumerable, method) (( void (*) (List_1_t454 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m23881_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<FriendInfo>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m27736(__this, ___collection, method) (( void (*) (List_1_t454 *, Object_t*, const MethodInfo*))List_1_AddRange_m87_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<FriendInfo>::AsReadOnly()
#define List_1_AsReadOnly_m27737(__this, method) (( ReadOnlyCollection_1_t6225 * (*) (List_1_t454 *, const MethodInfo*))List_1_AsReadOnly_m23882_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<FriendInfo>::Clear()
#define List_1_Clear_m27738(__this, method) (( void (*) (List_1_t454 *, const MethodInfo*))List_1_Clear_m17803_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<FriendInfo>::Contains(T)
#define List_1_Contains_m27739(__this, ___item, method) (( bool (*) (List_1_t454 *, FriendInfo_t402 *, const MethodInfo*))List_1_Contains_m17811_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<FriendInfo>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m27740(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t454 *, FriendInfoU5BU5D_t6223*, int32_t, const MethodInfo*))List_1_CopyTo_m17812_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<FriendInfo>::Find(System.Predicate`1<T>)
#define List_1_Find_m27741(__this, ___match, method) (( FriendInfo_t402 * (*) (List_1_t454 *, Predicate_1_t6226 *, const MethodInfo*))List_1_Find_m23883_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<FriendInfo>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m27742(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t6226 *, const MethodInfo*))List_1_CheckMatch_m23884_gshared)(__this /* static, unused */, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<FriendInfo>::FindAll(System.Predicate`1<T>)
#define List_1_FindAll_m27743(__this, ___match, method) (( List_1_t454 * (*) (List_1_t454 *, Predicate_1_t6226 *, const MethodInfo*))List_1_FindAll_m23885_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<FriendInfo>::FindAllStackBits(System.Predicate`1<T>)
#define List_1_FindAllStackBits_m27744(__this, ___match, method) (( List_1_t454 * (*) (List_1_t454 *, Predicate_1_t6226 *, const MethodInfo*))List_1_FindAllStackBits_m23886_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<FriendInfo>::FindAllList(System.Predicate`1<T>)
#define List_1_FindAllList_m27745(__this, ___match, method) (( List_1_t454 * (*) (List_1_t454 *, Predicate_1_t6226 *, const MethodInfo*))List_1_FindAllList_m23887_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<FriendInfo>::FindIndex(System.Predicate`1<T>)
#define List_1_FindIndex_m27746(__this, ___match, method) (( int32_t (*) (List_1_t454 *, Predicate_1_t6226 *, const MethodInfo*))List_1_FindIndex_m23888_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<FriendInfo>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m27747(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t454 *, int32_t, int32_t, Predicate_1_t6226 *, const MethodInfo*))List_1_GetIndex_m23889_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<FriendInfo>::GetEnumerator()
#define List_1_GetEnumerator_m3087(__this, method) (( Enumerator_t666  (*) (List_1_t454 *, const MethodInfo*))List_1_GetEnumerator_m23890_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<FriendInfo>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m27748(__this, ___index, ___count, method) (( List_1_t454 * (*) (List_1_t454 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m23891_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<FriendInfo>::IndexOf(T)
#define List_1_IndexOf_m27749(__this, ___item, method) (( int32_t (*) (List_1_t454 *, FriendInfo_t402 *, const MethodInfo*))List_1_IndexOf_m17815_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<FriendInfo>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m27750(__this, ___start, ___delta, method) (( void (*) (List_1_t454 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m23892_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<FriendInfo>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m27751(__this, ___index, method) (( void (*) (List_1_t454 *, int32_t, const MethodInfo*))List_1_CheckIndex_m23893_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<FriendInfo>::Insert(System.Int32,T)
#define List_1_Insert_m27752(__this, ___index, ___item, method) (( void (*) (List_1_t454 *, int32_t, FriendInfo_t402 *, const MethodInfo*))List_1_Insert_m17816_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<FriendInfo>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m27753(__this, ___collection, method) (( void (*) (List_1_t454 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m23894_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<FriendInfo>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m27754(__this, ___index, ___collection, method) (( void (*) (List_1_t454 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m23895_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<FriendInfo>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m27755(__this, ___index, ___collection, method) (( void (*) (List_1_t454 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m23896_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<FriendInfo>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m27756(__this, ___index, ___enumerable, method) (( void (*) (List_1_t454 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m23897_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<FriendInfo>::Remove(T)
#define List_1_Remove_m27757(__this, ___item, method) (( bool (*) (List_1_t454 *, FriendInfo_t402 *, const MethodInfo*))List_1_Remove_m17813_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<FriendInfo>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m27758(__this, ___match, method) (( int32_t (*) (List_1_t454 *, Predicate_1_t6226 *, const MethodInfo*))List_1_RemoveAll_m23898_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<FriendInfo>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m27759(__this, ___index, method) (( void (*) (List_1_t454 *, int32_t, const MethodInfo*))List_1_RemoveAt_m17808_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<FriendInfo>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m27760(__this, ___index, ___count, method) (( void (*) (List_1_t454 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m23899_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<FriendInfo>::Reverse()
#define List_1_Reverse_m27761(__this, method) (( void (*) (List_1_t454 *, const MethodInfo*))List_1_Reverse_m23900_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<FriendInfo>::Sort()
#define List_1_Sort_m27762(__this, method) (( void (*) (List_1_t454 *, const MethodInfo*))List_1_Sort_m23901_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<FriendInfo>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m27763(__this, ___comparer, method) (( void (*) (List_1_t454 *, Object_t*, const MethodInfo*))List_1_Sort_m23902_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<FriendInfo>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m27764(__this, ___comparison, method) (( void (*) (List_1_t454 *, Comparison_1_t6227 *, const MethodInfo*))List_1_Sort_m23903_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<FriendInfo>::ToArray()
#define List_1_ToArray_m27765(__this, method) (( FriendInfoU5BU5D_t6223* (*) (List_1_t454 *, const MethodInfo*))List_1_ToArray_m3250_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<FriendInfo>::TrimExcess()
#define List_1_TrimExcess_m27766(__this, method) (( void (*) (List_1_t454 *, const MethodInfo*))List_1_TrimExcess_m23904_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<FriendInfo>::get_Capacity()
#define List_1_get_Capacity_m27767(__this, method) (( int32_t (*) (List_1_t454 *, const MethodInfo*))List_1_get_Capacity_m23905_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<FriendInfo>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m27768(__this, ___value, method) (( void (*) (List_1_t454 *, int32_t, const MethodInfo*))List_1_set_Capacity_m23906_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<FriendInfo>::get_Count()
#define List_1_get_Count_m27769(__this, method) (( int32_t (*) (List_1_t454 *, const MethodInfo*))List_1_get_Count_m17794_gshared)(__this, method)
// T System.Collections.Generic.List`1<FriendInfo>::get_Item(System.Int32)
#define List_1_get_Item_m27770(__this, ___index, method) (( FriendInfo_t402 * (*) (List_1_t454 *, int32_t, const MethodInfo*))List_1_get_Item_m17817_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<FriendInfo>::set_Item(System.Int32,T)
#define List_1_set_Item_m27771(__this, ___index, ___value, method) (( void (*) (List_1_t454 *, int32_t, FriendInfo_t402 *, const MethodInfo*))List_1_set_Item_m17818_gshared)(__this, ___index, ___value, method)

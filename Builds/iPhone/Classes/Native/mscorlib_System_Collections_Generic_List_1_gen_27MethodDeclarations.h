#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Reflection.MethodInfo>
struct List_1_t692;
// System.Object
struct Object_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Collections.Generic.IEnumerable`1<System.Reflection.MethodInfo>
struct IEnumerable_1_t1884;
// System.Reflection.MethodInfo[]
struct MethodInfoU5BU5D_t2475;
// System.Collections.Generic.IEnumerator`1<System.Reflection.MethodInfo>
struct IEnumerator_1_t9743;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Collections.Generic.ICollection`1<System.Reflection.MethodInfo>
struct ICollection_1_t9744;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Reflection.MethodInfo>
struct ReadOnlyCollection_1_t6283;
// System.Predicate`1<System.Reflection.MethodInfo>
struct Predicate_1_t6284;
// System.Collections.Generic.IComparer`1<System.Reflection.MethodInfo>
struct IComparer_1_t9745;
// System.Comparison`1<System.Reflection.MethodInfo>
struct Comparison_1_t6286;
// System.Collections.Generic.List`1/Enumerator<System.Reflection.MethodInfo>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_65.h"

// System.Void System.Collections.Generic.List`1<System.Reflection.MethodInfo>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_genMethodDeclarations.h"
#define List_1__ctor_m18298(__this, method) (( void (*) (List_1_t692 *, const MethodInfo*))List_1__ctor_m84_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Reflection.MethodInfo>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m28652(__this, ___collection, method) (( void (*) (List_1_t692 *, Object_t*, const MethodInfo*))List_1__ctor_m3251_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Reflection.MethodInfo>::.ctor(System.Int32)
#define List_1__ctor_m28653(__this, ___capacity, method) (( void (*) (List_1_t692 *, int32_t, const MethodInfo*))List_1__ctor_m23875_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Reflection.MethodInfo>::.ctor(T[],System.Int32)
#define List_1__ctor_m28654(__this, ___data, ___size, method) (( void (*) (List_1_t692 *, MethodInfoU5BU5D_t2475*, int32_t, const MethodInfo*))List_1__ctor_m23876_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Reflection.MethodInfo>::.cctor()
#define List_1__cctor_m28655(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m23877_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Reflection.MethodInfo>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m28656(__this, method) (( Object_t* (*) (List_1_t692 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m17814_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Reflection.MethodInfo>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m28657(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t692 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m17797_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Reflection.MethodInfo>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m28658(__this, method) (( Object_t * (*) (List_1_t692 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m17793_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Reflection.MethodInfo>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m28659(__this, ___item, method) (( int32_t (*) (List_1_t692 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m17802_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Reflection.MethodInfo>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m28660(__this, ___item, method) (( bool (*) (List_1_t692 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m17804_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Reflection.MethodInfo>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m28661(__this, ___item, method) (( int32_t (*) (List_1_t692 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m17805_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Reflection.MethodInfo>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m28662(__this, ___index, ___item, method) (( void (*) (List_1_t692 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m17806_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Reflection.MethodInfo>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m28663(__this, ___item, method) (( void (*) (List_1_t692 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m17807_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Reflection.MethodInfo>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m28664(__this, method) (( bool (*) (List_1_t692 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m17809_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Reflection.MethodInfo>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m28665(__this, method) (( bool (*) (List_1_t692 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m17795_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Reflection.MethodInfo>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m28666(__this, method) (( Object_t * (*) (List_1_t692 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m17796_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Reflection.MethodInfo>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m28667(__this, method) (( bool (*) (List_1_t692 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m17798_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Reflection.MethodInfo>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m28668(__this, method) (( bool (*) (List_1_t692 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m17799_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Reflection.MethodInfo>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m28669(__this, ___index, method) (( Object_t * (*) (List_1_t692 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m17800_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Reflection.MethodInfo>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m28670(__this, ___index, ___value, method) (( void (*) (List_1_t692 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m17801_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Reflection.MethodInfo>::Add(T)
#define List_1_Add_m28671(__this, ___item, method) (( void (*) (List_1_t692 *, MethodInfo_t *, const MethodInfo*))List_1_Add_m17810_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Reflection.MethodInfo>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m28672(__this, ___newCount, method) (( void (*) (List_1_t692 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m23878_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Reflection.MethodInfo>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m28673(__this, ___idx, ___count, method) (( void (*) (List_1_t692 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m23879_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Reflection.MethodInfo>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m28674(__this, ___collection, method) (( void (*) (List_1_t692 *, Object_t*, const MethodInfo*))List_1_AddCollection_m23880_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Reflection.MethodInfo>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m28675(__this, ___enumerable, method) (( void (*) (List_1_t692 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m23881_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Reflection.MethodInfo>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m28676(__this, ___collection, method) (( void (*) (List_1_t692 *, Object_t*, const MethodInfo*))List_1_AddRange_m87_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Reflection.MethodInfo>::AsReadOnly()
#define List_1_AsReadOnly_m28677(__this, method) (( ReadOnlyCollection_1_t6283 * (*) (List_1_t692 *, const MethodInfo*))List_1_AsReadOnly_m23882_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Reflection.MethodInfo>::Clear()
#define List_1_Clear_m28678(__this, method) (( void (*) (List_1_t692 *, const MethodInfo*))List_1_Clear_m17803_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Reflection.MethodInfo>::Contains(T)
#define List_1_Contains_m28679(__this, ___item, method) (( bool (*) (List_1_t692 *, MethodInfo_t *, const MethodInfo*))List_1_Contains_m17811_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Reflection.MethodInfo>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m28680(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t692 *, MethodInfoU5BU5D_t2475*, int32_t, const MethodInfo*))List_1_CopyTo_m17812_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Reflection.MethodInfo>::Find(System.Predicate`1<T>)
#define List_1_Find_m28681(__this, ___match, method) (( MethodInfo_t * (*) (List_1_t692 *, Predicate_1_t6284 *, const MethodInfo*))List_1_Find_m23883_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Reflection.MethodInfo>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m28682(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t6284 *, const MethodInfo*))List_1_CheckMatch_m23884_gshared)(__this /* static, unused */, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Reflection.MethodInfo>::FindAll(System.Predicate`1<T>)
#define List_1_FindAll_m28683(__this, ___match, method) (( List_1_t692 * (*) (List_1_t692 *, Predicate_1_t6284 *, const MethodInfo*))List_1_FindAll_m23885_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Reflection.MethodInfo>::FindAllStackBits(System.Predicate`1<T>)
#define List_1_FindAllStackBits_m28684(__this, ___match, method) (( List_1_t692 * (*) (List_1_t692 *, Predicate_1_t6284 *, const MethodInfo*))List_1_FindAllStackBits_m23886_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Reflection.MethodInfo>::FindAllList(System.Predicate`1<T>)
#define List_1_FindAllList_m28685(__this, ___match, method) (( List_1_t692 * (*) (List_1_t692 *, Predicate_1_t6284 *, const MethodInfo*))List_1_FindAllList_m23887_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Reflection.MethodInfo>::FindIndex(System.Predicate`1<T>)
#define List_1_FindIndex_m28686(__this, ___match, method) (( int32_t (*) (List_1_t692 *, Predicate_1_t6284 *, const MethodInfo*))List_1_FindIndex_m23888_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Reflection.MethodInfo>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m28687(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t692 *, int32_t, int32_t, Predicate_1_t6284 *, const MethodInfo*))List_1_GetIndex_m23889_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Reflection.MethodInfo>::GetEnumerator()
#define List_1_GetEnumerator_m28688(__this, method) (( Enumerator_t6285  (*) (List_1_t692 *, const MethodInfo*))List_1_GetEnumerator_m23890_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Reflection.MethodInfo>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m28689(__this, ___index, ___count, method) (( List_1_t692 * (*) (List_1_t692 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m23891_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Reflection.MethodInfo>::IndexOf(T)
#define List_1_IndexOf_m28690(__this, ___item, method) (( int32_t (*) (List_1_t692 *, MethodInfo_t *, const MethodInfo*))List_1_IndexOf_m17815_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Reflection.MethodInfo>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m28691(__this, ___start, ___delta, method) (( void (*) (List_1_t692 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m23892_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Reflection.MethodInfo>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m28692(__this, ___index, method) (( void (*) (List_1_t692 *, int32_t, const MethodInfo*))List_1_CheckIndex_m23893_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Reflection.MethodInfo>::Insert(System.Int32,T)
#define List_1_Insert_m28693(__this, ___index, ___item, method) (( void (*) (List_1_t692 *, int32_t, MethodInfo_t *, const MethodInfo*))List_1_Insert_m17816_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Reflection.MethodInfo>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m28694(__this, ___collection, method) (( void (*) (List_1_t692 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m23894_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Reflection.MethodInfo>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m28695(__this, ___index, ___collection, method) (( void (*) (List_1_t692 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m23895_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Reflection.MethodInfo>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m28696(__this, ___index, ___collection, method) (( void (*) (List_1_t692 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m23896_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Reflection.MethodInfo>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m28697(__this, ___index, ___enumerable, method) (( void (*) (List_1_t692 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m23897_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Reflection.MethodInfo>::Remove(T)
#define List_1_Remove_m28698(__this, ___item, method) (( bool (*) (List_1_t692 *, MethodInfo_t *, const MethodInfo*))List_1_Remove_m17813_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Reflection.MethodInfo>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m28699(__this, ___match, method) (( int32_t (*) (List_1_t692 *, Predicate_1_t6284 *, const MethodInfo*))List_1_RemoveAll_m23898_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Reflection.MethodInfo>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m28700(__this, ___index, method) (( void (*) (List_1_t692 *, int32_t, const MethodInfo*))List_1_RemoveAt_m17808_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Reflection.MethodInfo>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m28701(__this, ___index, ___count, method) (( void (*) (List_1_t692 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m23899_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Reflection.MethodInfo>::Reverse()
#define List_1_Reverse_m28702(__this, method) (( void (*) (List_1_t692 *, const MethodInfo*))List_1_Reverse_m23900_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Reflection.MethodInfo>::Sort()
#define List_1_Sort_m28703(__this, method) (( void (*) (List_1_t692 *, const MethodInfo*))List_1_Sort_m23901_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Reflection.MethodInfo>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m28704(__this, ___comparer, method) (( void (*) (List_1_t692 *, Object_t*, const MethodInfo*))List_1_Sort_m23902_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Reflection.MethodInfo>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m28705(__this, ___comparison, method) (( void (*) (List_1_t692 *, Comparison_1_t6286 *, const MethodInfo*))List_1_Sort_m23903_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Reflection.MethodInfo>::ToArray()
#define List_1_ToArray_m28706(__this, method) (( MethodInfoU5BU5D_t2475* (*) (List_1_t692 *, const MethodInfo*))List_1_ToArray_m3250_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Reflection.MethodInfo>::TrimExcess()
#define List_1_TrimExcess_m28707(__this, method) (( void (*) (List_1_t692 *, const MethodInfo*))List_1_TrimExcess_m23904_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Reflection.MethodInfo>::get_Capacity()
#define List_1_get_Capacity_m28708(__this, method) (( int32_t (*) (List_1_t692 *, const MethodInfo*))List_1_get_Capacity_m23905_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Reflection.MethodInfo>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m28709(__this, ___value, method) (( void (*) (List_1_t692 *, int32_t, const MethodInfo*))List_1_set_Capacity_m23906_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Reflection.MethodInfo>::get_Count()
#define List_1_get_Count_m28710(__this, method) (( int32_t (*) (List_1_t692 *, const MethodInfo*))List_1_get_Count_m17794_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Reflection.MethodInfo>::get_Item(System.Int32)
#define List_1_get_Item_m28711(__this, ___index, method) (( MethodInfo_t * (*) (List_1_t692 *, int32_t, const MethodInfo*))List_1_get_Item_m17817_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Reflection.MethodInfo>::set_Item(System.Int32,T)
#define List_1_set_Item_m28712(__this, ___index, ___value, method) (( void (*) (List_1_t692 *, int32_t, MethodInfo_t *, const MethodInfo*))List_1_set_Item_m17818_gshared)(__this, ___index, ___value, method)

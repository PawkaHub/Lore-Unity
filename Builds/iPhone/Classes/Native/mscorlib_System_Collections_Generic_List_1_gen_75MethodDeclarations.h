#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>
struct List_1_t1777;
// System.Object
struct Object_t;
// System.Tuple`2<System.Type,System.Type>
struct Tuple_2_t1776;
// System.Collections.Generic.IEnumerable`1<System.Tuple`2<System.Type,System.Type>>
struct IEnumerable_1_t1778;
// System.Tuple`2<System.Type,System.Type>[]
struct Tuple_2U5BU5D_t6887;
// System.Collections.Generic.IEnumerator`1<System.Tuple`2<System.Type,System.Type>>
struct IEnumerator_1_t10069;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Collections.Generic.ICollection`1<System.Tuple`2<System.Type,System.Type>>
struct ICollection_1_t10065;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Tuple`2<System.Type,System.Type>>
struct ReadOnlyCollection_1_t6896;
// System.Predicate`1<System.Tuple`2<System.Type,System.Type>>
struct Predicate_1_t6897;
// System.Collections.Generic.IComparer`1<System.Tuple`2<System.Type,System.Type>>
struct IComparer_1_t10073;
// System.Comparison`1<System.Tuple`2<System.Type,System.Type>>
struct Comparison_1_t6898;
// System.Collections.Generic.List`1/Enumerator<System.Tuple`2<System.Type,System.Type>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_27.h"

// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_genMethodDeclarations.h"
#define List_1__ctor_m38327(__this, method) (( void (*) (List_1_t1777 *, const MethodInfo*))List_1__ctor_m84_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m38328(__this, ___collection, method) (( void (*) (List_1_t1777 *, Object_t*, const MethodInfo*))List_1__ctor_m3251_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::.ctor(System.Int32)
#define List_1__ctor_m38329(__this, ___capacity, method) (( void (*) (List_1_t1777 *, int32_t, const MethodInfo*))List_1__ctor_m23875_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::.ctor(T[],System.Int32)
#define List_1__ctor_m38330(__this, ___data, ___size, method) (( void (*) (List_1_t1777 *, Tuple_2U5BU5D_t6887*, int32_t, const MethodInfo*))List_1__ctor_m23876_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::.cctor()
#define List_1__cctor_m38331(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m23877_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m38332(__this, method) (( Object_t* (*) (List_1_t1777 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m17814_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m38333(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t1777 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m17797_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m38334(__this, method) (( Object_t * (*) (List_1_t1777 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m17793_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m38335(__this, ___item, method) (( int32_t (*) (List_1_t1777 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m17802_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m38336(__this, ___item, method) (( bool (*) (List_1_t1777 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m17804_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m38337(__this, ___item, method) (( int32_t (*) (List_1_t1777 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m17805_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m38338(__this, ___index, ___item, method) (( void (*) (List_1_t1777 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m17806_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m38339(__this, ___item, method) (( void (*) (List_1_t1777 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m17807_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m38340(__this, method) (( bool (*) (List_1_t1777 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m17809_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m38341(__this, method) (( bool (*) (List_1_t1777 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m17795_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m38342(__this, method) (( Object_t * (*) (List_1_t1777 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m17796_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m38343(__this, method) (( bool (*) (List_1_t1777 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m17798_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m38344(__this, method) (( bool (*) (List_1_t1777 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m17799_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m38345(__this, ___index, method) (( Object_t * (*) (List_1_t1777 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m17800_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m38346(__this, ___index, ___value, method) (( void (*) (List_1_t1777 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m17801_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::Add(T)
#define List_1_Add_m38347(__this, ___item, method) (( void (*) (List_1_t1777 *, Tuple_2_t1776 *, const MethodInfo*))List_1_Add_m17810_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m38348(__this, ___newCount, method) (( void (*) (List_1_t1777 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m23878_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m38349(__this, ___idx, ___count, method) (( void (*) (List_1_t1777 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m23879_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m38350(__this, ___collection, method) (( void (*) (List_1_t1777 *, Object_t*, const MethodInfo*))List_1_AddCollection_m23880_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m38351(__this, ___enumerable, method) (( void (*) (List_1_t1777 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m23881_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m38352(__this, ___collection, method) (( void (*) (List_1_t1777 *, Object_t*, const MethodInfo*))List_1_AddRange_m87_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::AsReadOnly()
#define List_1_AsReadOnly_m38353(__this, method) (( ReadOnlyCollection_1_t6896 * (*) (List_1_t1777 *, const MethodInfo*))List_1_AsReadOnly_m23882_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::Clear()
#define List_1_Clear_m38354(__this, method) (( void (*) (List_1_t1777 *, const MethodInfo*))List_1_Clear_m17803_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::Contains(T)
#define List_1_Contains_m38355(__this, ___item, method) (( bool (*) (List_1_t1777 *, Tuple_2_t1776 *, const MethodInfo*))List_1_Contains_m17811_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m38356(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t1777 *, Tuple_2U5BU5D_t6887*, int32_t, const MethodInfo*))List_1_CopyTo_m17812_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::Find(System.Predicate`1<T>)
#define List_1_Find_m38357(__this, ___match, method) (( Tuple_2_t1776 * (*) (List_1_t1777 *, Predicate_1_t6897 *, const MethodInfo*))List_1_Find_m23883_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m38358(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t6897 *, const MethodInfo*))List_1_CheckMatch_m23884_gshared)(__this /* static, unused */, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::FindAll(System.Predicate`1<T>)
#define List_1_FindAll_m38359(__this, ___match, method) (( List_1_t1777 * (*) (List_1_t1777 *, Predicate_1_t6897 *, const MethodInfo*))List_1_FindAll_m23885_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::FindAllStackBits(System.Predicate`1<T>)
#define List_1_FindAllStackBits_m38360(__this, ___match, method) (( List_1_t1777 * (*) (List_1_t1777 *, Predicate_1_t6897 *, const MethodInfo*))List_1_FindAllStackBits_m23886_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::FindAllList(System.Predicate`1<T>)
#define List_1_FindAllList_m38361(__this, ___match, method) (( List_1_t1777 * (*) (List_1_t1777 *, Predicate_1_t6897 *, const MethodInfo*))List_1_FindAllList_m23887_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::FindIndex(System.Predicate`1<T>)
#define List_1_FindIndex_m38362(__this, ___match, method) (( int32_t (*) (List_1_t1777 *, Predicate_1_t6897 *, const MethodInfo*))List_1_FindIndex_m23888_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m38363(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t1777 *, int32_t, int32_t, Predicate_1_t6897 *, const MethodInfo*))List_1_GetIndex_m23889_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::GetEnumerator()
#define List_1_GetEnumerator_m8532(__this, method) (( Enumerator_t1780  (*) (List_1_t1777 *, const MethodInfo*))List_1_GetEnumerator_m23890_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m38364(__this, ___index, ___count, method) (( List_1_t1777 * (*) (List_1_t1777 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m23891_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::IndexOf(T)
#define List_1_IndexOf_m38365(__this, ___item, method) (( int32_t (*) (List_1_t1777 *, Tuple_2_t1776 *, const MethodInfo*))List_1_IndexOf_m17815_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m38366(__this, ___start, ___delta, method) (( void (*) (List_1_t1777 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m23892_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m38367(__this, ___index, method) (( void (*) (List_1_t1777 *, int32_t, const MethodInfo*))List_1_CheckIndex_m23893_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::Insert(System.Int32,T)
#define List_1_Insert_m38368(__this, ___index, ___item, method) (( void (*) (List_1_t1777 *, int32_t, Tuple_2_t1776 *, const MethodInfo*))List_1_Insert_m17816_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m38369(__this, ___collection, method) (( void (*) (List_1_t1777 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m23894_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m38370(__this, ___index, ___collection, method) (( void (*) (List_1_t1777 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m23895_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m38371(__this, ___index, ___collection, method) (( void (*) (List_1_t1777 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m23896_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m38372(__this, ___index, ___enumerable, method) (( void (*) (List_1_t1777 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m23897_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::Remove(T)
#define List_1_Remove_m38373(__this, ___item, method) (( bool (*) (List_1_t1777 *, Tuple_2_t1776 *, const MethodInfo*))List_1_Remove_m17813_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m38374(__this, ___match, method) (( int32_t (*) (List_1_t1777 *, Predicate_1_t6897 *, const MethodInfo*))List_1_RemoveAll_m23898_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m38375(__this, ___index, method) (( void (*) (List_1_t1777 *, int32_t, const MethodInfo*))List_1_RemoveAt_m17808_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m38376(__this, ___index, ___count, method) (( void (*) (List_1_t1777 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m23899_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::Reverse()
#define List_1_Reverse_m38377(__this, method) (( void (*) (List_1_t1777 *, const MethodInfo*))List_1_Reverse_m23900_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::Sort()
#define List_1_Sort_m38378(__this, method) (( void (*) (List_1_t1777 *, const MethodInfo*))List_1_Sort_m23901_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m38379(__this, ___comparer, method) (( void (*) (List_1_t1777 *, Object_t*, const MethodInfo*))List_1_Sort_m23902_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m38380(__this, ___comparison, method) (( void (*) (List_1_t1777 *, Comparison_1_t6898 *, const MethodInfo*))List_1_Sort_m23903_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::ToArray()
#define List_1_ToArray_m38381(__this, method) (( Tuple_2U5BU5D_t6887* (*) (List_1_t1777 *, const MethodInfo*))List_1_ToArray_m3250_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::TrimExcess()
#define List_1_TrimExcess_m38382(__this, method) (( void (*) (List_1_t1777 *, const MethodInfo*))List_1_TrimExcess_m23904_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::get_Capacity()
#define List_1_get_Capacity_m38383(__this, method) (( int32_t (*) (List_1_t1777 *, const MethodInfo*))List_1_get_Capacity_m23905_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m38384(__this, ___value, method) (( void (*) (List_1_t1777 *, int32_t, const MethodInfo*))List_1_set_Capacity_m23906_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::get_Count()
#define List_1_get_Count_m38385(__this, method) (( int32_t (*) (List_1_t1777 *, const MethodInfo*))List_1_get_Count_m17794_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::get_Item(System.Int32)
#define List_1_get_Item_m38386(__this, ___index, method) (( Tuple_2_t1776 * (*) (List_1_t1777 *, int32_t, const MethodInfo*))List_1_get_Item_m17817_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::set_Item(System.Int32,T)
#define List_1_set_Item_m38387(__this, ___index, ___value, method) (( void (*) (List_1_t1777 *, int32_t, Tuple_2_t1776 *, const MethodInfo*))List_1_set_Item_m17818_gshared)(__this, ___index, ___value, method)

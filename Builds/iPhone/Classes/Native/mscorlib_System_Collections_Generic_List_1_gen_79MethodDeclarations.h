#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Threading.Tasks.Task>
struct List_1_t1834;
// System.Object
struct Object_t;
// System.Threading.Tasks.Task
struct Task_t723;
// System.Collections.Generic.IEnumerable`1<System.Threading.Tasks.Task>
struct IEnumerable_1_t1745;
// System.Threading.Tasks.Task[]
struct TaskU5BU5D_t1673;
// System.Collections.Generic.IEnumerator`1<System.Threading.Tasks.Task>
struct IEnumerator_1_t2488;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Collections.Generic.ICollection`1<System.Threading.Tasks.Task>
struct ICollection_1_t10047;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Threading.Tasks.Task>
struct ReadOnlyCollection_1_t6802;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_t6803;
// System.Collections.Generic.IComparer`1<System.Threading.Tasks.Task>
struct IComparer_1_t10048;
// System.Comparison`1<System.Threading.Tasks.Task>
struct Comparison_1_t6805;
// System.Collections.Generic.List`1/Enumerator<System.Threading.Tasks.Task>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_89.h"

// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_genMethodDeclarations.h"
#define List_1__ctor_m37257(__this, method) (( void (*) (List_1_t1834 *, const MethodInfo*))List_1__ctor_m84_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m37258(__this, ___collection, method) (( void (*) (List_1_t1834 *, Object_t*, const MethodInfo*))List_1__ctor_m3251_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::.ctor(System.Int32)
#define List_1__ctor_m37259(__this, ___capacity, method) (( void (*) (List_1_t1834 *, int32_t, const MethodInfo*))List_1__ctor_m23875_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::.ctor(T[],System.Int32)
#define List_1__ctor_m37260(__this, ___data, ___size, method) (( void (*) (List_1_t1834 *, TaskU5BU5D_t1673*, int32_t, const MethodInfo*))List_1__ctor_m23876_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::.cctor()
#define List_1__cctor_m37261(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m23877_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Threading.Tasks.Task>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m37262(__this, method) (( Object_t* (*) (List_1_t1834 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m17814_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m37263(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t1834 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m17797_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Threading.Tasks.Task>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m37264(__this, method) (( Object_t * (*) (List_1_t1834 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m17793_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Threading.Tasks.Task>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m37265(__this, ___item, method) (( int32_t (*) (List_1_t1834 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m17802_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Threading.Tasks.Task>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m37266(__this, ___item, method) (( bool (*) (List_1_t1834 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m17804_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Threading.Tasks.Task>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m37267(__this, ___item, method) (( int32_t (*) (List_1_t1834 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m17805_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m37268(__this, ___index, ___item, method) (( void (*) (List_1_t1834 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m17806_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m37269(__this, ___item, method) (( void (*) (List_1_t1834 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m17807_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Threading.Tasks.Task>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m37270(__this, method) (( bool (*) (List_1_t1834 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m17809_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Threading.Tasks.Task>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m37271(__this, method) (( bool (*) (List_1_t1834 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m17795_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Threading.Tasks.Task>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m37272(__this, method) (( Object_t * (*) (List_1_t1834 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m17796_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Threading.Tasks.Task>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m37273(__this, method) (( bool (*) (List_1_t1834 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m17798_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Threading.Tasks.Task>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m37274(__this, method) (( bool (*) (List_1_t1834 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m17799_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Threading.Tasks.Task>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m37275(__this, ___index, method) (( Object_t * (*) (List_1_t1834 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m17800_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m37276(__this, ___index, ___value, method) (( void (*) (List_1_t1834 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m17801_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::Add(T)
#define List_1_Add_m37277(__this, ___item, method) (( void (*) (List_1_t1834 *, Task_t723 *, const MethodInfo*))List_1_Add_m17810_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m37278(__this, ___newCount, method) (( void (*) (List_1_t1834 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m23878_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m37279(__this, ___idx, ___count, method) (( void (*) (List_1_t1834 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m23879_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m37280(__this, ___collection, method) (( void (*) (List_1_t1834 *, Object_t*, const MethodInfo*))List_1_AddCollection_m23880_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m37281(__this, ___enumerable, method) (( void (*) (List_1_t1834 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m23881_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m37282(__this, ___collection, method) (( void (*) (List_1_t1834 *, Object_t*, const MethodInfo*))List_1_AddRange_m87_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Threading.Tasks.Task>::AsReadOnly()
#define List_1_AsReadOnly_m37283(__this, method) (( ReadOnlyCollection_1_t6802 * (*) (List_1_t1834 *, const MethodInfo*))List_1_AsReadOnly_m23882_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::Clear()
#define List_1_Clear_m37284(__this, method) (( void (*) (List_1_t1834 *, const MethodInfo*))List_1_Clear_m17803_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Threading.Tasks.Task>::Contains(T)
#define List_1_Contains_m37285(__this, ___item, method) (( bool (*) (List_1_t1834 *, Task_t723 *, const MethodInfo*))List_1_Contains_m17811_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m37286(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t1834 *, TaskU5BU5D_t1673*, int32_t, const MethodInfo*))List_1_CopyTo_m17812_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Threading.Tasks.Task>::Find(System.Predicate`1<T>)
#define List_1_Find_m37287(__this, ___match, method) (( Task_t723 * (*) (List_1_t1834 *, Predicate_1_t6803 *, const MethodInfo*))List_1_Find_m23883_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m37288(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t6803 *, const MethodInfo*))List_1_CheckMatch_m23884_gshared)(__this /* static, unused */, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Threading.Tasks.Task>::FindAll(System.Predicate`1<T>)
#define List_1_FindAll_m37289(__this, ___match, method) (( List_1_t1834 * (*) (List_1_t1834 *, Predicate_1_t6803 *, const MethodInfo*))List_1_FindAll_m23885_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Threading.Tasks.Task>::FindAllStackBits(System.Predicate`1<T>)
#define List_1_FindAllStackBits_m37290(__this, ___match, method) (( List_1_t1834 * (*) (List_1_t1834 *, Predicate_1_t6803 *, const MethodInfo*))List_1_FindAllStackBits_m23886_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Threading.Tasks.Task>::FindAllList(System.Predicate`1<T>)
#define List_1_FindAllList_m37291(__this, ___match, method) (( List_1_t1834 * (*) (List_1_t1834 *, Predicate_1_t6803 *, const MethodInfo*))List_1_FindAllList_m23887_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Threading.Tasks.Task>::FindIndex(System.Predicate`1<T>)
#define List_1_FindIndex_m37292(__this, ___match, method) (( int32_t (*) (List_1_t1834 *, Predicate_1_t6803 *, const MethodInfo*))List_1_FindIndex_m23888_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Threading.Tasks.Task>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m37293(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t1834 *, int32_t, int32_t, Predicate_1_t6803 *, const MethodInfo*))List_1_GetIndex_m23889_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Threading.Tasks.Task>::GetEnumerator()
#define List_1_GetEnumerator_m37294(__this, method) (( Enumerator_t6804  (*) (List_1_t1834 *, const MethodInfo*))List_1_GetEnumerator_m23890_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Threading.Tasks.Task>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m37295(__this, ___index, ___count, method) (( List_1_t1834 * (*) (List_1_t1834 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m23891_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Threading.Tasks.Task>::IndexOf(T)
#define List_1_IndexOf_m37296(__this, ___item, method) (( int32_t (*) (List_1_t1834 *, Task_t723 *, const MethodInfo*))List_1_IndexOf_m17815_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m37297(__this, ___start, ___delta, method) (( void (*) (List_1_t1834 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m23892_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m37298(__this, ___index, method) (( void (*) (List_1_t1834 *, int32_t, const MethodInfo*))List_1_CheckIndex_m23893_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::Insert(System.Int32,T)
#define List_1_Insert_m37299(__this, ___index, ___item, method) (( void (*) (List_1_t1834 *, int32_t, Task_t723 *, const MethodInfo*))List_1_Insert_m17816_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m37300(__this, ___collection, method) (( void (*) (List_1_t1834 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m23894_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m37301(__this, ___index, ___collection, method) (( void (*) (List_1_t1834 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m23895_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m37302(__this, ___index, ___collection, method) (( void (*) (List_1_t1834 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m23896_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m37303(__this, ___index, ___enumerable, method) (( void (*) (List_1_t1834 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m23897_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Threading.Tasks.Task>::Remove(T)
#define List_1_Remove_m37304(__this, ___item, method) (( bool (*) (List_1_t1834 *, Task_t723 *, const MethodInfo*))List_1_Remove_m17813_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Threading.Tasks.Task>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m37305(__this, ___match, method) (( int32_t (*) (List_1_t1834 *, Predicate_1_t6803 *, const MethodInfo*))List_1_RemoveAll_m23898_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m37306(__this, ___index, method) (( void (*) (List_1_t1834 *, int32_t, const MethodInfo*))List_1_RemoveAt_m17808_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m37307(__this, ___index, ___count, method) (( void (*) (List_1_t1834 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m23899_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::Reverse()
#define List_1_Reverse_m37308(__this, method) (( void (*) (List_1_t1834 *, const MethodInfo*))List_1_Reverse_m23900_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::Sort()
#define List_1_Sort_m37309(__this, method) (( void (*) (List_1_t1834 *, const MethodInfo*))List_1_Sort_m23901_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m37310(__this, ___comparer, method) (( void (*) (List_1_t1834 *, Object_t*, const MethodInfo*))List_1_Sort_m23902_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m37311(__this, ___comparison, method) (( void (*) (List_1_t1834 *, Comparison_1_t6805 *, const MethodInfo*))List_1_Sort_m23903_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Threading.Tasks.Task>::ToArray()
#define List_1_ToArray_m37312(__this, method) (( TaskU5BU5D_t1673* (*) (List_1_t1834 *, const MethodInfo*))List_1_ToArray_m3250_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::TrimExcess()
#define List_1_TrimExcess_m37313(__this, method) (( void (*) (List_1_t1834 *, const MethodInfo*))List_1_TrimExcess_m23904_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Threading.Tasks.Task>::get_Capacity()
#define List_1_get_Capacity_m37314(__this, method) (( int32_t (*) (List_1_t1834 *, const MethodInfo*))List_1_get_Capacity_m23905_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m37315(__this, ___value, method) (( void (*) (List_1_t1834 *, int32_t, const MethodInfo*))List_1_set_Capacity_m23906_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Threading.Tasks.Task>::get_Count()
#define List_1_get_Count_m37316(__this, method) (( int32_t (*) (List_1_t1834 *, const MethodInfo*))List_1_get_Count_m17794_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Threading.Tasks.Task>::get_Item(System.Int32)
#define List_1_get_Item_m37317(__this, ___index, method) (( Task_t723 * (*) (List_1_t1834 *, int32_t, const MethodInfo*))List_1_get_Item_m17817_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::set_Item(System.Int32,T)
#define List_1_set_Item_m37318(__this, ___index, ___value, method) (( void (*) (List_1_t1834 *, int32_t, Task_t723 *, const MethodInfo*))List_1_set_Item_m17818_gshared)(__this, ___index, ___value, method)

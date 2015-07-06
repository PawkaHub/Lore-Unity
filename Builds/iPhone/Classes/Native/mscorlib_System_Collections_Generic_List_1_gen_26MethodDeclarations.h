#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<Region>
struct List_1_t433;
// System.Object
struct Object_t;
// Region
struct Region_t443;
// System.Collections.Generic.IEnumerable`1<Region>
struct IEnumerable_1_t9734;
// Region[]
struct RegionU5BU5D_t6274;
// System.Collections.Generic.IEnumerator`1<Region>
struct IEnumerator_1_t9735;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Collections.Generic.ICollection`1<Region>
struct ICollection_1_t9736;
// System.Collections.ObjectModel.ReadOnlyCollection`1<Region>
struct ReadOnlyCollection_1_t6276;
// System.Predicate`1<Region>
struct Predicate_1_t6277;
// System.Collections.Generic.IComparer`1<Region>
struct IComparer_1_t9737;
// System.Comparison`1<Region>
struct Comparison_1_t6278;
// System.Collections.Generic.List`1/Enumerator<Region>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen.h"

// System.Void System.Collections.Generic.List`1<Region>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_genMethodDeclarations.h"
#define List_1__ctor_m28465(__this, method) (( void (*) (List_1_t433 *, const MethodInfo*))List_1__ctor_m84_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Region>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m28466(__this, ___collection, method) (( void (*) (List_1_t433 *, Object_t*, const MethodInfo*))List_1__ctor_m3251_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<Region>::.ctor(System.Int32)
#define List_1__ctor_m3223(__this, ___capacity, method) (( void (*) (List_1_t433 *, int32_t, const MethodInfo*))List_1__ctor_m23875_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<Region>::.ctor(T[],System.Int32)
#define List_1__ctor_m28467(__this, ___data, ___size, method) (( void (*) (List_1_t433 *, RegionU5BU5D_t6274*, int32_t, const MethodInfo*))List_1__ctor_m23876_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<Region>::.cctor()
#define List_1__cctor_m28468(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m23877_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<Region>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m28469(__this, method) (( Object_t* (*) (List_1_t433 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m17814_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Region>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m28470(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t433 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m17797_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<Region>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m28471(__this, method) (( Object_t * (*) (List_1_t433 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m17793_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<Region>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m28472(__this, ___item, method) (( int32_t (*) (List_1_t433 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m17802_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<Region>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m28473(__this, ___item, method) (( bool (*) (List_1_t433 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m17804_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<Region>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m28474(__this, ___item, method) (( int32_t (*) (List_1_t433 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m17805_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Region>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m28475(__this, ___index, ___item, method) (( void (*) (List_1_t433 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m17806_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<Region>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m28476(__this, ___item, method) (( void (*) (List_1_t433 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m17807_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<Region>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m28477(__this, method) (( bool (*) (List_1_t433 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m17809_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Region>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m28478(__this, method) (( bool (*) (List_1_t433 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m17795_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<Region>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m28479(__this, method) (( Object_t * (*) (List_1_t433 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m17796_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Region>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m28480(__this, method) (( bool (*) (List_1_t433 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m17798_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Region>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m28481(__this, method) (( bool (*) (List_1_t433 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m17799_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<Region>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m28482(__this, ___index, method) (( Object_t * (*) (List_1_t433 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m17800_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Region>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m28483(__this, ___index, ___value, method) (( void (*) (List_1_t433 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m17801_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<Region>::Add(T)
#define List_1_Add_m28484(__this, ___item, method) (( void (*) (List_1_t433 *, Region_t443 *, const MethodInfo*))List_1_Add_m17810_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Region>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m28485(__this, ___newCount, method) (( void (*) (List_1_t433 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m23878_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<Region>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m28486(__this, ___idx, ___count, method) (( void (*) (List_1_t433 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m23879_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<Region>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m28487(__this, ___collection, method) (( void (*) (List_1_t433 *, Object_t*, const MethodInfo*))List_1_AddCollection_m23880_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<Region>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m28488(__this, ___enumerable, method) (( void (*) (List_1_t433 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m23881_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<Region>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m28489(__this, ___collection, method) (( void (*) (List_1_t433 *, Object_t*, const MethodInfo*))List_1_AddRange_m87_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<Region>::AsReadOnly()
#define List_1_AsReadOnly_m28490(__this, method) (( ReadOnlyCollection_1_t6276 * (*) (List_1_t433 *, const MethodInfo*))List_1_AsReadOnly_m23882_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Region>::Clear()
#define List_1_Clear_m28491(__this, method) (( void (*) (List_1_t433 *, const MethodInfo*))List_1_Clear_m17803_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Region>::Contains(T)
#define List_1_Contains_m28492(__this, ___item, method) (( bool (*) (List_1_t433 *, Region_t443 *, const MethodInfo*))List_1_Contains_m17811_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Region>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m28493(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t433 *, RegionU5BU5D_t6274*, int32_t, const MethodInfo*))List_1_CopyTo_m17812_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<Region>::Find(System.Predicate`1<T>)
#define List_1_Find_m28494(__this, ___match, method) (( Region_t443 * (*) (List_1_t433 *, Predicate_1_t6277 *, const MethodInfo*))List_1_Find_m23883_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<Region>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m28495(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t6277 *, const MethodInfo*))List_1_CheckMatch_m23884_gshared)(__this /* static, unused */, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<Region>::FindAll(System.Predicate`1<T>)
#define List_1_FindAll_m28496(__this, ___match, method) (( List_1_t433 * (*) (List_1_t433 *, Predicate_1_t6277 *, const MethodInfo*))List_1_FindAll_m23885_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<Region>::FindAllStackBits(System.Predicate`1<T>)
#define List_1_FindAllStackBits_m28497(__this, ___match, method) (( List_1_t433 * (*) (List_1_t433 *, Predicate_1_t6277 *, const MethodInfo*))List_1_FindAllStackBits_m23886_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<Region>::FindAllList(System.Predicate`1<T>)
#define List_1_FindAllList_m28498(__this, ___match, method) (( List_1_t433 * (*) (List_1_t433 *, Predicate_1_t6277 *, const MethodInfo*))List_1_FindAllList_m23887_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<Region>::FindIndex(System.Predicate`1<T>)
#define List_1_FindIndex_m28499(__this, ___match, method) (( int32_t (*) (List_1_t433 *, Predicate_1_t6277 *, const MethodInfo*))List_1_FindIndex_m23888_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<Region>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m28500(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t433 *, int32_t, int32_t, Predicate_1_t6277 *, const MethodInfo*))List_1_GetIndex_m23889_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Region>::GetEnumerator()
#define List_1_GetEnumerator_m3252(__this, method) (( Enumerator_t445  (*) (List_1_t433 *, const MethodInfo*))List_1_GetEnumerator_m23890_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<Region>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m28501(__this, ___index, ___count, method) (( List_1_t433 * (*) (List_1_t433 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m23891_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<Region>::IndexOf(T)
#define List_1_IndexOf_m28502(__this, ___item, method) (( int32_t (*) (List_1_t433 *, Region_t443 *, const MethodInfo*))List_1_IndexOf_m17815_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Region>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m28503(__this, ___start, ___delta, method) (( void (*) (List_1_t433 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m23892_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<Region>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m28504(__this, ___index, method) (( void (*) (List_1_t433 *, int32_t, const MethodInfo*))List_1_CheckIndex_m23893_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Region>::Insert(System.Int32,T)
#define List_1_Insert_m28505(__this, ___index, ___item, method) (( void (*) (List_1_t433 *, int32_t, Region_t443 *, const MethodInfo*))List_1_Insert_m17816_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<Region>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m28506(__this, ___collection, method) (( void (*) (List_1_t433 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m23894_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<Region>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m28507(__this, ___index, ___collection, method) (( void (*) (List_1_t433 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m23895_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<Region>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m28508(__this, ___index, ___collection, method) (( void (*) (List_1_t433 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m23896_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<Region>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m28509(__this, ___index, ___enumerable, method) (( void (*) (List_1_t433 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m23897_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<Region>::Remove(T)
#define List_1_Remove_m28510(__this, ___item, method) (( bool (*) (List_1_t433 *, Region_t443 *, const MethodInfo*))List_1_Remove_m17813_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<Region>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m28511(__this, ___match, method) (( int32_t (*) (List_1_t433 *, Predicate_1_t6277 *, const MethodInfo*))List_1_RemoveAll_m23898_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<Region>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m28512(__this, ___index, method) (( void (*) (List_1_t433 *, int32_t, const MethodInfo*))List_1_RemoveAt_m17808_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Region>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m28513(__this, ___index, ___count, method) (( void (*) (List_1_t433 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m23899_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<Region>::Reverse()
#define List_1_Reverse_m28514(__this, method) (( void (*) (List_1_t433 *, const MethodInfo*))List_1_Reverse_m23900_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Region>::Sort()
#define List_1_Sort_m28515(__this, method) (( void (*) (List_1_t433 *, const MethodInfo*))List_1_Sort_m23901_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Region>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m28516(__this, ___comparer, method) (( void (*) (List_1_t433 *, Object_t*, const MethodInfo*))List_1_Sort_m23902_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<Region>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m28517(__this, ___comparison, method) (( void (*) (List_1_t433 *, Comparison_1_t6278 *, const MethodInfo*))List_1_Sort_m23903_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<Region>::ToArray()
#define List_1_ToArray_m28518(__this, method) (( RegionU5BU5D_t6274* (*) (List_1_t433 *, const MethodInfo*))List_1_ToArray_m3250_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Region>::TrimExcess()
#define List_1_TrimExcess_m28519(__this, method) (( void (*) (List_1_t433 *, const MethodInfo*))List_1_TrimExcess_m23904_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<Region>::get_Capacity()
#define List_1_get_Capacity_m28520(__this, method) (( int32_t (*) (List_1_t433 *, const MethodInfo*))List_1_get_Capacity_m23905_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Region>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m28521(__this, ___value, method) (( void (*) (List_1_t433 *, int32_t, const MethodInfo*))List_1_set_Capacity_m23906_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<Region>::get_Count()
#define List_1_get_Count_m28522(__this, method) (( int32_t (*) (List_1_t433 *, const MethodInfo*))List_1_get_Count_m17794_gshared)(__this, method)
// T System.Collections.Generic.List`1<Region>::get_Item(System.Int32)
#define List_1_get_Item_m28523(__this, ___index, method) (( Region_t443 * (*) (List_1_t433 *, int32_t, const MethodInfo*))List_1_get_Item_m17817_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Region>::set_Item(System.Int32,T)
#define List_1_set_Item_m28524(__this, ___index, ___value, method) (( void (*) (List_1_t433 *, int32_t, Region_t443 *, const MethodInfo*))List_1_set_Item_m17818_gshared)(__this, ___index, ___value, method)

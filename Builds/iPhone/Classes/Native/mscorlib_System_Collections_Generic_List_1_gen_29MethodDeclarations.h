#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<Region>
struct List_1_t461;
// System.Object
struct Object_t;
// Region
struct Region_t471;
// System.Collections.Generic.IEnumerable`1<Region>
struct IEnumerable_1_t10033;
// Region[]
struct RegionU5BU5D_t6602;
// System.Collections.Generic.IEnumerator`1<Region>
struct IEnumerator_1_t10034;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Collections.Generic.ICollection`1<Region>
struct ICollection_1_t10035;
// System.Collections.ObjectModel.ReadOnlyCollection`1<Region>
struct ReadOnlyCollection_1_t6604;
// System.Predicate`1<Region>
struct Predicate_1_t6605;
// System.Collections.Generic.IComparer`1<Region>
struct IComparer_1_t10036;
// System.Comparison`1<Region>
struct Comparison_1_t6606;
// System.Collections.Generic.List`1/Enumerator<Region>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen.h"

// System.Void System.Collections.Generic.List`1<Region>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_genMethodDeclarations.h"
#define List_1__ctor_m29938(__this, method) (( void (*) (List_1_t461 *, const MethodInfo*))List_1__ctor_m84_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Region>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m29939(__this, ___collection, method) (( void (*) (List_1_t461 *, Object_t*, const MethodInfo*))List_1__ctor_m3480_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<Region>::.ctor(System.Int32)
#define List_1__ctor_m3452(__this, ___capacity, method) (( void (*) (List_1_t461 *, int32_t, const MethodInfo*))List_1__ctor_m24292_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<Region>::.ctor(T[],System.Int32)
#define List_1__ctor_m29940(__this, ___data, ___size, method) (( void (*) (List_1_t461 *, RegionU5BU5D_t6602*, int32_t, const MethodInfo*))List_1__ctor_m24293_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<Region>::.cctor()
#define List_1__cctor_m29941(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m24294_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<Region>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m29942(__this, method) (( Object_t* (*) (List_1_t461 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m18232_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Region>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m29943(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t461 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m18215_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<Region>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m29944(__this, method) (( Object_t * (*) (List_1_t461 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m18211_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<Region>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m29945(__this, ___item, method) (( int32_t (*) (List_1_t461 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m18220_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<Region>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m29946(__this, ___item, method) (( bool (*) (List_1_t461 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m18222_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<Region>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m29947(__this, ___item, method) (( int32_t (*) (List_1_t461 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m18223_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Region>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m29948(__this, ___index, ___item, method) (( void (*) (List_1_t461 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m18224_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<Region>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m29949(__this, ___item, method) (( void (*) (List_1_t461 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m18225_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<Region>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m29950(__this, method) (( bool (*) (List_1_t461 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m18227_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Region>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m29951(__this, method) (( bool (*) (List_1_t461 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m18213_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<Region>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m29952(__this, method) (( Object_t * (*) (List_1_t461 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m18214_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Region>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m29953(__this, method) (( bool (*) (List_1_t461 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m18216_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Region>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m29954(__this, method) (( bool (*) (List_1_t461 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m18217_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<Region>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m29955(__this, ___index, method) (( Object_t * (*) (List_1_t461 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m18218_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Region>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m29956(__this, ___index, ___value, method) (( void (*) (List_1_t461 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m18219_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<Region>::Add(T)
#define List_1_Add_m29957(__this, ___item, method) (( void (*) (List_1_t461 *, Region_t471 *, const MethodInfo*))List_1_Add_m18228_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Region>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m29958(__this, ___newCount, method) (( void (*) (List_1_t461 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m24295_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<Region>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m29959(__this, ___idx, ___count, method) (( void (*) (List_1_t461 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m24296_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<Region>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m29960(__this, ___collection, method) (( void (*) (List_1_t461 *, Object_t*, const MethodInfo*))List_1_AddCollection_m24297_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<Region>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m29961(__this, ___enumerable, method) (( void (*) (List_1_t461 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m24298_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<Region>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m29962(__this, ___collection, method) (( void (*) (List_1_t461 *, Object_t*, const MethodInfo*))List_1_AddRange_m87_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<Region>::AsReadOnly()
#define List_1_AsReadOnly_m29963(__this, method) (( ReadOnlyCollection_1_t6604 * (*) (List_1_t461 *, const MethodInfo*))List_1_AsReadOnly_m24299_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Region>::Clear()
#define List_1_Clear_m29964(__this, method) (( void (*) (List_1_t461 *, const MethodInfo*))List_1_Clear_m18221_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Region>::Contains(T)
#define List_1_Contains_m29965(__this, ___item, method) (( bool (*) (List_1_t461 *, Region_t471 *, const MethodInfo*))List_1_Contains_m18229_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Region>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m29966(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t461 *, RegionU5BU5D_t6602*, int32_t, const MethodInfo*))List_1_CopyTo_m18230_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<Region>::Find(System.Predicate`1<T>)
#define List_1_Find_m29967(__this, ___match, method) (( Region_t471 * (*) (List_1_t461 *, Predicate_1_t6605 *, const MethodInfo*))List_1_Find_m24300_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<Region>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m29968(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t6605 *, const MethodInfo*))List_1_CheckMatch_m24301_gshared)(__this /* static, unused */, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<Region>::FindAll(System.Predicate`1<T>)
#define List_1_FindAll_m29969(__this, ___match, method) (( List_1_t461 * (*) (List_1_t461 *, Predicate_1_t6605 *, const MethodInfo*))List_1_FindAll_m24302_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<Region>::FindAllStackBits(System.Predicate`1<T>)
#define List_1_FindAllStackBits_m29970(__this, ___match, method) (( List_1_t461 * (*) (List_1_t461 *, Predicate_1_t6605 *, const MethodInfo*))List_1_FindAllStackBits_m24303_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<Region>::FindAllList(System.Predicate`1<T>)
#define List_1_FindAllList_m29971(__this, ___match, method) (( List_1_t461 * (*) (List_1_t461 *, Predicate_1_t6605 *, const MethodInfo*))List_1_FindAllList_m24304_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<Region>::FindIndex(System.Predicate`1<T>)
#define List_1_FindIndex_m29972(__this, ___match, method) (( int32_t (*) (List_1_t461 *, Predicate_1_t6605 *, const MethodInfo*))List_1_FindIndex_m24305_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<Region>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m29973(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t461 *, int32_t, int32_t, Predicate_1_t6605 *, const MethodInfo*))List_1_GetIndex_m24306_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Region>::GetEnumerator()
#define List_1_GetEnumerator_m3481(__this, method) (( Enumerator_t473  (*) (List_1_t461 *, const MethodInfo*))List_1_GetEnumerator_m24307_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<Region>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m29974(__this, ___index, ___count, method) (( List_1_t461 * (*) (List_1_t461 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m24308_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<Region>::IndexOf(T)
#define List_1_IndexOf_m29975(__this, ___item, method) (( int32_t (*) (List_1_t461 *, Region_t471 *, const MethodInfo*))List_1_IndexOf_m18233_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Region>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m29976(__this, ___start, ___delta, method) (( void (*) (List_1_t461 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m24309_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<Region>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m29977(__this, ___index, method) (( void (*) (List_1_t461 *, int32_t, const MethodInfo*))List_1_CheckIndex_m24310_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Region>::Insert(System.Int32,T)
#define List_1_Insert_m29978(__this, ___index, ___item, method) (( void (*) (List_1_t461 *, int32_t, Region_t471 *, const MethodInfo*))List_1_Insert_m18234_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<Region>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m29979(__this, ___collection, method) (( void (*) (List_1_t461 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m24311_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<Region>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m29980(__this, ___index, ___collection, method) (( void (*) (List_1_t461 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m24312_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<Region>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m29981(__this, ___index, ___collection, method) (( void (*) (List_1_t461 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m24313_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<Region>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m29982(__this, ___index, ___enumerable, method) (( void (*) (List_1_t461 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m24314_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<Region>::Remove(T)
#define List_1_Remove_m29983(__this, ___item, method) (( bool (*) (List_1_t461 *, Region_t471 *, const MethodInfo*))List_1_Remove_m18231_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<Region>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m29984(__this, ___match, method) (( int32_t (*) (List_1_t461 *, Predicate_1_t6605 *, const MethodInfo*))List_1_RemoveAll_m24315_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<Region>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m29985(__this, ___index, method) (( void (*) (List_1_t461 *, int32_t, const MethodInfo*))List_1_RemoveAt_m18226_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Region>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m29986(__this, ___index, ___count, method) (( void (*) (List_1_t461 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m24316_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<Region>::Reverse()
#define List_1_Reverse_m29987(__this, method) (( void (*) (List_1_t461 *, const MethodInfo*))List_1_Reverse_m24317_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Region>::Sort()
#define List_1_Sort_m29988(__this, method) (( void (*) (List_1_t461 *, const MethodInfo*))List_1_Sort_m24318_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Region>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m29989(__this, ___comparer, method) (( void (*) (List_1_t461 *, Object_t*, const MethodInfo*))List_1_Sort_m24319_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<Region>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m29990(__this, ___comparison, method) (( void (*) (List_1_t461 *, Comparison_1_t6606 *, const MethodInfo*))List_1_Sort_m24320_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<Region>::ToArray()
#define List_1_ToArray_m29991(__this, method) (( RegionU5BU5D_t6602* (*) (List_1_t461 *, const MethodInfo*))List_1_ToArray_m3479_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Region>::TrimExcess()
#define List_1_TrimExcess_m29992(__this, method) (( void (*) (List_1_t461 *, const MethodInfo*))List_1_TrimExcess_m24321_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<Region>::get_Capacity()
#define List_1_get_Capacity_m29993(__this, method) (( int32_t (*) (List_1_t461 *, const MethodInfo*))List_1_get_Capacity_m24322_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Region>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m29994(__this, ___value, method) (( void (*) (List_1_t461 *, int32_t, const MethodInfo*))List_1_set_Capacity_m24323_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<Region>::get_Count()
#define List_1_get_Count_m29995(__this, method) (( int32_t (*) (List_1_t461 *, const MethodInfo*))List_1_get_Count_m18212_gshared)(__this, method)
// T System.Collections.Generic.List`1<Region>::get_Item(System.Int32)
#define List_1_get_Item_m29996(__this, ___index, method) (( Region_t471 * (*) (List_1_t461 *, int32_t, const MethodInfo*))List_1_get_Item_m18235_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Region>::set_Item(System.Int32,T)
#define List_1_set_Item_m29997(__this, ___index, ___value, method) (( void (*) (List_1_t461 *, int32_t, Region_t471 *, const MethodInfo*))List_1_set_Item_m18236_gshared)(__this, ___index, ___value, method)

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
struct IEnumerable_1_t6562;
// Region[]
struct RegionU5BU5D_t5186;
// System.Collections.Generic.IEnumerator`1<Region>
struct IEnumerator_1_t6563;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Collections.Generic.ICollection`1<Region>
struct ICollection_1_t6564;
// System.Collections.ObjectModel.ReadOnlyCollection`1<Region>
struct ReadOnlyCollection_1_t5188;
// System.Predicate`1<Region>
struct Predicate_1_t5189;
// System.Collections.Generic.IComparer`1<Region>
struct IComparer_1_t6565;
// System.Comparison`1<Region>
struct Comparison_1_t5190;
// System.Collections.Generic.List`1/Enumerator<Region>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen.h"

// System.Void System.Collections.Generic.List`1<Region>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_genMethodDeclarations.h"
#define List_1__ctor_m27008(__this, method) (( void (*) (List_1_t433 *, const MethodInfo*))List_1__ctor_m84_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Region>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m27009(__this, ___collection, method) (( void (*) (List_1_t433 *, Object_t*, const MethodInfo*))List_1__ctor_m3166_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<Region>::.ctor(System.Int32)
#define List_1__ctor_m3138(__this, ___capacity, method) (( void (*) (List_1_t433 *, int32_t, const MethodInfo*))List_1__ctor_m22534_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<Region>::.ctor(T[],System.Int32)
#define List_1__ctor_m27010(__this, ___data, ___size, method) (( void (*) (List_1_t433 *, RegionU5BU5D_t5186*, int32_t, const MethodInfo*))List_1__ctor_m22535_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<Region>::.cctor()
#define List_1__cctor_m27011(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m22536_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<Region>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m27012(__this, method) (( Object_t* (*) (List_1_t433 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m13947_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Region>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m27013(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t433 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m13930_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<Region>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m27014(__this, method) (( Object_t * (*) (List_1_t433 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m13926_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<Region>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m27015(__this, ___item, method) (( int32_t (*) (List_1_t433 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m13935_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<Region>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m27016(__this, ___item, method) (( bool (*) (List_1_t433 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m13937_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<Region>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m27017(__this, ___item, method) (( int32_t (*) (List_1_t433 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m13938_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Region>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m27018(__this, ___index, ___item, method) (( void (*) (List_1_t433 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m13939_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<Region>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m27019(__this, ___item, method) (( void (*) (List_1_t433 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m13940_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<Region>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m27020(__this, method) (( bool (*) (List_1_t433 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m13942_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Region>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m27021(__this, method) (( bool (*) (List_1_t433 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m13928_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<Region>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m27022(__this, method) (( Object_t * (*) (List_1_t433 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m13929_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Region>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m27023(__this, method) (( bool (*) (List_1_t433 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m13931_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Region>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m27024(__this, method) (( bool (*) (List_1_t433 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m13932_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<Region>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m27025(__this, ___index, method) (( Object_t * (*) (List_1_t433 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m13933_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Region>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m27026(__this, ___index, ___value, method) (( void (*) (List_1_t433 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m13934_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<Region>::Add(T)
#define List_1_Add_m27027(__this, ___item, method) (( void (*) (List_1_t433 *, Region_t443 *, const MethodInfo*))List_1_Add_m13943_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Region>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m27028(__this, ___newCount, method) (( void (*) (List_1_t433 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m22537_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<Region>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m27029(__this, ___idx, ___count, method) (( void (*) (List_1_t433 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m22538_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<Region>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m27030(__this, ___collection, method) (( void (*) (List_1_t433 *, Object_t*, const MethodInfo*))List_1_AddCollection_m22539_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<Region>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m27031(__this, ___enumerable, method) (( void (*) (List_1_t433 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m22540_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<Region>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m27032(__this, ___collection, method) (( void (*) (List_1_t433 *, Object_t*, const MethodInfo*))List_1_AddRange_m87_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<Region>::AsReadOnly()
#define List_1_AsReadOnly_m27033(__this, method) (( ReadOnlyCollection_1_t5188 * (*) (List_1_t433 *, const MethodInfo*))List_1_AsReadOnly_m22541_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Region>::Clear()
#define List_1_Clear_m27034(__this, method) (( void (*) (List_1_t433 *, const MethodInfo*))List_1_Clear_m13936_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Region>::Contains(T)
#define List_1_Contains_m27035(__this, ___item, method) (( bool (*) (List_1_t433 *, Region_t443 *, const MethodInfo*))List_1_Contains_m13944_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Region>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m27036(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t433 *, RegionU5BU5D_t5186*, int32_t, const MethodInfo*))List_1_CopyTo_m13945_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<Region>::Find(System.Predicate`1<T>)
#define List_1_Find_m27037(__this, ___match, method) (( Region_t443 * (*) (List_1_t433 *, Predicate_1_t5189 *, const MethodInfo*))List_1_Find_m22542_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<Region>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m27038(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t5189 *, const MethodInfo*))List_1_CheckMatch_m22543_gshared)(__this /* static, unused */, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<Region>::FindAll(System.Predicate`1<T>)
#define List_1_FindAll_m27039(__this, ___match, method) (( List_1_t433 * (*) (List_1_t433 *, Predicate_1_t5189 *, const MethodInfo*))List_1_FindAll_m22544_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<Region>::FindAllStackBits(System.Predicate`1<T>)
#define List_1_FindAllStackBits_m27040(__this, ___match, method) (( List_1_t433 * (*) (List_1_t433 *, Predicate_1_t5189 *, const MethodInfo*))List_1_FindAllStackBits_m22545_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<Region>::FindAllList(System.Predicate`1<T>)
#define List_1_FindAllList_m27041(__this, ___match, method) (( List_1_t433 * (*) (List_1_t433 *, Predicate_1_t5189 *, const MethodInfo*))List_1_FindAllList_m22546_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<Region>::FindIndex(System.Predicate`1<T>)
#define List_1_FindIndex_m27042(__this, ___match, method) (( int32_t (*) (List_1_t433 *, Predicate_1_t5189 *, const MethodInfo*))List_1_FindIndex_m22547_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<Region>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m27043(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t433 *, int32_t, int32_t, Predicate_1_t5189 *, const MethodInfo*))List_1_GetIndex_m22548_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Region>::GetEnumerator()
#define List_1_GetEnumerator_m3167(__this, method) (( Enumerator_t445  (*) (List_1_t433 *, const MethodInfo*))List_1_GetEnumerator_m22549_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<Region>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m27044(__this, ___index, ___count, method) (( List_1_t433 * (*) (List_1_t433 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m22550_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<Region>::IndexOf(T)
#define List_1_IndexOf_m27045(__this, ___item, method) (( int32_t (*) (List_1_t433 *, Region_t443 *, const MethodInfo*))List_1_IndexOf_m13948_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Region>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m27046(__this, ___start, ___delta, method) (( void (*) (List_1_t433 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m22551_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<Region>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m27047(__this, ___index, method) (( void (*) (List_1_t433 *, int32_t, const MethodInfo*))List_1_CheckIndex_m22552_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Region>::Insert(System.Int32,T)
#define List_1_Insert_m27048(__this, ___index, ___item, method) (( void (*) (List_1_t433 *, int32_t, Region_t443 *, const MethodInfo*))List_1_Insert_m13949_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<Region>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m27049(__this, ___collection, method) (( void (*) (List_1_t433 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m22553_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<Region>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m27050(__this, ___index, ___collection, method) (( void (*) (List_1_t433 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m22554_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<Region>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m27051(__this, ___index, ___collection, method) (( void (*) (List_1_t433 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m22555_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<Region>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m27052(__this, ___index, ___enumerable, method) (( void (*) (List_1_t433 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m22556_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<Region>::Remove(T)
#define List_1_Remove_m27053(__this, ___item, method) (( bool (*) (List_1_t433 *, Region_t443 *, const MethodInfo*))List_1_Remove_m13946_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<Region>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m27054(__this, ___match, method) (( int32_t (*) (List_1_t433 *, Predicate_1_t5189 *, const MethodInfo*))List_1_RemoveAll_m22557_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<Region>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m27055(__this, ___index, method) (( void (*) (List_1_t433 *, int32_t, const MethodInfo*))List_1_RemoveAt_m13941_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Region>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m27056(__this, ___index, ___count, method) (( void (*) (List_1_t433 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m22558_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<Region>::Reverse()
#define List_1_Reverse_m27057(__this, method) (( void (*) (List_1_t433 *, const MethodInfo*))List_1_Reverse_m22559_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Region>::Sort()
#define List_1_Sort_m27058(__this, method) (( void (*) (List_1_t433 *, const MethodInfo*))List_1_Sort_m22560_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Region>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m27059(__this, ___comparer, method) (( void (*) (List_1_t433 *, Object_t*, const MethodInfo*))List_1_Sort_m22561_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<Region>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m27060(__this, ___comparison, method) (( void (*) (List_1_t433 *, Comparison_1_t5190 *, const MethodInfo*))List_1_Sort_m22562_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<Region>::ToArray()
#define List_1_ToArray_m27061(__this, method) (( RegionU5BU5D_t5186* (*) (List_1_t433 *, const MethodInfo*))List_1_ToArray_m3165_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Region>::TrimExcess()
#define List_1_TrimExcess_m27062(__this, method) (( void (*) (List_1_t433 *, const MethodInfo*))List_1_TrimExcess_m22563_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<Region>::get_Capacity()
#define List_1_get_Capacity_m27063(__this, method) (( int32_t (*) (List_1_t433 *, const MethodInfo*))List_1_get_Capacity_m22564_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Region>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m27064(__this, ___value, method) (( void (*) (List_1_t433 *, int32_t, const MethodInfo*))List_1_set_Capacity_m22565_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<Region>::get_Count()
#define List_1_get_Count_m27065(__this, method) (( int32_t (*) (List_1_t433 *, const MethodInfo*))List_1_get_Count_m13927_gshared)(__this, method)
// T System.Collections.Generic.List`1<Region>::get_Item(System.Int32)
#define List_1_get_Item_m27066(__this, ___index, method) (( Region_t443 * (*) (List_1_t433 *, int32_t, const MethodInfo*))List_1_get_Item_m13950_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Region>::set_Item(System.Int32,T)
#define List_1_set_Item_m27067(__this, ___index, ___value, method) (( void (*) (List_1_t433 *, int32_t, Region_t443 *, const MethodInfo*))List_1_set_Item_m13951_gshared)(__this, ___index, ___value, method)

#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<PlaygroundSplines.PlaygroundSpline>
struct List_1_t184;
// System.Object
struct Object_t;
// PlaygroundSplines.PlaygroundSpline
struct PlaygroundSpline_t67;
// System.Collections.Generic.IEnumerable`1<PlaygroundSplines.PlaygroundSpline>
struct IEnumerable_1_t6476;
// PlaygroundSplines.PlaygroundSpline[]
struct PlaygroundSplineU5BU5D_t5019;
// System.Collections.Generic.IEnumerator`1<PlaygroundSplines.PlaygroundSpline>
struct IEnumerator_1_t6477;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Collections.Generic.ICollection`1<PlaygroundSplines.PlaygroundSpline>
struct ICollection_1_t6478;
// System.Collections.ObjectModel.ReadOnlyCollection`1<PlaygroundSplines.PlaygroundSpline>
struct ReadOnlyCollection_1_t5021;
// System.Predicate`1<PlaygroundSplines.PlaygroundSpline>
struct Predicate_1_t5022;
// System.Collections.Generic.IComparer`1<PlaygroundSplines.PlaygroundSpline>
struct IComparer_1_t6479;
// System.Comparison`1<PlaygroundSplines.PlaygroundSpline>
struct Comparison_1_t5024;
// System.Collections.Generic.List`1/Enumerator<PlaygroundSplines.PlaygroundSpline>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_50.h"

// System.Void System.Collections.Generic.List`1<PlaygroundSplines.PlaygroundSpline>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_genMethodDeclarations.h"
#define List_1__ctor_m2583(__this, method) (( void (*) (List_1_t184 *, const MethodInfo*))List_1__ctor_m84_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<PlaygroundSplines.PlaygroundSpline>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m24546(__this, ___collection, method) (( void (*) (List_1_t184 *, Object_t*, const MethodInfo*))List_1__ctor_m3166_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<PlaygroundSplines.PlaygroundSpline>::.ctor(System.Int32)
#define List_1__ctor_m24547(__this, ___capacity, method) (( void (*) (List_1_t184 *, int32_t, const MethodInfo*))List_1__ctor_m22534_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<PlaygroundSplines.PlaygroundSpline>::.ctor(T[],System.Int32)
#define List_1__ctor_m24548(__this, ___data, ___size, method) (( void (*) (List_1_t184 *, PlaygroundSplineU5BU5D_t5019*, int32_t, const MethodInfo*))List_1__ctor_m22535_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<PlaygroundSplines.PlaygroundSpline>::.cctor()
#define List_1__cctor_m24549(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m22536_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<PlaygroundSplines.PlaygroundSpline>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m24550(__this, method) (( Object_t* (*) (List_1_t184 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m13947_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<PlaygroundSplines.PlaygroundSpline>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m24551(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t184 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m13930_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<PlaygroundSplines.PlaygroundSpline>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m24552(__this, method) (( Object_t * (*) (List_1_t184 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m13926_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<PlaygroundSplines.PlaygroundSpline>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m24553(__this, ___item, method) (( int32_t (*) (List_1_t184 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m13935_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<PlaygroundSplines.PlaygroundSpline>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m24554(__this, ___item, method) (( bool (*) (List_1_t184 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m13937_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<PlaygroundSplines.PlaygroundSpline>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m24555(__this, ___item, method) (( int32_t (*) (List_1_t184 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m13938_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<PlaygroundSplines.PlaygroundSpline>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m24556(__this, ___index, ___item, method) (( void (*) (List_1_t184 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m13939_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<PlaygroundSplines.PlaygroundSpline>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m24557(__this, ___item, method) (( void (*) (List_1_t184 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m13940_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<PlaygroundSplines.PlaygroundSpline>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m24558(__this, method) (( bool (*) (List_1_t184 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m13942_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<PlaygroundSplines.PlaygroundSpline>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m24559(__this, method) (( bool (*) (List_1_t184 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m13928_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<PlaygroundSplines.PlaygroundSpline>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m24560(__this, method) (( Object_t * (*) (List_1_t184 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m13929_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<PlaygroundSplines.PlaygroundSpline>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m24561(__this, method) (( bool (*) (List_1_t184 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m13931_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<PlaygroundSplines.PlaygroundSpline>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m24562(__this, method) (( bool (*) (List_1_t184 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m13932_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<PlaygroundSplines.PlaygroundSpline>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m24563(__this, ___index, method) (( Object_t * (*) (List_1_t184 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m13933_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<PlaygroundSplines.PlaygroundSpline>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m24564(__this, ___index, ___value, method) (( void (*) (List_1_t184 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m13934_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<PlaygroundSplines.PlaygroundSpline>::Add(T)
#define List_1_Add_m24565(__this, ___item, method) (( void (*) (List_1_t184 *, PlaygroundSpline_t67 *, const MethodInfo*))List_1_Add_m13943_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<PlaygroundSplines.PlaygroundSpline>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m24566(__this, ___newCount, method) (( void (*) (List_1_t184 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m22537_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<PlaygroundSplines.PlaygroundSpline>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m24567(__this, ___idx, ___count, method) (( void (*) (List_1_t184 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m22538_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<PlaygroundSplines.PlaygroundSpline>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m24568(__this, ___collection, method) (( void (*) (List_1_t184 *, Object_t*, const MethodInfo*))List_1_AddCollection_m22539_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<PlaygroundSplines.PlaygroundSpline>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m24569(__this, ___enumerable, method) (( void (*) (List_1_t184 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m22540_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<PlaygroundSplines.PlaygroundSpline>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m24570(__this, ___collection, method) (( void (*) (List_1_t184 *, Object_t*, const MethodInfo*))List_1_AddRange_m87_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<PlaygroundSplines.PlaygroundSpline>::AsReadOnly()
#define List_1_AsReadOnly_m24571(__this, method) (( ReadOnlyCollection_1_t5021 * (*) (List_1_t184 *, const MethodInfo*))List_1_AsReadOnly_m22541_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<PlaygroundSplines.PlaygroundSpline>::Clear()
#define List_1_Clear_m24572(__this, method) (( void (*) (List_1_t184 *, const MethodInfo*))List_1_Clear_m13936_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<PlaygroundSplines.PlaygroundSpline>::Contains(T)
#define List_1_Contains_m24573(__this, ___item, method) (( bool (*) (List_1_t184 *, PlaygroundSpline_t67 *, const MethodInfo*))List_1_Contains_m13944_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<PlaygroundSplines.PlaygroundSpline>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m24574(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t184 *, PlaygroundSplineU5BU5D_t5019*, int32_t, const MethodInfo*))List_1_CopyTo_m13945_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<PlaygroundSplines.PlaygroundSpline>::Find(System.Predicate`1<T>)
#define List_1_Find_m24575(__this, ___match, method) (( PlaygroundSpline_t67 * (*) (List_1_t184 *, Predicate_1_t5022 *, const MethodInfo*))List_1_Find_m22542_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<PlaygroundSplines.PlaygroundSpline>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m24576(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t5022 *, const MethodInfo*))List_1_CheckMatch_m22543_gshared)(__this /* static, unused */, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<PlaygroundSplines.PlaygroundSpline>::FindAll(System.Predicate`1<T>)
#define List_1_FindAll_m24577(__this, ___match, method) (( List_1_t184 * (*) (List_1_t184 *, Predicate_1_t5022 *, const MethodInfo*))List_1_FindAll_m22544_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<PlaygroundSplines.PlaygroundSpline>::FindAllStackBits(System.Predicate`1<T>)
#define List_1_FindAllStackBits_m24578(__this, ___match, method) (( List_1_t184 * (*) (List_1_t184 *, Predicate_1_t5022 *, const MethodInfo*))List_1_FindAllStackBits_m22545_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<PlaygroundSplines.PlaygroundSpline>::FindAllList(System.Predicate`1<T>)
#define List_1_FindAllList_m24579(__this, ___match, method) (( List_1_t184 * (*) (List_1_t184 *, Predicate_1_t5022 *, const MethodInfo*))List_1_FindAllList_m22546_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<PlaygroundSplines.PlaygroundSpline>::FindIndex(System.Predicate`1<T>)
#define List_1_FindIndex_m24580(__this, ___match, method) (( int32_t (*) (List_1_t184 *, Predicate_1_t5022 *, const MethodInfo*))List_1_FindIndex_m22547_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<PlaygroundSplines.PlaygroundSpline>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m24581(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t184 *, int32_t, int32_t, Predicate_1_t5022 *, const MethodInfo*))List_1_GetIndex_m22548_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<PlaygroundSplines.PlaygroundSpline>::GetEnumerator()
#define List_1_GetEnumerator_m24582(__this, method) (( Enumerator_t5023  (*) (List_1_t184 *, const MethodInfo*))List_1_GetEnumerator_m22549_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<PlaygroundSplines.PlaygroundSpline>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m24583(__this, ___index, ___count, method) (( List_1_t184 * (*) (List_1_t184 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m22550_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<PlaygroundSplines.PlaygroundSpline>::IndexOf(T)
#define List_1_IndexOf_m24584(__this, ___item, method) (( int32_t (*) (List_1_t184 *, PlaygroundSpline_t67 *, const MethodInfo*))List_1_IndexOf_m13948_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<PlaygroundSplines.PlaygroundSpline>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m24585(__this, ___start, ___delta, method) (( void (*) (List_1_t184 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m22551_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<PlaygroundSplines.PlaygroundSpline>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m24586(__this, ___index, method) (( void (*) (List_1_t184 *, int32_t, const MethodInfo*))List_1_CheckIndex_m22552_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<PlaygroundSplines.PlaygroundSpline>::Insert(System.Int32,T)
#define List_1_Insert_m24587(__this, ___index, ___item, method) (( void (*) (List_1_t184 *, int32_t, PlaygroundSpline_t67 *, const MethodInfo*))List_1_Insert_m13949_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<PlaygroundSplines.PlaygroundSpline>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m24588(__this, ___collection, method) (( void (*) (List_1_t184 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m22553_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<PlaygroundSplines.PlaygroundSpline>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m24589(__this, ___index, ___collection, method) (( void (*) (List_1_t184 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m22554_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<PlaygroundSplines.PlaygroundSpline>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m24590(__this, ___index, ___collection, method) (( void (*) (List_1_t184 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m22555_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<PlaygroundSplines.PlaygroundSpline>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m24591(__this, ___index, ___enumerable, method) (( void (*) (List_1_t184 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m22556_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<PlaygroundSplines.PlaygroundSpline>::Remove(T)
#define List_1_Remove_m24592(__this, ___item, method) (( bool (*) (List_1_t184 *, PlaygroundSpline_t67 *, const MethodInfo*))List_1_Remove_m13946_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<PlaygroundSplines.PlaygroundSpline>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m24593(__this, ___match, method) (( int32_t (*) (List_1_t184 *, Predicate_1_t5022 *, const MethodInfo*))List_1_RemoveAll_m22557_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<PlaygroundSplines.PlaygroundSpline>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m24594(__this, ___index, method) (( void (*) (List_1_t184 *, int32_t, const MethodInfo*))List_1_RemoveAt_m13941_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<PlaygroundSplines.PlaygroundSpline>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m24595(__this, ___index, ___count, method) (( void (*) (List_1_t184 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m22558_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<PlaygroundSplines.PlaygroundSpline>::Reverse()
#define List_1_Reverse_m24596(__this, method) (( void (*) (List_1_t184 *, const MethodInfo*))List_1_Reverse_m22559_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<PlaygroundSplines.PlaygroundSpline>::Sort()
#define List_1_Sort_m24597(__this, method) (( void (*) (List_1_t184 *, const MethodInfo*))List_1_Sort_m22560_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<PlaygroundSplines.PlaygroundSpline>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m24598(__this, ___comparer, method) (( void (*) (List_1_t184 *, Object_t*, const MethodInfo*))List_1_Sort_m22561_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<PlaygroundSplines.PlaygroundSpline>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m24599(__this, ___comparison, method) (( void (*) (List_1_t184 *, Comparison_1_t5024 *, const MethodInfo*))List_1_Sort_m22562_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<PlaygroundSplines.PlaygroundSpline>::ToArray()
#define List_1_ToArray_m24600(__this, method) (( PlaygroundSplineU5BU5D_t5019* (*) (List_1_t184 *, const MethodInfo*))List_1_ToArray_m3165_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<PlaygroundSplines.PlaygroundSpline>::TrimExcess()
#define List_1_TrimExcess_m24601(__this, method) (( void (*) (List_1_t184 *, const MethodInfo*))List_1_TrimExcess_m22563_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<PlaygroundSplines.PlaygroundSpline>::get_Capacity()
#define List_1_get_Capacity_m24602(__this, method) (( int32_t (*) (List_1_t184 *, const MethodInfo*))List_1_get_Capacity_m22564_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<PlaygroundSplines.PlaygroundSpline>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m24603(__this, ___value, method) (( void (*) (List_1_t184 *, int32_t, const MethodInfo*))List_1_set_Capacity_m22565_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<PlaygroundSplines.PlaygroundSpline>::get_Count()
#define List_1_get_Count_m24604(__this, method) (( int32_t (*) (List_1_t184 *, const MethodInfo*))List_1_get_Count_m13927_gshared)(__this, method)
// T System.Collections.Generic.List`1<PlaygroundSplines.PlaygroundSpline>::get_Item(System.Int32)
#define List_1_get_Item_m24605(__this, ___index, method) (( PlaygroundSpline_t67 * (*) (List_1_t184 *, int32_t, const MethodInfo*))List_1_get_Item_m13950_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<PlaygroundSplines.PlaygroundSpline>::set_Item(System.Int32,T)
#define List_1_set_Item_m24606(__this, ___index, ___value, method) (( void (*) (List_1_t184 *, int32_t, PlaygroundSpline_t67 *, const MethodInfo*))List_1_set_Item_m13951_gshared)(__this, ___index, ___value, method)

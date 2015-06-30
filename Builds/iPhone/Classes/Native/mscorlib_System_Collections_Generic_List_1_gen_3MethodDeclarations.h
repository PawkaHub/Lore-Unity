#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<PlaygroundSplines.TransformNode>
struct List_1_t65;
// System.Object
struct Object_t;
// PlaygroundSplines.TransformNode
struct TransformNode_t71;
// System.Collections.Generic.IEnumerable`1<PlaygroundSplines.TransformNode>
struct IEnumerable_1_t6449;
// PlaygroundSplines.TransformNode[]
struct TransformNodeU5BU5D_t570;
// System.Collections.Generic.IEnumerator`1<PlaygroundSplines.TransformNode>
struct IEnumerator_1_t6450;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Collections.Generic.ICollection`1<PlaygroundSplines.TransformNode>
struct ICollection_1_t6451;
// System.Collections.ObjectModel.ReadOnlyCollection`1<PlaygroundSplines.TransformNode>
struct ReadOnlyCollection_1_t4978;
// System.Predicate`1<PlaygroundSplines.TransformNode>
struct Predicate_1_t4979;
// System.Collections.Generic.IComparer`1<PlaygroundSplines.TransformNode>
struct IComparer_1_t6452;
// System.Comparison`1<PlaygroundSplines.TransformNode>
struct Comparison_1_t4981;
// System.Collections.Generic.List`1/Enumerator<PlaygroundSplines.TransformNode>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_43.h"

// System.Void System.Collections.Generic.List`1<PlaygroundSplines.TransformNode>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_genMethodDeclarations.h"
#define List_1__ctor_m2401(__this, method) (( void (*) (List_1_t65 *, const MethodInfo*))List_1__ctor_m84_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<PlaygroundSplines.TransformNode>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m23797(__this, ___collection, method) (( void (*) (List_1_t65 *, Object_t*, const MethodInfo*))List_1__ctor_m3166_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<PlaygroundSplines.TransformNode>::.ctor(System.Int32)
#define List_1__ctor_m23798(__this, ___capacity, method) (( void (*) (List_1_t65 *, int32_t, const MethodInfo*))List_1__ctor_m22534_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<PlaygroundSplines.TransformNode>::.ctor(T[],System.Int32)
#define List_1__ctor_m23799(__this, ___data, ___size, method) (( void (*) (List_1_t65 *, TransformNodeU5BU5D_t570*, int32_t, const MethodInfo*))List_1__ctor_m22535_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<PlaygroundSplines.TransformNode>::.cctor()
#define List_1__cctor_m23800(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m22536_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<PlaygroundSplines.TransformNode>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m23801(__this, method) (( Object_t* (*) (List_1_t65 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m13947_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<PlaygroundSplines.TransformNode>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m23802(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t65 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m13930_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<PlaygroundSplines.TransformNode>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m23803(__this, method) (( Object_t * (*) (List_1_t65 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m13926_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<PlaygroundSplines.TransformNode>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m23804(__this, ___item, method) (( int32_t (*) (List_1_t65 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m13935_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<PlaygroundSplines.TransformNode>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m23805(__this, ___item, method) (( bool (*) (List_1_t65 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m13937_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<PlaygroundSplines.TransformNode>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m23806(__this, ___item, method) (( int32_t (*) (List_1_t65 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m13938_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<PlaygroundSplines.TransformNode>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m23807(__this, ___index, ___item, method) (( void (*) (List_1_t65 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m13939_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<PlaygroundSplines.TransformNode>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m23808(__this, ___item, method) (( void (*) (List_1_t65 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m13940_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<PlaygroundSplines.TransformNode>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m23809(__this, method) (( bool (*) (List_1_t65 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m13942_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<PlaygroundSplines.TransformNode>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m23810(__this, method) (( bool (*) (List_1_t65 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m13928_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<PlaygroundSplines.TransformNode>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m23811(__this, method) (( Object_t * (*) (List_1_t65 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m13929_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<PlaygroundSplines.TransformNode>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m23812(__this, method) (( bool (*) (List_1_t65 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m13931_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<PlaygroundSplines.TransformNode>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m23813(__this, method) (( bool (*) (List_1_t65 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m13932_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<PlaygroundSplines.TransformNode>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m23814(__this, ___index, method) (( Object_t * (*) (List_1_t65 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m13933_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<PlaygroundSplines.TransformNode>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m23815(__this, ___index, ___value, method) (( void (*) (List_1_t65 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m13934_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<PlaygroundSplines.TransformNode>::Add(T)
#define List_1_Add_m23816(__this, ___item, method) (( void (*) (List_1_t65 *, TransformNode_t71 *, const MethodInfo*))List_1_Add_m13943_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<PlaygroundSplines.TransformNode>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m23817(__this, ___newCount, method) (( void (*) (List_1_t65 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m22537_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<PlaygroundSplines.TransformNode>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m23818(__this, ___idx, ___count, method) (( void (*) (List_1_t65 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m22538_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<PlaygroundSplines.TransformNode>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m23819(__this, ___collection, method) (( void (*) (List_1_t65 *, Object_t*, const MethodInfo*))List_1_AddCollection_m22539_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<PlaygroundSplines.TransformNode>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m23820(__this, ___enumerable, method) (( void (*) (List_1_t65 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m22540_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<PlaygroundSplines.TransformNode>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m23821(__this, ___collection, method) (( void (*) (List_1_t65 *, Object_t*, const MethodInfo*))List_1_AddRange_m87_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<PlaygroundSplines.TransformNode>::AsReadOnly()
#define List_1_AsReadOnly_m23822(__this, method) (( ReadOnlyCollection_1_t4978 * (*) (List_1_t65 *, const MethodInfo*))List_1_AsReadOnly_m22541_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<PlaygroundSplines.TransformNode>::Clear()
#define List_1_Clear_m23823(__this, method) (( void (*) (List_1_t65 *, const MethodInfo*))List_1_Clear_m13936_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<PlaygroundSplines.TransformNode>::Contains(T)
#define List_1_Contains_m23824(__this, ___item, method) (( bool (*) (List_1_t65 *, TransformNode_t71 *, const MethodInfo*))List_1_Contains_m13944_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<PlaygroundSplines.TransformNode>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m23825(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t65 *, TransformNodeU5BU5D_t570*, int32_t, const MethodInfo*))List_1_CopyTo_m13945_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<PlaygroundSplines.TransformNode>::Find(System.Predicate`1<T>)
#define List_1_Find_m23826(__this, ___match, method) (( TransformNode_t71 * (*) (List_1_t65 *, Predicate_1_t4979 *, const MethodInfo*))List_1_Find_m22542_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<PlaygroundSplines.TransformNode>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m23827(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t4979 *, const MethodInfo*))List_1_CheckMatch_m22543_gshared)(__this /* static, unused */, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<PlaygroundSplines.TransformNode>::FindAll(System.Predicate`1<T>)
#define List_1_FindAll_m23828(__this, ___match, method) (( List_1_t65 * (*) (List_1_t65 *, Predicate_1_t4979 *, const MethodInfo*))List_1_FindAll_m22544_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<PlaygroundSplines.TransformNode>::FindAllStackBits(System.Predicate`1<T>)
#define List_1_FindAllStackBits_m23829(__this, ___match, method) (( List_1_t65 * (*) (List_1_t65 *, Predicate_1_t4979 *, const MethodInfo*))List_1_FindAllStackBits_m22545_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<PlaygroundSplines.TransformNode>::FindAllList(System.Predicate`1<T>)
#define List_1_FindAllList_m23830(__this, ___match, method) (( List_1_t65 * (*) (List_1_t65 *, Predicate_1_t4979 *, const MethodInfo*))List_1_FindAllList_m22546_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<PlaygroundSplines.TransformNode>::FindIndex(System.Predicate`1<T>)
#define List_1_FindIndex_m23831(__this, ___match, method) (( int32_t (*) (List_1_t65 *, Predicate_1_t4979 *, const MethodInfo*))List_1_FindIndex_m22547_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<PlaygroundSplines.TransformNode>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m23832(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t65 *, int32_t, int32_t, Predicate_1_t4979 *, const MethodInfo*))List_1_GetIndex_m22548_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<PlaygroundSplines.TransformNode>::GetEnumerator()
#define List_1_GetEnumerator_m23833(__this, method) (( Enumerator_t4980  (*) (List_1_t65 *, const MethodInfo*))List_1_GetEnumerator_m22549_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<PlaygroundSplines.TransformNode>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m2419(__this, ___index, ___count, method) (( List_1_t65 * (*) (List_1_t65 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m22550_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<PlaygroundSplines.TransformNode>::IndexOf(T)
#define List_1_IndexOf_m23834(__this, ___item, method) (( int32_t (*) (List_1_t65 *, TransformNode_t71 *, const MethodInfo*))List_1_IndexOf_m13948_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<PlaygroundSplines.TransformNode>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m23835(__this, ___start, ___delta, method) (( void (*) (List_1_t65 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m22551_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<PlaygroundSplines.TransformNode>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m23836(__this, ___index, method) (( void (*) (List_1_t65 *, int32_t, const MethodInfo*))List_1_CheckIndex_m22552_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<PlaygroundSplines.TransformNode>::Insert(System.Int32,T)
#define List_1_Insert_m23837(__this, ___index, ___item, method) (( void (*) (List_1_t65 *, int32_t, TransformNode_t71 *, const MethodInfo*))List_1_Insert_m13949_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<PlaygroundSplines.TransformNode>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m23838(__this, ___collection, method) (( void (*) (List_1_t65 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m22553_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<PlaygroundSplines.TransformNode>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m2410(__this, ___index, ___collection, method) (( void (*) (List_1_t65 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m22554_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<PlaygroundSplines.TransformNode>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m23839(__this, ___index, ___collection, method) (( void (*) (List_1_t65 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m22555_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<PlaygroundSplines.TransformNode>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m23840(__this, ___index, ___enumerable, method) (( void (*) (List_1_t65 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m22556_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<PlaygroundSplines.TransformNode>::Remove(T)
#define List_1_Remove_m23841(__this, ___item, method) (( bool (*) (List_1_t65 *, TransformNode_t71 *, const MethodInfo*))List_1_Remove_m13946_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<PlaygroundSplines.TransformNode>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m23842(__this, ___match, method) (( int32_t (*) (List_1_t65 *, Predicate_1_t4979 *, const MethodInfo*))List_1_RemoveAll_m22557_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<PlaygroundSplines.TransformNode>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m23843(__this, ___index, method) (( void (*) (List_1_t65 *, int32_t, const MethodInfo*))List_1_RemoveAt_m13941_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<PlaygroundSplines.TransformNode>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m2413(__this, ___index, ___count, method) (( void (*) (List_1_t65 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m22558_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<PlaygroundSplines.TransformNode>::Reverse()
#define List_1_Reverse_m2415(__this, method) (( void (*) (List_1_t65 *, const MethodInfo*))List_1_Reverse_m22559_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<PlaygroundSplines.TransformNode>::Sort()
#define List_1_Sort_m23844(__this, method) (( void (*) (List_1_t65 *, const MethodInfo*))List_1_Sort_m22560_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<PlaygroundSplines.TransformNode>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m23845(__this, ___comparer, method) (( void (*) (List_1_t65 *, Object_t*, const MethodInfo*))List_1_Sort_m22561_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<PlaygroundSplines.TransformNode>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m23846(__this, ___comparison, method) (( void (*) (List_1_t65 *, Comparison_1_t4981 *, const MethodInfo*))List_1_Sort_m22562_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<PlaygroundSplines.TransformNode>::ToArray()
#define List_1_ToArray_m2420(__this, method) (( TransformNodeU5BU5D_t570* (*) (List_1_t65 *, const MethodInfo*))List_1_ToArray_m3165_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<PlaygroundSplines.TransformNode>::TrimExcess()
#define List_1_TrimExcess_m23847(__this, method) (( void (*) (List_1_t65 *, const MethodInfo*))List_1_TrimExcess_m22563_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<PlaygroundSplines.TransformNode>::get_Capacity()
#define List_1_get_Capacity_m23848(__this, method) (( int32_t (*) (List_1_t65 *, const MethodInfo*))List_1_get_Capacity_m22564_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<PlaygroundSplines.TransformNode>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m23849(__this, ___value, method) (( void (*) (List_1_t65 *, int32_t, const MethodInfo*))List_1_set_Capacity_m22565_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<PlaygroundSplines.TransformNode>::get_Count()
#define List_1_get_Count_m23850(__this, method) (( int32_t (*) (List_1_t65 *, const MethodInfo*))List_1_get_Count_m13927_gshared)(__this, method)
// T System.Collections.Generic.List`1<PlaygroundSplines.TransformNode>::get_Item(System.Int32)
#define List_1_get_Item_m23851(__this, ___index, method) (( TransformNode_t71 * (*) (List_1_t65 *, int32_t, const MethodInfo*))List_1_get_Item_m13950_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<PlaygroundSplines.TransformNode>::set_Item(System.Int32,T)
#define List_1_set_Item_m23852(__this, ___index, ___value, method) (( void (*) (List_1_t65 *, int32_t, TransformNode_t71 *, const MethodInfo*))List_1_set_Item_m13951_gshared)(__this, ___index, ___value, method)

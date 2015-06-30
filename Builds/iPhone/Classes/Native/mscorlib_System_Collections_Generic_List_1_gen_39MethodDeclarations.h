#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.DialogueEntry>
struct List_1_t791;
// System.Object
struct Object_t;
// PixelCrushers.DialogueSystem.DialogueEntry
struct DialogueEntry_t777;
// System.Collections.Generic.IEnumerable`1<PixelCrushers.DialogueSystem.DialogueEntry>
struct IEnumerable_1_t6676;
// PixelCrushers.DialogueSystem.DialogueEntry[]
struct DialogueEntryU5BU5D_t5356;
// System.Collections.Generic.IEnumerator`1<PixelCrushers.DialogueSystem.DialogueEntry>
struct IEnumerator_1_t6677;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Collections.Generic.ICollection`1<PixelCrushers.DialogueSystem.DialogueEntry>
struct ICollection_1_t6678;
// System.Collections.ObjectModel.ReadOnlyCollection`1<PixelCrushers.DialogueSystem.DialogueEntry>
struct ReadOnlyCollection_1_t5358;
// System.Predicate`1<PixelCrushers.DialogueSystem.DialogueEntry>
struct Predicate_1_t792;
// System.Collections.Generic.IComparer`1<PixelCrushers.DialogueSystem.DialogueEntry>
struct IComparer_1_t6679;
// System.Comparison`1<PixelCrushers.DialogueSystem.DialogueEntry>
struct Comparison_1_t5359;
// System.Collections.Generic.List`1/Enumerator<PixelCrushers.DialogueSystem.DialogueEntry>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_8.h"

// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.DialogueEntry>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_genMethodDeclarations.h"
#define List_1__ctor_m5278(__this, method) (( void (*) (List_1_t791 *, const MethodInfo*))List_1__ctor_m84_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.DialogueEntry>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m29809(__this, ___collection, method) (( void (*) (List_1_t791 *, Object_t*, const MethodInfo*))List_1__ctor_m3166_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.DialogueEntry>::.ctor(System.Int32)
#define List_1__ctor_m29810(__this, ___capacity, method) (( void (*) (List_1_t791 *, int32_t, const MethodInfo*))List_1__ctor_m22534_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.DialogueEntry>::.ctor(T[],System.Int32)
#define List_1__ctor_m29811(__this, ___data, ___size, method) (( void (*) (List_1_t791 *, DialogueEntryU5BU5D_t5356*, int32_t, const MethodInfo*))List_1__ctor_m22535_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.DialogueEntry>::.cctor()
#define List_1__cctor_m29812(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m22536_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.DialogueEntry>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m29813(__this, method) (( Object_t* (*) (List_1_t791 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m13947_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.DialogueEntry>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m29814(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t791 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m13930_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.DialogueEntry>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m29815(__this, method) (( Object_t * (*) (List_1_t791 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m13926_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.DialogueEntry>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m29816(__this, ___item, method) (( int32_t (*) (List_1_t791 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m13935_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.DialogueEntry>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m29817(__this, ___item, method) (( bool (*) (List_1_t791 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m13937_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.DialogueEntry>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m29818(__this, ___item, method) (( int32_t (*) (List_1_t791 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m13938_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.DialogueEntry>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m29819(__this, ___index, ___item, method) (( void (*) (List_1_t791 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m13939_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.DialogueEntry>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m29820(__this, ___item, method) (( void (*) (List_1_t791 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m13940_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.DialogueEntry>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m29821(__this, method) (( bool (*) (List_1_t791 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m13942_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.DialogueEntry>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m29822(__this, method) (( bool (*) (List_1_t791 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m13928_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.DialogueEntry>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m29823(__this, method) (( Object_t * (*) (List_1_t791 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m13929_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.DialogueEntry>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m29824(__this, method) (( bool (*) (List_1_t791 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m13931_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.DialogueEntry>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m29825(__this, method) (( bool (*) (List_1_t791 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m13932_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.DialogueEntry>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m29826(__this, ___index, method) (( Object_t * (*) (List_1_t791 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m13933_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.DialogueEntry>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m29827(__this, ___index, ___value, method) (( void (*) (List_1_t791 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m13934_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.DialogueEntry>::Add(T)
#define List_1_Add_m29828(__this, ___item, method) (( void (*) (List_1_t791 *, DialogueEntry_t777 *, const MethodInfo*))List_1_Add_m13943_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.DialogueEntry>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m29829(__this, ___newCount, method) (( void (*) (List_1_t791 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m22537_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.DialogueEntry>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m29830(__this, ___idx, ___count, method) (( void (*) (List_1_t791 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m22538_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.DialogueEntry>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m29831(__this, ___collection, method) (( void (*) (List_1_t791 *, Object_t*, const MethodInfo*))List_1_AddCollection_m22539_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.DialogueEntry>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m29832(__this, ___enumerable, method) (( void (*) (List_1_t791 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m22540_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.DialogueEntry>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m29833(__this, ___collection, method) (( void (*) (List_1_t791 *, Object_t*, const MethodInfo*))List_1_AddRange_m87_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.DialogueEntry>::AsReadOnly()
#define List_1_AsReadOnly_m29834(__this, method) (( ReadOnlyCollection_1_t5358 * (*) (List_1_t791 *, const MethodInfo*))List_1_AsReadOnly_m22541_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.DialogueEntry>::Clear()
#define List_1_Clear_m29835(__this, method) (( void (*) (List_1_t791 *, const MethodInfo*))List_1_Clear_m13936_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.DialogueEntry>::Contains(T)
#define List_1_Contains_m29836(__this, ___item, method) (( bool (*) (List_1_t791 *, DialogueEntry_t777 *, const MethodInfo*))List_1_Contains_m13944_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.DialogueEntry>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m29837(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t791 *, DialogueEntryU5BU5D_t5356*, int32_t, const MethodInfo*))List_1_CopyTo_m13945_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.DialogueEntry>::Find(System.Predicate`1<T>)
#define List_1_Find_m5283(__this, ___match, method) (( DialogueEntry_t777 * (*) (List_1_t791 *, Predicate_1_t792 *, const MethodInfo*))List_1_Find_m22542_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.DialogueEntry>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m29838(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t792 *, const MethodInfo*))List_1_CheckMatch_m22543_gshared)(__this /* static, unused */, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.DialogueEntry>::FindAll(System.Predicate`1<T>)
#define List_1_FindAll_m29839(__this, ___match, method) (( List_1_t791 * (*) (List_1_t791 *, Predicate_1_t792 *, const MethodInfo*))List_1_FindAll_m22544_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.DialogueEntry>::FindAllStackBits(System.Predicate`1<T>)
#define List_1_FindAllStackBits_m29840(__this, ___match, method) (( List_1_t791 * (*) (List_1_t791 *, Predicate_1_t792 *, const MethodInfo*))List_1_FindAllStackBits_m22545_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.DialogueEntry>::FindAllList(System.Predicate`1<T>)
#define List_1_FindAllList_m29841(__this, ___match, method) (( List_1_t791 * (*) (List_1_t791 *, Predicate_1_t792 *, const MethodInfo*))List_1_FindAllList_m22546_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.DialogueEntry>::FindIndex(System.Predicate`1<T>)
#define List_1_FindIndex_m29842(__this, ___match, method) (( int32_t (*) (List_1_t791 *, Predicate_1_t792 *, const MethodInfo*))List_1_FindIndex_m22547_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.DialogueEntry>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m29843(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t791 *, int32_t, int32_t, Predicate_1_t792 *, const MethodInfo*))List_1_GetIndex_m22548_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.DialogueEntry>::GetEnumerator()
#define List_1_GetEnumerator_m5289(__this, method) (( Enumerator_t1090  (*) (List_1_t791 *, const MethodInfo*))List_1_GetEnumerator_m22549_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.DialogueEntry>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m29844(__this, ___index, ___count, method) (( List_1_t791 * (*) (List_1_t791 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m22550_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.DialogueEntry>::IndexOf(T)
#define List_1_IndexOf_m29845(__this, ___item, method) (( int32_t (*) (List_1_t791 *, DialogueEntry_t777 *, const MethodInfo*))List_1_IndexOf_m13948_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.DialogueEntry>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m29846(__this, ___start, ___delta, method) (( void (*) (List_1_t791 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m22551_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.DialogueEntry>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m29847(__this, ___index, method) (( void (*) (List_1_t791 *, int32_t, const MethodInfo*))List_1_CheckIndex_m22552_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.DialogueEntry>::Insert(System.Int32,T)
#define List_1_Insert_m29848(__this, ___index, ___item, method) (( void (*) (List_1_t791 *, int32_t, DialogueEntry_t777 *, const MethodInfo*))List_1_Insert_m13949_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.DialogueEntry>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m29849(__this, ___collection, method) (( void (*) (List_1_t791 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m22553_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.DialogueEntry>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m29850(__this, ___index, ___collection, method) (( void (*) (List_1_t791 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m22554_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.DialogueEntry>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m29851(__this, ___index, ___collection, method) (( void (*) (List_1_t791 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m22555_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.DialogueEntry>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m29852(__this, ___index, ___enumerable, method) (( void (*) (List_1_t791 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m22556_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.DialogueEntry>::Remove(T)
#define List_1_Remove_m29853(__this, ___item, method) (( bool (*) (List_1_t791 *, DialogueEntry_t777 *, const MethodInfo*))List_1_Remove_m13946_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.DialogueEntry>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m29854(__this, ___match, method) (( int32_t (*) (List_1_t791 *, Predicate_1_t792 *, const MethodInfo*))List_1_RemoveAll_m22557_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.DialogueEntry>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m29855(__this, ___index, method) (( void (*) (List_1_t791 *, int32_t, const MethodInfo*))List_1_RemoveAt_m13941_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.DialogueEntry>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m29856(__this, ___index, ___count, method) (( void (*) (List_1_t791 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m22558_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.DialogueEntry>::Reverse()
#define List_1_Reverse_m29857(__this, method) (( void (*) (List_1_t791 *, const MethodInfo*))List_1_Reverse_m22559_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.DialogueEntry>::Sort()
#define List_1_Sort_m29858(__this, method) (( void (*) (List_1_t791 *, const MethodInfo*))List_1_Sort_m22560_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.DialogueEntry>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m29859(__this, ___comparer, method) (( void (*) (List_1_t791 *, Object_t*, const MethodInfo*))List_1_Sort_m22561_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.DialogueEntry>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m29860(__this, ___comparison, method) (( void (*) (List_1_t791 *, Comparison_1_t5359 *, const MethodInfo*))List_1_Sort_m22562_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.DialogueEntry>::ToArray()
#define List_1_ToArray_m29861(__this, method) (( DialogueEntryU5BU5D_t5356* (*) (List_1_t791 *, const MethodInfo*))List_1_ToArray_m3165_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.DialogueEntry>::TrimExcess()
#define List_1_TrimExcess_m29862(__this, method) (( void (*) (List_1_t791 *, const MethodInfo*))List_1_TrimExcess_m22563_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.DialogueEntry>::get_Capacity()
#define List_1_get_Capacity_m29863(__this, method) (( int32_t (*) (List_1_t791 *, const MethodInfo*))List_1_get_Capacity_m22564_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.DialogueEntry>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m29864(__this, ___value, method) (( void (*) (List_1_t791 *, int32_t, const MethodInfo*))List_1_set_Capacity_m22565_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.DialogueEntry>::get_Count()
#define List_1_get_Count_m29865(__this, method) (( int32_t (*) (List_1_t791 *, const MethodInfo*))List_1_get_Count_m13927_gshared)(__this, method)
// T System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.DialogueEntry>::get_Item(System.Int32)
#define List_1_get_Item_m29866(__this, ___index, method) (( DialogueEntry_t777 * (*) (List_1_t791 *, int32_t, const MethodInfo*))List_1_get_Item_m13950_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.DialogueEntry>::set_Item(System.Int32,T)
#define List_1_set_Item_m29867(__this, ___index, ___value, method) (( void (*) (List_1_t791 *, int32_t, DialogueEntry_t777 *, const MethodInfo*))List_1_set_Item_m13951_gshared)(__this, ___index, ___value, method)

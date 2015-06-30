#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.DialogueDatabase>
struct List_1_t809;
// System.Object
struct Object_t;
// PixelCrushers.DialogueSystem.DialogueDatabase
struct DialogueDatabase_t202;
// System.Collections.Generic.IEnumerable`1<PixelCrushers.DialogueSystem.DialogueDatabase>
struct IEnumerable_1_t6703;
// PixelCrushers.DialogueSystem.DialogueDatabase[]
struct DialogueDatabaseU5BU5D_t288;
// System.Collections.Generic.IEnumerator`1<PixelCrushers.DialogueSystem.DialogueDatabase>
struct IEnumerator_1_t6704;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Collections.Generic.ICollection`1<PixelCrushers.DialogueSystem.DialogueDatabase>
struct ICollection_1_t6705;
// System.Collections.ObjectModel.ReadOnlyCollection`1<PixelCrushers.DialogueSystem.DialogueDatabase>
struct ReadOnlyCollection_1_t5387;
// System.Predicate`1<PixelCrushers.DialogueSystem.DialogueDatabase>
struct Predicate_1_t5388;
// System.Collections.Generic.IComparer`1<PixelCrushers.DialogueSystem.DialogueDatabase>
struct IComparer_1_t6706;
// System.Comparison`1<PixelCrushers.DialogueSystem.DialogueDatabase>
struct Comparison_1_t5389;
// System.Collections.Generic.List`1/Enumerator<PixelCrushers.DialogueSystem.DialogueDatabase>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_14.h"

// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.DialogueDatabase>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_genMethodDeclarations.h"
#define List_1__ctor_m5385(__this, method) (( void (*) (List_1_t809 *, const MethodInfo*))List_1__ctor_m84_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.DialogueDatabase>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m5387(__this, ___collection, method) (( void (*) (List_1_t809 *, Object_t*, const MethodInfo*))List_1__ctor_m3166_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.DialogueDatabase>::.ctor(System.Int32)
#define List_1__ctor_m30509(__this, ___capacity, method) (( void (*) (List_1_t809 *, int32_t, const MethodInfo*))List_1__ctor_m22534_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.DialogueDatabase>::.ctor(T[],System.Int32)
#define List_1__ctor_m30510(__this, ___data, ___size, method) (( void (*) (List_1_t809 *, DialogueDatabaseU5BU5D_t288*, int32_t, const MethodInfo*))List_1__ctor_m22535_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.DialogueDatabase>::.cctor()
#define List_1__cctor_m30511(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m22536_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.DialogueDatabase>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m30512(__this, method) (( Object_t* (*) (List_1_t809 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m13947_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.DialogueDatabase>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m30513(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t809 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m13930_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.DialogueDatabase>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m30514(__this, method) (( Object_t * (*) (List_1_t809 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m13926_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.DialogueDatabase>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m30515(__this, ___item, method) (( int32_t (*) (List_1_t809 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m13935_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.DialogueDatabase>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m30516(__this, ___item, method) (( bool (*) (List_1_t809 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m13937_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.DialogueDatabase>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m30517(__this, ___item, method) (( int32_t (*) (List_1_t809 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m13938_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.DialogueDatabase>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m30518(__this, ___index, ___item, method) (( void (*) (List_1_t809 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m13939_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.DialogueDatabase>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m30519(__this, ___item, method) (( void (*) (List_1_t809 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m13940_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.DialogueDatabase>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m30520(__this, method) (( bool (*) (List_1_t809 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m13942_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.DialogueDatabase>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m30521(__this, method) (( bool (*) (List_1_t809 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m13928_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.DialogueDatabase>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m30522(__this, method) (( Object_t * (*) (List_1_t809 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m13929_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.DialogueDatabase>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m30523(__this, method) (( bool (*) (List_1_t809 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m13931_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.DialogueDatabase>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m30524(__this, method) (( bool (*) (List_1_t809 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m13932_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.DialogueDatabase>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m30525(__this, ___index, method) (( Object_t * (*) (List_1_t809 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m13933_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.DialogueDatabase>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m30526(__this, ___index, ___value, method) (( void (*) (List_1_t809 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m13934_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.DialogueDatabase>::Add(T)
#define List_1_Add_m30527(__this, ___item, method) (( void (*) (List_1_t809 *, DialogueDatabase_t202 *, const MethodInfo*))List_1_Add_m13943_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.DialogueDatabase>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m30528(__this, ___newCount, method) (( void (*) (List_1_t809 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m22537_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.DialogueDatabase>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m30529(__this, ___idx, ___count, method) (( void (*) (List_1_t809 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m22538_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.DialogueDatabase>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m30530(__this, ___collection, method) (( void (*) (List_1_t809 *, Object_t*, const MethodInfo*))List_1_AddCollection_m22539_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.DialogueDatabase>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m30531(__this, ___enumerable, method) (( void (*) (List_1_t809 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m22540_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.DialogueDatabase>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m30532(__this, ___collection, method) (( void (*) (List_1_t809 *, Object_t*, const MethodInfo*))List_1_AddRange_m87_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.DialogueDatabase>::AsReadOnly()
#define List_1_AsReadOnly_m30533(__this, method) (( ReadOnlyCollection_1_t5387 * (*) (List_1_t809 *, const MethodInfo*))List_1_AsReadOnly_m22541_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.DialogueDatabase>::Clear()
#define List_1_Clear_m30534(__this, method) (( void (*) (List_1_t809 *, const MethodInfo*))List_1_Clear_m13936_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.DialogueDatabase>::Contains(T)
#define List_1_Contains_m30535(__this, ___item, method) (( bool (*) (List_1_t809 *, DialogueDatabase_t202 *, const MethodInfo*))List_1_Contains_m13944_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.DialogueDatabase>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m30536(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t809 *, DialogueDatabaseU5BU5D_t288*, int32_t, const MethodInfo*))List_1_CopyTo_m13945_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.DialogueDatabase>::Find(System.Predicate`1<T>)
#define List_1_Find_m30537(__this, ___match, method) (( DialogueDatabase_t202 * (*) (List_1_t809 *, Predicate_1_t5388 *, const MethodInfo*))List_1_Find_m22542_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.DialogueDatabase>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m30538(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t5388 *, const MethodInfo*))List_1_CheckMatch_m22543_gshared)(__this /* static, unused */, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.DialogueDatabase>::FindAll(System.Predicate`1<T>)
#define List_1_FindAll_m30539(__this, ___match, method) (( List_1_t809 * (*) (List_1_t809 *, Predicate_1_t5388 *, const MethodInfo*))List_1_FindAll_m22544_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.DialogueDatabase>::FindAllStackBits(System.Predicate`1<T>)
#define List_1_FindAllStackBits_m30540(__this, ___match, method) (( List_1_t809 * (*) (List_1_t809 *, Predicate_1_t5388 *, const MethodInfo*))List_1_FindAllStackBits_m22545_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.DialogueDatabase>::FindAllList(System.Predicate`1<T>)
#define List_1_FindAllList_m30541(__this, ___match, method) (( List_1_t809 * (*) (List_1_t809 *, Predicate_1_t5388 *, const MethodInfo*))List_1_FindAllList_m22546_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.DialogueDatabase>::FindIndex(System.Predicate`1<T>)
#define List_1_FindIndex_m30542(__this, ___match, method) (( int32_t (*) (List_1_t809 *, Predicate_1_t5388 *, const MethodInfo*))List_1_FindIndex_m22547_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.DialogueDatabase>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m30543(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t809 *, int32_t, int32_t, Predicate_1_t5388 *, const MethodInfo*))List_1_GetIndex_m22548_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.DialogueDatabase>::GetEnumerator()
#define List_1_GetEnumerator_m5332(__this, method) (( Enumerator_t1100  (*) (List_1_t809 *, const MethodInfo*))List_1_GetEnumerator_m22549_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.DialogueDatabase>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m30544(__this, ___index, ___count, method) (( List_1_t809 * (*) (List_1_t809 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m22550_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.DialogueDatabase>::IndexOf(T)
#define List_1_IndexOf_m30545(__this, ___item, method) (( int32_t (*) (List_1_t809 *, DialogueDatabase_t202 *, const MethodInfo*))List_1_IndexOf_m13948_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.DialogueDatabase>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m30546(__this, ___start, ___delta, method) (( void (*) (List_1_t809 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m22551_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.DialogueDatabase>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m30547(__this, ___index, method) (( void (*) (List_1_t809 *, int32_t, const MethodInfo*))List_1_CheckIndex_m22552_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.DialogueDatabase>::Insert(System.Int32,T)
#define List_1_Insert_m30548(__this, ___index, ___item, method) (( void (*) (List_1_t809 *, int32_t, DialogueDatabase_t202 *, const MethodInfo*))List_1_Insert_m13949_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.DialogueDatabase>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m30549(__this, ___collection, method) (( void (*) (List_1_t809 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m22553_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.DialogueDatabase>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m30550(__this, ___index, ___collection, method) (( void (*) (List_1_t809 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m22554_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.DialogueDatabase>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m30551(__this, ___index, ___collection, method) (( void (*) (List_1_t809 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m22555_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.DialogueDatabase>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m30552(__this, ___index, ___enumerable, method) (( void (*) (List_1_t809 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m22556_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.DialogueDatabase>::Remove(T)
#define List_1_Remove_m30553(__this, ___item, method) (( bool (*) (List_1_t809 *, DialogueDatabase_t202 *, const MethodInfo*))List_1_Remove_m13946_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.DialogueDatabase>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m30554(__this, ___match, method) (( int32_t (*) (List_1_t809 *, Predicate_1_t5388 *, const MethodInfo*))List_1_RemoveAll_m22557_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.DialogueDatabase>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m30555(__this, ___index, method) (( void (*) (List_1_t809 *, int32_t, const MethodInfo*))List_1_RemoveAt_m13941_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.DialogueDatabase>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m30556(__this, ___index, ___count, method) (( void (*) (List_1_t809 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m22558_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.DialogueDatabase>::Reverse()
#define List_1_Reverse_m30557(__this, method) (( void (*) (List_1_t809 *, const MethodInfo*))List_1_Reverse_m22559_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.DialogueDatabase>::Sort()
#define List_1_Sort_m30558(__this, method) (( void (*) (List_1_t809 *, const MethodInfo*))List_1_Sort_m22560_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.DialogueDatabase>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m30559(__this, ___comparer, method) (( void (*) (List_1_t809 *, Object_t*, const MethodInfo*))List_1_Sort_m22561_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.DialogueDatabase>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m30560(__this, ___comparison, method) (( void (*) (List_1_t809 *, Comparison_1_t5389 *, const MethodInfo*))List_1_Sort_m22562_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.DialogueDatabase>::ToArray()
#define List_1_ToArray_m30561(__this, method) (( DialogueDatabaseU5BU5D_t288* (*) (List_1_t809 *, const MethodInfo*))List_1_ToArray_m3165_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.DialogueDatabase>::TrimExcess()
#define List_1_TrimExcess_m30562(__this, method) (( void (*) (List_1_t809 *, const MethodInfo*))List_1_TrimExcess_m22563_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.DialogueDatabase>::get_Capacity()
#define List_1_get_Capacity_m30563(__this, method) (( int32_t (*) (List_1_t809 *, const MethodInfo*))List_1_get_Capacity_m22564_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.DialogueDatabase>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m30564(__this, ___value, method) (( void (*) (List_1_t809 *, int32_t, const MethodInfo*))List_1_set_Capacity_m22565_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.DialogueDatabase>::get_Count()
#define List_1_get_Count_m30565(__this, method) (( int32_t (*) (List_1_t809 *, const MethodInfo*))List_1_get_Count_m13927_gshared)(__this, method)
// T System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.DialogueDatabase>::get_Item(System.Int32)
#define List_1_get_Item_m30566(__this, ___index, method) (( DialogueDatabase_t202 * (*) (List_1_t809 *, int32_t, const MethodInfo*))List_1_get_Item_m13950_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.DialogueDatabase>::set_Item(System.Int32,T)
#define List_1_set_Item_m30567(__this, ___index, ___value, method) (( void (*) (List_1_t809 *, int32_t, DialogueDatabase_t202 *, const MethodInfo*))List_1_set_Item_m13951_gshared)(__this, ___index, ___value, method)

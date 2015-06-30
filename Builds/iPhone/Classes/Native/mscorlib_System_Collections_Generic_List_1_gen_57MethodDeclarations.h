#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.QuestLog/QuestWatchItem>
struct List_1_t935;
// System.Object
struct Object_t;
// PixelCrushers.DialogueSystem.QuestLog/QuestWatchItem
struct QuestWatchItem_t932;
// System.Collections.Generic.IEnumerable`1<PixelCrushers.DialogueSystem.QuestLog/QuestWatchItem>
struct IEnumerable_1_t6771;
// PixelCrushers.DialogueSystem.QuestLog/QuestWatchItem[]
struct QuestWatchItemU5BU5D_t5490;
// System.Collections.Generic.IEnumerator`1<PixelCrushers.DialogueSystem.QuestLog/QuestWatchItem>
struct IEnumerator_1_t6772;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Collections.Generic.ICollection`1<PixelCrushers.DialogueSystem.QuestLog/QuestWatchItem>
struct ICollection_1_t6773;
// System.Collections.ObjectModel.ReadOnlyCollection`1<PixelCrushers.DialogueSystem.QuestLog/QuestWatchItem>
struct ReadOnlyCollection_1_t5492;
// System.Predicate`1<PixelCrushers.DialogueSystem.QuestLog/QuestWatchItem>
struct Predicate_1_t1132;
// System.Collections.Generic.IComparer`1<PixelCrushers.DialogueSystem.QuestLog/QuestWatchItem>
struct IComparer_1_t6774;
// System.Comparison`1<PixelCrushers.DialogueSystem.QuestLog/QuestWatchItem>
struct Comparison_1_t5493;
// System.Collections.Generic.List`1/Enumerator<PixelCrushers.DialogueSystem.QuestLog/QuestWatchItem>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_25.h"

// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.QuestLog/QuestWatchItem>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_genMethodDeclarations.h"
#define List_1__ctor_m5523(__this, method) (( void (*) (List_1_t935 *, const MethodInfo*))List_1__ctor_m84_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.QuestLog/QuestWatchItem>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m32382(__this, ___collection, method) (( void (*) (List_1_t935 *, Object_t*, const MethodInfo*))List_1__ctor_m3166_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.QuestLog/QuestWatchItem>::.ctor(System.Int32)
#define List_1__ctor_m32383(__this, ___capacity, method) (( void (*) (List_1_t935 *, int32_t, const MethodInfo*))List_1__ctor_m22534_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.QuestLog/QuestWatchItem>::.ctor(T[],System.Int32)
#define List_1__ctor_m32384(__this, ___data, ___size, method) (( void (*) (List_1_t935 *, QuestWatchItemU5BU5D_t5490*, int32_t, const MethodInfo*))List_1__ctor_m22535_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.QuestLog/QuestWatchItem>::.cctor()
#define List_1__cctor_m32385(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m22536_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.QuestLog/QuestWatchItem>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m32386(__this, method) (( Object_t* (*) (List_1_t935 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m13947_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.QuestLog/QuestWatchItem>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m32387(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t935 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m13930_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.QuestLog/QuestWatchItem>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m32388(__this, method) (( Object_t * (*) (List_1_t935 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m13926_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.QuestLog/QuestWatchItem>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m32389(__this, ___item, method) (( int32_t (*) (List_1_t935 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m13935_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.QuestLog/QuestWatchItem>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m32390(__this, ___item, method) (( bool (*) (List_1_t935 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m13937_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.QuestLog/QuestWatchItem>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m32391(__this, ___item, method) (( int32_t (*) (List_1_t935 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m13938_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.QuestLog/QuestWatchItem>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m32392(__this, ___index, ___item, method) (( void (*) (List_1_t935 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m13939_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.QuestLog/QuestWatchItem>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m32393(__this, ___item, method) (( void (*) (List_1_t935 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m13940_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.QuestLog/QuestWatchItem>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m32394(__this, method) (( bool (*) (List_1_t935 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m13942_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.QuestLog/QuestWatchItem>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m32395(__this, method) (( bool (*) (List_1_t935 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m13928_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.QuestLog/QuestWatchItem>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m32396(__this, method) (( Object_t * (*) (List_1_t935 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m13929_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.QuestLog/QuestWatchItem>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m32397(__this, method) (( bool (*) (List_1_t935 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m13931_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.QuestLog/QuestWatchItem>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m32398(__this, method) (( bool (*) (List_1_t935 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m13932_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.QuestLog/QuestWatchItem>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m32399(__this, ___index, method) (( Object_t * (*) (List_1_t935 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m13933_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.QuestLog/QuestWatchItem>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m32400(__this, ___index, ___value, method) (( void (*) (List_1_t935 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m13934_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.QuestLog/QuestWatchItem>::Add(T)
#define List_1_Add_m32401(__this, ___item, method) (( void (*) (List_1_t935 *, QuestWatchItem_t932 *, const MethodInfo*))List_1_Add_m13943_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.QuestLog/QuestWatchItem>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m32402(__this, ___newCount, method) (( void (*) (List_1_t935 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m22537_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.QuestLog/QuestWatchItem>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m32403(__this, ___idx, ___count, method) (( void (*) (List_1_t935 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m22538_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.QuestLog/QuestWatchItem>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m32404(__this, ___collection, method) (( void (*) (List_1_t935 *, Object_t*, const MethodInfo*))List_1_AddCollection_m22539_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.QuestLog/QuestWatchItem>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m32405(__this, ___enumerable, method) (( void (*) (List_1_t935 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m22540_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.QuestLog/QuestWatchItem>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m32406(__this, ___collection, method) (( void (*) (List_1_t935 *, Object_t*, const MethodInfo*))List_1_AddRange_m87_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.QuestLog/QuestWatchItem>::AsReadOnly()
#define List_1_AsReadOnly_m32407(__this, method) (( ReadOnlyCollection_1_t5492 * (*) (List_1_t935 *, const MethodInfo*))List_1_AsReadOnly_m22541_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.QuestLog/QuestWatchItem>::Clear()
#define List_1_Clear_m32408(__this, method) (( void (*) (List_1_t935 *, const MethodInfo*))List_1_Clear_m13936_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.QuestLog/QuestWatchItem>::Contains(T)
#define List_1_Contains_m32409(__this, ___item, method) (( bool (*) (List_1_t935 *, QuestWatchItem_t932 *, const MethodInfo*))List_1_Contains_m13944_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.QuestLog/QuestWatchItem>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m32410(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t935 *, QuestWatchItemU5BU5D_t5490*, int32_t, const MethodInfo*))List_1_CopyTo_m13945_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.QuestLog/QuestWatchItem>::Find(System.Predicate`1<T>)
#define List_1_Find_m32411(__this, ___match, method) (( QuestWatchItem_t932 * (*) (List_1_t935 *, Predicate_1_t1132 *, const MethodInfo*))List_1_Find_m22542_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.QuestLog/QuestWatchItem>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m32412(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t1132 *, const MethodInfo*))List_1_CheckMatch_m22543_gshared)(__this /* static, unused */, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.QuestLog/QuestWatchItem>::FindAll(System.Predicate`1<T>)
#define List_1_FindAll_m32413(__this, ___match, method) (( List_1_t935 * (*) (List_1_t935 *, Predicate_1_t1132 *, const MethodInfo*))List_1_FindAll_m22544_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.QuestLog/QuestWatchItem>::FindAllStackBits(System.Predicate`1<T>)
#define List_1_FindAllStackBits_m32414(__this, ___match, method) (( List_1_t935 * (*) (List_1_t935 *, Predicate_1_t1132 *, const MethodInfo*))List_1_FindAllStackBits_m22545_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.QuestLog/QuestWatchItem>::FindAllList(System.Predicate`1<T>)
#define List_1_FindAllList_m32415(__this, ___match, method) (( List_1_t935 * (*) (List_1_t935 *, Predicate_1_t1132 *, const MethodInfo*))List_1_FindAllList_m22546_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.QuestLog/QuestWatchItem>::FindIndex(System.Predicate`1<T>)
#define List_1_FindIndex_m32416(__this, ___match, method) (( int32_t (*) (List_1_t935 *, Predicate_1_t1132 *, const MethodInfo*))List_1_FindIndex_m22547_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.QuestLog/QuestWatchItem>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m32417(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t935 *, int32_t, int32_t, Predicate_1_t1132 *, const MethodInfo*))List_1_GetIndex_m22548_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.QuestLog/QuestWatchItem>::GetEnumerator()
#define List_1_GetEnumerator_m5525(__this, method) (( Enumerator_t1131  (*) (List_1_t935 *, const MethodInfo*))List_1_GetEnumerator_m22549_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.QuestLog/QuestWatchItem>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m32418(__this, ___index, ___count, method) (( List_1_t935 * (*) (List_1_t935 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m22550_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.QuestLog/QuestWatchItem>::IndexOf(T)
#define List_1_IndexOf_m32419(__this, ___item, method) (( int32_t (*) (List_1_t935 *, QuestWatchItem_t932 *, const MethodInfo*))List_1_IndexOf_m13948_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.QuestLog/QuestWatchItem>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m32420(__this, ___start, ___delta, method) (( void (*) (List_1_t935 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m22551_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.QuestLog/QuestWatchItem>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m32421(__this, ___index, method) (( void (*) (List_1_t935 *, int32_t, const MethodInfo*))List_1_CheckIndex_m22552_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.QuestLog/QuestWatchItem>::Insert(System.Int32,T)
#define List_1_Insert_m32422(__this, ___index, ___item, method) (( void (*) (List_1_t935 *, int32_t, QuestWatchItem_t932 *, const MethodInfo*))List_1_Insert_m13949_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.QuestLog/QuestWatchItem>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m32423(__this, ___collection, method) (( void (*) (List_1_t935 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m22553_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.QuestLog/QuestWatchItem>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m32424(__this, ___index, ___collection, method) (( void (*) (List_1_t935 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m22554_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.QuestLog/QuestWatchItem>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m32425(__this, ___index, ___collection, method) (( void (*) (List_1_t935 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m22555_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.QuestLog/QuestWatchItem>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m32426(__this, ___index, ___enumerable, method) (( void (*) (List_1_t935 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m22556_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.QuestLog/QuestWatchItem>::Remove(T)
#define List_1_Remove_m32427(__this, ___item, method) (( bool (*) (List_1_t935 *, QuestWatchItem_t932 *, const MethodInfo*))List_1_Remove_m13946_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.QuestLog/QuestWatchItem>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m5529(__this, ___match, method) (( int32_t (*) (List_1_t935 *, Predicate_1_t1132 *, const MethodInfo*))List_1_RemoveAll_m22557_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.QuestLog/QuestWatchItem>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m32428(__this, ___index, method) (( void (*) (List_1_t935 *, int32_t, const MethodInfo*))List_1_RemoveAt_m13941_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.QuestLog/QuestWatchItem>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m32429(__this, ___index, ___count, method) (( void (*) (List_1_t935 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m22558_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.QuestLog/QuestWatchItem>::Reverse()
#define List_1_Reverse_m32430(__this, method) (( void (*) (List_1_t935 *, const MethodInfo*))List_1_Reverse_m22559_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.QuestLog/QuestWatchItem>::Sort()
#define List_1_Sort_m32431(__this, method) (( void (*) (List_1_t935 *, const MethodInfo*))List_1_Sort_m22560_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.QuestLog/QuestWatchItem>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m32432(__this, ___comparer, method) (( void (*) (List_1_t935 *, Object_t*, const MethodInfo*))List_1_Sort_m22561_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.QuestLog/QuestWatchItem>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m32433(__this, ___comparison, method) (( void (*) (List_1_t935 *, Comparison_1_t5493 *, const MethodInfo*))List_1_Sort_m22562_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.QuestLog/QuestWatchItem>::ToArray()
#define List_1_ToArray_m32434(__this, method) (( QuestWatchItemU5BU5D_t5490* (*) (List_1_t935 *, const MethodInfo*))List_1_ToArray_m3165_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.QuestLog/QuestWatchItem>::TrimExcess()
#define List_1_TrimExcess_m32435(__this, method) (( void (*) (List_1_t935 *, const MethodInfo*))List_1_TrimExcess_m22563_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.QuestLog/QuestWatchItem>::get_Capacity()
#define List_1_get_Capacity_m32436(__this, method) (( int32_t (*) (List_1_t935 *, const MethodInfo*))List_1_get_Capacity_m22564_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.QuestLog/QuestWatchItem>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m32437(__this, ___value, method) (( void (*) (List_1_t935 *, int32_t, const MethodInfo*))List_1_set_Capacity_m22565_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.QuestLog/QuestWatchItem>::get_Count()
#define List_1_get_Count_m32438(__this, method) (( int32_t (*) (List_1_t935 *, const MethodInfo*))List_1_get_Count_m13927_gshared)(__this, method)
// T System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.QuestLog/QuestWatchItem>::get_Item(System.Int32)
#define List_1_get_Item_m32439(__this, ___index, method) (( QuestWatchItem_t932 * (*) (List_1_t935 *, int32_t, const MethodInfo*))List_1_get_Item_m13950_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.QuestLog/QuestWatchItem>::set_Item(System.Int32,T)
#define List_1_set_Item_m32440(__this, ___index, ___value, method) (( void (*) (List_1_t935 *, int32_t, QuestWatchItem_t932 *, const MethodInfo*))List_1_set_Item_m13951_gshared)(__this, ___index, ___value, method)

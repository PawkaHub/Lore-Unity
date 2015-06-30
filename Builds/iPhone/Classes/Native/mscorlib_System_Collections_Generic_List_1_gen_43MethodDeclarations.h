#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Item>
struct List_1_t813;
// System.Object
struct Object_t;
// PixelCrushers.DialogueSystem.Item
struct Item_t824;
// System.Collections.Generic.IEnumerable`1<PixelCrushers.DialogueSystem.Item>
struct IEnumerable_1_t6691;
// PixelCrushers.DialogueSystem.Item[]
struct ItemU5BU5D_t5374;
// System.Collections.Generic.IEnumerator`1<PixelCrushers.DialogueSystem.Item>
struct IEnumerator_1_t6692;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Collections.Generic.ICollection`1<PixelCrushers.DialogueSystem.Item>
struct ICollection_1_t6693;
// System.Collections.ObjectModel.ReadOnlyCollection`1<PixelCrushers.DialogueSystem.Item>
struct ReadOnlyCollection_1_t5376;
// System.Predicate`1<PixelCrushers.DialogueSystem.Item>
struct Predicate_1_t1091;
// System.Collections.Generic.IComparer`1<PixelCrushers.DialogueSystem.Item>
struct IComparer_1_t6694;
// System.Comparison`1<PixelCrushers.DialogueSystem.Item>
struct Comparison_1_t5377;
// System.Collections.Generic.List`1/Enumerator<PixelCrushers.DialogueSystem.Item>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_10.h"

// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Item>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_genMethodDeclarations.h"
#define List_1__ctor_m5298(__this, method) (( void (*) (List_1_t813 *, const MethodInfo*))List_1__ctor_m84_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Item>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m30212(__this, ___collection, method) (( void (*) (List_1_t813 *, Object_t*, const MethodInfo*))List_1__ctor_m3166_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Item>::.ctor(System.Int32)
#define List_1__ctor_m30213(__this, ___capacity, method) (( void (*) (List_1_t813 *, int32_t, const MethodInfo*))List_1__ctor_m22534_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Item>::.ctor(T[],System.Int32)
#define List_1__ctor_m30214(__this, ___data, ___size, method) (( void (*) (List_1_t813 *, ItemU5BU5D_t5374*, int32_t, const MethodInfo*))List_1__ctor_m22535_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Item>::.cctor()
#define List_1__cctor_m30215(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m22536_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Item>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m30216(__this, method) (( Object_t* (*) (List_1_t813 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m13947_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Item>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m30217(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t813 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m13930_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Item>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m30218(__this, method) (( Object_t * (*) (List_1_t813 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m13926_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Item>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m30219(__this, ___item, method) (( int32_t (*) (List_1_t813 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m13935_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Item>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m30220(__this, ___item, method) (( bool (*) (List_1_t813 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m13937_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Item>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m30221(__this, ___item, method) (( int32_t (*) (List_1_t813 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m13938_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Item>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m30222(__this, ___index, ___item, method) (( void (*) (List_1_t813 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m13939_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Item>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m30223(__this, ___item, method) (( void (*) (List_1_t813 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m13940_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Item>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m30224(__this, method) (( bool (*) (List_1_t813 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m13942_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Item>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m30225(__this, method) (( bool (*) (List_1_t813 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m13928_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Item>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m30226(__this, method) (( Object_t * (*) (List_1_t813 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m13929_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Item>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m30227(__this, method) (( bool (*) (List_1_t813 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m13931_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Item>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m30228(__this, method) (( bool (*) (List_1_t813 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m13932_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Item>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m30229(__this, ___index, method) (( Object_t * (*) (List_1_t813 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m13933_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Item>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m30230(__this, ___index, ___value, method) (( void (*) (List_1_t813 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m13934_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Item>::Add(T)
#define List_1_Add_m30231(__this, ___item, method) (( void (*) (List_1_t813 *, Item_t824 *, const MethodInfo*))List_1_Add_m13943_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Item>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m30232(__this, ___newCount, method) (( void (*) (List_1_t813 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m22537_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Item>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m30233(__this, ___idx, ___count, method) (( void (*) (List_1_t813 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m22538_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Item>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m30234(__this, ___collection, method) (( void (*) (List_1_t813 *, Object_t*, const MethodInfo*))List_1_AddCollection_m22539_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Item>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m30235(__this, ___enumerable, method) (( void (*) (List_1_t813 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m22540_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Item>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m30236(__this, ___collection, method) (( void (*) (List_1_t813 *, Object_t*, const MethodInfo*))List_1_AddRange_m87_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Item>::AsReadOnly()
#define List_1_AsReadOnly_m30237(__this, method) (( ReadOnlyCollection_1_t5376 * (*) (List_1_t813 *, const MethodInfo*))List_1_AsReadOnly_m22541_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Item>::Clear()
#define List_1_Clear_m30238(__this, method) (( void (*) (List_1_t813 *, const MethodInfo*))List_1_Clear_m13936_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Item>::Contains(T)
#define List_1_Contains_m30239(__this, ___item, method) (( bool (*) (List_1_t813 *, Item_t824 *, const MethodInfo*))List_1_Contains_m13944_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Item>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m30240(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t813 *, ItemU5BU5D_t5374*, int32_t, const MethodInfo*))List_1_CopyTo_m13945_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Item>::Find(System.Predicate`1<T>)
#define List_1_Find_m5305(__this, ___match, method) (( Item_t824 * (*) (List_1_t813 *, Predicate_1_t1091 *, const MethodInfo*))List_1_Find_m22542_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Item>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m30241(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t1091 *, const MethodInfo*))List_1_CheckMatch_m22543_gshared)(__this /* static, unused */, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Item>::FindAll(System.Predicate`1<T>)
#define List_1_FindAll_m30242(__this, ___match, method) (( List_1_t813 * (*) (List_1_t813 *, Predicate_1_t1091 *, const MethodInfo*))List_1_FindAll_m22544_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Item>::FindAllStackBits(System.Predicate`1<T>)
#define List_1_FindAllStackBits_m30243(__this, ___match, method) (( List_1_t813 * (*) (List_1_t813 *, Predicate_1_t1091 *, const MethodInfo*))List_1_FindAllStackBits_m22545_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Item>::FindAllList(System.Predicate`1<T>)
#define List_1_FindAllList_m30244(__this, ___match, method) (( List_1_t813 * (*) (List_1_t813 *, Predicate_1_t1091 *, const MethodInfo*))List_1_FindAllList_m22546_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Item>::FindIndex(System.Predicate`1<T>)
#define List_1_FindIndex_m30245(__this, ___match, method) (( int32_t (*) (List_1_t813 *, Predicate_1_t1091 *, const MethodInfo*))List_1_FindIndex_m22547_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Item>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m30246(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t813 *, int32_t, int32_t, Predicate_1_t1091 *, const MethodInfo*))List_1_GetIndex_m22548_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Item>::GetEnumerator()
#define List_1_GetEnumerator_m5315(__this, method) (( Enumerator_t1096  (*) (List_1_t813 *, const MethodInfo*))List_1_GetEnumerator_m22549_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Item>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m30247(__this, ___index, ___count, method) (( List_1_t813 * (*) (List_1_t813 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m22550_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Item>::IndexOf(T)
#define List_1_IndexOf_m30248(__this, ___item, method) (( int32_t (*) (List_1_t813 *, Item_t824 *, const MethodInfo*))List_1_IndexOf_m13948_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Item>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m30249(__this, ___start, ___delta, method) (( void (*) (List_1_t813 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m22551_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Item>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m30250(__this, ___index, method) (( void (*) (List_1_t813 *, int32_t, const MethodInfo*))List_1_CheckIndex_m22552_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Item>::Insert(System.Int32,T)
#define List_1_Insert_m30251(__this, ___index, ___item, method) (( void (*) (List_1_t813 *, int32_t, Item_t824 *, const MethodInfo*))List_1_Insert_m13949_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Item>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m30252(__this, ___collection, method) (( void (*) (List_1_t813 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m22553_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Item>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m30253(__this, ___index, ___collection, method) (( void (*) (List_1_t813 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m22554_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Item>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m30254(__this, ___index, ___collection, method) (( void (*) (List_1_t813 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m22555_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Item>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m30255(__this, ___index, ___enumerable, method) (( void (*) (List_1_t813 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m22556_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Item>::Remove(T)
#define List_1_Remove_m30256(__this, ___item, method) (( bool (*) (List_1_t813 *, Item_t824 *, const MethodInfo*))List_1_Remove_m13946_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Item>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m5328(__this, ___match, method) (( int32_t (*) (List_1_t813 *, Predicate_1_t1091 *, const MethodInfo*))List_1_RemoveAll_m22557_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Item>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m30257(__this, ___index, method) (( void (*) (List_1_t813 *, int32_t, const MethodInfo*))List_1_RemoveAt_m13941_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Item>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m30258(__this, ___index, ___count, method) (( void (*) (List_1_t813 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m22558_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Item>::Reverse()
#define List_1_Reverse_m30259(__this, method) (( void (*) (List_1_t813 *, const MethodInfo*))List_1_Reverse_m22559_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Item>::Sort()
#define List_1_Sort_m30260(__this, method) (( void (*) (List_1_t813 *, const MethodInfo*))List_1_Sort_m22560_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Item>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m30261(__this, ___comparer, method) (( void (*) (List_1_t813 *, Object_t*, const MethodInfo*))List_1_Sort_m22561_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Item>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m30262(__this, ___comparison, method) (( void (*) (List_1_t813 *, Comparison_1_t5377 *, const MethodInfo*))List_1_Sort_m22562_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Item>::ToArray()
#define List_1_ToArray_m30263(__this, method) (( ItemU5BU5D_t5374* (*) (List_1_t813 *, const MethodInfo*))List_1_ToArray_m3165_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Item>::TrimExcess()
#define List_1_TrimExcess_m30264(__this, method) (( void (*) (List_1_t813 *, const MethodInfo*))List_1_TrimExcess_m22563_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Item>::get_Capacity()
#define List_1_get_Capacity_m30265(__this, method) (( int32_t (*) (List_1_t813 *, const MethodInfo*))List_1_get_Capacity_m22564_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Item>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m30266(__this, ___value, method) (( void (*) (List_1_t813 *, int32_t, const MethodInfo*))List_1_set_Capacity_m22565_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Item>::get_Count()
#define List_1_get_Count_m30267(__this, method) (( int32_t (*) (List_1_t813 *, const MethodInfo*))List_1_get_Count_m13927_gshared)(__this, method)
// T System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Item>::get_Item(System.Int32)
#define List_1_get_Item_m30268(__this, ___index, method) (( Item_t824 * (*) (List_1_t813 *, int32_t, const MethodInfo*))List_1_get_Item_m13950_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Item>::set_Item(System.Int32,T)
#define List_1_set_Item_m30269(__this, ___index, ___value, method) (( void (*) (List_1_t813 *, int32_t, Item_t824 *, const MethodInfo*))List_1_set_Item_m13951_gshared)(__this, ___index, ___value, method)

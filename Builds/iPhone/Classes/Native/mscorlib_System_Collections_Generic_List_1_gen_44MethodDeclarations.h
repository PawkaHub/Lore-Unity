#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Location>
struct List_1_t814;
// System.Object
struct Object_t;
// PixelCrushers.DialogueSystem.Location
struct Location_t826;
// System.Collections.Generic.IEnumerable`1<PixelCrushers.DialogueSystem.Location>
struct IEnumerable_1_t6695;
// PixelCrushers.DialogueSystem.Location[]
struct LocationU5BU5D_t5378;
// System.Collections.Generic.IEnumerator`1<PixelCrushers.DialogueSystem.Location>
struct IEnumerator_1_t6696;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Collections.Generic.ICollection`1<PixelCrushers.DialogueSystem.Location>
struct ICollection_1_t6697;
// System.Collections.ObjectModel.ReadOnlyCollection`1<PixelCrushers.DialogueSystem.Location>
struct ReadOnlyCollection_1_t5380;
// System.Predicate`1<PixelCrushers.DialogueSystem.Location>
struct Predicate_1_t1092;
// System.Collections.Generic.IComparer`1<PixelCrushers.DialogueSystem.Location>
struct IComparer_1_t6698;
// System.Comparison`1<PixelCrushers.DialogueSystem.Location>
struct Comparison_1_t5381;
// System.Collections.Generic.List`1/Enumerator<PixelCrushers.DialogueSystem.Location>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_11.h"

// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Location>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_genMethodDeclarations.h"
#define List_1__ctor_m5299(__this, method) (( void (*) (List_1_t814 *, const MethodInfo*))List_1__ctor_m84_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Location>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m30311(__this, ___collection, method) (( void (*) (List_1_t814 *, Object_t*, const MethodInfo*))List_1__ctor_m3166_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Location>::.ctor(System.Int32)
#define List_1__ctor_m30312(__this, ___capacity, method) (( void (*) (List_1_t814 *, int32_t, const MethodInfo*))List_1__ctor_m22534_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Location>::.ctor(T[],System.Int32)
#define List_1__ctor_m30313(__this, ___data, ___size, method) (( void (*) (List_1_t814 *, LocationU5BU5D_t5378*, int32_t, const MethodInfo*))List_1__ctor_m22535_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Location>::.cctor()
#define List_1__cctor_m30314(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m22536_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Location>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m30315(__this, method) (( Object_t* (*) (List_1_t814 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m13947_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Location>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m30316(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t814 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m13930_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Location>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m30317(__this, method) (( Object_t * (*) (List_1_t814 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m13926_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Location>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m30318(__this, ___item, method) (( int32_t (*) (List_1_t814 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m13935_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Location>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m30319(__this, ___item, method) (( bool (*) (List_1_t814 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m13937_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Location>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m30320(__this, ___item, method) (( int32_t (*) (List_1_t814 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m13938_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Location>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m30321(__this, ___index, ___item, method) (( void (*) (List_1_t814 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m13939_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Location>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m30322(__this, ___item, method) (( void (*) (List_1_t814 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m13940_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Location>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m30323(__this, method) (( bool (*) (List_1_t814 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m13942_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Location>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m30324(__this, method) (( bool (*) (List_1_t814 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m13928_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Location>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m30325(__this, method) (( Object_t * (*) (List_1_t814 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m13929_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Location>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m30326(__this, method) (( bool (*) (List_1_t814 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m13931_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Location>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m30327(__this, method) (( bool (*) (List_1_t814 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m13932_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Location>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m30328(__this, ___index, method) (( Object_t * (*) (List_1_t814 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m13933_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Location>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m30329(__this, ___index, ___value, method) (( void (*) (List_1_t814 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m13934_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Location>::Add(T)
#define List_1_Add_m30330(__this, ___item, method) (( void (*) (List_1_t814 *, Location_t826 *, const MethodInfo*))List_1_Add_m13943_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Location>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m30331(__this, ___newCount, method) (( void (*) (List_1_t814 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m22537_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Location>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m30332(__this, ___idx, ___count, method) (( void (*) (List_1_t814 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m22538_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Location>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m30333(__this, ___collection, method) (( void (*) (List_1_t814 *, Object_t*, const MethodInfo*))List_1_AddCollection_m22539_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Location>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m30334(__this, ___enumerable, method) (( void (*) (List_1_t814 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m22540_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Location>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m30335(__this, ___collection, method) (( void (*) (List_1_t814 *, Object_t*, const MethodInfo*))List_1_AddRange_m87_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Location>::AsReadOnly()
#define List_1_AsReadOnly_m30336(__this, method) (( ReadOnlyCollection_1_t5380 * (*) (List_1_t814 *, const MethodInfo*))List_1_AsReadOnly_m22541_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Location>::Clear()
#define List_1_Clear_m30337(__this, method) (( void (*) (List_1_t814 *, const MethodInfo*))List_1_Clear_m13936_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Location>::Contains(T)
#define List_1_Contains_m30338(__this, ___item, method) (( bool (*) (List_1_t814 *, Location_t826 *, const MethodInfo*))List_1_Contains_m13944_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Location>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m30339(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t814 *, LocationU5BU5D_t5378*, int32_t, const MethodInfo*))List_1_CopyTo_m13945_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Location>::Find(System.Predicate`1<T>)
#define List_1_Find_m5307(__this, ___match, method) (( Location_t826 * (*) (List_1_t814 *, Predicate_1_t1092 *, const MethodInfo*))List_1_Find_m22542_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Location>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m30340(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t1092 *, const MethodInfo*))List_1_CheckMatch_m22543_gshared)(__this /* static, unused */, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Location>::FindAll(System.Predicate`1<T>)
#define List_1_FindAll_m30341(__this, ___match, method) (( List_1_t814 * (*) (List_1_t814 *, Predicate_1_t1092 *, const MethodInfo*))List_1_FindAll_m22544_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Location>::FindAllStackBits(System.Predicate`1<T>)
#define List_1_FindAllStackBits_m30342(__this, ___match, method) (( List_1_t814 * (*) (List_1_t814 *, Predicate_1_t1092 *, const MethodInfo*))List_1_FindAllStackBits_m22545_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Location>::FindAllList(System.Predicate`1<T>)
#define List_1_FindAllList_m30343(__this, ___match, method) (( List_1_t814 * (*) (List_1_t814 *, Predicate_1_t1092 *, const MethodInfo*))List_1_FindAllList_m22546_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Location>::FindIndex(System.Predicate`1<T>)
#define List_1_FindIndex_m30344(__this, ___match, method) (( int32_t (*) (List_1_t814 *, Predicate_1_t1092 *, const MethodInfo*))List_1_FindIndex_m22547_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Location>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m30345(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t814 *, int32_t, int32_t, Predicate_1_t1092 *, const MethodInfo*))List_1_GetIndex_m22548_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Location>::GetEnumerator()
#define List_1_GetEnumerator_m5318(__this, method) (( Enumerator_t1097  (*) (List_1_t814 *, const MethodInfo*))List_1_GetEnumerator_m22549_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Location>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m30346(__this, ___index, ___count, method) (( List_1_t814 * (*) (List_1_t814 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m22550_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Location>::IndexOf(T)
#define List_1_IndexOf_m30347(__this, ___item, method) (( int32_t (*) (List_1_t814 *, Location_t826 *, const MethodInfo*))List_1_IndexOf_m13948_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Location>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m30348(__this, ___start, ___delta, method) (( void (*) (List_1_t814 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m22551_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Location>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m30349(__this, ___index, method) (( void (*) (List_1_t814 *, int32_t, const MethodInfo*))List_1_CheckIndex_m22552_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Location>::Insert(System.Int32,T)
#define List_1_Insert_m30350(__this, ___index, ___item, method) (( void (*) (List_1_t814 *, int32_t, Location_t826 *, const MethodInfo*))List_1_Insert_m13949_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Location>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m30351(__this, ___collection, method) (( void (*) (List_1_t814 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m22553_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Location>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m30352(__this, ___index, ___collection, method) (( void (*) (List_1_t814 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m22554_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Location>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m30353(__this, ___index, ___collection, method) (( void (*) (List_1_t814 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m22555_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Location>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m30354(__this, ___index, ___enumerable, method) (( void (*) (List_1_t814 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m22556_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Location>::Remove(T)
#define List_1_Remove_m30355(__this, ___item, method) (( bool (*) (List_1_t814 *, Location_t826 *, const MethodInfo*))List_1_Remove_m13946_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Location>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m5329(__this, ___match, method) (( int32_t (*) (List_1_t814 *, Predicate_1_t1092 *, const MethodInfo*))List_1_RemoveAll_m22557_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Location>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m30356(__this, ___index, method) (( void (*) (List_1_t814 *, int32_t, const MethodInfo*))List_1_RemoveAt_m13941_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Location>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m30357(__this, ___index, ___count, method) (( void (*) (List_1_t814 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m22558_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Location>::Reverse()
#define List_1_Reverse_m30358(__this, method) (( void (*) (List_1_t814 *, const MethodInfo*))List_1_Reverse_m22559_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Location>::Sort()
#define List_1_Sort_m30359(__this, method) (( void (*) (List_1_t814 *, const MethodInfo*))List_1_Sort_m22560_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Location>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m30360(__this, ___comparer, method) (( void (*) (List_1_t814 *, Object_t*, const MethodInfo*))List_1_Sort_m22561_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Location>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m30361(__this, ___comparison, method) (( void (*) (List_1_t814 *, Comparison_1_t5381 *, const MethodInfo*))List_1_Sort_m22562_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Location>::ToArray()
#define List_1_ToArray_m30362(__this, method) (( LocationU5BU5D_t5378* (*) (List_1_t814 *, const MethodInfo*))List_1_ToArray_m3165_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Location>::TrimExcess()
#define List_1_TrimExcess_m30363(__this, method) (( void (*) (List_1_t814 *, const MethodInfo*))List_1_TrimExcess_m22563_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Location>::get_Capacity()
#define List_1_get_Capacity_m30364(__this, method) (( int32_t (*) (List_1_t814 *, const MethodInfo*))List_1_get_Capacity_m22564_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Location>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m30365(__this, ___value, method) (( void (*) (List_1_t814 *, int32_t, const MethodInfo*))List_1_set_Capacity_m22565_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Location>::get_Count()
#define List_1_get_Count_m30366(__this, method) (( int32_t (*) (List_1_t814 *, const MethodInfo*))List_1_get_Count_m13927_gshared)(__this, method)
// T System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Location>::get_Item(System.Int32)
#define List_1_get_Item_m30367(__this, ___index, method) (( Location_t826 * (*) (List_1_t814 *, int32_t, const MethodInfo*))List_1_get_Item_m13950_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Location>::set_Item(System.Int32,T)
#define List_1_set_Item_m30368(__this, ___index, ___value, method) (( void (*) (List_1_t814 *, int32_t, Location_t826 *, const MethodInfo*))List_1_set_Item_m13951_gshared)(__this, ___index, ___value, method)

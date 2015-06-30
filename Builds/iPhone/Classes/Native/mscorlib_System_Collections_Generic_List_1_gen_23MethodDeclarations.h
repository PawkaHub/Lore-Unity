#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<FriendInfo>
struct List_1_t454;
// System.Object
struct Object_t;
// FriendInfo
struct FriendInfo_t402;
// System.Collections.Generic.IEnumerable`1<FriendInfo>
struct IEnumerable_1_t6534;
// FriendInfo[]
struct FriendInfoU5BU5D_t5135;
// System.Collections.Generic.IEnumerator`1<FriendInfo>
struct IEnumerator_1_t6535;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Collections.Generic.ICollection`1<FriendInfo>
struct ICollection_1_t6536;
// System.Collections.ObjectModel.ReadOnlyCollection`1<FriendInfo>
struct ReadOnlyCollection_1_t5137;
// System.Predicate`1<FriendInfo>
struct Predicate_1_t5138;
// System.Collections.Generic.IComparer`1<FriendInfo>
struct IComparer_1_t6537;
// System.Comparison`1<FriendInfo>
struct Comparison_1_t5139;
// System.Collections.Generic.List`1/Enumerator<FriendInfo>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_3.h"

// System.Void System.Collections.Generic.List`1<FriendInfo>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_genMethodDeclarations.h"
#define List_1__ctor_m26277(__this, method) (( void (*) (List_1_t454 *, const MethodInfo*))List_1__ctor_m84_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<FriendInfo>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m26278(__this, ___collection, method) (( void (*) (List_1_t454 *, Object_t*, const MethodInfo*))List_1__ctor_m3166_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<FriendInfo>::.ctor(System.Int32)
#define List_1__ctor_m3140(__this, ___capacity, method) (( void (*) (List_1_t454 *, int32_t, const MethodInfo*))List_1__ctor_m22534_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<FriendInfo>::.ctor(T[],System.Int32)
#define List_1__ctor_m26279(__this, ___data, ___size, method) (( void (*) (List_1_t454 *, FriendInfoU5BU5D_t5135*, int32_t, const MethodInfo*))List_1__ctor_m22535_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<FriendInfo>::.cctor()
#define List_1__cctor_m26280(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m22536_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<FriendInfo>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m26281(__this, method) (( Object_t* (*) (List_1_t454 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m13947_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<FriendInfo>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m26282(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t454 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m13930_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<FriendInfo>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m26283(__this, method) (( Object_t * (*) (List_1_t454 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m13926_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<FriendInfo>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m26284(__this, ___item, method) (( int32_t (*) (List_1_t454 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m13935_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<FriendInfo>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m26285(__this, ___item, method) (( bool (*) (List_1_t454 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m13937_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<FriendInfo>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m26286(__this, ___item, method) (( int32_t (*) (List_1_t454 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m13938_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<FriendInfo>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m26287(__this, ___index, ___item, method) (( void (*) (List_1_t454 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m13939_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<FriendInfo>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m26288(__this, ___item, method) (( void (*) (List_1_t454 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m13940_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<FriendInfo>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m26289(__this, method) (( bool (*) (List_1_t454 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m13942_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<FriendInfo>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m26290(__this, method) (( bool (*) (List_1_t454 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m13928_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<FriendInfo>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m26291(__this, method) (( Object_t * (*) (List_1_t454 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m13929_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<FriendInfo>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m26292(__this, method) (( bool (*) (List_1_t454 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m13931_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<FriendInfo>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m26293(__this, method) (( bool (*) (List_1_t454 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m13932_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<FriendInfo>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m26294(__this, ___index, method) (( Object_t * (*) (List_1_t454 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m13933_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<FriendInfo>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m26295(__this, ___index, ___value, method) (( void (*) (List_1_t454 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m13934_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<FriendInfo>::Add(T)
#define List_1_Add_m26296(__this, ___item, method) (( void (*) (List_1_t454 *, FriendInfo_t402 *, const MethodInfo*))List_1_Add_m13943_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<FriendInfo>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m26297(__this, ___newCount, method) (( void (*) (List_1_t454 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m22537_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<FriendInfo>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m26298(__this, ___idx, ___count, method) (( void (*) (List_1_t454 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m22538_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<FriendInfo>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m26299(__this, ___collection, method) (( void (*) (List_1_t454 *, Object_t*, const MethodInfo*))List_1_AddCollection_m22539_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<FriendInfo>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m26300(__this, ___enumerable, method) (( void (*) (List_1_t454 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m22540_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<FriendInfo>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m26301(__this, ___collection, method) (( void (*) (List_1_t454 *, Object_t*, const MethodInfo*))List_1_AddRange_m87_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<FriendInfo>::AsReadOnly()
#define List_1_AsReadOnly_m26302(__this, method) (( ReadOnlyCollection_1_t5137 * (*) (List_1_t454 *, const MethodInfo*))List_1_AsReadOnly_m22541_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<FriendInfo>::Clear()
#define List_1_Clear_m26303(__this, method) (( void (*) (List_1_t454 *, const MethodInfo*))List_1_Clear_m13936_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<FriendInfo>::Contains(T)
#define List_1_Contains_m26304(__this, ___item, method) (( bool (*) (List_1_t454 *, FriendInfo_t402 *, const MethodInfo*))List_1_Contains_m13944_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<FriendInfo>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m26305(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t454 *, FriendInfoU5BU5D_t5135*, int32_t, const MethodInfo*))List_1_CopyTo_m13945_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<FriendInfo>::Find(System.Predicate`1<T>)
#define List_1_Find_m26306(__this, ___match, method) (( FriendInfo_t402 * (*) (List_1_t454 *, Predicate_1_t5138 *, const MethodInfo*))List_1_Find_m22542_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<FriendInfo>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m26307(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t5138 *, const MethodInfo*))List_1_CheckMatch_m22543_gshared)(__this /* static, unused */, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<FriendInfo>::FindAll(System.Predicate`1<T>)
#define List_1_FindAll_m26308(__this, ___match, method) (( List_1_t454 * (*) (List_1_t454 *, Predicate_1_t5138 *, const MethodInfo*))List_1_FindAll_m22544_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<FriendInfo>::FindAllStackBits(System.Predicate`1<T>)
#define List_1_FindAllStackBits_m26309(__this, ___match, method) (( List_1_t454 * (*) (List_1_t454 *, Predicate_1_t5138 *, const MethodInfo*))List_1_FindAllStackBits_m22545_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<FriendInfo>::FindAllList(System.Predicate`1<T>)
#define List_1_FindAllList_m26310(__this, ___match, method) (( List_1_t454 * (*) (List_1_t454 *, Predicate_1_t5138 *, const MethodInfo*))List_1_FindAllList_m22546_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<FriendInfo>::FindIndex(System.Predicate`1<T>)
#define List_1_FindIndex_m26311(__this, ___match, method) (( int32_t (*) (List_1_t454 *, Predicate_1_t5138 *, const MethodInfo*))List_1_FindIndex_m22547_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<FriendInfo>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m26312(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t454 *, int32_t, int32_t, Predicate_1_t5138 *, const MethodInfo*))List_1_GetIndex_m22548_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<FriendInfo>::GetEnumerator()
#define List_1_GetEnumerator_m3000(__this, method) (( Enumerator_t647  (*) (List_1_t454 *, const MethodInfo*))List_1_GetEnumerator_m22549_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<FriendInfo>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m26313(__this, ___index, ___count, method) (( List_1_t454 * (*) (List_1_t454 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m22550_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<FriendInfo>::IndexOf(T)
#define List_1_IndexOf_m26314(__this, ___item, method) (( int32_t (*) (List_1_t454 *, FriendInfo_t402 *, const MethodInfo*))List_1_IndexOf_m13948_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<FriendInfo>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m26315(__this, ___start, ___delta, method) (( void (*) (List_1_t454 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m22551_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<FriendInfo>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m26316(__this, ___index, method) (( void (*) (List_1_t454 *, int32_t, const MethodInfo*))List_1_CheckIndex_m22552_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<FriendInfo>::Insert(System.Int32,T)
#define List_1_Insert_m26317(__this, ___index, ___item, method) (( void (*) (List_1_t454 *, int32_t, FriendInfo_t402 *, const MethodInfo*))List_1_Insert_m13949_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<FriendInfo>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m26318(__this, ___collection, method) (( void (*) (List_1_t454 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m22553_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<FriendInfo>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m26319(__this, ___index, ___collection, method) (( void (*) (List_1_t454 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m22554_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<FriendInfo>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m26320(__this, ___index, ___collection, method) (( void (*) (List_1_t454 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m22555_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<FriendInfo>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m26321(__this, ___index, ___enumerable, method) (( void (*) (List_1_t454 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m22556_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<FriendInfo>::Remove(T)
#define List_1_Remove_m26322(__this, ___item, method) (( bool (*) (List_1_t454 *, FriendInfo_t402 *, const MethodInfo*))List_1_Remove_m13946_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<FriendInfo>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m26323(__this, ___match, method) (( int32_t (*) (List_1_t454 *, Predicate_1_t5138 *, const MethodInfo*))List_1_RemoveAll_m22557_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<FriendInfo>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m26324(__this, ___index, method) (( void (*) (List_1_t454 *, int32_t, const MethodInfo*))List_1_RemoveAt_m13941_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<FriendInfo>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m26325(__this, ___index, ___count, method) (( void (*) (List_1_t454 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m22558_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<FriendInfo>::Reverse()
#define List_1_Reverse_m26326(__this, method) (( void (*) (List_1_t454 *, const MethodInfo*))List_1_Reverse_m22559_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<FriendInfo>::Sort()
#define List_1_Sort_m26327(__this, method) (( void (*) (List_1_t454 *, const MethodInfo*))List_1_Sort_m22560_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<FriendInfo>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m26328(__this, ___comparer, method) (( void (*) (List_1_t454 *, Object_t*, const MethodInfo*))List_1_Sort_m22561_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<FriendInfo>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m26329(__this, ___comparison, method) (( void (*) (List_1_t454 *, Comparison_1_t5139 *, const MethodInfo*))List_1_Sort_m22562_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<FriendInfo>::ToArray()
#define List_1_ToArray_m26330(__this, method) (( FriendInfoU5BU5D_t5135* (*) (List_1_t454 *, const MethodInfo*))List_1_ToArray_m3165_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<FriendInfo>::TrimExcess()
#define List_1_TrimExcess_m26331(__this, method) (( void (*) (List_1_t454 *, const MethodInfo*))List_1_TrimExcess_m22563_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<FriendInfo>::get_Capacity()
#define List_1_get_Capacity_m26332(__this, method) (( int32_t (*) (List_1_t454 *, const MethodInfo*))List_1_get_Capacity_m22564_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<FriendInfo>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m26333(__this, ___value, method) (( void (*) (List_1_t454 *, int32_t, const MethodInfo*))List_1_set_Capacity_m22565_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<FriendInfo>::get_Count()
#define List_1_get_Count_m26334(__this, method) (( int32_t (*) (List_1_t454 *, const MethodInfo*))List_1_get_Count_m13927_gshared)(__this, method)
// T System.Collections.Generic.List`1<FriendInfo>::get_Item(System.Int32)
#define List_1_get_Item_m26335(__this, ___index, method) (( FriendInfo_t402 * (*) (List_1_t454 *, int32_t, const MethodInfo*))List_1_get_Item_m13950_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<FriendInfo>::set_Item(System.Int32,T)
#define List_1_set_Item_m26336(__this, ___index, ___value, method) (( void (*) (List_1_t454 *, int32_t, FriendInfo_t402 *, const MethodInfo*))List_1_set_Item_m13951_gshared)(__this, ___index, ___value, method)

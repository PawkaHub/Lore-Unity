﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<FriendInfo>
struct List_1_t482;
// System.Object
struct Object_t;
// FriendInfo
struct FriendInfo_t430;
// System.Collections.Generic.IEnumerable`1<FriendInfo>
struct IEnumerable_1_t10005;
// FriendInfo[]
struct FriendInfoU5BU5D_t6556;
// System.Collections.Generic.IEnumerator`1<FriendInfo>
struct IEnumerator_1_t10006;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Collections.Generic.ICollection`1<FriendInfo>
struct ICollection_1_t10007;
// System.Collections.ObjectModel.ReadOnlyCollection`1<FriendInfo>
struct ReadOnlyCollection_1_t6558;
// System.Predicate`1<FriendInfo>
struct Predicate_1_t6559;
// System.Collections.Generic.IComparer`1<FriendInfo>
struct IComparer_1_t10008;
// System.Comparison`1<FriendInfo>
struct Comparison_1_t6560;
// System.Collections.Generic.List`1/Enumerator<FriendInfo>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_6.h"

// System.Void System.Collections.Generic.List`1<FriendInfo>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_genMethodDeclarations.h"
#define List_1__ctor_m29228(__this, method) (( void (*) (List_1_t482 *, const MethodInfo*))List_1__ctor_m84_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<FriendInfo>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m29229(__this, ___collection, method) (( void (*) (List_1_t482 *, Object_t*, const MethodInfo*))List_1__ctor_m3480_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<FriendInfo>::.ctor(System.Int32)
#define List_1__ctor_m3454(__this, ___capacity, method) (( void (*) (List_1_t482 *, int32_t, const MethodInfo*))List_1__ctor_m24292_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<FriendInfo>::.ctor(T[],System.Int32)
#define List_1__ctor_m29230(__this, ___data, ___size, method) (( void (*) (List_1_t482 *, FriendInfoU5BU5D_t6556*, int32_t, const MethodInfo*))List_1__ctor_m24293_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<FriendInfo>::.cctor()
#define List_1__cctor_m29231(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m24294_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<FriendInfo>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m29232(__this, method) (( Object_t* (*) (List_1_t482 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m18232_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<FriendInfo>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m29233(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t482 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m18215_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<FriendInfo>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m29234(__this, method) (( Object_t * (*) (List_1_t482 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m18211_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<FriendInfo>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m29235(__this, ___item, method) (( int32_t (*) (List_1_t482 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m18220_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<FriendInfo>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m29236(__this, ___item, method) (( bool (*) (List_1_t482 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m18222_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<FriendInfo>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m29237(__this, ___item, method) (( int32_t (*) (List_1_t482 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m18223_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<FriendInfo>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m29238(__this, ___index, ___item, method) (( void (*) (List_1_t482 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m18224_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<FriendInfo>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m29239(__this, ___item, method) (( void (*) (List_1_t482 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m18225_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<FriendInfo>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m29240(__this, method) (( bool (*) (List_1_t482 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m18227_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<FriendInfo>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m29241(__this, method) (( bool (*) (List_1_t482 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m18213_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<FriendInfo>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m29242(__this, method) (( Object_t * (*) (List_1_t482 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m18214_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<FriendInfo>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m29243(__this, method) (( bool (*) (List_1_t482 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m18216_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<FriendInfo>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m29244(__this, method) (( bool (*) (List_1_t482 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m18217_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<FriendInfo>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m29245(__this, ___index, method) (( Object_t * (*) (List_1_t482 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m18218_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<FriendInfo>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m29246(__this, ___index, ___value, method) (( void (*) (List_1_t482 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m18219_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<FriendInfo>::Add(T)
#define List_1_Add_m29247(__this, ___item, method) (( void (*) (List_1_t482 *, FriendInfo_t430 *, const MethodInfo*))List_1_Add_m18228_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<FriendInfo>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m29248(__this, ___newCount, method) (( void (*) (List_1_t482 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m24295_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<FriendInfo>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m29249(__this, ___idx, ___count, method) (( void (*) (List_1_t482 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m24296_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<FriendInfo>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m29250(__this, ___collection, method) (( void (*) (List_1_t482 *, Object_t*, const MethodInfo*))List_1_AddCollection_m24297_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<FriendInfo>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m29251(__this, ___enumerable, method) (( void (*) (List_1_t482 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m24298_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<FriendInfo>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m29252(__this, ___collection, method) (( void (*) (List_1_t482 *, Object_t*, const MethodInfo*))List_1_AddRange_m87_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<FriendInfo>::AsReadOnly()
#define List_1_AsReadOnly_m29253(__this, method) (( ReadOnlyCollection_1_t6558 * (*) (List_1_t482 *, const MethodInfo*))List_1_AsReadOnly_m24299_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<FriendInfo>::Clear()
#define List_1_Clear_m29254(__this, method) (( void (*) (List_1_t482 *, const MethodInfo*))List_1_Clear_m18221_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<FriendInfo>::Contains(T)
#define List_1_Contains_m29255(__this, ___item, method) (( bool (*) (List_1_t482 *, FriendInfo_t430 *, const MethodInfo*))List_1_Contains_m18229_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<FriendInfo>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m29256(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t482 *, FriendInfoU5BU5D_t6556*, int32_t, const MethodInfo*))List_1_CopyTo_m18230_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<FriendInfo>::Find(System.Predicate`1<T>)
#define List_1_Find_m29257(__this, ___match, method) (( FriendInfo_t430 * (*) (List_1_t482 *, Predicate_1_t6559 *, const MethodInfo*))List_1_Find_m24300_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<FriendInfo>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m29258(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t6559 *, const MethodInfo*))List_1_CheckMatch_m24301_gshared)(__this /* static, unused */, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<FriendInfo>::FindAll(System.Predicate`1<T>)
#define List_1_FindAll_m29259(__this, ___match, method) (( List_1_t482 * (*) (List_1_t482 *, Predicate_1_t6559 *, const MethodInfo*))List_1_FindAll_m24302_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<FriendInfo>::FindAllStackBits(System.Predicate`1<T>)
#define List_1_FindAllStackBits_m29260(__this, ___match, method) (( List_1_t482 * (*) (List_1_t482 *, Predicate_1_t6559 *, const MethodInfo*))List_1_FindAllStackBits_m24303_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<FriendInfo>::FindAllList(System.Predicate`1<T>)
#define List_1_FindAllList_m29261(__this, ___match, method) (( List_1_t482 * (*) (List_1_t482 *, Predicate_1_t6559 *, const MethodInfo*))List_1_FindAllList_m24304_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<FriendInfo>::FindIndex(System.Predicate`1<T>)
#define List_1_FindIndex_m29262(__this, ___match, method) (( int32_t (*) (List_1_t482 *, Predicate_1_t6559 *, const MethodInfo*))List_1_FindIndex_m24305_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<FriendInfo>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m29263(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t482 *, int32_t, int32_t, Predicate_1_t6559 *, const MethodInfo*))List_1_GetIndex_m24306_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<FriendInfo>::GetEnumerator()
#define List_1_GetEnumerator_m3316(__this, method) (( Enumerator_t735  (*) (List_1_t482 *, const MethodInfo*))List_1_GetEnumerator_m24307_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<FriendInfo>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m29264(__this, ___index, ___count, method) (( List_1_t482 * (*) (List_1_t482 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m24308_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<FriendInfo>::IndexOf(T)
#define List_1_IndexOf_m29265(__this, ___item, method) (( int32_t (*) (List_1_t482 *, FriendInfo_t430 *, const MethodInfo*))List_1_IndexOf_m18233_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<FriendInfo>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m29266(__this, ___start, ___delta, method) (( void (*) (List_1_t482 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m24309_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<FriendInfo>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m29267(__this, ___index, method) (( void (*) (List_1_t482 *, int32_t, const MethodInfo*))List_1_CheckIndex_m24310_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<FriendInfo>::Insert(System.Int32,T)
#define List_1_Insert_m29268(__this, ___index, ___item, method) (( void (*) (List_1_t482 *, int32_t, FriendInfo_t430 *, const MethodInfo*))List_1_Insert_m18234_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<FriendInfo>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m29269(__this, ___collection, method) (( void (*) (List_1_t482 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m24311_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<FriendInfo>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m29270(__this, ___index, ___collection, method) (( void (*) (List_1_t482 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m24312_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<FriendInfo>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m29271(__this, ___index, ___collection, method) (( void (*) (List_1_t482 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m24313_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<FriendInfo>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m29272(__this, ___index, ___enumerable, method) (( void (*) (List_1_t482 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m24314_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<FriendInfo>::Remove(T)
#define List_1_Remove_m29273(__this, ___item, method) (( bool (*) (List_1_t482 *, FriendInfo_t430 *, const MethodInfo*))List_1_Remove_m18231_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<FriendInfo>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m29274(__this, ___match, method) (( int32_t (*) (List_1_t482 *, Predicate_1_t6559 *, const MethodInfo*))List_1_RemoveAll_m24315_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<FriendInfo>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m29275(__this, ___index, method) (( void (*) (List_1_t482 *, int32_t, const MethodInfo*))List_1_RemoveAt_m18226_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<FriendInfo>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m29276(__this, ___index, ___count, method) (( void (*) (List_1_t482 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m24316_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<FriendInfo>::Reverse()
#define List_1_Reverse_m29277(__this, method) (( void (*) (List_1_t482 *, const MethodInfo*))List_1_Reverse_m24317_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<FriendInfo>::Sort()
#define List_1_Sort_m29278(__this, method) (( void (*) (List_1_t482 *, const MethodInfo*))List_1_Sort_m24318_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<FriendInfo>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m29279(__this, ___comparer, method) (( void (*) (List_1_t482 *, Object_t*, const MethodInfo*))List_1_Sort_m24319_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<FriendInfo>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m29280(__this, ___comparison, method) (( void (*) (List_1_t482 *, Comparison_1_t6560 *, const MethodInfo*))List_1_Sort_m24320_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<FriendInfo>::ToArray()
#define List_1_ToArray_m29281(__this, method) (( FriendInfoU5BU5D_t6556* (*) (List_1_t482 *, const MethodInfo*))List_1_ToArray_m3479_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<FriendInfo>::TrimExcess()
#define List_1_TrimExcess_m29282(__this, method) (( void (*) (List_1_t482 *, const MethodInfo*))List_1_TrimExcess_m24321_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<FriendInfo>::get_Capacity()
#define List_1_get_Capacity_m29283(__this, method) (( int32_t (*) (List_1_t482 *, const MethodInfo*))List_1_get_Capacity_m24322_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<FriendInfo>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m29284(__this, ___value, method) (( void (*) (List_1_t482 *, int32_t, const MethodInfo*))List_1_set_Capacity_m24323_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<FriendInfo>::get_Count()
#define List_1_get_Count_m29285(__this, method) (( int32_t (*) (List_1_t482 *, const MethodInfo*))List_1_get_Count_m18212_gshared)(__this, method)
// T System.Collections.Generic.List`1<FriendInfo>::get_Item(System.Int32)
#define List_1_get_Item_m29286(__this, ___index, method) (( FriendInfo_t430 * (*) (List_1_t482 *, int32_t, const MethodInfo*))List_1_get_Item_m18235_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<FriendInfo>::set_Item(System.Int32,T)
#define List_1_set_Item_m29287(__this, ___index, ___value, method) (( void (*) (List_1_t482 *, int32_t, FriendInfo_t430 *, const MethodInfo*))List_1_set_Item_m18236_gshared)(__this, ___index, ___value, method)

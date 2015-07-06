#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.LuaWatchItem>
struct List_1_t1085;
// System.Object
struct Object_t;
// PixelCrushers.DialogueSystem.LuaWatchItem
struct LuaWatchItem_t582;
// System.Collections.Generic.IEnumerable`1<PixelCrushers.DialogueSystem.LuaWatchItem>
struct IEnumerable_1_t9915;
// PixelCrushers.DialogueSystem.LuaWatchItem[]
struct LuaWatchItemU5BU5D_t6562;
// System.Collections.Generic.IEnumerator`1<PixelCrushers.DialogueSystem.LuaWatchItem>
struct IEnumerator_1_t9916;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Collections.Generic.ICollection`1<PixelCrushers.DialogueSystem.LuaWatchItem>
struct ICollection_1_t9917;
// System.Collections.ObjectModel.ReadOnlyCollection`1<PixelCrushers.DialogueSystem.LuaWatchItem>
struct ReadOnlyCollection_1_t6564;
// System.Predicate`1<PixelCrushers.DialogueSystem.LuaWatchItem>
struct Predicate_1_t1408;
// System.Collections.Generic.IComparer`1<PixelCrushers.DialogueSystem.LuaWatchItem>
struct IComparer_1_t9918;
// System.Comparison`1<PixelCrushers.DialogueSystem.LuaWatchItem>
struct Comparison_1_t6566;
// System.Collections.Generic.List`1/Enumerator<PixelCrushers.DialogueSystem.LuaWatchItem>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_84.h"

// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.LuaWatchItem>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_genMethodDeclarations.h"
#define List_1__ctor_m7108(__this, method) (( void (*) (List_1_t1085 *, const MethodInfo*))List_1__ctor_m84_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.LuaWatchItem>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m33226(__this, ___collection, method) (( void (*) (List_1_t1085 *, Object_t*, const MethodInfo*))List_1__ctor_m3251_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.LuaWatchItem>::.ctor(System.Int32)
#define List_1__ctor_m33227(__this, ___capacity, method) (( void (*) (List_1_t1085 *, int32_t, const MethodInfo*))List_1__ctor_m23875_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.LuaWatchItem>::.ctor(T[],System.Int32)
#define List_1__ctor_m33228(__this, ___data, ___size, method) (( void (*) (List_1_t1085 *, LuaWatchItemU5BU5D_t6562*, int32_t, const MethodInfo*))List_1__ctor_m23876_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.LuaWatchItem>::.cctor()
#define List_1__cctor_m33229(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m23877_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.LuaWatchItem>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m33230(__this, method) (( Object_t* (*) (List_1_t1085 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m17814_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.LuaWatchItem>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m33231(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t1085 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m17797_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.LuaWatchItem>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m33232(__this, method) (( Object_t * (*) (List_1_t1085 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m17793_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.LuaWatchItem>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m33233(__this, ___item, method) (( int32_t (*) (List_1_t1085 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m17802_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.LuaWatchItem>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m33234(__this, ___item, method) (( bool (*) (List_1_t1085 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m17804_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.LuaWatchItem>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m33235(__this, ___item, method) (( int32_t (*) (List_1_t1085 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m17805_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.LuaWatchItem>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m33236(__this, ___index, ___item, method) (( void (*) (List_1_t1085 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m17806_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.LuaWatchItem>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m33237(__this, ___item, method) (( void (*) (List_1_t1085 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m17807_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.LuaWatchItem>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m33238(__this, method) (( bool (*) (List_1_t1085 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m17809_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.LuaWatchItem>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m33239(__this, method) (( bool (*) (List_1_t1085 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m17795_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.LuaWatchItem>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m33240(__this, method) (( Object_t * (*) (List_1_t1085 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m17796_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.LuaWatchItem>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m33241(__this, method) (( bool (*) (List_1_t1085 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m17798_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.LuaWatchItem>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m33242(__this, method) (( bool (*) (List_1_t1085 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m17799_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.LuaWatchItem>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m33243(__this, ___index, method) (( Object_t * (*) (List_1_t1085 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m17800_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.LuaWatchItem>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m33244(__this, ___index, ___value, method) (( void (*) (List_1_t1085 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m17801_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.LuaWatchItem>::Add(T)
#define List_1_Add_m33245(__this, ___item, method) (( void (*) (List_1_t1085 *, LuaWatchItem_t582 *, const MethodInfo*))List_1_Add_m17810_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.LuaWatchItem>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m33246(__this, ___newCount, method) (( void (*) (List_1_t1085 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m23878_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.LuaWatchItem>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m33247(__this, ___idx, ___count, method) (( void (*) (List_1_t1085 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m23879_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.LuaWatchItem>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m33248(__this, ___collection, method) (( void (*) (List_1_t1085 *, Object_t*, const MethodInfo*))List_1_AddCollection_m23880_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.LuaWatchItem>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m33249(__this, ___enumerable, method) (( void (*) (List_1_t1085 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m23881_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.LuaWatchItem>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m33250(__this, ___collection, method) (( void (*) (List_1_t1085 *, Object_t*, const MethodInfo*))List_1_AddRange_m87_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.LuaWatchItem>::AsReadOnly()
#define List_1_AsReadOnly_m33251(__this, method) (( ReadOnlyCollection_1_t6564 * (*) (List_1_t1085 *, const MethodInfo*))List_1_AsReadOnly_m23882_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.LuaWatchItem>::Clear()
#define List_1_Clear_m33252(__this, method) (( void (*) (List_1_t1085 *, const MethodInfo*))List_1_Clear_m17803_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.LuaWatchItem>::Contains(T)
#define List_1_Contains_m33253(__this, ___item, method) (( bool (*) (List_1_t1085 *, LuaWatchItem_t582 *, const MethodInfo*))List_1_Contains_m17811_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.LuaWatchItem>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m33254(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t1085 *, LuaWatchItemU5BU5D_t6562*, int32_t, const MethodInfo*))List_1_CopyTo_m17812_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.LuaWatchItem>::Find(System.Predicate`1<T>)
#define List_1_Find_m33255(__this, ___match, method) (( LuaWatchItem_t582 * (*) (List_1_t1085 *, Predicate_1_t1408 *, const MethodInfo*))List_1_Find_m23883_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.LuaWatchItem>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m33256(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t1408 *, const MethodInfo*))List_1_CheckMatch_m23884_gshared)(__this /* static, unused */, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.LuaWatchItem>::FindAll(System.Predicate`1<T>)
#define List_1_FindAll_m33257(__this, ___match, method) (( List_1_t1085 * (*) (List_1_t1085 *, Predicate_1_t1408 *, const MethodInfo*))List_1_FindAll_m23885_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.LuaWatchItem>::FindAllStackBits(System.Predicate`1<T>)
#define List_1_FindAllStackBits_m33258(__this, ___match, method) (( List_1_t1085 * (*) (List_1_t1085 *, Predicate_1_t1408 *, const MethodInfo*))List_1_FindAllStackBits_m23886_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.LuaWatchItem>::FindAllList(System.Predicate`1<T>)
#define List_1_FindAllList_m33259(__this, ___match, method) (( List_1_t1085 * (*) (List_1_t1085 *, Predicate_1_t1408 *, const MethodInfo*))List_1_FindAllList_m23887_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.LuaWatchItem>::FindIndex(System.Predicate`1<T>)
#define List_1_FindIndex_m33260(__this, ___match, method) (( int32_t (*) (List_1_t1085 *, Predicate_1_t1408 *, const MethodInfo*))List_1_FindIndex_m23888_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.LuaWatchItem>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m33261(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t1085 *, int32_t, int32_t, Predicate_1_t1408 *, const MethodInfo*))List_1_GetIndex_m23889_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.LuaWatchItem>::GetEnumerator()
#define List_1_GetEnumerator_m33262(__this, method) (( Enumerator_t6565  (*) (List_1_t1085 *, const MethodInfo*))List_1_GetEnumerator_m23890_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.LuaWatchItem>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m33263(__this, ___index, ___count, method) (( List_1_t1085 * (*) (List_1_t1085 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m23891_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.LuaWatchItem>::IndexOf(T)
#define List_1_IndexOf_m33264(__this, ___item, method) (( int32_t (*) (List_1_t1085 *, LuaWatchItem_t582 *, const MethodInfo*))List_1_IndexOf_m17815_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.LuaWatchItem>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m33265(__this, ___start, ___delta, method) (( void (*) (List_1_t1085 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m23892_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.LuaWatchItem>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m33266(__this, ___index, method) (( void (*) (List_1_t1085 *, int32_t, const MethodInfo*))List_1_CheckIndex_m23893_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.LuaWatchItem>::Insert(System.Int32,T)
#define List_1_Insert_m33267(__this, ___index, ___item, method) (( void (*) (List_1_t1085 *, int32_t, LuaWatchItem_t582 *, const MethodInfo*))List_1_Insert_m17816_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.LuaWatchItem>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m33268(__this, ___collection, method) (( void (*) (List_1_t1085 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m23894_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.LuaWatchItem>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m33269(__this, ___index, ___collection, method) (( void (*) (List_1_t1085 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m23895_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.LuaWatchItem>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m33270(__this, ___index, ___collection, method) (( void (*) (List_1_t1085 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m23896_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.LuaWatchItem>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m33271(__this, ___index, ___enumerable, method) (( void (*) (List_1_t1085 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m23897_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.LuaWatchItem>::Remove(T)
#define List_1_Remove_m33272(__this, ___item, method) (( bool (*) (List_1_t1085 *, LuaWatchItem_t582 *, const MethodInfo*))List_1_Remove_m17813_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.LuaWatchItem>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m7110(__this, ___match, method) (( int32_t (*) (List_1_t1085 *, Predicate_1_t1408 *, const MethodInfo*))List_1_RemoveAll_m23898_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.LuaWatchItem>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m33273(__this, ___index, method) (( void (*) (List_1_t1085 *, int32_t, const MethodInfo*))List_1_RemoveAt_m17808_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.LuaWatchItem>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m33274(__this, ___index, ___count, method) (( void (*) (List_1_t1085 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m23899_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.LuaWatchItem>::Reverse()
#define List_1_Reverse_m33275(__this, method) (( void (*) (List_1_t1085 *, const MethodInfo*))List_1_Reverse_m23900_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.LuaWatchItem>::Sort()
#define List_1_Sort_m33276(__this, method) (( void (*) (List_1_t1085 *, const MethodInfo*))List_1_Sort_m23901_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.LuaWatchItem>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m33277(__this, ___comparer, method) (( void (*) (List_1_t1085 *, Object_t*, const MethodInfo*))List_1_Sort_m23902_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.LuaWatchItem>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m33278(__this, ___comparison, method) (( void (*) (List_1_t1085 *, Comparison_1_t6566 *, const MethodInfo*))List_1_Sort_m23903_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.LuaWatchItem>::ToArray()
#define List_1_ToArray_m33279(__this, method) (( LuaWatchItemU5BU5D_t6562* (*) (List_1_t1085 *, const MethodInfo*))List_1_ToArray_m3250_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.LuaWatchItem>::TrimExcess()
#define List_1_TrimExcess_m33280(__this, method) (( void (*) (List_1_t1085 *, const MethodInfo*))List_1_TrimExcess_m23904_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.LuaWatchItem>::get_Capacity()
#define List_1_get_Capacity_m33281(__this, method) (( int32_t (*) (List_1_t1085 *, const MethodInfo*))List_1_get_Capacity_m23905_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.LuaWatchItem>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m33282(__this, ___value, method) (( void (*) (List_1_t1085 *, int32_t, const MethodInfo*))List_1_set_Capacity_m23906_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.LuaWatchItem>::get_Count()
#define List_1_get_Count_m33283(__this, method) (( int32_t (*) (List_1_t1085 *, const MethodInfo*))List_1_get_Count_m17794_gshared)(__this, method)
// T System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.LuaWatchItem>::get_Item(System.Int32)
#define List_1_get_Item_m33284(__this, ___index, method) (( LuaWatchItem_t582 * (*) (List_1_t1085 *, int32_t, const MethodInfo*))List_1_get_Item_m17817_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.LuaWatchItem>::set_Item(System.Int32,T)
#define List_1_set_Item_m33285(__this, ___index, ___value, method) (( void (*) (List_1_t1085 *, int32_t, LuaWatchItem_t582 *, const MethodInfo*))List_1_set_Item_m17818_gshared)(__this, ___index, ___value, method)

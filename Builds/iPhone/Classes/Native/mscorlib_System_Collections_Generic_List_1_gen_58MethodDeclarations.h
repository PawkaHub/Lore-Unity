#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Item>
struct List_1_t1138;
// System.Object
struct Object_t;
// PixelCrushers.DialogueSystem.Item
struct Item_t1149;
// System.Collections.Generic.IEnumerable`1<PixelCrushers.DialogueSystem.Item>
struct IEnumerable_1_t9952;
// PixelCrushers.DialogueSystem.Item[]
struct ItemU5BU5D_t6608;
// System.Collections.Generic.IEnumerator`1<PixelCrushers.DialogueSystem.Item>
struct IEnumerator_1_t9953;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Collections.Generic.ICollection`1<PixelCrushers.DialogueSystem.Item>
struct ICollection_1_t9954;
// System.Collections.ObjectModel.ReadOnlyCollection`1<PixelCrushers.DialogueSystem.Item>
struct ReadOnlyCollection_1_t6610;
// System.Predicate`1<PixelCrushers.DialogueSystem.Item>
struct Predicate_1_t1414;
// System.Collections.Generic.IComparer`1<PixelCrushers.DialogueSystem.Item>
struct IComparer_1_t9955;
// System.Comparison`1<PixelCrushers.DialogueSystem.Item>
struct Comparison_1_t6611;
// System.Collections.Generic.List`1/Enumerator<PixelCrushers.DialogueSystem.Item>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_10.h"

// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Item>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_genMethodDeclarations.h"
#define List_1__ctor_m7151(__this, method) (( void (*) (List_1_t1138 *, const MethodInfo*))List_1__ctor_m84_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Item>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m34182(__this, ___collection, method) (( void (*) (List_1_t1138 *, Object_t*, const MethodInfo*))List_1__ctor_m3251_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Item>::.ctor(System.Int32)
#define List_1__ctor_m34183(__this, ___capacity, method) (( void (*) (List_1_t1138 *, int32_t, const MethodInfo*))List_1__ctor_m23875_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Item>::.ctor(T[],System.Int32)
#define List_1__ctor_m34184(__this, ___data, ___size, method) (( void (*) (List_1_t1138 *, ItemU5BU5D_t6608*, int32_t, const MethodInfo*))List_1__ctor_m23876_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Item>::.cctor()
#define List_1__cctor_m34185(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m23877_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Item>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m34186(__this, method) (( Object_t* (*) (List_1_t1138 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m17814_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Item>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m34187(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t1138 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m17797_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Item>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m34188(__this, method) (( Object_t * (*) (List_1_t1138 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m17793_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Item>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m34189(__this, ___item, method) (( int32_t (*) (List_1_t1138 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m17802_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Item>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m34190(__this, ___item, method) (( bool (*) (List_1_t1138 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m17804_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Item>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m34191(__this, ___item, method) (( int32_t (*) (List_1_t1138 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m17805_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Item>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m34192(__this, ___index, ___item, method) (( void (*) (List_1_t1138 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m17806_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Item>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m34193(__this, ___item, method) (( void (*) (List_1_t1138 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m17807_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Item>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m34194(__this, method) (( bool (*) (List_1_t1138 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m17809_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Item>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m34195(__this, method) (( bool (*) (List_1_t1138 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m17795_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Item>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m34196(__this, method) (( Object_t * (*) (List_1_t1138 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m17796_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Item>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m34197(__this, method) (( bool (*) (List_1_t1138 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m17798_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Item>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m34198(__this, method) (( bool (*) (List_1_t1138 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m17799_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Item>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m34199(__this, ___index, method) (( Object_t * (*) (List_1_t1138 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m17800_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Item>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m34200(__this, ___index, ___value, method) (( void (*) (List_1_t1138 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m17801_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Item>::Add(T)
#define List_1_Add_m34201(__this, ___item, method) (( void (*) (List_1_t1138 *, Item_t1149 *, const MethodInfo*))List_1_Add_m17810_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Item>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m34202(__this, ___newCount, method) (( void (*) (List_1_t1138 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m23878_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Item>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m34203(__this, ___idx, ___count, method) (( void (*) (List_1_t1138 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m23879_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Item>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m34204(__this, ___collection, method) (( void (*) (List_1_t1138 *, Object_t*, const MethodInfo*))List_1_AddCollection_m23880_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Item>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m34205(__this, ___enumerable, method) (( void (*) (List_1_t1138 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m23881_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Item>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m34206(__this, ___collection, method) (( void (*) (List_1_t1138 *, Object_t*, const MethodInfo*))List_1_AddRange_m87_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Item>::AsReadOnly()
#define List_1_AsReadOnly_m34207(__this, method) (( ReadOnlyCollection_1_t6610 * (*) (List_1_t1138 *, const MethodInfo*))List_1_AsReadOnly_m23882_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Item>::Clear()
#define List_1_Clear_m34208(__this, method) (( void (*) (List_1_t1138 *, const MethodInfo*))List_1_Clear_m17803_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Item>::Contains(T)
#define List_1_Contains_m34209(__this, ___item, method) (( bool (*) (List_1_t1138 *, Item_t1149 *, const MethodInfo*))List_1_Contains_m17811_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Item>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m34210(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t1138 *, ItemU5BU5D_t6608*, int32_t, const MethodInfo*))List_1_CopyTo_m17812_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Item>::Find(System.Predicate`1<T>)
#define List_1_Find_m7158(__this, ___match, method) (( Item_t1149 * (*) (List_1_t1138 *, Predicate_1_t1414 *, const MethodInfo*))List_1_Find_m23883_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Item>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m34211(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t1414 *, const MethodInfo*))List_1_CheckMatch_m23884_gshared)(__this /* static, unused */, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Item>::FindAll(System.Predicate`1<T>)
#define List_1_FindAll_m34212(__this, ___match, method) (( List_1_t1138 * (*) (List_1_t1138 *, Predicate_1_t1414 *, const MethodInfo*))List_1_FindAll_m23885_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Item>::FindAllStackBits(System.Predicate`1<T>)
#define List_1_FindAllStackBits_m34213(__this, ___match, method) (( List_1_t1138 * (*) (List_1_t1138 *, Predicate_1_t1414 *, const MethodInfo*))List_1_FindAllStackBits_m23886_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Item>::FindAllList(System.Predicate`1<T>)
#define List_1_FindAllList_m34214(__this, ___match, method) (( List_1_t1138 * (*) (List_1_t1138 *, Predicate_1_t1414 *, const MethodInfo*))List_1_FindAllList_m23887_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Item>::FindIndex(System.Predicate`1<T>)
#define List_1_FindIndex_m34215(__this, ___match, method) (( int32_t (*) (List_1_t1138 *, Predicate_1_t1414 *, const MethodInfo*))List_1_FindIndex_m23888_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Item>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m34216(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t1138 *, int32_t, int32_t, Predicate_1_t1414 *, const MethodInfo*))List_1_GetIndex_m23889_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Item>::GetEnumerator()
#define List_1_GetEnumerator_m7168(__this, method) (( Enumerator_t1419  (*) (List_1_t1138 *, const MethodInfo*))List_1_GetEnumerator_m23890_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Item>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m34217(__this, ___index, ___count, method) (( List_1_t1138 * (*) (List_1_t1138 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m23891_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Item>::IndexOf(T)
#define List_1_IndexOf_m34218(__this, ___item, method) (( int32_t (*) (List_1_t1138 *, Item_t1149 *, const MethodInfo*))List_1_IndexOf_m17815_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Item>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m34219(__this, ___start, ___delta, method) (( void (*) (List_1_t1138 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m23892_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Item>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m34220(__this, ___index, method) (( void (*) (List_1_t1138 *, int32_t, const MethodInfo*))List_1_CheckIndex_m23893_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Item>::Insert(System.Int32,T)
#define List_1_Insert_m34221(__this, ___index, ___item, method) (( void (*) (List_1_t1138 *, int32_t, Item_t1149 *, const MethodInfo*))List_1_Insert_m17816_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Item>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m34222(__this, ___collection, method) (( void (*) (List_1_t1138 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m23894_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Item>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m34223(__this, ___index, ___collection, method) (( void (*) (List_1_t1138 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m23895_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Item>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m34224(__this, ___index, ___collection, method) (( void (*) (List_1_t1138 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m23896_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Item>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m34225(__this, ___index, ___enumerable, method) (( void (*) (List_1_t1138 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m23897_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Item>::Remove(T)
#define List_1_Remove_m34226(__this, ___item, method) (( bool (*) (List_1_t1138 *, Item_t1149 *, const MethodInfo*))List_1_Remove_m17813_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Item>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m7181(__this, ___match, method) (( int32_t (*) (List_1_t1138 *, Predicate_1_t1414 *, const MethodInfo*))List_1_RemoveAll_m23898_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Item>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m34227(__this, ___index, method) (( void (*) (List_1_t1138 *, int32_t, const MethodInfo*))List_1_RemoveAt_m17808_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Item>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m34228(__this, ___index, ___count, method) (( void (*) (List_1_t1138 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m23899_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Item>::Reverse()
#define List_1_Reverse_m34229(__this, method) (( void (*) (List_1_t1138 *, const MethodInfo*))List_1_Reverse_m23900_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Item>::Sort()
#define List_1_Sort_m34230(__this, method) (( void (*) (List_1_t1138 *, const MethodInfo*))List_1_Sort_m23901_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Item>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m34231(__this, ___comparer, method) (( void (*) (List_1_t1138 *, Object_t*, const MethodInfo*))List_1_Sort_m23902_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Item>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m34232(__this, ___comparison, method) (( void (*) (List_1_t1138 *, Comparison_1_t6611 *, const MethodInfo*))List_1_Sort_m23903_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Item>::ToArray()
#define List_1_ToArray_m34233(__this, method) (( ItemU5BU5D_t6608* (*) (List_1_t1138 *, const MethodInfo*))List_1_ToArray_m3250_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Item>::TrimExcess()
#define List_1_TrimExcess_m34234(__this, method) (( void (*) (List_1_t1138 *, const MethodInfo*))List_1_TrimExcess_m23904_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Item>::get_Capacity()
#define List_1_get_Capacity_m34235(__this, method) (( int32_t (*) (List_1_t1138 *, const MethodInfo*))List_1_get_Capacity_m23905_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Item>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m34236(__this, ___value, method) (( void (*) (List_1_t1138 *, int32_t, const MethodInfo*))List_1_set_Capacity_m23906_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Item>::get_Count()
#define List_1_get_Count_m34237(__this, method) (( int32_t (*) (List_1_t1138 *, const MethodInfo*))List_1_get_Count_m17794_gshared)(__this, method)
// T System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Item>::get_Item(System.Int32)
#define List_1_get_Item_m34238(__this, ___index, method) (( Item_t1149 * (*) (List_1_t1138 *, int32_t, const MethodInfo*))List_1_get_Item_m17817_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Item>::set_Item(System.Int32,T)
#define List_1_set_Item_m34239(__this, ___index, ___value, method) (( void (*) (List_1_t1138 *, int32_t, Item_t1149 *, const MethodInfo*))List_1_set_Item_m17818_gshared)(__this, ___index, ___value, method)

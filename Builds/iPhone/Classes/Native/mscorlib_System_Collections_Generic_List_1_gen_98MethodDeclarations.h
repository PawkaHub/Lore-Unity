#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>
struct List_1_t4477;
// System.Object
struct Object_t;
// UnityEngine.GUILayoutEntry
struct GUILayoutEntry_t4476;
// System.Collections.Generic.IEnumerable`1<UnityEngine.GUILayoutEntry>
struct IEnumerable_1_t10642;
// UnityEngine.GUILayoutEntry[]
struct GUILayoutEntryU5BU5D_t9333;
// System.Collections.Generic.IEnumerator`1<UnityEngine.GUILayoutEntry>
struct IEnumerator_1_t10643;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Collections.Generic.ICollection`1<UnityEngine.GUILayoutEntry>
struct ICollection_1_t10644;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GUILayoutEntry>
struct ReadOnlyCollection_1_t9335;
// System.Predicate`1<UnityEngine.GUILayoutEntry>
struct Predicate_1_t9336;
// System.Collections.Generic.IComparer`1<UnityEngine.GUILayoutEntry>
struct IComparer_1_t10645;
// System.Comparison`1<UnityEngine.GUILayoutEntry>
struct Comparison_1_t9337;
// System.Collections.Generic.List`1/Enumerator<UnityEngine.GUILayoutEntry>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_37.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_genMethodDeclarations.h"
#define List_1__ctor_m17579(__this, method) (( void (*) (List_1_t4477 *, const MethodInfo*))List_1__ctor_m84_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m68891(__this, ___collection, method) (( void (*) (List_1_t4477 *, Object_t*, const MethodInfo*))List_1__ctor_m3251_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::.ctor(System.Int32)
#define List_1__ctor_m68892(__this, ___capacity, method) (( void (*) (List_1_t4477 *, int32_t, const MethodInfo*))List_1__ctor_m23875_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::.ctor(T[],System.Int32)
#define List_1__ctor_m68893(__this, ___data, ___size, method) (( void (*) (List_1_t4477 *, GUILayoutEntryU5BU5D_t9333*, int32_t, const MethodInfo*))List_1__ctor_m23876_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::.cctor()
#define List_1__cctor_m68894(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m23877_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m68895(__this, method) (( Object_t* (*) (List_1_t4477 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m17814_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m68896(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t4477 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m17797_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m68897(__this, method) (( Object_t * (*) (List_1_t4477 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m17793_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m68898(__this, ___item, method) (( int32_t (*) (List_1_t4477 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m17802_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m68899(__this, ___item, method) (( bool (*) (List_1_t4477 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m17804_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m68900(__this, ___item, method) (( int32_t (*) (List_1_t4477 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m17805_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m68901(__this, ___index, ___item, method) (( void (*) (List_1_t4477 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m17806_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m68902(__this, ___item, method) (( void (*) (List_1_t4477 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m17807_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m68903(__this, method) (( bool (*) (List_1_t4477 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m17809_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m68904(__this, method) (( bool (*) (List_1_t4477 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m17795_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m68905(__this, method) (( Object_t * (*) (List_1_t4477 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m17796_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m68906(__this, method) (( bool (*) (List_1_t4477 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m17798_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m68907(__this, method) (( bool (*) (List_1_t4477 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m17799_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m68908(__this, ___index, method) (( Object_t * (*) (List_1_t4477 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m17800_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m68909(__this, ___index, ___value, method) (( void (*) (List_1_t4477 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m17801_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::Add(T)
#define List_1_Add_m68910(__this, ___item, method) (( void (*) (List_1_t4477 *, GUILayoutEntry_t4476 *, const MethodInfo*))List_1_Add_m17810_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m68911(__this, ___newCount, method) (( void (*) (List_1_t4477 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m23878_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m68912(__this, ___idx, ___count, method) (( void (*) (List_1_t4477 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m23879_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m68913(__this, ___collection, method) (( void (*) (List_1_t4477 *, Object_t*, const MethodInfo*))List_1_AddCollection_m23880_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m68914(__this, ___enumerable, method) (( void (*) (List_1_t4477 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m23881_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m68915(__this, ___collection, method) (( void (*) (List_1_t4477 *, Object_t*, const MethodInfo*))List_1_AddRange_m87_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::AsReadOnly()
#define List_1_AsReadOnly_m68916(__this, method) (( ReadOnlyCollection_1_t9335 * (*) (List_1_t4477 *, const MethodInfo*))List_1_AsReadOnly_m23882_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::Clear()
#define List_1_Clear_m68917(__this, method) (( void (*) (List_1_t4477 *, const MethodInfo*))List_1_Clear_m17803_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::Contains(T)
#define List_1_Contains_m68918(__this, ___item, method) (( bool (*) (List_1_t4477 *, GUILayoutEntry_t4476 *, const MethodInfo*))List_1_Contains_m17811_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m68919(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t4477 *, GUILayoutEntryU5BU5D_t9333*, int32_t, const MethodInfo*))List_1_CopyTo_m17812_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::Find(System.Predicate`1<T>)
#define List_1_Find_m68920(__this, ___match, method) (( GUILayoutEntry_t4476 * (*) (List_1_t4477 *, Predicate_1_t9336 *, const MethodInfo*))List_1_Find_m23883_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m68921(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t9336 *, const MethodInfo*))List_1_CheckMatch_m23884_gshared)(__this /* static, unused */, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::FindAll(System.Predicate`1<T>)
#define List_1_FindAll_m68922(__this, ___match, method) (( List_1_t4477 * (*) (List_1_t4477 *, Predicate_1_t9336 *, const MethodInfo*))List_1_FindAll_m23885_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::FindAllStackBits(System.Predicate`1<T>)
#define List_1_FindAllStackBits_m68923(__this, ___match, method) (( List_1_t4477 * (*) (List_1_t4477 *, Predicate_1_t9336 *, const MethodInfo*))List_1_FindAllStackBits_m23886_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::FindAllList(System.Predicate`1<T>)
#define List_1_FindAllList_m68924(__this, ___match, method) (( List_1_t4477 * (*) (List_1_t4477 *, Predicate_1_t9336 *, const MethodInfo*))List_1_FindAllList_m23887_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::FindIndex(System.Predicate`1<T>)
#define List_1_FindIndex_m68925(__this, ___match, method) (( int32_t (*) (List_1_t4477 *, Predicate_1_t9336 *, const MethodInfo*))List_1_FindIndex_m23888_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m68926(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t4477 *, int32_t, int32_t, Predicate_1_t9336 *, const MethodInfo*))List_1_GetIndex_m23889_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::GetEnumerator()
#define List_1_GetEnumerator_m17576(__this, method) (( Enumerator_t4677  (*) (List_1_t4477 *, const MethodInfo*))List_1_GetEnumerator_m23890_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m68927(__this, ___index, ___count, method) (( List_1_t4477 * (*) (List_1_t4477 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m23891_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::IndexOf(T)
#define List_1_IndexOf_m68928(__this, ___item, method) (( int32_t (*) (List_1_t4477 *, GUILayoutEntry_t4476 *, const MethodInfo*))List_1_IndexOf_m17815_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m68929(__this, ___start, ___delta, method) (( void (*) (List_1_t4477 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m23892_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m68930(__this, ___index, method) (( void (*) (List_1_t4477 *, int32_t, const MethodInfo*))List_1_CheckIndex_m23893_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::Insert(System.Int32,T)
#define List_1_Insert_m68931(__this, ___index, ___item, method) (( void (*) (List_1_t4477 *, int32_t, GUILayoutEntry_t4476 *, const MethodInfo*))List_1_Insert_m17816_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m68932(__this, ___collection, method) (( void (*) (List_1_t4477 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m23894_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m68933(__this, ___index, ___collection, method) (( void (*) (List_1_t4477 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m23895_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m68934(__this, ___index, ___collection, method) (( void (*) (List_1_t4477 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m23896_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m68935(__this, ___index, ___enumerable, method) (( void (*) (List_1_t4477 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m23897_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::Remove(T)
#define List_1_Remove_m68936(__this, ___item, method) (( bool (*) (List_1_t4477 *, GUILayoutEntry_t4476 *, const MethodInfo*))List_1_Remove_m17813_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m68937(__this, ___match, method) (( int32_t (*) (List_1_t4477 *, Predicate_1_t9336 *, const MethodInfo*))List_1_RemoveAll_m23898_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m68938(__this, ___index, method) (( void (*) (List_1_t4477 *, int32_t, const MethodInfo*))List_1_RemoveAt_m17808_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m68939(__this, ___index, ___count, method) (( void (*) (List_1_t4477 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m23899_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::Reverse()
#define List_1_Reverse_m68940(__this, method) (( void (*) (List_1_t4477 *, const MethodInfo*))List_1_Reverse_m23900_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::Sort()
#define List_1_Sort_m68941(__this, method) (( void (*) (List_1_t4477 *, const MethodInfo*))List_1_Sort_m23901_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m68942(__this, ___comparer, method) (( void (*) (List_1_t4477 *, Object_t*, const MethodInfo*))List_1_Sort_m23902_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m68943(__this, ___comparison, method) (( void (*) (List_1_t4477 *, Comparison_1_t9337 *, const MethodInfo*))List_1_Sort_m23903_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::ToArray()
#define List_1_ToArray_m68944(__this, method) (( GUILayoutEntryU5BU5D_t9333* (*) (List_1_t4477 *, const MethodInfo*))List_1_ToArray_m3250_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::TrimExcess()
#define List_1_TrimExcess_m68945(__this, method) (( void (*) (List_1_t4477 *, const MethodInfo*))List_1_TrimExcess_m23904_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::get_Capacity()
#define List_1_get_Capacity_m68946(__this, method) (( int32_t (*) (List_1_t4477 *, const MethodInfo*))List_1_get_Capacity_m23905_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m68947(__this, ___value, method) (( void (*) (List_1_t4477 *, int32_t, const MethodInfo*))List_1_set_Capacity_m23906_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::get_Count()
#define List_1_get_Count_m68948(__this, method) (( int32_t (*) (List_1_t4477 *, const MethodInfo*))List_1_get_Count_m17794_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::get_Item(System.Int32)
#define List_1_get_Item_m68949(__this, ___index, method) (( GUILayoutEntry_t4476 * (*) (List_1_t4477 *, int32_t, const MethodInfo*))List_1_get_Item_m17817_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::set_Item(System.Int32,T)
#define List_1_set_Item_m68950(__this, ___index, ___value, method) (( void (*) (List_1_t4477 *, int32_t, GUILayoutEntry_t4476 *, const MethodInfo*))List_1_set_Item_m17818_gshared)(__this, ___index, ___value, method)

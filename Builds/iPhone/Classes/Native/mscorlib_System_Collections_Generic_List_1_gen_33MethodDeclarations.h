#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>
struct List_1_t783;
// System.Object
struct Object_t;
// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_t730;
// System.Collections.Generic.IEnumerable`1<UnityEngine.EventSystems.BaseInputModule>
struct IEnumerable_1_t9814;
// UnityEngine.EventSystems.BaseInputModule[]
struct BaseInputModuleU5BU5D_t6413;
// System.Collections.Generic.IEnumerator`1<UnityEngine.EventSystems.BaseInputModule>
struct IEnumerator_1_t9815;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.BaseInputModule>
struct ICollection_1_t9816;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.BaseInputModule>
struct ReadOnlyCollection_1_t6415;
// System.Predicate`1<UnityEngine.EventSystems.BaseInputModule>
struct Predicate_1_t6416;
// System.Collections.Generic.IComparer`1<UnityEngine.EventSystems.BaseInputModule>
struct IComparer_1_t9817;
// System.Comparison`1<UnityEngine.EventSystems.BaseInputModule>
struct Comparison_1_t6418;
// System.Collections.Generic.List`1/Enumerator<UnityEngine.EventSystems.BaseInputModule>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_70.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_genMethodDeclarations.h"
#define List_1__ctor_m4683(__this, method) (( void (*) (List_1_t783 *, const MethodInfo*))List_1__ctor_m84_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m30674(__this, ___collection, method) (( void (*) (List_1_t783 *, Object_t*, const MethodInfo*))List_1__ctor_m3251_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::.ctor(System.Int32)
#define List_1__ctor_m30675(__this, ___capacity, method) (( void (*) (List_1_t783 *, int32_t, const MethodInfo*))List_1__ctor_m23875_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::.ctor(T[],System.Int32)
#define List_1__ctor_m30676(__this, ___data, ___size, method) (( void (*) (List_1_t783 *, BaseInputModuleU5BU5D_t6413*, int32_t, const MethodInfo*))List_1__ctor_m23876_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::.cctor()
#define List_1__cctor_m30677(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m23877_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m30678(__this, method) (( Object_t* (*) (List_1_t783 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m17814_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m30679(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t783 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m17797_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m30680(__this, method) (( Object_t * (*) (List_1_t783 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m17793_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m30681(__this, ___item, method) (( int32_t (*) (List_1_t783 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m17802_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m30682(__this, ___item, method) (( bool (*) (List_1_t783 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m17804_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m30683(__this, ___item, method) (( int32_t (*) (List_1_t783 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m17805_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m30684(__this, ___index, ___item, method) (( void (*) (List_1_t783 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m17806_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m30685(__this, ___item, method) (( void (*) (List_1_t783 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m17807_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m30686(__this, method) (( bool (*) (List_1_t783 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m17809_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m30687(__this, method) (( bool (*) (List_1_t783 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m17795_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m30688(__this, method) (( Object_t * (*) (List_1_t783 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m17796_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m30689(__this, method) (( bool (*) (List_1_t783 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m17798_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m30690(__this, method) (( bool (*) (List_1_t783 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m17799_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m30691(__this, ___index, method) (( Object_t * (*) (List_1_t783 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m17800_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m30692(__this, ___index, ___value, method) (( void (*) (List_1_t783 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m17801_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::Add(T)
#define List_1_Add_m30693(__this, ___item, method) (( void (*) (List_1_t783 *, BaseInputModule_t730 *, const MethodInfo*))List_1_Add_m17810_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m30694(__this, ___newCount, method) (( void (*) (List_1_t783 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m23878_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m30695(__this, ___idx, ___count, method) (( void (*) (List_1_t783 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m23879_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m30696(__this, ___collection, method) (( void (*) (List_1_t783 *, Object_t*, const MethodInfo*))List_1_AddCollection_m23880_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m30697(__this, ___enumerable, method) (( void (*) (List_1_t783 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m23881_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m30698(__this, ___collection, method) (( void (*) (List_1_t783 *, Object_t*, const MethodInfo*))List_1_AddRange_m87_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::AsReadOnly()
#define List_1_AsReadOnly_m30699(__this, method) (( ReadOnlyCollection_1_t6415 * (*) (List_1_t783 *, const MethodInfo*))List_1_AsReadOnly_m23882_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::Clear()
#define List_1_Clear_m30700(__this, method) (( void (*) (List_1_t783 *, const MethodInfo*))List_1_Clear_m17803_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::Contains(T)
#define List_1_Contains_m30701(__this, ___item, method) (( bool (*) (List_1_t783 *, BaseInputModule_t730 *, const MethodInfo*))List_1_Contains_m17811_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m30702(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t783 *, BaseInputModuleU5BU5D_t6413*, int32_t, const MethodInfo*))List_1_CopyTo_m17812_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::Find(System.Predicate`1<T>)
#define List_1_Find_m30703(__this, ___match, method) (( BaseInputModule_t730 * (*) (List_1_t783 *, Predicate_1_t6416 *, const MethodInfo*))List_1_Find_m23883_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m30704(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t6416 *, const MethodInfo*))List_1_CheckMatch_m23884_gshared)(__this /* static, unused */, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::FindAll(System.Predicate`1<T>)
#define List_1_FindAll_m30705(__this, ___match, method) (( List_1_t783 * (*) (List_1_t783 *, Predicate_1_t6416 *, const MethodInfo*))List_1_FindAll_m23885_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::FindAllStackBits(System.Predicate`1<T>)
#define List_1_FindAllStackBits_m30706(__this, ___match, method) (( List_1_t783 * (*) (List_1_t783 *, Predicate_1_t6416 *, const MethodInfo*))List_1_FindAllStackBits_m23886_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::FindAllList(System.Predicate`1<T>)
#define List_1_FindAllList_m30707(__this, ___match, method) (( List_1_t783 * (*) (List_1_t783 *, Predicate_1_t6416 *, const MethodInfo*))List_1_FindAllList_m23887_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::FindIndex(System.Predicate`1<T>)
#define List_1_FindIndex_m30708(__this, ___match, method) (( int32_t (*) (List_1_t783 *, Predicate_1_t6416 *, const MethodInfo*))List_1_FindIndex_m23888_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m30709(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t783 *, int32_t, int32_t, Predicate_1_t6416 *, const MethodInfo*))List_1_GetIndex_m23889_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::GetEnumerator()
#define List_1_GetEnumerator_m30710(__this, method) (( Enumerator_t6417  (*) (List_1_t783 *, const MethodInfo*))List_1_GetEnumerator_m23890_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m30711(__this, ___index, ___count, method) (( List_1_t783 * (*) (List_1_t783 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m23891_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::IndexOf(T)
#define List_1_IndexOf_m30712(__this, ___item, method) (( int32_t (*) (List_1_t783 *, BaseInputModule_t730 *, const MethodInfo*))List_1_IndexOf_m17815_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m30713(__this, ___start, ___delta, method) (( void (*) (List_1_t783 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m23892_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m30714(__this, ___index, method) (( void (*) (List_1_t783 *, int32_t, const MethodInfo*))List_1_CheckIndex_m23893_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::Insert(System.Int32,T)
#define List_1_Insert_m30715(__this, ___index, ___item, method) (( void (*) (List_1_t783 *, int32_t, BaseInputModule_t730 *, const MethodInfo*))List_1_Insert_m17816_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m30716(__this, ___collection, method) (( void (*) (List_1_t783 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m23894_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m30717(__this, ___index, ___collection, method) (( void (*) (List_1_t783 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m23895_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m30718(__this, ___index, ___collection, method) (( void (*) (List_1_t783 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m23896_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m30719(__this, ___index, ___enumerable, method) (( void (*) (List_1_t783 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m23897_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::Remove(T)
#define List_1_Remove_m30720(__this, ___item, method) (( bool (*) (List_1_t783 *, BaseInputModule_t730 *, const MethodInfo*))List_1_Remove_m17813_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m30721(__this, ___match, method) (( int32_t (*) (List_1_t783 *, Predicate_1_t6416 *, const MethodInfo*))List_1_RemoveAll_m23898_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m30722(__this, ___index, method) (( void (*) (List_1_t783 *, int32_t, const MethodInfo*))List_1_RemoveAt_m17808_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m30723(__this, ___index, ___count, method) (( void (*) (List_1_t783 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m23899_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::Reverse()
#define List_1_Reverse_m30724(__this, method) (( void (*) (List_1_t783 *, const MethodInfo*))List_1_Reverse_m23900_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::Sort()
#define List_1_Sort_m30725(__this, method) (( void (*) (List_1_t783 *, const MethodInfo*))List_1_Sort_m23901_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m30726(__this, ___comparer, method) (( void (*) (List_1_t783 *, Object_t*, const MethodInfo*))List_1_Sort_m23902_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m30727(__this, ___comparison, method) (( void (*) (List_1_t783 *, Comparison_1_t6418 *, const MethodInfo*))List_1_Sort_m23903_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::ToArray()
#define List_1_ToArray_m30728(__this, method) (( BaseInputModuleU5BU5D_t6413* (*) (List_1_t783 *, const MethodInfo*))List_1_ToArray_m3250_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::TrimExcess()
#define List_1_TrimExcess_m30729(__this, method) (( void (*) (List_1_t783 *, const MethodInfo*))List_1_TrimExcess_m23904_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::get_Capacity()
#define List_1_get_Capacity_m30730(__this, method) (( int32_t (*) (List_1_t783 *, const MethodInfo*))List_1_get_Capacity_m23905_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m30731(__this, ___value, method) (( void (*) (List_1_t783 *, int32_t, const MethodInfo*))List_1_set_Capacity_m23906_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::get_Count()
#define List_1_get_Count_m30732(__this, method) (( int32_t (*) (List_1_t783 *, const MethodInfo*))List_1_get_Count_m17794_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::get_Item(System.Int32)
#define List_1_get_Item_m30733(__this, ___index, method) (( BaseInputModule_t730 * (*) (List_1_t783 *, int32_t, const MethodInfo*))List_1_get_Item_m17817_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>::set_Item(System.Int32,T)
#define List_1_set_Item_m30734(__this, ___index, ___value, method) (( void (*) (List_1_t783 *, int32_t, BaseInputModule_t730 *, const MethodInfo*))List_1_set_Item_m17818_gshared)(__this, ___index, ___value, method)

#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.ParticleSystem>
struct List_1_t4662;
// System.Object
struct Object_t;
// UnityEngine.ParticleSystem
struct ParticleSystem_t189;
// System.Collections.Generic.IEnumerable`1<UnityEngine.ParticleSystem>
struct IEnumerable_1_t10656;
// UnityEngine.ParticleSystem[]
struct ParticleSystemU5BU5D_t4661;
// System.Collections.Generic.IEnumerator`1<UnityEngine.ParticleSystem>
struct IEnumerator_1_t10657;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Collections.Generic.ICollection`1<UnityEngine.ParticleSystem>
struct ICollection_1_t10658;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.ParticleSystem>
struct ReadOnlyCollection_1_t9350;
// System.Predicate`1<UnityEngine.ParticleSystem>
struct Predicate_1_t9351;
// System.Collections.Generic.IComparer`1<UnityEngine.ParticleSystem>
struct IComparer_1_t10659;
// System.Comparison`1<UnityEngine.ParticleSystem>
struct Comparison_1_t9353;
// System.Collections.Generic.List`1/Enumerator<UnityEngine.ParticleSystem>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_143.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_genMethodDeclarations.h"
#define List_1__ctor_m17590(__this, method) (( void (*) (List_1_t4662 *, const MethodInfo*))List_1__ctor_m84_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m69216(__this, ___collection, method) (( void (*) (List_1_t4662 *, Object_t*, const MethodInfo*))List_1__ctor_m3251_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::.ctor(System.Int32)
#define List_1__ctor_m69217(__this, ___capacity, method) (( void (*) (List_1_t4662 *, int32_t, const MethodInfo*))List_1__ctor_m23875_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::.ctor(T[],System.Int32)
#define List_1__ctor_m69218(__this, ___data, ___size, method) (( void (*) (List_1_t4662 *, ParticleSystemU5BU5D_t4661*, int32_t, const MethodInfo*))List_1__ctor_m23876_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::.cctor()
#define List_1__cctor_m69219(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m23877_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m69220(__this, method) (( Object_t* (*) (List_1_t4662 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m17814_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m69221(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t4662 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m17797_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m69222(__this, method) (( Object_t * (*) (List_1_t4662 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m17793_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m69223(__this, ___item, method) (( int32_t (*) (List_1_t4662 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m17802_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m69224(__this, ___item, method) (( bool (*) (List_1_t4662 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m17804_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m69225(__this, ___item, method) (( int32_t (*) (List_1_t4662 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m17805_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m69226(__this, ___index, ___item, method) (( void (*) (List_1_t4662 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m17806_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m69227(__this, ___item, method) (( void (*) (List_1_t4662 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m17807_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m69228(__this, method) (( bool (*) (List_1_t4662 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m17809_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m69229(__this, method) (( bool (*) (List_1_t4662 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m17795_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m69230(__this, method) (( Object_t * (*) (List_1_t4662 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m17796_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m69231(__this, method) (( bool (*) (List_1_t4662 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m17798_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m69232(__this, method) (( bool (*) (List_1_t4662 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m17799_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m69233(__this, ___index, method) (( Object_t * (*) (List_1_t4662 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m17800_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m69234(__this, ___index, ___value, method) (( void (*) (List_1_t4662 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m17801_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::Add(T)
#define List_1_Add_m69235(__this, ___item, method) (( void (*) (List_1_t4662 *, ParticleSystem_t189 *, const MethodInfo*))List_1_Add_m17810_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m69236(__this, ___newCount, method) (( void (*) (List_1_t4662 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m23878_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m69237(__this, ___idx, ___count, method) (( void (*) (List_1_t4662 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m23879_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m69238(__this, ___collection, method) (( void (*) (List_1_t4662 *, Object_t*, const MethodInfo*))List_1_AddCollection_m23880_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m69239(__this, ___enumerable, method) (( void (*) (List_1_t4662 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m23881_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m69240(__this, ___collection, method) (( void (*) (List_1_t4662 *, Object_t*, const MethodInfo*))List_1_AddRange_m87_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::AsReadOnly()
#define List_1_AsReadOnly_m69241(__this, method) (( ReadOnlyCollection_1_t9350 * (*) (List_1_t4662 *, const MethodInfo*))List_1_AsReadOnly_m23882_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::Clear()
#define List_1_Clear_m69242(__this, method) (( void (*) (List_1_t4662 *, const MethodInfo*))List_1_Clear_m17803_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::Contains(T)
#define List_1_Contains_m69243(__this, ___item, method) (( bool (*) (List_1_t4662 *, ParticleSystem_t189 *, const MethodInfo*))List_1_Contains_m17811_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m69244(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t4662 *, ParticleSystemU5BU5D_t4661*, int32_t, const MethodInfo*))List_1_CopyTo_m17812_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::Find(System.Predicate`1<T>)
#define List_1_Find_m69245(__this, ___match, method) (( ParticleSystem_t189 * (*) (List_1_t4662 *, Predicate_1_t9351 *, const MethodInfo*))List_1_Find_m23883_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m69246(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t9351 *, const MethodInfo*))List_1_CheckMatch_m23884_gshared)(__this /* static, unused */, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::FindAll(System.Predicate`1<T>)
#define List_1_FindAll_m69247(__this, ___match, method) (( List_1_t4662 * (*) (List_1_t4662 *, Predicate_1_t9351 *, const MethodInfo*))List_1_FindAll_m23885_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::FindAllStackBits(System.Predicate`1<T>)
#define List_1_FindAllStackBits_m69248(__this, ___match, method) (( List_1_t4662 * (*) (List_1_t4662 *, Predicate_1_t9351 *, const MethodInfo*))List_1_FindAllStackBits_m23886_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::FindAllList(System.Predicate`1<T>)
#define List_1_FindAllList_m69249(__this, ___match, method) (( List_1_t4662 * (*) (List_1_t4662 *, Predicate_1_t9351 *, const MethodInfo*))List_1_FindAllList_m23887_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::FindIndex(System.Predicate`1<T>)
#define List_1_FindIndex_m69250(__this, ___match, method) (( int32_t (*) (List_1_t4662 *, Predicate_1_t9351 *, const MethodInfo*))List_1_FindIndex_m23888_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m69251(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t4662 *, int32_t, int32_t, Predicate_1_t9351 *, const MethodInfo*))List_1_GetIndex_m23889_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::GetEnumerator()
#define List_1_GetEnumerator_m69252(__this, method) (( Enumerator_t9352  (*) (List_1_t4662 *, const MethodInfo*))List_1_GetEnumerator_m23890_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m69253(__this, ___index, ___count, method) (( List_1_t4662 * (*) (List_1_t4662 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m23891_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::IndexOf(T)
#define List_1_IndexOf_m69254(__this, ___item, method) (( int32_t (*) (List_1_t4662 *, ParticleSystem_t189 *, const MethodInfo*))List_1_IndexOf_m17815_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m69255(__this, ___start, ___delta, method) (( void (*) (List_1_t4662 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m23892_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m69256(__this, ___index, method) (( void (*) (List_1_t4662 *, int32_t, const MethodInfo*))List_1_CheckIndex_m23893_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::Insert(System.Int32,T)
#define List_1_Insert_m69257(__this, ___index, ___item, method) (( void (*) (List_1_t4662 *, int32_t, ParticleSystem_t189 *, const MethodInfo*))List_1_Insert_m17816_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m69258(__this, ___collection, method) (( void (*) (List_1_t4662 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m23894_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m69259(__this, ___index, ___collection, method) (( void (*) (List_1_t4662 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m23895_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m69260(__this, ___index, ___collection, method) (( void (*) (List_1_t4662 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m23896_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m69261(__this, ___index, ___enumerable, method) (( void (*) (List_1_t4662 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m23897_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::Remove(T)
#define List_1_Remove_m69262(__this, ___item, method) (( bool (*) (List_1_t4662 *, ParticleSystem_t189 *, const MethodInfo*))List_1_Remove_m17813_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m69263(__this, ___match, method) (( int32_t (*) (List_1_t4662 *, Predicate_1_t9351 *, const MethodInfo*))List_1_RemoveAll_m23898_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m69264(__this, ___index, method) (( void (*) (List_1_t4662 *, int32_t, const MethodInfo*))List_1_RemoveAt_m17808_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m69265(__this, ___index, ___count, method) (( void (*) (List_1_t4662 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m23899_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::Reverse()
#define List_1_Reverse_m69266(__this, method) (( void (*) (List_1_t4662 *, const MethodInfo*))List_1_Reverse_m23900_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::Sort()
#define List_1_Sort_m69267(__this, method) (( void (*) (List_1_t4662 *, const MethodInfo*))List_1_Sort_m23901_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m69268(__this, ___comparer, method) (( void (*) (List_1_t4662 *, Object_t*, const MethodInfo*))List_1_Sort_m23902_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m69269(__this, ___comparison, method) (( void (*) (List_1_t4662 *, Comparison_1_t9353 *, const MethodInfo*))List_1_Sort_m23903_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::ToArray()
#define List_1_ToArray_m17591(__this, method) (( ParticleSystemU5BU5D_t4661* (*) (List_1_t4662 *, const MethodInfo*))List_1_ToArray_m3250_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::TrimExcess()
#define List_1_TrimExcess_m69270(__this, method) (( void (*) (List_1_t4662 *, const MethodInfo*))List_1_TrimExcess_m23904_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::get_Capacity()
#define List_1_get_Capacity_m69271(__this, method) (( int32_t (*) (List_1_t4662 *, const MethodInfo*))List_1_get_Capacity_m23905_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m69272(__this, ___value, method) (( void (*) (List_1_t4662 *, int32_t, const MethodInfo*))List_1_set_Capacity_m23906_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::get_Count()
#define List_1_get_Count_m69273(__this, method) (( int32_t (*) (List_1_t4662 *, const MethodInfo*))List_1_get_Count_m17794_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::get_Item(System.Int32)
#define List_1_get_Item_m69274(__this, ___index, method) (( ParticleSystem_t189 * (*) (List_1_t4662 *, int32_t, const MethodInfo*))List_1_get_Item_m17817_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::set_Item(System.Int32,T)
#define List_1_set_Item_m69275(__this, ___index, ___value, method) (( void (*) (List_1_t4662 *, int32_t, ParticleSystem_t189 *, const MethodInfo*))List_1_set_Item_m17818_gshared)(__this, ___index, ___value, method)

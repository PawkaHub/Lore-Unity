#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<ParticlePlayground.ManipulatorObjectC>
struct List_1_t80;
// System.Object
struct Object_t;
// ParticlePlayground.ManipulatorObjectC
struct ManipulatorObjectC_t115;
// System.Collections.Generic.IEnumerable`1<ParticlePlayground.ManipulatorObjectC>
struct IEnumerable_1_t9632;
// ParticlePlayground.ManipulatorObjectC[]
struct ManipulatorObjectCU5BU5D_t6080;
// System.Collections.Generic.IEnumerator`1<ParticlePlayground.ManipulatorObjectC>
struct IEnumerator_1_t9633;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Collections.Generic.ICollection`1<ParticlePlayground.ManipulatorObjectC>
struct ICollection_1_t9634;
// System.Collections.ObjectModel.ReadOnlyCollection`1<ParticlePlayground.ManipulatorObjectC>
struct ReadOnlyCollection_1_t6082;
// System.Predicate`1<ParticlePlayground.ManipulatorObjectC>
struct Predicate_1_t6083;
// System.Collections.Generic.IComparer`1<ParticlePlayground.ManipulatorObjectC>
struct IComparer_1_t9635;
// System.Comparison`1<ParticlePlayground.ManipulatorObjectC>
struct Comparison_1_t6085;
// System.Collections.Generic.List`1/Enumerator<ParticlePlayground.ManipulatorObjectC>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_48.h"

// System.Void System.Collections.Generic.List`1<ParticlePlayground.ManipulatorObjectC>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_genMethodDeclarations.h"
#define List_1__ctor_m2525(__this, method) (( void (*) (List_1_t80 *, const MethodInfo*))List_1__ctor_m84_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.ManipulatorObjectC>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m25493(__this, ___collection, method) (( void (*) (List_1_t80 *, Object_t*, const MethodInfo*))List_1__ctor_m3251_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.ManipulatorObjectC>::.ctor(System.Int32)
#define List_1__ctor_m25494(__this, ___capacity, method) (( void (*) (List_1_t80 *, int32_t, const MethodInfo*))List_1__ctor_m23875_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.ManipulatorObjectC>::.ctor(T[],System.Int32)
#define List_1__ctor_m25495(__this, ___data, ___size, method) (( void (*) (List_1_t80 *, ManipulatorObjectCU5BU5D_t6080*, int32_t, const MethodInfo*))List_1__ctor_m23876_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.ManipulatorObjectC>::.cctor()
#define List_1__cctor_m25496(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m23877_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<ParticlePlayground.ManipulatorObjectC>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m25497(__this, method) (( Object_t* (*) (List_1_t80 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m17814_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.ManipulatorObjectC>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m25498(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t80 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m17797_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<ParticlePlayground.ManipulatorObjectC>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m25499(__this, method) (( Object_t * (*) (List_1_t80 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m17793_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<ParticlePlayground.ManipulatorObjectC>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m25500(__this, ___item, method) (( int32_t (*) (List_1_t80 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m17802_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<ParticlePlayground.ManipulatorObjectC>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m25501(__this, ___item, method) (( bool (*) (List_1_t80 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m17804_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<ParticlePlayground.ManipulatorObjectC>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m25502(__this, ___item, method) (( int32_t (*) (List_1_t80 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m17805_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.ManipulatorObjectC>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m25503(__this, ___index, ___item, method) (( void (*) (List_1_t80 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m17806_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.ManipulatorObjectC>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m25504(__this, ___item, method) (( void (*) (List_1_t80 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m17807_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<ParticlePlayground.ManipulatorObjectC>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m25505(__this, method) (( bool (*) (List_1_t80 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m17809_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<ParticlePlayground.ManipulatorObjectC>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m25506(__this, method) (( bool (*) (List_1_t80 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m17795_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<ParticlePlayground.ManipulatorObjectC>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m25507(__this, method) (( Object_t * (*) (List_1_t80 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m17796_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<ParticlePlayground.ManipulatorObjectC>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m25508(__this, method) (( bool (*) (List_1_t80 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m17798_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<ParticlePlayground.ManipulatorObjectC>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m25509(__this, method) (( bool (*) (List_1_t80 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m17799_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<ParticlePlayground.ManipulatorObjectC>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m25510(__this, ___index, method) (( Object_t * (*) (List_1_t80 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m17800_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.ManipulatorObjectC>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m25511(__this, ___index, ___value, method) (( void (*) (List_1_t80 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m17801_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.ManipulatorObjectC>::Add(T)
#define List_1_Add_m25512(__this, ___item, method) (( void (*) (List_1_t80 *, ManipulatorObjectC_t115 *, const MethodInfo*))List_1_Add_m17810_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.ManipulatorObjectC>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m25513(__this, ___newCount, method) (( void (*) (List_1_t80 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m23878_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.ManipulatorObjectC>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m25514(__this, ___idx, ___count, method) (( void (*) (List_1_t80 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m23879_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.ManipulatorObjectC>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m25515(__this, ___collection, method) (( void (*) (List_1_t80 *, Object_t*, const MethodInfo*))List_1_AddCollection_m23880_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.ManipulatorObjectC>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m25516(__this, ___enumerable, method) (( void (*) (List_1_t80 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m23881_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.ManipulatorObjectC>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m25517(__this, ___collection, method) (( void (*) (List_1_t80 *, Object_t*, const MethodInfo*))List_1_AddRange_m87_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<ParticlePlayground.ManipulatorObjectC>::AsReadOnly()
#define List_1_AsReadOnly_m25518(__this, method) (( ReadOnlyCollection_1_t6082 * (*) (List_1_t80 *, const MethodInfo*))List_1_AsReadOnly_m23882_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.ManipulatorObjectC>::Clear()
#define List_1_Clear_m25519(__this, method) (( void (*) (List_1_t80 *, const MethodInfo*))List_1_Clear_m17803_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<ParticlePlayground.ManipulatorObjectC>::Contains(T)
#define List_1_Contains_m25520(__this, ___item, method) (( bool (*) (List_1_t80 *, ManipulatorObjectC_t115 *, const MethodInfo*))List_1_Contains_m17811_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.ManipulatorObjectC>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m25521(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t80 *, ManipulatorObjectCU5BU5D_t6080*, int32_t, const MethodInfo*))List_1_CopyTo_m17812_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<ParticlePlayground.ManipulatorObjectC>::Find(System.Predicate`1<T>)
#define List_1_Find_m25522(__this, ___match, method) (( ManipulatorObjectC_t115 * (*) (List_1_t80 *, Predicate_1_t6083 *, const MethodInfo*))List_1_Find_m23883_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.ManipulatorObjectC>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m25523(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t6083 *, const MethodInfo*))List_1_CheckMatch_m23884_gshared)(__this /* static, unused */, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<ParticlePlayground.ManipulatorObjectC>::FindAll(System.Predicate`1<T>)
#define List_1_FindAll_m25524(__this, ___match, method) (( List_1_t80 * (*) (List_1_t80 *, Predicate_1_t6083 *, const MethodInfo*))List_1_FindAll_m23885_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<ParticlePlayground.ManipulatorObjectC>::FindAllStackBits(System.Predicate`1<T>)
#define List_1_FindAllStackBits_m25525(__this, ___match, method) (( List_1_t80 * (*) (List_1_t80 *, Predicate_1_t6083 *, const MethodInfo*))List_1_FindAllStackBits_m23886_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<ParticlePlayground.ManipulatorObjectC>::FindAllList(System.Predicate`1<T>)
#define List_1_FindAllList_m25526(__this, ___match, method) (( List_1_t80 * (*) (List_1_t80 *, Predicate_1_t6083 *, const MethodInfo*))List_1_FindAllList_m23887_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<ParticlePlayground.ManipulatorObjectC>::FindIndex(System.Predicate`1<T>)
#define List_1_FindIndex_m25527(__this, ___match, method) (( int32_t (*) (List_1_t80 *, Predicate_1_t6083 *, const MethodInfo*))List_1_FindIndex_m23888_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<ParticlePlayground.ManipulatorObjectC>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m25528(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t80 *, int32_t, int32_t, Predicate_1_t6083 *, const MethodInfo*))List_1_GetIndex_m23889_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<ParticlePlayground.ManipulatorObjectC>::GetEnumerator()
#define List_1_GetEnumerator_m25529(__this, method) (( Enumerator_t6084  (*) (List_1_t80 *, const MethodInfo*))List_1_GetEnumerator_m23890_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<ParticlePlayground.ManipulatorObjectC>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m25530(__this, ___index, ___count, method) (( List_1_t80 * (*) (List_1_t80 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m23891_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<ParticlePlayground.ManipulatorObjectC>::IndexOf(T)
#define List_1_IndexOf_m25531(__this, ___item, method) (( int32_t (*) (List_1_t80 *, ManipulatorObjectC_t115 *, const MethodInfo*))List_1_IndexOf_m17815_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.ManipulatorObjectC>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m25532(__this, ___start, ___delta, method) (( void (*) (List_1_t80 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m23892_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.ManipulatorObjectC>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m25533(__this, ___index, method) (( void (*) (List_1_t80 *, int32_t, const MethodInfo*))List_1_CheckIndex_m23893_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.ManipulatorObjectC>::Insert(System.Int32,T)
#define List_1_Insert_m25534(__this, ___index, ___item, method) (( void (*) (List_1_t80 *, int32_t, ManipulatorObjectC_t115 *, const MethodInfo*))List_1_Insert_m17816_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.ManipulatorObjectC>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m25535(__this, ___collection, method) (( void (*) (List_1_t80 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m23894_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.ManipulatorObjectC>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m25536(__this, ___index, ___collection, method) (( void (*) (List_1_t80 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m23895_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.ManipulatorObjectC>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m25537(__this, ___index, ___collection, method) (( void (*) (List_1_t80 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m23896_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.ManipulatorObjectC>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m25538(__this, ___index, ___enumerable, method) (( void (*) (List_1_t80 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m23897_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<ParticlePlayground.ManipulatorObjectC>::Remove(T)
#define List_1_Remove_m25539(__this, ___item, method) (( bool (*) (List_1_t80 *, ManipulatorObjectC_t115 *, const MethodInfo*))List_1_Remove_m17813_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<ParticlePlayground.ManipulatorObjectC>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m25540(__this, ___match, method) (( int32_t (*) (List_1_t80 *, Predicate_1_t6083 *, const MethodInfo*))List_1_RemoveAll_m23898_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.ManipulatorObjectC>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m25541(__this, ___index, method) (( void (*) (List_1_t80 *, int32_t, const MethodInfo*))List_1_RemoveAt_m17808_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.ManipulatorObjectC>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m25542(__this, ___index, ___count, method) (( void (*) (List_1_t80 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m23899_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.ManipulatorObjectC>::Reverse()
#define List_1_Reverse_m25543(__this, method) (( void (*) (List_1_t80 *, const MethodInfo*))List_1_Reverse_m23900_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.ManipulatorObjectC>::Sort()
#define List_1_Sort_m25544(__this, method) (( void (*) (List_1_t80 *, const MethodInfo*))List_1_Sort_m23901_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.ManipulatorObjectC>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m25545(__this, ___comparer, method) (( void (*) (List_1_t80 *, Object_t*, const MethodInfo*))List_1_Sort_m23902_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.ManipulatorObjectC>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m25546(__this, ___comparison, method) (( void (*) (List_1_t80 *, Comparison_1_t6085 *, const MethodInfo*))List_1_Sort_m23903_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<ParticlePlayground.ManipulatorObjectC>::ToArray()
#define List_1_ToArray_m25547(__this, method) (( ManipulatorObjectCU5BU5D_t6080* (*) (List_1_t80 *, const MethodInfo*))List_1_ToArray_m3250_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.ManipulatorObjectC>::TrimExcess()
#define List_1_TrimExcess_m25548(__this, method) (( void (*) (List_1_t80 *, const MethodInfo*))List_1_TrimExcess_m23904_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<ParticlePlayground.ManipulatorObjectC>::get_Capacity()
#define List_1_get_Capacity_m25549(__this, method) (( int32_t (*) (List_1_t80 *, const MethodInfo*))List_1_get_Capacity_m23905_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.ManipulatorObjectC>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m25550(__this, ___value, method) (( void (*) (List_1_t80 *, int32_t, const MethodInfo*))List_1_set_Capacity_m23906_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<ParticlePlayground.ManipulatorObjectC>::get_Count()
#define List_1_get_Count_m25551(__this, method) (( int32_t (*) (List_1_t80 *, const MethodInfo*))List_1_get_Count_m17794_gshared)(__this, method)
// T System.Collections.Generic.List`1<ParticlePlayground.ManipulatorObjectC>::get_Item(System.Int32)
#define List_1_get_Item_m25552(__this, ___index, method) (( ManipulatorObjectC_t115 * (*) (List_1_t80 *, int32_t, const MethodInfo*))List_1_get_Item_m17817_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.ManipulatorObjectC>::set_Item(System.Int32,T)
#define List_1_set_Item_m25553(__this, ___index, ___value, method) (( void (*) (List_1_t80 *, int32_t, ManipulatorObjectC_t115 *, const MethodInfo*))List_1_set_Item_m17818_gshared)(__this, ___index, ___value, method)

#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<ParticlePlayground.PlaygroundEventParticle>
struct List_1_t567;
// System.Object
struct Object_t;
// ParticlePlayground.PlaygroundEventParticle
struct PlaygroundEventParticle_t114;
// System.Collections.Generic.IEnumerable`1<ParticlePlayground.PlaygroundEventParticle>
struct IEnumerable_1_t9640;
// ParticlePlayground.PlaygroundEventParticle[]
struct PlaygroundEventParticleU5BU5D_t6095;
// System.Collections.Generic.IEnumerator`1<ParticlePlayground.PlaygroundEventParticle>
struct IEnumerator_1_t9641;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Collections.Generic.ICollection`1<ParticlePlayground.PlaygroundEventParticle>
struct ICollection_1_t9642;
// System.Collections.ObjectModel.ReadOnlyCollection`1<ParticlePlayground.PlaygroundEventParticle>
struct ReadOnlyCollection_1_t6097;
// System.Predicate`1<ParticlePlayground.PlaygroundEventParticle>
struct Predicate_1_t6098;
// System.Collections.Generic.IComparer`1<ParticlePlayground.PlaygroundEventParticle>
struct IComparer_1_t9643;
// System.Comparison`1<ParticlePlayground.PlaygroundEventParticle>
struct Comparison_1_t6100;
// System.Collections.Generic.List`1/Enumerator<ParticlePlayground.PlaygroundEventParticle>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_50.h"

// System.Void System.Collections.Generic.List`1<ParticlePlayground.PlaygroundEventParticle>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_genMethodDeclarations.h"
#define List_1__ctor_m2534(__this, method) (( void (*) (List_1_t567 *, const MethodInfo*))List_1__ctor_m84_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.PlaygroundEventParticle>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m25723(__this, ___collection, method) (( void (*) (List_1_t567 *, Object_t*, const MethodInfo*))List_1__ctor_m3251_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.PlaygroundEventParticle>::.ctor(System.Int32)
#define List_1__ctor_m25724(__this, ___capacity, method) (( void (*) (List_1_t567 *, int32_t, const MethodInfo*))List_1__ctor_m23875_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.PlaygroundEventParticle>::.ctor(T[],System.Int32)
#define List_1__ctor_m25725(__this, ___data, ___size, method) (( void (*) (List_1_t567 *, PlaygroundEventParticleU5BU5D_t6095*, int32_t, const MethodInfo*))List_1__ctor_m23876_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.PlaygroundEventParticle>::.cctor()
#define List_1__cctor_m25726(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m23877_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<ParticlePlayground.PlaygroundEventParticle>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m25727(__this, method) (( Object_t* (*) (List_1_t567 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m17814_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.PlaygroundEventParticle>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m25728(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t567 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m17797_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<ParticlePlayground.PlaygroundEventParticle>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m25729(__this, method) (( Object_t * (*) (List_1_t567 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m17793_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<ParticlePlayground.PlaygroundEventParticle>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m25730(__this, ___item, method) (( int32_t (*) (List_1_t567 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m17802_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<ParticlePlayground.PlaygroundEventParticle>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m25731(__this, ___item, method) (( bool (*) (List_1_t567 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m17804_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<ParticlePlayground.PlaygroundEventParticle>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m25732(__this, ___item, method) (( int32_t (*) (List_1_t567 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m17805_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.PlaygroundEventParticle>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m25733(__this, ___index, ___item, method) (( void (*) (List_1_t567 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m17806_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.PlaygroundEventParticle>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m25734(__this, ___item, method) (( void (*) (List_1_t567 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m17807_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<ParticlePlayground.PlaygroundEventParticle>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m25735(__this, method) (( bool (*) (List_1_t567 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m17809_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<ParticlePlayground.PlaygroundEventParticle>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m25736(__this, method) (( bool (*) (List_1_t567 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m17795_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<ParticlePlayground.PlaygroundEventParticle>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m25737(__this, method) (( Object_t * (*) (List_1_t567 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m17796_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<ParticlePlayground.PlaygroundEventParticle>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m25738(__this, method) (( bool (*) (List_1_t567 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m17798_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<ParticlePlayground.PlaygroundEventParticle>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m25739(__this, method) (( bool (*) (List_1_t567 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m17799_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<ParticlePlayground.PlaygroundEventParticle>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m25740(__this, ___index, method) (( Object_t * (*) (List_1_t567 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m17800_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.PlaygroundEventParticle>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m25741(__this, ___index, ___value, method) (( void (*) (List_1_t567 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m17801_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.PlaygroundEventParticle>::Add(T)
#define List_1_Add_m25742(__this, ___item, method) (( void (*) (List_1_t567 *, PlaygroundEventParticle_t114 *, const MethodInfo*))List_1_Add_m17810_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.PlaygroundEventParticle>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m25743(__this, ___newCount, method) (( void (*) (List_1_t567 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m23878_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.PlaygroundEventParticle>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m25744(__this, ___idx, ___count, method) (( void (*) (List_1_t567 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m23879_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.PlaygroundEventParticle>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m25745(__this, ___collection, method) (( void (*) (List_1_t567 *, Object_t*, const MethodInfo*))List_1_AddCollection_m23880_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.PlaygroundEventParticle>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m25746(__this, ___enumerable, method) (( void (*) (List_1_t567 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m23881_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.PlaygroundEventParticle>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m25747(__this, ___collection, method) (( void (*) (List_1_t567 *, Object_t*, const MethodInfo*))List_1_AddRange_m87_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<ParticlePlayground.PlaygroundEventParticle>::AsReadOnly()
#define List_1_AsReadOnly_m25748(__this, method) (( ReadOnlyCollection_1_t6097 * (*) (List_1_t567 *, const MethodInfo*))List_1_AsReadOnly_m23882_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.PlaygroundEventParticle>::Clear()
#define List_1_Clear_m25749(__this, method) (( void (*) (List_1_t567 *, const MethodInfo*))List_1_Clear_m17803_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<ParticlePlayground.PlaygroundEventParticle>::Contains(T)
#define List_1_Contains_m25750(__this, ___item, method) (( bool (*) (List_1_t567 *, PlaygroundEventParticle_t114 *, const MethodInfo*))List_1_Contains_m17811_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.PlaygroundEventParticle>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m25751(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t567 *, PlaygroundEventParticleU5BU5D_t6095*, int32_t, const MethodInfo*))List_1_CopyTo_m17812_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<ParticlePlayground.PlaygroundEventParticle>::Find(System.Predicate`1<T>)
#define List_1_Find_m25752(__this, ___match, method) (( PlaygroundEventParticle_t114 * (*) (List_1_t567 *, Predicate_1_t6098 *, const MethodInfo*))List_1_Find_m23883_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.PlaygroundEventParticle>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m25753(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t6098 *, const MethodInfo*))List_1_CheckMatch_m23884_gshared)(__this /* static, unused */, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<ParticlePlayground.PlaygroundEventParticle>::FindAll(System.Predicate`1<T>)
#define List_1_FindAll_m25754(__this, ___match, method) (( List_1_t567 * (*) (List_1_t567 *, Predicate_1_t6098 *, const MethodInfo*))List_1_FindAll_m23885_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<ParticlePlayground.PlaygroundEventParticle>::FindAllStackBits(System.Predicate`1<T>)
#define List_1_FindAllStackBits_m25755(__this, ___match, method) (( List_1_t567 * (*) (List_1_t567 *, Predicate_1_t6098 *, const MethodInfo*))List_1_FindAllStackBits_m23886_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<ParticlePlayground.PlaygroundEventParticle>::FindAllList(System.Predicate`1<T>)
#define List_1_FindAllList_m25756(__this, ___match, method) (( List_1_t567 * (*) (List_1_t567 *, Predicate_1_t6098 *, const MethodInfo*))List_1_FindAllList_m23887_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<ParticlePlayground.PlaygroundEventParticle>::FindIndex(System.Predicate`1<T>)
#define List_1_FindIndex_m25757(__this, ___match, method) (( int32_t (*) (List_1_t567 *, Predicate_1_t6098 *, const MethodInfo*))List_1_FindIndex_m23888_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<ParticlePlayground.PlaygroundEventParticle>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m25758(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t567 *, int32_t, int32_t, Predicate_1_t6098 *, const MethodInfo*))List_1_GetIndex_m23889_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<ParticlePlayground.PlaygroundEventParticle>::GetEnumerator()
#define List_1_GetEnumerator_m25759(__this, method) (( Enumerator_t6099  (*) (List_1_t567 *, const MethodInfo*))List_1_GetEnumerator_m23890_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<ParticlePlayground.PlaygroundEventParticle>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m25760(__this, ___index, ___count, method) (( List_1_t567 * (*) (List_1_t567 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m23891_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<ParticlePlayground.PlaygroundEventParticle>::IndexOf(T)
#define List_1_IndexOf_m25761(__this, ___item, method) (( int32_t (*) (List_1_t567 *, PlaygroundEventParticle_t114 *, const MethodInfo*))List_1_IndexOf_m17815_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.PlaygroundEventParticle>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m25762(__this, ___start, ___delta, method) (( void (*) (List_1_t567 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m23892_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.PlaygroundEventParticle>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m25763(__this, ___index, method) (( void (*) (List_1_t567 *, int32_t, const MethodInfo*))List_1_CheckIndex_m23893_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.PlaygroundEventParticle>::Insert(System.Int32,T)
#define List_1_Insert_m25764(__this, ___index, ___item, method) (( void (*) (List_1_t567 *, int32_t, PlaygroundEventParticle_t114 *, const MethodInfo*))List_1_Insert_m17816_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.PlaygroundEventParticle>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m25765(__this, ___collection, method) (( void (*) (List_1_t567 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m23894_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.PlaygroundEventParticle>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m25766(__this, ___index, ___collection, method) (( void (*) (List_1_t567 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m23895_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.PlaygroundEventParticle>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m25767(__this, ___index, ___collection, method) (( void (*) (List_1_t567 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m23896_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.PlaygroundEventParticle>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m25768(__this, ___index, ___enumerable, method) (( void (*) (List_1_t567 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m23897_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<ParticlePlayground.PlaygroundEventParticle>::Remove(T)
#define List_1_Remove_m25769(__this, ___item, method) (( bool (*) (List_1_t567 *, PlaygroundEventParticle_t114 *, const MethodInfo*))List_1_Remove_m17813_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<ParticlePlayground.PlaygroundEventParticle>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m25770(__this, ___match, method) (( int32_t (*) (List_1_t567 *, Predicate_1_t6098 *, const MethodInfo*))List_1_RemoveAll_m23898_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.PlaygroundEventParticle>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m25771(__this, ___index, method) (( void (*) (List_1_t567 *, int32_t, const MethodInfo*))List_1_RemoveAt_m17808_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.PlaygroundEventParticle>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m25772(__this, ___index, ___count, method) (( void (*) (List_1_t567 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m23899_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.PlaygroundEventParticle>::Reverse()
#define List_1_Reverse_m25773(__this, method) (( void (*) (List_1_t567 *, const MethodInfo*))List_1_Reverse_m23900_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.PlaygroundEventParticle>::Sort()
#define List_1_Sort_m25774(__this, method) (( void (*) (List_1_t567 *, const MethodInfo*))List_1_Sort_m23901_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.PlaygroundEventParticle>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m25775(__this, ___comparer, method) (( void (*) (List_1_t567 *, Object_t*, const MethodInfo*))List_1_Sort_m23902_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.PlaygroundEventParticle>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m25776(__this, ___comparison, method) (( void (*) (List_1_t567 *, Comparison_1_t6100 *, const MethodInfo*))List_1_Sort_m23903_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<ParticlePlayground.PlaygroundEventParticle>::ToArray()
#define List_1_ToArray_m25777(__this, method) (( PlaygroundEventParticleU5BU5D_t6095* (*) (List_1_t567 *, const MethodInfo*))List_1_ToArray_m3250_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.PlaygroundEventParticle>::TrimExcess()
#define List_1_TrimExcess_m25778(__this, method) (( void (*) (List_1_t567 *, const MethodInfo*))List_1_TrimExcess_m23904_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<ParticlePlayground.PlaygroundEventParticle>::get_Capacity()
#define List_1_get_Capacity_m25779(__this, method) (( int32_t (*) (List_1_t567 *, const MethodInfo*))List_1_get_Capacity_m23905_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.PlaygroundEventParticle>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m25780(__this, ___value, method) (( void (*) (List_1_t567 *, int32_t, const MethodInfo*))List_1_set_Capacity_m23906_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<ParticlePlayground.PlaygroundEventParticle>::get_Count()
#define List_1_get_Count_m25781(__this, method) (( int32_t (*) (List_1_t567 *, const MethodInfo*))List_1_get_Count_m17794_gshared)(__this, method)
// T System.Collections.Generic.List`1<ParticlePlayground.PlaygroundEventParticle>::get_Item(System.Int32)
#define List_1_get_Item_m25782(__this, ___index, method) (( PlaygroundEventParticle_t114 * (*) (List_1_t567 *, int32_t, const MethodInfo*))List_1_get_Item_m17817_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.PlaygroundEventParticle>::set_Item(System.Int32,T)
#define List_1_set_Item_m25783(__this, ___index, ___value, method) (( void (*) (List_1_t567 *, int32_t, PlaygroundEventParticle_t114 *, const MethodInfo*))List_1_set_Item_m17818_gshared)(__this, ___index, ___value, method)

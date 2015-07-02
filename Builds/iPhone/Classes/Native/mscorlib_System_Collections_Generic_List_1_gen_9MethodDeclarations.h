﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<ParticlePlayground.PlaygroundEventParticle>
struct List_1_t549;
// System.Object
struct Object_t;
// ParticlePlayground.PlaygroundEventParticle
struct PlaygroundEventParticle_t114;
// System.Collections.Generic.IEnumerable`1<ParticlePlayground.PlaygroundEventParticle>
struct IEnumerable_1_t6468;
// ParticlePlayground.PlaygroundEventParticle[]
struct PlaygroundEventParticleU5BU5D_t5007;
// System.Collections.Generic.IEnumerator`1<ParticlePlayground.PlaygroundEventParticle>
struct IEnumerator_1_t6469;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Collections.Generic.ICollection`1<ParticlePlayground.PlaygroundEventParticle>
struct ICollection_1_t6470;
// System.Collections.ObjectModel.ReadOnlyCollection`1<ParticlePlayground.PlaygroundEventParticle>
struct ReadOnlyCollection_1_t5009;
// System.Predicate`1<ParticlePlayground.PlaygroundEventParticle>
struct Predicate_1_t5010;
// System.Collections.Generic.IComparer`1<ParticlePlayground.PlaygroundEventParticle>
struct IComparer_1_t6471;
// System.Comparison`1<ParticlePlayground.PlaygroundEventParticle>
struct Comparison_1_t5012;
// System.Collections.Generic.List`1/Enumerator<ParticlePlayground.PlaygroundEventParticle>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_48.h"

// System.Void System.Collections.Generic.List`1<ParticlePlayground.PlaygroundEventParticle>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_genMethodDeclarations.h"
#define List_1__ctor_m2447(__this, method) (( void (*) (List_1_t549 *, const MethodInfo*))List_1__ctor_m84_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.PlaygroundEventParticle>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m24336(__this, ___collection, method) (( void (*) (List_1_t549 *, Object_t*, const MethodInfo*))List_1__ctor_m3166_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.PlaygroundEventParticle>::.ctor(System.Int32)
#define List_1__ctor_m24337(__this, ___capacity, method) (( void (*) (List_1_t549 *, int32_t, const MethodInfo*))List_1__ctor_m22534_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.PlaygroundEventParticle>::.ctor(T[],System.Int32)
#define List_1__ctor_m24338(__this, ___data, ___size, method) (( void (*) (List_1_t549 *, PlaygroundEventParticleU5BU5D_t5007*, int32_t, const MethodInfo*))List_1__ctor_m22535_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.PlaygroundEventParticle>::.cctor()
#define List_1__cctor_m24339(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m22536_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<ParticlePlayground.PlaygroundEventParticle>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m24340(__this, method) (( Object_t* (*) (List_1_t549 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m13947_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.PlaygroundEventParticle>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m24341(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t549 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m13930_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<ParticlePlayground.PlaygroundEventParticle>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m24342(__this, method) (( Object_t * (*) (List_1_t549 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m13926_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<ParticlePlayground.PlaygroundEventParticle>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m24343(__this, ___item, method) (( int32_t (*) (List_1_t549 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m13935_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<ParticlePlayground.PlaygroundEventParticle>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m24344(__this, ___item, method) (( bool (*) (List_1_t549 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m13937_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<ParticlePlayground.PlaygroundEventParticle>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m24345(__this, ___item, method) (( int32_t (*) (List_1_t549 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m13938_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.PlaygroundEventParticle>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m24346(__this, ___index, ___item, method) (( void (*) (List_1_t549 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m13939_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.PlaygroundEventParticle>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m24347(__this, ___item, method) (( void (*) (List_1_t549 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m13940_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<ParticlePlayground.PlaygroundEventParticle>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m24348(__this, method) (( bool (*) (List_1_t549 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m13942_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<ParticlePlayground.PlaygroundEventParticle>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m24349(__this, method) (( bool (*) (List_1_t549 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m13928_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<ParticlePlayground.PlaygroundEventParticle>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m24350(__this, method) (( Object_t * (*) (List_1_t549 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m13929_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<ParticlePlayground.PlaygroundEventParticle>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m24351(__this, method) (( bool (*) (List_1_t549 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m13931_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<ParticlePlayground.PlaygroundEventParticle>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m24352(__this, method) (( bool (*) (List_1_t549 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m13932_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<ParticlePlayground.PlaygroundEventParticle>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m24353(__this, ___index, method) (( Object_t * (*) (List_1_t549 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m13933_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.PlaygroundEventParticle>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m24354(__this, ___index, ___value, method) (( void (*) (List_1_t549 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m13934_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.PlaygroundEventParticle>::Add(T)
#define List_1_Add_m24355(__this, ___item, method) (( void (*) (List_1_t549 *, PlaygroundEventParticle_t114 *, const MethodInfo*))List_1_Add_m13943_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.PlaygroundEventParticle>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m24356(__this, ___newCount, method) (( void (*) (List_1_t549 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m22537_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.PlaygroundEventParticle>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m24357(__this, ___idx, ___count, method) (( void (*) (List_1_t549 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m22538_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.PlaygroundEventParticle>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m24358(__this, ___collection, method) (( void (*) (List_1_t549 *, Object_t*, const MethodInfo*))List_1_AddCollection_m22539_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.PlaygroundEventParticle>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m24359(__this, ___enumerable, method) (( void (*) (List_1_t549 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m22540_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.PlaygroundEventParticle>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m24360(__this, ___collection, method) (( void (*) (List_1_t549 *, Object_t*, const MethodInfo*))List_1_AddRange_m87_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<ParticlePlayground.PlaygroundEventParticle>::AsReadOnly()
#define List_1_AsReadOnly_m24361(__this, method) (( ReadOnlyCollection_1_t5009 * (*) (List_1_t549 *, const MethodInfo*))List_1_AsReadOnly_m22541_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.PlaygroundEventParticle>::Clear()
#define List_1_Clear_m24362(__this, method) (( void (*) (List_1_t549 *, const MethodInfo*))List_1_Clear_m13936_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<ParticlePlayground.PlaygroundEventParticle>::Contains(T)
#define List_1_Contains_m24363(__this, ___item, method) (( bool (*) (List_1_t549 *, PlaygroundEventParticle_t114 *, const MethodInfo*))List_1_Contains_m13944_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.PlaygroundEventParticle>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m24364(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t549 *, PlaygroundEventParticleU5BU5D_t5007*, int32_t, const MethodInfo*))List_1_CopyTo_m13945_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<ParticlePlayground.PlaygroundEventParticle>::Find(System.Predicate`1<T>)
#define List_1_Find_m24365(__this, ___match, method) (( PlaygroundEventParticle_t114 * (*) (List_1_t549 *, Predicate_1_t5010 *, const MethodInfo*))List_1_Find_m22542_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.PlaygroundEventParticle>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m24366(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t5010 *, const MethodInfo*))List_1_CheckMatch_m22543_gshared)(__this /* static, unused */, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<ParticlePlayground.PlaygroundEventParticle>::FindAll(System.Predicate`1<T>)
#define List_1_FindAll_m24367(__this, ___match, method) (( List_1_t549 * (*) (List_1_t549 *, Predicate_1_t5010 *, const MethodInfo*))List_1_FindAll_m22544_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<ParticlePlayground.PlaygroundEventParticle>::FindAllStackBits(System.Predicate`1<T>)
#define List_1_FindAllStackBits_m24368(__this, ___match, method) (( List_1_t549 * (*) (List_1_t549 *, Predicate_1_t5010 *, const MethodInfo*))List_1_FindAllStackBits_m22545_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<ParticlePlayground.PlaygroundEventParticle>::FindAllList(System.Predicate`1<T>)
#define List_1_FindAllList_m24369(__this, ___match, method) (( List_1_t549 * (*) (List_1_t549 *, Predicate_1_t5010 *, const MethodInfo*))List_1_FindAllList_m22546_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<ParticlePlayground.PlaygroundEventParticle>::FindIndex(System.Predicate`1<T>)
#define List_1_FindIndex_m24370(__this, ___match, method) (( int32_t (*) (List_1_t549 *, Predicate_1_t5010 *, const MethodInfo*))List_1_FindIndex_m22547_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<ParticlePlayground.PlaygroundEventParticle>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m24371(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t549 *, int32_t, int32_t, Predicate_1_t5010 *, const MethodInfo*))List_1_GetIndex_m22548_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<ParticlePlayground.PlaygroundEventParticle>::GetEnumerator()
#define List_1_GetEnumerator_m24372(__this, method) (( Enumerator_t5011  (*) (List_1_t549 *, const MethodInfo*))List_1_GetEnumerator_m22549_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<ParticlePlayground.PlaygroundEventParticle>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m24373(__this, ___index, ___count, method) (( List_1_t549 * (*) (List_1_t549 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m22550_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<ParticlePlayground.PlaygroundEventParticle>::IndexOf(T)
#define List_1_IndexOf_m24374(__this, ___item, method) (( int32_t (*) (List_1_t549 *, PlaygroundEventParticle_t114 *, const MethodInfo*))List_1_IndexOf_m13948_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.PlaygroundEventParticle>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m24375(__this, ___start, ___delta, method) (( void (*) (List_1_t549 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m22551_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.PlaygroundEventParticle>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m24376(__this, ___index, method) (( void (*) (List_1_t549 *, int32_t, const MethodInfo*))List_1_CheckIndex_m22552_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.PlaygroundEventParticle>::Insert(System.Int32,T)
#define List_1_Insert_m24377(__this, ___index, ___item, method) (( void (*) (List_1_t549 *, int32_t, PlaygroundEventParticle_t114 *, const MethodInfo*))List_1_Insert_m13949_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.PlaygroundEventParticle>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m24378(__this, ___collection, method) (( void (*) (List_1_t549 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m22553_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.PlaygroundEventParticle>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m24379(__this, ___index, ___collection, method) (( void (*) (List_1_t549 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m22554_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.PlaygroundEventParticle>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m24380(__this, ___index, ___collection, method) (( void (*) (List_1_t549 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m22555_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.PlaygroundEventParticle>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m24381(__this, ___index, ___enumerable, method) (( void (*) (List_1_t549 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m22556_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<ParticlePlayground.PlaygroundEventParticle>::Remove(T)
#define List_1_Remove_m24382(__this, ___item, method) (( bool (*) (List_1_t549 *, PlaygroundEventParticle_t114 *, const MethodInfo*))List_1_Remove_m13946_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<ParticlePlayground.PlaygroundEventParticle>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m24383(__this, ___match, method) (( int32_t (*) (List_1_t549 *, Predicate_1_t5010 *, const MethodInfo*))List_1_RemoveAll_m22557_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.PlaygroundEventParticle>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m24384(__this, ___index, method) (( void (*) (List_1_t549 *, int32_t, const MethodInfo*))List_1_RemoveAt_m13941_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.PlaygroundEventParticle>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m24385(__this, ___index, ___count, method) (( void (*) (List_1_t549 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m22558_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.PlaygroundEventParticle>::Reverse()
#define List_1_Reverse_m24386(__this, method) (( void (*) (List_1_t549 *, const MethodInfo*))List_1_Reverse_m22559_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.PlaygroundEventParticle>::Sort()
#define List_1_Sort_m24387(__this, method) (( void (*) (List_1_t549 *, const MethodInfo*))List_1_Sort_m22560_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.PlaygroundEventParticle>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m24388(__this, ___comparer, method) (( void (*) (List_1_t549 *, Object_t*, const MethodInfo*))List_1_Sort_m22561_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.PlaygroundEventParticle>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m24389(__this, ___comparison, method) (( void (*) (List_1_t549 *, Comparison_1_t5012 *, const MethodInfo*))List_1_Sort_m22562_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<ParticlePlayground.PlaygroundEventParticle>::ToArray()
#define List_1_ToArray_m24390(__this, method) (( PlaygroundEventParticleU5BU5D_t5007* (*) (List_1_t549 *, const MethodInfo*))List_1_ToArray_m3165_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.PlaygroundEventParticle>::TrimExcess()
#define List_1_TrimExcess_m24391(__this, method) (( void (*) (List_1_t549 *, const MethodInfo*))List_1_TrimExcess_m22563_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<ParticlePlayground.PlaygroundEventParticle>::get_Capacity()
#define List_1_get_Capacity_m24392(__this, method) (( int32_t (*) (List_1_t549 *, const MethodInfo*))List_1_get_Capacity_m22564_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.PlaygroundEventParticle>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m24393(__this, ___value, method) (( void (*) (List_1_t549 *, int32_t, const MethodInfo*))List_1_set_Capacity_m22565_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<ParticlePlayground.PlaygroundEventParticle>::get_Count()
#define List_1_get_Count_m24394(__this, method) (( int32_t (*) (List_1_t549 *, const MethodInfo*))List_1_get_Count_m13927_gshared)(__this, method)
// T System.Collections.Generic.List`1<ParticlePlayground.PlaygroundEventParticle>::get_Item(System.Int32)
#define List_1_get_Item_m24395(__this, ___index, method) (( PlaygroundEventParticle_t114 * (*) (List_1_t549 *, int32_t, const MethodInfo*))List_1_get_Item_m13950_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.PlaygroundEventParticle>::set_Item(System.Int32,T)
#define List_1_set_Item_m24396(__this, ___index, ___value, method) (( void (*) (List_1_t549 *, int32_t, PlaygroundEventParticle_t114 *, const MethodInfo*))List_1_set_Item_m13951_gshared)(__this, ___index, ___value, method)
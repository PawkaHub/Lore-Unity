#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<ParticlePlayground.PlaygroundEventParticle>
struct List_1_t620;
// System.Object
struct Object_t;
// ParticlePlayground.PlaygroundEventParticle
struct PlaygroundEventParticle_t114;
// System.Collections.Generic.IEnumerable`1<ParticlePlayground.PlaygroundEventParticle>
struct IEnumerable_1_t9922;
// ParticlePlayground.PlaygroundEventParticle[]
struct PlaygroundEventParticleU5BU5D_t6333;
// System.Collections.Generic.IEnumerator`1<ParticlePlayground.PlaygroundEventParticle>
struct IEnumerator_1_t9923;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Collections.Generic.ICollection`1<ParticlePlayground.PlaygroundEventParticle>
struct ICollection_1_t9924;
// System.Collections.ObjectModel.ReadOnlyCollection`1<ParticlePlayground.PlaygroundEventParticle>
struct ReadOnlyCollection_1_t6335;
// System.Predicate`1<ParticlePlayground.PlaygroundEventParticle>
struct Predicate_1_t6336;
// System.Collections.Generic.IComparer`1<ParticlePlayground.PlaygroundEventParticle>
struct IComparer_1_t9925;
// System.Comparison`1<ParticlePlayground.PlaygroundEventParticle>
struct Comparison_1_t6338;
// System.Collections.Generic.List`1/Enumerator<ParticlePlayground.PlaygroundEventParticle>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_53.h"

// System.Void System.Collections.Generic.List`1<ParticlePlayground.PlaygroundEventParticle>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_genMethodDeclarations.h"
#define List_1__ctor_m2706(__this, method) (( void (*) (List_1_t620 *, const MethodInfo*))List_1__ctor_m84_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.PlaygroundEventParticle>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m26140(__this, ___collection, method) (( void (*) (List_1_t620 *, Object_t*, const MethodInfo*))List_1__ctor_m3480_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.PlaygroundEventParticle>::.ctor(System.Int32)
#define List_1__ctor_m26141(__this, ___capacity, method) (( void (*) (List_1_t620 *, int32_t, const MethodInfo*))List_1__ctor_m24292_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.PlaygroundEventParticle>::.ctor(T[],System.Int32)
#define List_1__ctor_m26142(__this, ___data, ___size, method) (( void (*) (List_1_t620 *, PlaygroundEventParticleU5BU5D_t6333*, int32_t, const MethodInfo*))List_1__ctor_m24293_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.PlaygroundEventParticle>::.cctor()
#define List_1__cctor_m26143(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m24294_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<ParticlePlayground.PlaygroundEventParticle>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m26144(__this, method) (( Object_t* (*) (List_1_t620 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m18232_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.PlaygroundEventParticle>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m26145(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t620 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m18215_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<ParticlePlayground.PlaygroundEventParticle>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m26146(__this, method) (( Object_t * (*) (List_1_t620 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m18211_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<ParticlePlayground.PlaygroundEventParticle>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m26147(__this, ___item, method) (( int32_t (*) (List_1_t620 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m18220_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<ParticlePlayground.PlaygroundEventParticle>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m26148(__this, ___item, method) (( bool (*) (List_1_t620 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m18222_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<ParticlePlayground.PlaygroundEventParticle>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m26149(__this, ___item, method) (( int32_t (*) (List_1_t620 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m18223_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.PlaygroundEventParticle>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m26150(__this, ___index, ___item, method) (( void (*) (List_1_t620 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m18224_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.PlaygroundEventParticle>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m26151(__this, ___item, method) (( void (*) (List_1_t620 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m18225_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<ParticlePlayground.PlaygroundEventParticle>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m26152(__this, method) (( bool (*) (List_1_t620 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m18227_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<ParticlePlayground.PlaygroundEventParticle>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m26153(__this, method) (( bool (*) (List_1_t620 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m18213_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<ParticlePlayground.PlaygroundEventParticle>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m26154(__this, method) (( Object_t * (*) (List_1_t620 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m18214_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<ParticlePlayground.PlaygroundEventParticle>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m26155(__this, method) (( bool (*) (List_1_t620 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m18216_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<ParticlePlayground.PlaygroundEventParticle>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m26156(__this, method) (( bool (*) (List_1_t620 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m18217_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<ParticlePlayground.PlaygroundEventParticle>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m26157(__this, ___index, method) (( Object_t * (*) (List_1_t620 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m18218_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.PlaygroundEventParticle>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m26158(__this, ___index, ___value, method) (( void (*) (List_1_t620 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m18219_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.PlaygroundEventParticle>::Add(T)
#define List_1_Add_m26159(__this, ___item, method) (( void (*) (List_1_t620 *, PlaygroundEventParticle_t114 *, const MethodInfo*))List_1_Add_m18228_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.PlaygroundEventParticle>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m26160(__this, ___newCount, method) (( void (*) (List_1_t620 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m24295_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.PlaygroundEventParticle>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m26161(__this, ___idx, ___count, method) (( void (*) (List_1_t620 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m24296_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.PlaygroundEventParticle>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m26162(__this, ___collection, method) (( void (*) (List_1_t620 *, Object_t*, const MethodInfo*))List_1_AddCollection_m24297_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.PlaygroundEventParticle>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m26163(__this, ___enumerable, method) (( void (*) (List_1_t620 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m24298_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.PlaygroundEventParticle>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m26164(__this, ___collection, method) (( void (*) (List_1_t620 *, Object_t*, const MethodInfo*))List_1_AddRange_m87_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<ParticlePlayground.PlaygroundEventParticle>::AsReadOnly()
#define List_1_AsReadOnly_m26165(__this, method) (( ReadOnlyCollection_1_t6335 * (*) (List_1_t620 *, const MethodInfo*))List_1_AsReadOnly_m24299_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.PlaygroundEventParticle>::Clear()
#define List_1_Clear_m26166(__this, method) (( void (*) (List_1_t620 *, const MethodInfo*))List_1_Clear_m18221_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<ParticlePlayground.PlaygroundEventParticle>::Contains(T)
#define List_1_Contains_m26167(__this, ___item, method) (( bool (*) (List_1_t620 *, PlaygroundEventParticle_t114 *, const MethodInfo*))List_1_Contains_m18229_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.PlaygroundEventParticle>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m26168(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t620 *, PlaygroundEventParticleU5BU5D_t6333*, int32_t, const MethodInfo*))List_1_CopyTo_m18230_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<ParticlePlayground.PlaygroundEventParticle>::Find(System.Predicate`1<T>)
#define List_1_Find_m26169(__this, ___match, method) (( PlaygroundEventParticle_t114 * (*) (List_1_t620 *, Predicate_1_t6336 *, const MethodInfo*))List_1_Find_m24300_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.PlaygroundEventParticle>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m26170(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t6336 *, const MethodInfo*))List_1_CheckMatch_m24301_gshared)(__this /* static, unused */, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<ParticlePlayground.PlaygroundEventParticle>::FindAll(System.Predicate`1<T>)
#define List_1_FindAll_m26171(__this, ___match, method) (( List_1_t620 * (*) (List_1_t620 *, Predicate_1_t6336 *, const MethodInfo*))List_1_FindAll_m24302_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<ParticlePlayground.PlaygroundEventParticle>::FindAllStackBits(System.Predicate`1<T>)
#define List_1_FindAllStackBits_m26172(__this, ___match, method) (( List_1_t620 * (*) (List_1_t620 *, Predicate_1_t6336 *, const MethodInfo*))List_1_FindAllStackBits_m24303_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<ParticlePlayground.PlaygroundEventParticle>::FindAllList(System.Predicate`1<T>)
#define List_1_FindAllList_m26173(__this, ___match, method) (( List_1_t620 * (*) (List_1_t620 *, Predicate_1_t6336 *, const MethodInfo*))List_1_FindAllList_m24304_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<ParticlePlayground.PlaygroundEventParticle>::FindIndex(System.Predicate`1<T>)
#define List_1_FindIndex_m26174(__this, ___match, method) (( int32_t (*) (List_1_t620 *, Predicate_1_t6336 *, const MethodInfo*))List_1_FindIndex_m24305_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<ParticlePlayground.PlaygroundEventParticle>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m26175(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t620 *, int32_t, int32_t, Predicate_1_t6336 *, const MethodInfo*))List_1_GetIndex_m24306_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<ParticlePlayground.PlaygroundEventParticle>::GetEnumerator()
#define List_1_GetEnumerator_m26176(__this, method) (( Enumerator_t6337  (*) (List_1_t620 *, const MethodInfo*))List_1_GetEnumerator_m24307_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<ParticlePlayground.PlaygroundEventParticle>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m26177(__this, ___index, ___count, method) (( List_1_t620 * (*) (List_1_t620 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m24308_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<ParticlePlayground.PlaygroundEventParticle>::IndexOf(T)
#define List_1_IndexOf_m26178(__this, ___item, method) (( int32_t (*) (List_1_t620 *, PlaygroundEventParticle_t114 *, const MethodInfo*))List_1_IndexOf_m18233_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.PlaygroundEventParticle>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m26179(__this, ___start, ___delta, method) (( void (*) (List_1_t620 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m24309_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.PlaygroundEventParticle>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m26180(__this, ___index, method) (( void (*) (List_1_t620 *, int32_t, const MethodInfo*))List_1_CheckIndex_m24310_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.PlaygroundEventParticle>::Insert(System.Int32,T)
#define List_1_Insert_m26181(__this, ___index, ___item, method) (( void (*) (List_1_t620 *, int32_t, PlaygroundEventParticle_t114 *, const MethodInfo*))List_1_Insert_m18234_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.PlaygroundEventParticle>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m26182(__this, ___collection, method) (( void (*) (List_1_t620 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m24311_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.PlaygroundEventParticle>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m26183(__this, ___index, ___collection, method) (( void (*) (List_1_t620 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m24312_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.PlaygroundEventParticle>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m26184(__this, ___index, ___collection, method) (( void (*) (List_1_t620 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m24313_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.PlaygroundEventParticle>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m26185(__this, ___index, ___enumerable, method) (( void (*) (List_1_t620 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m24314_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<ParticlePlayground.PlaygroundEventParticle>::Remove(T)
#define List_1_Remove_m26186(__this, ___item, method) (( bool (*) (List_1_t620 *, PlaygroundEventParticle_t114 *, const MethodInfo*))List_1_Remove_m18231_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<ParticlePlayground.PlaygroundEventParticle>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m26187(__this, ___match, method) (( int32_t (*) (List_1_t620 *, Predicate_1_t6336 *, const MethodInfo*))List_1_RemoveAll_m24315_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.PlaygroundEventParticle>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m26188(__this, ___index, method) (( void (*) (List_1_t620 *, int32_t, const MethodInfo*))List_1_RemoveAt_m18226_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.PlaygroundEventParticle>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m26189(__this, ___index, ___count, method) (( void (*) (List_1_t620 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m24316_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.PlaygroundEventParticle>::Reverse()
#define List_1_Reverse_m26190(__this, method) (( void (*) (List_1_t620 *, const MethodInfo*))List_1_Reverse_m24317_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.PlaygroundEventParticle>::Sort()
#define List_1_Sort_m26191(__this, method) (( void (*) (List_1_t620 *, const MethodInfo*))List_1_Sort_m24318_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.PlaygroundEventParticle>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m26192(__this, ___comparer, method) (( void (*) (List_1_t620 *, Object_t*, const MethodInfo*))List_1_Sort_m24319_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.PlaygroundEventParticle>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m26193(__this, ___comparison, method) (( void (*) (List_1_t620 *, Comparison_1_t6338 *, const MethodInfo*))List_1_Sort_m24320_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<ParticlePlayground.PlaygroundEventParticle>::ToArray()
#define List_1_ToArray_m26194(__this, method) (( PlaygroundEventParticleU5BU5D_t6333* (*) (List_1_t620 *, const MethodInfo*))List_1_ToArray_m3479_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.PlaygroundEventParticle>::TrimExcess()
#define List_1_TrimExcess_m26195(__this, method) (( void (*) (List_1_t620 *, const MethodInfo*))List_1_TrimExcess_m24321_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<ParticlePlayground.PlaygroundEventParticle>::get_Capacity()
#define List_1_get_Capacity_m26196(__this, method) (( int32_t (*) (List_1_t620 *, const MethodInfo*))List_1_get_Capacity_m24322_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.PlaygroundEventParticle>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m26197(__this, ___value, method) (( void (*) (List_1_t620 *, int32_t, const MethodInfo*))List_1_set_Capacity_m24323_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<ParticlePlayground.PlaygroundEventParticle>::get_Count()
#define List_1_get_Count_m26198(__this, method) (( int32_t (*) (List_1_t620 *, const MethodInfo*))List_1_get_Count_m18212_gshared)(__this, method)
// T System.Collections.Generic.List`1<ParticlePlayground.PlaygroundEventParticle>::get_Item(System.Int32)
#define List_1_get_Item_m26199(__this, ___index, method) (( PlaygroundEventParticle_t114 * (*) (List_1_t620 *, int32_t, const MethodInfo*))List_1_get_Item_m18235_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.PlaygroundEventParticle>::set_Item(System.Int32,T)
#define List_1_set_Item_m26200(__this, ___index, ___value, method) (( void (*) (List_1_t620 *, int32_t, PlaygroundEventParticle_t114 *, const MethodInfo*))List_1_set_Item_m18236_gshared)(__this, ___index, ___value, method)

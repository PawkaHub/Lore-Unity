#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<ParticlePlayground.ManipulatorPropertyC>
struct List_1_t111;
// System.Object
struct Object_t;
// ParticlePlayground.ManipulatorPropertyC
struct ManipulatorPropertyC_t110;
// System.Collections.Generic.IEnumerable`1<ParticlePlayground.ManipulatorPropertyC>
struct IEnumerable_1_t9946;
// ParticlePlayground.ManipulatorPropertyC[]
struct ManipulatorPropertyCU5BU5D_t6379;
// System.Collections.Generic.IEnumerator`1<ParticlePlayground.ManipulatorPropertyC>
struct IEnumerator_1_t9947;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Collections.Generic.ICollection`1<ParticlePlayground.ManipulatorPropertyC>
struct ICollection_1_t9948;
// System.Collections.ObjectModel.ReadOnlyCollection`1<ParticlePlayground.ManipulatorPropertyC>
struct ReadOnlyCollection_1_t6381;
// System.Predicate`1<ParticlePlayground.ManipulatorPropertyC>
struct Predicate_1_t6382;
// System.Collections.Generic.IComparer`1<ParticlePlayground.ManipulatorPropertyC>
struct IComparer_1_t9949;
// System.Comparison`1<ParticlePlayground.ManipulatorPropertyC>
struct Comparison_1_t6384;
// System.Collections.Generic.List`1/Enumerator<ParticlePlayground.ManipulatorPropertyC>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_59.h"

// System.Void System.Collections.Generic.List`1<ParticlePlayground.ManipulatorPropertyC>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_genMethodDeclarations.h"
#define List_1__ctor_m2795(__this, method) (( void (*) (List_1_t111 *, const MethodInfo*))List_1__ctor_m84_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.ManipulatorPropertyC>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m26860(__this, ___collection, method) (( void (*) (List_1_t111 *, Object_t*, const MethodInfo*))List_1__ctor_m3480_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.ManipulatorPropertyC>::.ctor(System.Int32)
#define List_1__ctor_m26861(__this, ___capacity, method) (( void (*) (List_1_t111 *, int32_t, const MethodInfo*))List_1__ctor_m24292_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.ManipulatorPropertyC>::.ctor(T[],System.Int32)
#define List_1__ctor_m26862(__this, ___data, ___size, method) (( void (*) (List_1_t111 *, ManipulatorPropertyCU5BU5D_t6379*, int32_t, const MethodInfo*))List_1__ctor_m24293_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.ManipulatorPropertyC>::.cctor()
#define List_1__cctor_m26863(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m24294_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<ParticlePlayground.ManipulatorPropertyC>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m26864(__this, method) (( Object_t* (*) (List_1_t111 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m18232_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.ManipulatorPropertyC>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m26865(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t111 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m18215_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<ParticlePlayground.ManipulatorPropertyC>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m26866(__this, method) (( Object_t * (*) (List_1_t111 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m18211_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<ParticlePlayground.ManipulatorPropertyC>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m26867(__this, ___item, method) (( int32_t (*) (List_1_t111 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m18220_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<ParticlePlayground.ManipulatorPropertyC>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m26868(__this, ___item, method) (( bool (*) (List_1_t111 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m18222_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<ParticlePlayground.ManipulatorPropertyC>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m26869(__this, ___item, method) (( int32_t (*) (List_1_t111 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m18223_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.ManipulatorPropertyC>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m26870(__this, ___index, ___item, method) (( void (*) (List_1_t111 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m18224_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.ManipulatorPropertyC>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m26871(__this, ___item, method) (( void (*) (List_1_t111 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m18225_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<ParticlePlayground.ManipulatorPropertyC>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m26872(__this, method) (( bool (*) (List_1_t111 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m18227_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<ParticlePlayground.ManipulatorPropertyC>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m26873(__this, method) (( bool (*) (List_1_t111 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m18213_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<ParticlePlayground.ManipulatorPropertyC>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m26874(__this, method) (( Object_t * (*) (List_1_t111 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m18214_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<ParticlePlayground.ManipulatorPropertyC>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m26875(__this, method) (( bool (*) (List_1_t111 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m18216_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<ParticlePlayground.ManipulatorPropertyC>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m26876(__this, method) (( bool (*) (List_1_t111 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m18217_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<ParticlePlayground.ManipulatorPropertyC>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m26877(__this, ___index, method) (( Object_t * (*) (List_1_t111 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m18218_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.ManipulatorPropertyC>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m26878(__this, ___index, ___value, method) (( void (*) (List_1_t111 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m18219_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.ManipulatorPropertyC>::Add(T)
#define List_1_Add_m26879(__this, ___item, method) (( void (*) (List_1_t111 *, ManipulatorPropertyC_t110 *, const MethodInfo*))List_1_Add_m18228_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.ManipulatorPropertyC>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m26880(__this, ___newCount, method) (( void (*) (List_1_t111 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m24295_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.ManipulatorPropertyC>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m26881(__this, ___idx, ___count, method) (( void (*) (List_1_t111 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m24296_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.ManipulatorPropertyC>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m26882(__this, ___collection, method) (( void (*) (List_1_t111 *, Object_t*, const MethodInfo*))List_1_AddCollection_m24297_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.ManipulatorPropertyC>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m26883(__this, ___enumerable, method) (( void (*) (List_1_t111 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m24298_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.ManipulatorPropertyC>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m26884(__this, ___collection, method) (( void (*) (List_1_t111 *, Object_t*, const MethodInfo*))List_1_AddRange_m87_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<ParticlePlayground.ManipulatorPropertyC>::AsReadOnly()
#define List_1_AsReadOnly_m26885(__this, method) (( ReadOnlyCollection_1_t6381 * (*) (List_1_t111 *, const MethodInfo*))List_1_AsReadOnly_m24299_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.ManipulatorPropertyC>::Clear()
#define List_1_Clear_m26886(__this, method) (( void (*) (List_1_t111 *, const MethodInfo*))List_1_Clear_m18221_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<ParticlePlayground.ManipulatorPropertyC>::Contains(T)
#define List_1_Contains_m26887(__this, ___item, method) (( bool (*) (List_1_t111 *, ManipulatorPropertyC_t110 *, const MethodInfo*))List_1_Contains_m18229_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.ManipulatorPropertyC>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m26888(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t111 *, ManipulatorPropertyCU5BU5D_t6379*, int32_t, const MethodInfo*))List_1_CopyTo_m18230_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<ParticlePlayground.ManipulatorPropertyC>::Find(System.Predicate`1<T>)
#define List_1_Find_m26889(__this, ___match, method) (( ManipulatorPropertyC_t110 * (*) (List_1_t111 *, Predicate_1_t6382 *, const MethodInfo*))List_1_Find_m24300_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.ManipulatorPropertyC>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m26890(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t6382 *, const MethodInfo*))List_1_CheckMatch_m24301_gshared)(__this /* static, unused */, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<ParticlePlayground.ManipulatorPropertyC>::FindAll(System.Predicate`1<T>)
#define List_1_FindAll_m26891(__this, ___match, method) (( List_1_t111 * (*) (List_1_t111 *, Predicate_1_t6382 *, const MethodInfo*))List_1_FindAll_m24302_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<ParticlePlayground.ManipulatorPropertyC>::FindAllStackBits(System.Predicate`1<T>)
#define List_1_FindAllStackBits_m26892(__this, ___match, method) (( List_1_t111 * (*) (List_1_t111 *, Predicate_1_t6382 *, const MethodInfo*))List_1_FindAllStackBits_m24303_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<ParticlePlayground.ManipulatorPropertyC>::FindAllList(System.Predicate`1<T>)
#define List_1_FindAllList_m26893(__this, ___match, method) (( List_1_t111 * (*) (List_1_t111 *, Predicate_1_t6382 *, const MethodInfo*))List_1_FindAllList_m24304_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<ParticlePlayground.ManipulatorPropertyC>::FindIndex(System.Predicate`1<T>)
#define List_1_FindIndex_m26894(__this, ___match, method) (( int32_t (*) (List_1_t111 *, Predicate_1_t6382 *, const MethodInfo*))List_1_FindIndex_m24305_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<ParticlePlayground.ManipulatorPropertyC>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m26895(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t111 *, int32_t, int32_t, Predicate_1_t6382 *, const MethodInfo*))List_1_GetIndex_m24306_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<ParticlePlayground.ManipulatorPropertyC>::GetEnumerator()
#define List_1_GetEnumerator_m26896(__this, method) (( Enumerator_t6383  (*) (List_1_t111 *, const MethodInfo*))List_1_GetEnumerator_m24307_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<ParticlePlayground.ManipulatorPropertyC>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m26897(__this, ___index, ___count, method) (( List_1_t111 * (*) (List_1_t111 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m24308_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<ParticlePlayground.ManipulatorPropertyC>::IndexOf(T)
#define List_1_IndexOf_m26898(__this, ___item, method) (( int32_t (*) (List_1_t111 *, ManipulatorPropertyC_t110 *, const MethodInfo*))List_1_IndexOf_m18233_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.ManipulatorPropertyC>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m26899(__this, ___start, ___delta, method) (( void (*) (List_1_t111 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m24309_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.ManipulatorPropertyC>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m26900(__this, ___index, method) (( void (*) (List_1_t111 *, int32_t, const MethodInfo*))List_1_CheckIndex_m24310_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.ManipulatorPropertyC>::Insert(System.Int32,T)
#define List_1_Insert_m26901(__this, ___index, ___item, method) (( void (*) (List_1_t111 *, int32_t, ManipulatorPropertyC_t110 *, const MethodInfo*))List_1_Insert_m18234_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.ManipulatorPropertyC>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m26902(__this, ___collection, method) (( void (*) (List_1_t111 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m24311_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.ManipulatorPropertyC>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m26903(__this, ___index, ___collection, method) (( void (*) (List_1_t111 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m24312_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.ManipulatorPropertyC>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m26904(__this, ___index, ___collection, method) (( void (*) (List_1_t111 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m24313_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.ManipulatorPropertyC>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m26905(__this, ___index, ___enumerable, method) (( void (*) (List_1_t111 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m24314_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<ParticlePlayground.ManipulatorPropertyC>::Remove(T)
#define List_1_Remove_m26906(__this, ___item, method) (( bool (*) (List_1_t111 *, ManipulatorPropertyC_t110 *, const MethodInfo*))List_1_Remove_m18231_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<ParticlePlayground.ManipulatorPropertyC>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m26907(__this, ___match, method) (( int32_t (*) (List_1_t111 *, Predicate_1_t6382 *, const MethodInfo*))List_1_RemoveAll_m24315_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.ManipulatorPropertyC>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m26908(__this, ___index, method) (( void (*) (List_1_t111 *, int32_t, const MethodInfo*))List_1_RemoveAt_m18226_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.ManipulatorPropertyC>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m26909(__this, ___index, ___count, method) (( void (*) (List_1_t111 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m24316_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.ManipulatorPropertyC>::Reverse()
#define List_1_Reverse_m26910(__this, method) (( void (*) (List_1_t111 *, const MethodInfo*))List_1_Reverse_m24317_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.ManipulatorPropertyC>::Sort()
#define List_1_Sort_m26911(__this, method) (( void (*) (List_1_t111 *, const MethodInfo*))List_1_Sort_m24318_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.ManipulatorPropertyC>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m26912(__this, ___comparer, method) (( void (*) (List_1_t111 *, Object_t*, const MethodInfo*))List_1_Sort_m24319_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.ManipulatorPropertyC>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m26913(__this, ___comparison, method) (( void (*) (List_1_t111 *, Comparison_1_t6384 *, const MethodInfo*))List_1_Sort_m24320_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<ParticlePlayground.ManipulatorPropertyC>::ToArray()
#define List_1_ToArray_m26914(__this, method) (( ManipulatorPropertyCU5BU5D_t6379* (*) (List_1_t111 *, const MethodInfo*))List_1_ToArray_m3479_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.ManipulatorPropertyC>::TrimExcess()
#define List_1_TrimExcess_m26915(__this, method) (( void (*) (List_1_t111 *, const MethodInfo*))List_1_TrimExcess_m24321_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<ParticlePlayground.ManipulatorPropertyC>::get_Capacity()
#define List_1_get_Capacity_m26916(__this, method) (( int32_t (*) (List_1_t111 *, const MethodInfo*))List_1_get_Capacity_m24322_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.ManipulatorPropertyC>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m26917(__this, ___value, method) (( void (*) (List_1_t111 *, int32_t, const MethodInfo*))List_1_set_Capacity_m24323_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<ParticlePlayground.ManipulatorPropertyC>::get_Count()
#define List_1_get_Count_m26918(__this, method) (( int32_t (*) (List_1_t111 *, const MethodInfo*))List_1_get_Count_m18212_gshared)(__this, method)
// T System.Collections.Generic.List`1<ParticlePlayground.ManipulatorPropertyC>::get_Item(System.Int32)
#define List_1_get_Item_m26919(__this, ___index, method) (( ManipulatorPropertyC_t110 * (*) (List_1_t111 *, int32_t, const MethodInfo*))List_1_get_Item_m18235_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.ManipulatorPropertyC>::set_Item(System.Int32,T)
#define List_1_set_Item_m26920(__this, ___index, ___value, method) (( void (*) (List_1_t111 *, int32_t, ManipulatorPropertyC_t110 *, const MethodInfo*))List_1_set_Item_m18236_gshared)(__this, ___index, ___value, method)

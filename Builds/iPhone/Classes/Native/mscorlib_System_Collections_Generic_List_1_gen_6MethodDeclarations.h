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
struct IEnumerable_1_t9914;
// ParticlePlayground.ManipulatorObjectC[]
struct ManipulatorObjectCU5BU5D_t6318;
// System.Collections.Generic.IEnumerator`1<ParticlePlayground.ManipulatorObjectC>
struct IEnumerator_1_t9915;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Collections.Generic.ICollection`1<ParticlePlayground.ManipulatorObjectC>
struct ICollection_1_t9916;
// System.Collections.ObjectModel.ReadOnlyCollection`1<ParticlePlayground.ManipulatorObjectC>
struct ReadOnlyCollection_1_t6320;
// System.Predicate`1<ParticlePlayground.ManipulatorObjectC>
struct Predicate_1_t6321;
// System.Collections.Generic.IComparer`1<ParticlePlayground.ManipulatorObjectC>
struct IComparer_1_t9917;
// System.Comparison`1<ParticlePlayground.ManipulatorObjectC>
struct Comparison_1_t6323;
// System.Collections.Generic.List`1/Enumerator<ParticlePlayground.ManipulatorObjectC>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_51.h"

// System.Void System.Collections.Generic.List`1<ParticlePlayground.ManipulatorObjectC>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_genMethodDeclarations.h"
#define List_1__ctor_m2697(__this, method) (( void (*) (List_1_t80 *, const MethodInfo*))List_1__ctor_m84_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.ManipulatorObjectC>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m25910(__this, ___collection, method) (( void (*) (List_1_t80 *, Object_t*, const MethodInfo*))List_1__ctor_m3480_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.ManipulatorObjectC>::.ctor(System.Int32)
#define List_1__ctor_m25911(__this, ___capacity, method) (( void (*) (List_1_t80 *, int32_t, const MethodInfo*))List_1__ctor_m24292_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.ManipulatorObjectC>::.ctor(T[],System.Int32)
#define List_1__ctor_m25912(__this, ___data, ___size, method) (( void (*) (List_1_t80 *, ManipulatorObjectCU5BU5D_t6318*, int32_t, const MethodInfo*))List_1__ctor_m24293_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.ManipulatorObjectC>::.cctor()
#define List_1__cctor_m25913(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m24294_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<ParticlePlayground.ManipulatorObjectC>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m25914(__this, method) (( Object_t* (*) (List_1_t80 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m18232_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.ManipulatorObjectC>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m25915(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t80 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m18215_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<ParticlePlayground.ManipulatorObjectC>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m25916(__this, method) (( Object_t * (*) (List_1_t80 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m18211_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<ParticlePlayground.ManipulatorObjectC>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m25917(__this, ___item, method) (( int32_t (*) (List_1_t80 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m18220_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<ParticlePlayground.ManipulatorObjectC>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m25918(__this, ___item, method) (( bool (*) (List_1_t80 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m18222_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<ParticlePlayground.ManipulatorObjectC>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m25919(__this, ___item, method) (( int32_t (*) (List_1_t80 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m18223_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.ManipulatorObjectC>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m25920(__this, ___index, ___item, method) (( void (*) (List_1_t80 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m18224_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.ManipulatorObjectC>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m25921(__this, ___item, method) (( void (*) (List_1_t80 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m18225_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<ParticlePlayground.ManipulatorObjectC>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m25922(__this, method) (( bool (*) (List_1_t80 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m18227_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<ParticlePlayground.ManipulatorObjectC>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m25923(__this, method) (( bool (*) (List_1_t80 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m18213_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<ParticlePlayground.ManipulatorObjectC>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m25924(__this, method) (( Object_t * (*) (List_1_t80 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m18214_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<ParticlePlayground.ManipulatorObjectC>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m25925(__this, method) (( bool (*) (List_1_t80 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m18216_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<ParticlePlayground.ManipulatorObjectC>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m25926(__this, method) (( bool (*) (List_1_t80 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m18217_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<ParticlePlayground.ManipulatorObjectC>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m25927(__this, ___index, method) (( Object_t * (*) (List_1_t80 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m18218_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.ManipulatorObjectC>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m25928(__this, ___index, ___value, method) (( void (*) (List_1_t80 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m18219_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.ManipulatorObjectC>::Add(T)
#define List_1_Add_m25929(__this, ___item, method) (( void (*) (List_1_t80 *, ManipulatorObjectC_t115 *, const MethodInfo*))List_1_Add_m18228_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.ManipulatorObjectC>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m25930(__this, ___newCount, method) (( void (*) (List_1_t80 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m24295_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.ManipulatorObjectC>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m25931(__this, ___idx, ___count, method) (( void (*) (List_1_t80 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m24296_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.ManipulatorObjectC>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m25932(__this, ___collection, method) (( void (*) (List_1_t80 *, Object_t*, const MethodInfo*))List_1_AddCollection_m24297_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.ManipulatorObjectC>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m25933(__this, ___enumerable, method) (( void (*) (List_1_t80 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m24298_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.ManipulatorObjectC>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m25934(__this, ___collection, method) (( void (*) (List_1_t80 *, Object_t*, const MethodInfo*))List_1_AddRange_m87_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<ParticlePlayground.ManipulatorObjectC>::AsReadOnly()
#define List_1_AsReadOnly_m25935(__this, method) (( ReadOnlyCollection_1_t6320 * (*) (List_1_t80 *, const MethodInfo*))List_1_AsReadOnly_m24299_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.ManipulatorObjectC>::Clear()
#define List_1_Clear_m25936(__this, method) (( void (*) (List_1_t80 *, const MethodInfo*))List_1_Clear_m18221_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<ParticlePlayground.ManipulatorObjectC>::Contains(T)
#define List_1_Contains_m25937(__this, ___item, method) (( bool (*) (List_1_t80 *, ManipulatorObjectC_t115 *, const MethodInfo*))List_1_Contains_m18229_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.ManipulatorObjectC>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m25938(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t80 *, ManipulatorObjectCU5BU5D_t6318*, int32_t, const MethodInfo*))List_1_CopyTo_m18230_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<ParticlePlayground.ManipulatorObjectC>::Find(System.Predicate`1<T>)
#define List_1_Find_m25939(__this, ___match, method) (( ManipulatorObjectC_t115 * (*) (List_1_t80 *, Predicate_1_t6321 *, const MethodInfo*))List_1_Find_m24300_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.ManipulatorObjectC>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m25940(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t6321 *, const MethodInfo*))List_1_CheckMatch_m24301_gshared)(__this /* static, unused */, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<ParticlePlayground.ManipulatorObjectC>::FindAll(System.Predicate`1<T>)
#define List_1_FindAll_m25941(__this, ___match, method) (( List_1_t80 * (*) (List_1_t80 *, Predicate_1_t6321 *, const MethodInfo*))List_1_FindAll_m24302_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<ParticlePlayground.ManipulatorObjectC>::FindAllStackBits(System.Predicate`1<T>)
#define List_1_FindAllStackBits_m25942(__this, ___match, method) (( List_1_t80 * (*) (List_1_t80 *, Predicate_1_t6321 *, const MethodInfo*))List_1_FindAllStackBits_m24303_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<ParticlePlayground.ManipulatorObjectC>::FindAllList(System.Predicate`1<T>)
#define List_1_FindAllList_m25943(__this, ___match, method) (( List_1_t80 * (*) (List_1_t80 *, Predicate_1_t6321 *, const MethodInfo*))List_1_FindAllList_m24304_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<ParticlePlayground.ManipulatorObjectC>::FindIndex(System.Predicate`1<T>)
#define List_1_FindIndex_m25944(__this, ___match, method) (( int32_t (*) (List_1_t80 *, Predicate_1_t6321 *, const MethodInfo*))List_1_FindIndex_m24305_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<ParticlePlayground.ManipulatorObjectC>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m25945(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t80 *, int32_t, int32_t, Predicate_1_t6321 *, const MethodInfo*))List_1_GetIndex_m24306_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<ParticlePlayground.ManipulatorObjectC>::GetEnumerator()
#define List_1_GetEnumerator_m25946(__this, method) (( Enumerator_t6322  (*) (List_1_t80 *, const MethodInfo*))List_1_GetEnumerator_m24307_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<ParticlePlayground.ManipulatorObjectC>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m25947(__this, ___index, ___count, method) (( List_1_t80 * (*) (List_1_t80 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m24308_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<ParticlePlayground.ManipulatorObjectC>::IndexOf(T)
#define List_1_IndexOf_m25948(__this, ___item, method) (( int32_t (*) (List_1_t80 *, ManipulatorObjectC_t115 *, const MethodInfo*))List_1_IndexOf_m18233_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.ManipulatorObjectC>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m25949(__this, ___start, ___delta, method) (( void (*) (List_1_t80 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m24309_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.ManipulatorObjectC>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m25950(__this, ___index, method) (( void (*) (List_1_t80 *, int32_t, const MethodInfo*))List_1_CheckIndex_m24310_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.ManipulatorObjectC>::Insert(System.Int32,T)
#define List_1_Insert_m25951(__this, ___index, ___item, method) (( void (*) (List_1_t80 *, int32_t, ManipulatorObjectC_t115 *, const MethodInfo*))List_1_Insert_m18234_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.ManipulatorObjectC>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m25952(__this, ___collection, method) (( void (*) (List_1_t80 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m24311_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.ManipulatorObjectC>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m25953(__this, ___index, ___collection, method) (( void (*) (List_1_t80 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m24312_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.ManipulatorObjectC>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m25954(__this, ___index, ___collection, method) (( void (*) (List_1_t80 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m24313_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.ManipulatorObjectC>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m25955(__this, ___index, ___enumerable, method) (( void (*) (List_1_t80 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m24314_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<ParticlePlayground.ManipulatorObjectC>::Remove(T)
#define List_1_Remove_m25956(__this, ___item, method) (( bool (*) (List_1_t80 *, ManipulatorObjectC_t115 *, const MethodInfo*))List_1_Remove_m18231_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<ParticlePlayground.ManipulatorObjectC>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m25957(__this, ___match, method) (( int32_t (*) (List_1_t80 *, Predicate_1_t6321 *, const MethodInfo*))List_1_RemoveAll_m24315_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.ManipulatorObjectC>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m25958(__this, ___index, method) (( void (*) (List_1_t80 *, int32_t, const MethodInfo*))List_1_RemoveAt_m18226_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.ManipulatorObjectC>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m25959(__this, ___index, ___count, method) (( void (*) (List_1_t80 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m24316_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.ManipulatorObjectC>::Reverse()
#define List_1_Reverse_m25960(__this, method) (( void (*) (List_1_t80 *, const MethodInfo*))List_1_Reverse_m24317_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.ManipulatorObjectC>::Sort()
#define List_1_Sort_m25961(__this, method) (( void (*) (List_1_t80 *, const MethodInfo*))List_1_Sort_m24318_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.ManipulatorObjectC>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m25962(__this, ___comparer, method) (( void (*) (List_1_t80 *, Object_t*, const MethodInfo*))List_1_Sort_m24319_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.ManipulatorObjectC>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m25963(__this, ___comparison, method) (( void (*) (List_1_t80 *, Comparison_1_t6323 *, const MethodInfo*))List_1_Sort_m24320_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<ParticlePlayground.ManipulatorObjectC>::ToArray()
#define List_1_ToArray_m25964(__this, method) (( ManipulatorObjectCU5BU5D_t6318* (*) (List_1_t80 *, const MethodInfo*))List_1_ToArray_m3479_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.ManipulatorObjectC>::TrimExcess()
#define List_1_TrimExcess_m25965(__this, method) (( void (*) (List_1_t80 *, const MethodInfo*))List_1_TrimExcess_m24321_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<ParticlePlayground.ManipulatorObjectC>::get_Capacity()
#define List_1_get_Capacity_m25966(__this, method) (( int32_t (*) (List_1_t80 *, const MethodInfo*))List_1_get_Capacity_m24322_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.ManipulatorObjectC>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m25967(__this, ___value, method) (( void (*) (List_1_t80 *, int32_t, const MethodInfo*))List_1_set_Capacity_m24323_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<ParticlePlayground.ManipulatorObjectC>::get_Count()
#define List_1_get_Count_m25968(__this, method) (( int32_t (*) (List_1_t80 *, const MethodInfo*))List_1_get_Count_m18212_gshared)(__this, method)
// T System.Collections.Generic.List`1<ParticlePlayground.ManipulatorObjectC>::get_Item(System.Int32)
#define List_1_get_Item_m25969(__this, ___index, method) (( ManipulatorObjectC_t115 * (*) (List_1_t80 *, int32_t, const MethodInfo*))List_1_get_Item_m18235_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.ManipulatorObjectC>::set_Item(System.Int32,T)
#define List_1_set_Item_m25970(__this, ___index, ___value, method) (( void (*) (List_1_t80 *, int32_t, ManipulatorObjectC_t115 *, const MethodInfo*))List_1_set_Item_m18236_gshared)(__this, ___index, ___value, method)

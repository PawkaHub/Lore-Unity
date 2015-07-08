#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Action>
struct List_1_t328;
// System.Object
struct Object_t;
// System.Action
struct Action_t250;
// System.Collections.Generic.IEnumerable`1<System.Action>
struct IEnumerable_1_t9988;
// System.Action[]
struct ActionU5BU5D_t6460;
// System.Collections.Generic.IEnumerator`1<System.Action>
struct IEnumerator_1_t9989;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Collections.Generic.ICollection`1<System.Action>
struct ICollection_1_t9990;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Action>
struct ReadOnlyCollection_1_t6462;
// System.Predicate`1<System.Action>
struct Predicate_1_t6463;
// System.Collections.Generic.IComparer`1<System.Action>
struct IComparer_1_t9991;
// System.Comparison`1<System.Action>
struct Comparison_1_t6464;
// System.Collections.Generic.List`1/Enumerator<System.Action>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_4.h"

// System.Void System.Collections.Generic.List`1<System.Action>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_genMethodDeclarations.h"
#define List_1__ctor_m3208(__this, method) (( void (*) (List_1_t328 *, const MethodInfo*))List_1__ctor_m84_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Action>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m28118(__this, ___collection, method) (( void (*) (List_1_t328 *, Object_t*, const MethodInfo*))List_1__ctor_m3480_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Action>::.ctor(System.Int32)
#define List_1__ctor_m28119(__this, ___capacity, method) (( void (*) (List_1_t328 *, int32_t, const MethodInfo*))List_1__ctor_m24292_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Action>::.ctor(T[],System.Int32)
#define List_1__ctor_m28120(__this, ___data, ___size, method) (( void (*) (List_1_t328 *, ActionU5BU5D_t6460*, int32_t, const MethodInfo*))List_1__ctor_m24293_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Action>::.cctor()
#define List_1__cctor_m28121(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m24294_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Action>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m28122(__this, method) (( Object_t* (*) (List_1_t328 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m18232_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Action>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m28123(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t328 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m18215_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Action>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m28124(__this, method) (( Object_t * (*) (List_1_t328 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m18211_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Action>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m28125(__this, ___item, method) (( int32_t (*) (List_1_t328 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m18220_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Action>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m28126(__this, ___item, method) (( bool (*) (List_1_t328 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m18222_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Action>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m28127(__this, ___item, method) (( int32_t (*) (List_1_t328 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m18223_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Action>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m28128(__this, ___index, ___item, method) (( void (*) (List_1_t328 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m18224_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Action>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m28129(__this, ___item, method) (( void (*) (List_1_t328 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m18225_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Action>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m28130(__this, method) (( bool (*) (List_1_t328 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m18227_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Action>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m28131(__this, method) (( bool (*) (List_1_t328 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m18213_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Action>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m28132(__this, method) (( Object_t * (*) (List_1_t328 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m18214_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Action>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m28133(__this, method) (( bool (*) (List_1_t328 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m18216_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Action>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m28134(__this, method) (( bool (*) (List_1_t328 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m18217_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Action>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m28135(__this, ___index, method) (( Object_t * (*) (List_1_t328 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m18218_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Action>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m28136(__this, ___index, ___value, method) (( void (*) (List_1_t328 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m18219_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Action>::Add(T)
#define List_1_Add_m28137(__this, ___item, method) (( void (*) (List_1_t328 *, Action_t250 *, const MethodInfo*))List_1_Add_m18228_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Action>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m28138(__this, ___newCount, method) (( void (*) (List_1_t328 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m24295_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Action>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m28139(__this, ___idx, ___count, method) (( void (*) (List_1_t328 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m24296_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Action>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m28140(__this, ___collection, method) (( void (*) (List_1_t328 *, Object_t*, const MethodInfo*))List_1_AddCollection_m24297_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Action>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m28141(__this, ___enumerable, method) (( void (*) (List_1_t328 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m24298_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Action>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m3224(__this, ___collection, method) (( void (*) (List_1_t328 *, Object_t*, const MethodInfo*))List_1_AddRange_m87_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Action>::AsReadOnly()
#define List_1_AsReadOnly_m28142(__this, method) (( ReadOnlyCollection_1_t6462 * (*) (List_1_t328 *, const MethodInfo*))List_1_AsReadOnly_m24299_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Action>::Clear()
#define List_1_Clear_m28143(__this, method) (( void (*) (List_1_t328 *, const MethodInfo*))List_1_Clear_m18221_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Action>::Contains(T)
#define List_1_Contains_m28144(__this, ___item, method) (( bool (*) (List_1_t328 *, Action_t250 *, const MethodInfo*))List_1_Contains_m18229_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Action>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m28145(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t328 *, ActionU5BU5D_t6460*, int32_t, const MethodInfo*))List_1_CopyTo_m18230_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Action>::Find(System.Predicate`1<T>)
#define List_1_Find_m28146(__this, ___match, method) (( Action_t250 * (*) (List_1_t328 *, Predicate_1_t6463 *, const MethodInfo*))List_1_Find_m24300_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Action>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m28147(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t6463 *, const MethodInfo*))List_1_CheckMatch_m24301_gshared)(__this /* static, unused */, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Action>::FindAll(System.Predicate`1<T>)
#define List_1_FindAll_m28148(__this, ___match, method) (( List_1_t328 * (*) (List_1_t328 *, Predicate_1_t6463 *, const MethodInfo*))List_1_FindAll_m24302_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Action>::FindAllStackBits(System.Predicate`1<T>)
#define List_1_FindAllStackBits_m28149(__this, ___match, method) (( List_1_t328 * (*) (List_1_t328 *, Predicate_1_t6463 *, const MethodInfo*))List_1_FindAllStackBits_m24303_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Action>::FindAllList(System.Predicate`1<T>)
#define List_1_FindAllList_m28150(__this, ___match, method) (( List_1_t328 * (*) (List_1_t328 *, Predicate_1_t6463 *, const MethodInfo*))List_1_FindAllList_m24304_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Action>::FindIndex(System.Predicate`1<T>)
#define List_1_FindIndex_m28151(__this, ___match, method) (( int32_t (*) (List_1_t328 *, Predicate_1_t6463 *, const MethodInfo*))List_1_FindIndex_m24305_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Action>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m28152(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t328 *, int32_t, int32_t, Predicate_1_t6463 *, const MethodInfo*))List_1_GetIndex_m24306_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Action>::GetEnumerator()
#define List_1_GetEnumerator_m3225(__this, method) (( Enumerator_t722  (*) (List_1_t328 *, const MethodInfo*))List_1_GetEnumerator_m24307_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Action>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m28153(__this, ___index, ___count, method) (( List_1_t328 * (*) (List_1_t328 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m24308_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Action>::IndexOf(T)
#define List_1_IndexOf_m28154(__this, ___item, method) (( int32_t (*) (List_1_t328 *, Action_t250 *, const MethodInfo*))List_1_IndexOf_m18233_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Action>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m28155(__this, ___start, ___delta, method) (( void (*) (List_1_t328 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m24309_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Action>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m28156(__this, ___index, method) (( void (*) (List_1_t328 *, int32_t, const MethodInfo*))List_1_CheckIndex_m24310_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Action>::Insert(System.Int32,T)
#define List_1_Insert_m28157(__this, ___index, ___item, method) (( void (*) (List_1_t328 *, int32_t, Action_t250 *, const MethodInfo*))List_1_Insert_m18234_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Action>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m28158(__this, ___collection, method) (( void (*) (List_1_t328 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m24311_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Action>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m28159(__this, ___index, ___collection, method) (( void (*) (List_1_t328 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m24312_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Action>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m28160(__this, ___index, ___collection, method) (( void (*) (List_1_t328 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m24313_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Action>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m28161(__this, ___index, ___enumerable, method) (( void (*) (List_1_t328 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m24314_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Action>::Remove(T)
#define List_1_Remove_m28162(__this, ___item, method) (( bool (*) (List_1_t328 *, Action_t250 *, const MethodInfo*))List_1_Remove_m18231_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Action>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m28163(__this, ___match, method) (( int32_t (*) (List_1_t328 *, Predicate_1_t6463 *, const MethodInfo*))List_1_RemoveAll_m24315_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Action>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m28164(__this, ___index, method) (( void (*) (List_1_t328 *, int32_t, const MethodInfo*))List_1_RemoveAt_m18226_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Action>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m28165(__this, ___index, ___count, method) (( void (*) (List_1_t328 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m24316_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Action>::Reverse()
#define List_1_Reverse_m28166(__this, method) (( void (*) (List_1_t328 *, const MethodInfo*))List_1_Reverse_m24317_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Action>::Sort()
#define List_1_Sort_m28167(__this, method) (( void (*) (List_1_t328 *, const MethodInfo*))List_1_Sort_m24318_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Action>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m28168(__this, ___comparer, method) (( void (*) (List_1_t328 *, Object_t*, const MethodInfo*))List_1_Sort_m24319_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Action>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m28169(__this, ___comparison, method) (( void (*) (List_1_t328 *, Comparison_1_t6464 *, const MethodInfo*))List_1_Sort_m24320_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Action>::ToArray()
#define List_1_ToArray_m28170(__this, method) (( ActionU5BU5D_t6460* (*) (List_1_t328 *, const MethodInfo*))List_1_ToArray_m3479_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Action>::TrimExcess()
#define List_1_TrimExcess_m28171(__this, method) (( void (*) (List_1_t328 *, const MethodInfo*))List_1_TrimExcess_m24321_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Action>::get_Capacity()
#define List_1_get_Capacity_m28172(__this, method) (( int32_t (*) (List_1_t328 *, const MethodInfo*))List_1_get_Capacity_m24322_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Action>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m28173(__this, ___value, method) (( void (*) (List_1_t328 *, int32_t, const MethodInfo*))List_1_set_Capacity_m24323_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Action>::get_Count()
#define List_1_get_Count_m28174(__this, method) (( int32_t (*) (List_1_t328 *, const MethodInfo*))List_1_get_Count_m18212_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Action>::get_Item(System.Int32)
#define List_1_get_Item_m28175(__this, ___index, method) (( Action_t250 * (*) (List_1_t328 *, int32_t, const MethodInfo*))List_1_get_Item_m18235_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Action>::set_Item(System.Int32,T)
#define List_1_set_Item_m28176(__this, ___index, ___value, method) (( void (*) (List_1_t328 *, int32_t, Action_t250 *, const MethodInfo*))List_1_set_Item_m18236_gshared)(__this, ___index, ___value, method)

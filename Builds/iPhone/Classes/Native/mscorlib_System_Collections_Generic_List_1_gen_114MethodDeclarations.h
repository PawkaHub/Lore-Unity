#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>
struct List_1_t6514;
// System.Object
struct Object_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t1810;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>
struct IEnumerable_1_t10001;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>[]
struct IDictionary_2U5BU5D_t6513;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>
struct IEnumerator_1_t10002;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>
struct ICollection_1_t10003;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>
struct ReadOnlyCollection_1_t6516;
// System.Predicate`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>
struct Predicate_1_t6517;
// System.Collections.Generic.IComparer`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>
struct IComparer_1_t10004;
// System.Comparison`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>
struct Comparison_1_t6519;
// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.IDictionary`2<System.String,System.Object>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_67.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_genMethodDeclarations.h"
#define List_1__ctor_m28913(__this, method) (( void (*) (List_1_t6514 *, const MethodInfo*))List_1__ctor_m84_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m28914(__this, ___collection, method) (( void (*) (List_1_t6514 *, Object_t*, const MethodInfo*))List_1__ctor_m3480_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::.ctor(System.Int32)
#define List_1__ctor_m28915(__this, ___capacity, method) (( void (*) (List_1_t6514 *, int32_t, const MethodInfo*))List_1__ctor_m24292_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::.ctor(T[],System.Int32)
#define List_1__ctor_m28916(__this, ___data, ___size, method) (( void (*) (List_1_t6514 *, IDictionary_2U5BU5D_t6513*, int32_t, const MethodInfo*))List_1__ctor_m24293_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::.cctor()
#define List_1__cctor_m28917(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m24294_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m28918(__this, method) (( Object_t* (*) (List_1_t6514 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m18232_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m28919(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t6514 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m18215_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m28920(__this, method) (( Object_t * (*) (List_1_t6514 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m18211_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m28921(__this, ___item, method) (( int32_t (*) (List_1_t6514 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m18220_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m28922(__this, ___item, method) (( bool (*) (List_1_t6514 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m18222_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m28923(__this, ___item, method) (( int32_t (*) (List_1_t6514 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m18223_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m28924(__this, ___index, ___item, method) (( void (*) (List_1_t6514 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m18224_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m28925(__this, ___item, method) (( void (*) (List_1_t6514 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m18225_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m28926(__this, method) (( bool (*) (List_1_t6514 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m18227_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m28927(__this, method) (( bool (*) (List_1_t6514 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m18213_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m28928(__this, method) (( Object_t * (*) (List_1_t6514 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m18214_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m28929(__this, method) (( bool (*) (List_1_t6514 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m18216_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m28930(__this, method) (( bool (*) (List_1_t6514 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m18217_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m28931(__this, ___index, method) (( Object_t * (*) (List_1_t6514 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m18218_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m28932(__this, ___index, ___value, method) (( void (*) (List_1_t6514 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m18219_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::Add(T)
#define List_1_Add_m28933(__this, ___item, method) (( void (*) (List_1_t6514 *, Object_t*, const MethodInfo*))List_1_Add_m18228_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m28934(__this, ___newCount, method) (( void (*) (List_1_t6514 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m24295_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m28935(__this, ___idx, ___count, method) (( void (*) (List_1_t6514 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m24296_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m28936(__this, ___collection, method) (( void (*) (List_1_t6514 *, Object_t*, const MethodInfo*))List_1_AddCollection_m24297_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m28937(__this, ___enumerable, method) (( void (*) (List_1_t6514 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m24298_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m28938(__this, ___collection, method) (( void (*) (List_1_t6514 *, Object_t*, const MethodInfo*))List_1_AddRange_m87_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::AsReadOnly()
#define List_1_AsReadOnly_m28939(__this, method) (( ReadOnlyCollection_1_t6516 * (*) (List_1_t6514 *, const MethodInfo*))List_1_AsReadOnly_m24299_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::Clear()
#define List_1_Clear_m28940(__this, method) (( void (*) (List_1_t6514 *, const MethodInfo*))List_1_Clear_m18221_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::Contains(T)
#define List_1_Contains_m28941(__this, ___item, method) (( bool (*) (List_1_t6514 *, Object_t*, const MethodInfo*))List_1_Contains_m18229_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m28942(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t6514 *, IDictionary_2U5BU5D_t6513*, int32_t, const MethodInfo*))List_1_CopyTo_m18230_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::Find(System.Predicate`1<T>)
#define List_1_Find_m28943(__this, ___match, method) (( Object_t* (*) (List_1_t6514 *, Predicate_1_t6517 *, const MethodInfo*))List_1_Find_m24300_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m28944(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t6517 *, const MethodInfo*))List_1_CheckMatch_m24301_gshared)(__this /* static, unused */, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::FindAll(System.Predicate`1<T>)
#define List_1_FindAll_m28945(__this, ___match, method) (( List_1_t6514 * (*) (List_1_t6514 *, Predicate_1_t6517 *, const MethodInfo*))List_1_FindAll_m24302_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::FindAllStackBits(System.Predicate`1<T>)
#define List_1_FindAllStackBits_m28946(__this, ___match, method) (( List_1_t6514 * (*) (List_1_t6514 *, Predicate_1_t6517 *, const MethodInfo*))List_1_FindAllStackBits_m24303_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::FindAllList(System.Predicate`1<T>)
#define List_1_FindAllList_m28947(__this, ___match, method) (( List_1_t6514 * (*) (List_1_t6514 *, Predicate_1_t6517 *, const MethodInfo*))List_1_FindAllList_m24304_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::FindIndex(System.Predicate`1<T>)
#define List_1_FindIndex_m28948(__this, ___match, method) (( int32_t (*) (List_1_t6514 *, Predicate_1_t6517 *, const MethodInfo*))List_1_FindIndex_m24305_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m28949(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t6514 *, int32_t, int32_t, Predicate_1_t6517 *, const MethodInfo*))List_1_GetIndex_m24306_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::GetEnumerator()
#define List_1_GetEnumerator_m28950(__this, method) (( Enumerator_t6518  (*) (List_1_t6514 *, const MethodInfo*))List_1_GetEnumerator_m24307_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m28951(__this, ___index, ___count, method) (( List_1_t6514 * (*) (List_1_t6514 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m24308_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::IndexOf(T)
#define List_1_IndexOf_m28952(__this, ___item, method) (( int32_t (*) (List_1_t6514 *, Object_t*, const MethodInfo*))List_1_IndexOf_m18233_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m28953(__this, ___start, ___delta, method) (( void (*) (List_1_t6514 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m24309_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m28954(__this, ___index, method) (( void (*) (List_1_t6514 *, int32_t, const MethodInfo*))List_1_CheckIndex_m24310_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::Insert(System.Int32,T)
#define List_1_Insert_m28955(__this, ___index, ___item, method) (( void (*) (List_1_t6514 *, int32_t, Object_t*, const MethodInfo*))List_1_Insert_m18234_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m28956(__this, ___collection, method) (( void (*) (List_1_t6514 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m24311_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m28957(__this, ___index, ___collection, method) (( void (*) (List_1_t6514 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m24312_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m28958(__this, ___index, ___collection, method) (( void (*) (List_1_t6514 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m24313_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m28959(__this, ___index, ___enumerable, method) (( void (*) (List_1_t6514 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m24314_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::Remove(T)
#define List_1_Remove_m28960(__this, ___item, method) (( bool (*) (List_1_t6514 *, Object_t*, const MethodInfo*))List_1_Remove_m18231_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m28961(__this, ___match, method) (( int32_t (*) (List_1_t6514 *, Predicate_1_t6517 *, const MethodInfo*))List_1_RemoveAll_m24315_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m28962(__this, ___index, method) (( void (*) (List_1_t6514 *, int32_t, const MethodInfo*))List_1_RemoveAt_m18226_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m28963(__this, ___index, ___count, method) (( void (*) (List_1_t6514 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m24316_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::Reverse()
#define List_1_Reverse_m28964(__this, method) (( void (*) (List_1_t6514 *, const MethodInfo*))List_1_Reverse_m24317_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::Sort()
#define List_1_Sort_m28965(__this, method) (( void (*) (List_1_t6514 *, const MethodInfo*))List_1_Sort_m24318_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m28966(__this, ___comparer, method) (( void (*) (List_1_t6514 *, Object_t*, const MethodInfo*))List_1_Sort_m24319_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m28967(__this, ___comparison, method) (( void (*) (List_1_t6514 *, Comparison_1_t6519 *, const MethodInfo*))List_1_Sort_m24320_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::ToArray()
#define List_1_ToArray_m28968(__this, method) (( IDictionary_2U5BU5D_t6513* (*) (List_1_t6514 *, const MethodInfo*))List_1_ToArray_m3479_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::TrimExcess()
#define List_1_TrimExcess_m28969(__this, method) (( void (*) (List_1_t6514 *, const MethodInfo*))List_1_TrimExcess_m24321_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::get_Capacity()
#define List_1_get_Capacity_m28970(__this, method) (( int32_t (*) (List_1_t6514 *, const MethodInfo*))List_1_get_Capacity_m24322_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m28971(__this, ___value, method) (( void (*) (List_1_t6514 *, int32_t, const MethodInfo*))List_1_set_Capacity_m24323_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::get_Count()
#define List_1_get_Count_m28972(__this, method) (( int32_t (*) (List_1_t6514 *, const MethodInfo*))List_1_get_Count_m18212_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::get_Item(System.Int32)
#define List_1_get_Item_m28973(__this, ___index, method) (( Object_t* (*) (List_1_t6514 *, int32_t, const MethodInfo*))List_1_get_Item_m18235_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::set_Item(System.Int32,T)
#define List_1_set_Item_m28974(__this, ___index, ___value, method) (( void (*) (List_1_t6514 *, int32_t, Object_t*, const MethodInfo*))List_1_set_Item_m18236_gshared)(__this, ___index, ___value, method)

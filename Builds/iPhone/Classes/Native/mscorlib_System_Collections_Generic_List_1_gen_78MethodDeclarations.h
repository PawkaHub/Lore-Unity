#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>
struct List_1_t2017;
// System.Object
struct Object_t;
// System.Tuple`2<System.Type,System.Type>
struct Tuple_2_t2016;
// System.Collections.Generic.IEnumerable`1<System.Tuple`2<System.Type,System.Type>>
struct IEnumerable_1_t2018;
// System.Tuple`2<System.Type,System.Type>[]
struct Tuple_2U5BU5D_t7199;
// System.Collections.Generic.IEnumerator`1<System.Tuple`2<System.Type,System.Type>>
struct IEnumerator_1_t10368;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Collections.Generic.ICollection`1<System.Tuple`2<System.Type,System.Type>>
struct ICollection_1_t10364;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Tuple`2<System.Type,System.Type>>
struct ReadOnlyCollection_1_t7208;
// System.Predicate`1<System.Tuple`2<System.Type,System.Type>>
struct Predicate_1_t7209;
// System.Collections.Generic.IComparer`1<System.Tuple`2<System.Type,System.Type>>
struct IComparer_1_t10372;
// System.Comparison`1<System.Tuple`2<System.Type,System.Type>>
struct Comparison_1_t7210;
// System.Collections.Generic.List`1/Enumerator<System.Tuple`2<System.Type,System.Type>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_30.h"

// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_genMethodDeclarations.h"
#define List_1__ctor_m39609(__this, method) (( void (*) (List_1_t2017 *, const MethodInfo*))List_1__ctor_m84_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m39610(__this, ___collection, method) (( void (*) (List_1_t2017 *, Object_t*, const MethodInfo*))List_1__ctor_m3480_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::.ctor(System.Int32)
#define List_1__ctor_m39611(__this, ___capacity, method) (( void (*) (List_1_t2017 *, int32_t, const MethodInfo*))List_1__ctor_m24292_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::.ctor(T[],System.Int32)
#define List_1__ctor_m39612(__this, ___data, ___size, method) (( void (*) (List_1_t2017 *, Tuple_2U5BU5D_t7199*, int32_t, const MethodInfo*))List_1__ctor_m24293_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::.cctor()
#define List_1__cctor_m39613(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m24294_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m39614(__this, method) (( Object_t* (*) (List_1_t2017 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m18232_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m39615(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t2017 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m18215_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m39616(__this, method) (( Object_t * (*) (List_1_t2017 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m18211_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m39617(__this, ___item, method) (( int32_t (*) (List_1_t2017 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m18220_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m39618(__this, ___item, method) (( bool (*) (List_1_t2017 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m18222_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m39619(__this, ___item, method) (( int32_t (*) (List_1_t2017 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m18223_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m39620(__this, ___index, ___item, method) (( void (*) (List_1_t2017 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m18224_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m39621(__this, ___item, method) (( void (*) (List_1_t2017 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m18225_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m39622(__this, method) (( bool (*) (List_1_t2017 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m18227_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m39623(__this, method) (( bool (*) (List_1_t2017 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m18213_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m39624(__this, method) (( Object_t * (*) (List_1_t2017 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m18214_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m39625(__this, method) (( bool (*) (List_1_t2017 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m18216_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m39626(__this, method) (( bool (*) (List_1_t2017 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m18217_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m39627(__this, ___index, method) (( Object_t * (*) (List_1_t2017 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m18218_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m39628(__this, ___index, ___value, method) (( void (*) (List_1_t2017 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m18219_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::Add(T)
#define List_1_Add_m39629(__this, ___item, method) (( void (*) (List_1_t2017 *, Tuple_2_t2016 *, const MethodInfo*))List_1_Add_m18228_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m39630(__this, ___newCount, method) (( void (*) (List_1_t2017 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m24295_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m39631(__this, ___idx, ___count, method) (( void (*) (List_1_t2017 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m24296_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m39632(__this, ___collection, method) (( void (*) (List_1_t2017 *, Object_t*, const MethodInfo*))List_1_AddCollection_m24297_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m39633(__this, ___enumerable, method) (( void (*) (List_1_t2017 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m24298_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m39634(__this, ___collection, method) (( void (*) (List_1_t2017 *, Object_t*, const MethodInfo*))List_1_AddRange_m87_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::AsReadOnly()
#define List_1_AsReadOnly_m39635(__this, method) (( ReadOnlyCollection_1_t7208 * (*) (List_1_t2017 *, const MethodInfo*))List_1_AsReadOnly_m24299_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::Clear()
#define List_1_Clear_m39636(__this, method) (( void (*) (List_1_t2017 *, const MethodInfo*))List_1_Clear_m18221_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::Contains(T)
#define List_1_Contains_m39637(__this, ___item, method) (( bool (*) (List_1_t2017 *, Tuple_2_t2016 *, const MethodInfo*))List_1_Contains_m18229_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m39638(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t2017 *, Tuple_2U5BU5D_t7199*, int32_t, const MethodInfo*))List_1_CopyTo_m18230_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::Find(System.Predicate`1<T>)
#define List_1_Find_m39639(__this, ___match, method) (( Tuple_2_t2016 * (*) (List_1_t2017 *, Predicate_1_t7209 *, const MethodInfo*))List_1_Find_m24300_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m39640(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t7209 *, const MethodInfo*))List_1_CheckMatch_m24301_gshared)(__this /* static, unused */, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::FindAll(System.Predicate`1<T>)
#define List_1_FindAll_m39641(__this, ___match, method) (( List_1_t2017 * (*) (List_1_t2017 *, Predicate_1_t7209 *, const MethodInfo*))List_1_FindAll_m24302_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::FindAllStackBits(System.Predicate`1<T>)
#define List_1_FindAllStackBits_m39642(__this, ___match, method) (( List_1_t2017 * (*) (List_1_t2017 *, Predicate_1_t7209 *, const MethodInfo*))List_1_FindAllStackBits_m24303_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::FindAllList(System.Predicate`1<T>)
#define List_1_FindAllList_m39643(__this, ___match, method) (( List_1_t2017 * (*) (List_1_t2017 *, Predicate_1_t7209 *, const MethodInfo*))List_1_FindAllList_m24304_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::FindIndex(System.Predicate`1<T>)
#define List_1_FindIndex_m39644(__this, ___match, method) (( int32_t (*) (List_1_t2017 *, Predicate_1_t7209 *, const MethodInfo*))List_1_FindIndex_m24305_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m39645(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t2017 *, int32_t, int32_t, Predicate_1_t7209 *, const MethodInfo*))List_1_GetIndex_m24306_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::GetEnumerator()
#define List_1_GetEnumerator_m8966(__this, method) (( Enumerator_t2020  (*) (List_1_t2017 *, const MethodInfo*))List_1_GetEnumerator_m24307_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m39646(__this, ___index, ___count, method) (( List_1_t2017 * (*) (List_1_t2017 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m24308_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::IndexOf(T)
#define List_1_IndexOf_m39647(__this, ___item, method) (( int32_t (*) (List_1_t2017 *, Tuple_2_t2016 *, const MethodInfo*))List_1_IndexOf_m18233_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m39648(__this, ___start, ___delta, method) (( void (*) (List_1_t2017 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m24309_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m39649(__this, ___index, method) (( void (*) (List_1_t2017 *, int32_t, const MethodInfo*))List_1_CheckIndex_m24310_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::Insert(System.Int32,T)
#define List_1_Insert_m39650(__this, ___index, ___item, method) (( void (*) (List_1_t2017 *, int32_t, Tuple_2_t2016 *, const MethodInfo*))List_1_Insert_m18234_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m39651(__this, ___collection, method) (( void (*) (List_1_t2017 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m24311_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m39652(__this, ___index, ___collection, method) (( void (*) (List_1_t2017 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m24312_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m39653(__this, ___index, ___collection, method) (( void (*) (List_1_t2017 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m24313_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m39654(__this, ___index, ___enumerable, method) (( void (*) (List_1_t2017 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m24314_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::Remove(T)
#define List_1_Remove_m39655(__this, ___item, method) (( bool (*) (List_1_t2017 *, Tuple_2_t2016 *, const MethodInfo*))List_1_Remove_m18231_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m39656(__this, ___match, method) (( int32_t (*) (List_1_t2017 *, Predicate_1_t7209 *, const MethodInfo*))List_1_RemoveAll_m24315_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m39657(__this, ___index, method) (( void (*) (List_1_t2017 *, int32_t, const MethodInfo*))List_1_RemoveAt_m18226_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m39658(__this, ___index, ___count, method) (( void (*) (List_1_t2017 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m24316_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::Reverse()
#define List_1_Reverse_m39659(__this, method) (( void (*) (List_1_t2017 *, const MethodInfo*))List_1_Reverse_m24317_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::Sort()
#define List_1_Sort_m39660(__this, method) (( void (*) (List_1_t2017 *, const MethodInfo*))List_1_Sort_m24318_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m39661(__this, ___comparer, method) (( void (*) (List_1_t2017 *, Object_t*, const MethodInfo*))List_1_Sort_m24319_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m39662(__this, ___comparison, method) (( void (*) (List_1_t2017 *, Comparison_1_t7210 *, const MethodInfo*))List_1_Sort_m24320_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::ToArray()
#define List_1_ToArray_m39663(__this, method) (( Tuple_2U5BU5D_t7199* (*) (List_1_t2017 *, const MethodInfo*))List_1_ToArray_m3479_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::TrimExcess()
#define List_1_TrimExcess_m39664(__this, method) (( void (*) (List_1_t2017 *, const MethodInfo*))List_1_TrimExcess_m24321_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::get_Capacity()
#define List_1_get_Capacity_m39665(__this, method) (( int32_t (*) (List_1_t2017 *, const MethodInfo*))List_1_get_Capacity_m24322_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m39666(__this, ___value, method) (( void (*) (List_1_t2017 *, int32_t, const MethodInfo*))List_1_set_Capacity_m24323_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::get_Count()
#define List_1_get_Count_m39667(__this, method) (( int32_t (*) (List_1_t2017 *, const MethodInfo*))List_1_get_Count_m18212_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::get_Item(System.Int32)
#define List_1_get_Item_m39668(__this, ___index, method) (( Tuple_2_t2016 * (*) (List_1_t2017 *, int32_t, const MethodInfo*))List_1_get_Item_m18235_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Type,System.Type>>::set_Item(System.Int32,T)
#define List_1_set_Item_m39669(__this, ___index, ___value, method) (( void (*) (List_1_t2017 *, int32_t, Tuple_2_t2016 *, const MethodInfo*))List_1_set_Item_m18236_gshared)(__this, ___index, ___value, method)

#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.String[]>
struct List_1_t2666;
// System.Object
struct Object_t;
// System.String[]
struct StringU5BU5D_t20;
// System.Collections.Generic.IEnumerable`1<System.String[]>
struct IEnumerable_1_t7013;
// System.String[][]
struct StringU5BU5DU5BU5D_t6010;
// System.Collections.Generic.IEnumerator`1<System.String[]>
struct IEnumerator_1_t7014;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Collections.Generic.ICollection`1<System.String[]>
struct ICollection_1_t7015;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.String[]>
struct ReadOnlyCollection_1_t6012;
// System.Predicate`1<System.String[]>
struct Predicate_1_t6013;
// System.Collections.Generic.IComparer`1<System.String[]>
struct IComparer_1_t7016;
// System.Comparison`1<System.String[]>
struct Comparison_1_t6015;
// System.Collections.Generic.List`1/Enumerator<System.String[]>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_98.h"

// System.Void System.Collections.Generic.List`1<System.String[]>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_genMethodDeclarations.h"
#define List_1__ctor_m12162(__this, method) (( void (*) (List_1_t2666 *, const MethodInfo*))List_1__ctor_m84_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.String[]>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m39613(__this, ___collection, method) (( void (*) (List_1_t2666 *, Object_t*, const MethodInfo*))List_1__ctor_m3166_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.String[]>::.ctor(System.Int32)
#define List_1__ctor_m39614(__this, ___capacity, method) (( void (*) (List_1_t2666 *, int32_t, const MethodInfo*))List_1__ctor_m22534_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.String[]>::.ctor(T[],System.Int32)
#define List_1__ctor_m39615(__this, ___data, ___size, method) (( void (*) (List_1_t2666 *, StringU5BU5DU5BU5D_t6010*, int32_t, const MethodInfo*))List_1__ctor_m22535_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.String[]>::.cctor()
#define List_1__cctor_m39616(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m22536_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.String[]>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m39617(__this, method) (( Object_t* (*) (List_1_t2666 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m13947_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.String[]>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m39618(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t2666 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m13930_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.String[]>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m39619(__this, method) (( Object_t * (*) (List_1_t2666 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m13926_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.String[]>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m39620(__this, ___item, method) (( int32_t (*) (List_1_t2666 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m13935_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.String[]>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m39621(__this, ___item, method) (( bool (*) (List_1_t2666 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m13937_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.String[]>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m39622(__this, ___item, method) (( int32_t (*) (List_1_t2666 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m13938_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.String[]>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m39623(__this, ___index, ___item, method) (( void (*) (List_1_t2666 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m13939_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.String[]>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m39624(__this, ___item, method) (( void (*) (List_1_t2666 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m13940_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.String[]>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m39625(__this, method) (( bool (*) (List_1_t2666 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m13942_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.String[]>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m39626(__this, method) (( bool (*) (List_1_t2666 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m13928_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.String[]>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m39627(__this, method) (( Object_t * (*) (List_1_t2666 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m13929_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.String[]>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m39628(__this, method) (( bool (*) (List_1_t2666 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m13931_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.String[]>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m39629(__this, method) (( bool (*) (List_1_t2666 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m13932_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.String[]>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m39630(__this, ___index, method) (( Object_t * (*) (List_1_t2666 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m13933_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.String[]>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m39631(__this, ___index, ___value, method) (( void (*) (List_1_t2666 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m13934_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.String[]>::Add(T)
#define List_1_Add_m39632(__this, ___item, method) (( void (*) (List_1_t2666 *, StringU5BU5D_t20*, const MethodInfo*))List_1_Add_m13943_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.String[]>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m39633(__this, ___newCount, method) (( void (*) (List_1_t2666 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m22537_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.String[]>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m39634(__this, ___idx, ___count, method) (( void (*) (List_1_t2666 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m22538_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.String[]>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m39635(__this, ___collection, method) (( void (*) (List_1_t2666 *, Object_t*, const MethodInfo*))List_1_AddCollection_m22539_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.String[]>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m39636(__this, ___enumerable, method) (( void (*) (List_1_t2666 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m22540_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.String[]>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m39637(__this, ___collection, method) (( void (*) (List_1_t2666 *, Object_t*, const MethodInfo*))List_1_AddRange_m87_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.String[]>::AsReadOnly()
#define List_1_AsReadOnly_m39638(__this, method) (( ReadOnlyCollection_1_t6012 * (*) (List_1_t2666 *, const MethodInfo*))List_1_AsReadOnly_m22541_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.String[]>::Clear()
#define List_1_Clear_m39639(__this, method) (( void (*) (List_1_t2666 *, const MethodInfo*))List_1_Clear_m13936_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.String[]>::Contains(T)
#define List_1_Contains_m39640(__this, ___item, method) (( bool (*) (List_1_t2666 *, StringU5BU5D_t20*, const MethodInfo*))List_1_Contains_m13944_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.String[]>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m39641(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t2666 *, StringU5BU5DU5BU5D_t6010*, int32_t, const MethodInfo*))List_1_CopyTo_m13945_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.String[]>::Find(System.Predicate`1<T>)
#define List_1_Find_m39642(__this, ___match, method) (( StringU5BU5D_t20* (*) (List_1_t2666 *, Predicate_1_t6013 *, const MethodInfo*))List_1_Find_m22542_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.String[]>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m39643(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t6013 *, const MethodInfo*))List_1_CheckMatch_m22543_gshared)(__this /* static, unused */, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.String[]>::FindAll(System.Predicate`1<T>)
#define List_1_FindAll_m39644(__this, ___match, method) (( List_1_t2666 * (*) (List_1_t2666 *, Predicate_1_t6013 *, const MethodInfo*))List_1_FindAll_m22544_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.String[]>::FindAllStackBits(System.Predicate`1<T>)
#define List_1_FindAllStackBits_m39645(__this, ___match, method) (( List_1_t2666 * (*) (List_1_t2666 *, Predicate_1_t6013 *, const MethodInfo*))List_1_FindAllStackBits_m22545_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.String[]>::FindAllList(System.Predicate`1<T>)
#define List_1_FindAllList_m39646(__this, ___match, method) (( List_1_t2666 * (*) (List_1_t2666 *, Predicate_1_t6013 *, const MethodInfo*))List_1_FindAllList_m22546_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.String[]>::FindIndex(System.Predicate`1<T>)
#define List_1_FindIndex_m39647(__this, ___match, method) (( int32_t (*) (List_1_t2666 *, Predicate_1_t6013 *, const MethodInfo*))List_1_FindIndex_m22547_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.String[]>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m39648(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t2666 *, int32_t, int32_t, Predicate_1_t6013 *, const MethodInfo*))List_1_GetIndex_m22548_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.String[]>::GetEnumerator()
#define List_1_GetEnumerator_m39649(__this, method) (( Enumerator_t6014  (*) (List_1_t2666 *, const MethodInfo*))List_1_GetEnumerator_m22549_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.String[]>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m39650(__this, ___index, ___count, method) (( List_1_t2666 * (*) (List_1_t2666 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m22550_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.String[]>::IndexOf(T)
#define List_1_IndexOf_m39651(__this, ___item, method) (( int32_t (*) (List_1_t2666 *, StringU5BU5D_t20*, const MethodInfo*))List_1_IndexOf_m13948_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.String[]>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m39652(__this, ___start, ___delta, method) (( void (*) (List_1_t2666 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m22551_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.String[]>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m39653(__this, ___index, method) (( void (*) (List_1_t2666 *, int32_t, const MethodInfo*))List_1_CheckIndex_m22552_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.String[]>::Insert(System.Int32,T)
#define List_1_Insert_m39654(__this, ___index, ___item, method) (( void (*) (List_1_t2666 *, int32_t, StringU5BU5D_t20*, const MethodInfo*))List_1_Insert_m13949_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.String[]>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m39655(__this, ___collection, method) (( void (*) (List_1_t2666 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m22553_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.String[]>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m39656(__this, ___index, ___collection, method) (( void (*) (List_1_t2666 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m22554_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.String[]>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m39657(__this, ___index, ___collection, method) (( void (*) (List_1_t2666 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m22555_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.String[]>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m39658(__this, ___index, ___enumerable, method) (( void (*) (List_1_t2666 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m22556_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.String[]>::Remove(T)
#define List_1_Remove_m39659(__this, ___item, method) (( bool (*) (List_1_t2666 *, StringU5BU5D_t20*, const MethodInfo*))List_1_Remove_m13946_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.String[]>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m39660(__this, ___match, method) (( int32_t (*) (List_1_t2666 *, Predicate_1_t6013 *, const MethodInfo*))List_1_RemoveAll_m22557_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.String[]>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m39661(__this, ___index, method) (( void (*) (List_1_t2666 *, int32_t, const MethodInfo*))List_1_RemoveAt_m13941_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.String[]>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m39662(__this, ___index, ___count, method) (( void (*) (List_1_t2666 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m22558_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.String[]>::Reverse()
#define List_1_Reverse_m39663(__this, method) (( void (*) (List_1_t2666 *, const MethodInfo*))List_1_Reverse_m22559_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.String[]>::Sort()
#define List_1_Sort_m39664(__this, method) (( void (*) (List_1_t2666 *, const MethodInfo*))List_1_Sort_m22560_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.String[]>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m39665(__this, ___comparer, method) (( void (*) (List_1_t2666 *, Object_t*, const MethodInfo*))List_1_Sort_m22561_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.String[]>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m39666(__this, ___comparison, method) (( void (*) (List_1_t2666 *, Comparison_1_t6015 *, const MethodInfo*))List_1_Sort_m22562_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.String[]>::ToArray()
#define List_1_ToArray_m39667(__this, method) (( StringU5BU5DU5BU5D_t6010* (*) (List_1_t2666 *, const MethodInfo*))List_1_ToArray_m3165_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.String[]>::TrimExcess()
#define List_1_TrimExcess_m39668(__this, method) (( void (*) (List_1_t2666 *, const MethodInfo*))List_1_TrimExcess_m22563_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.String[]>::get_Capacity()
#define List_1_get_Capacity_m39669(__this, method) (( int32_t (*) (List_1_t2666 *, const MethodInfo*))List_1_get_Capacity_m22564_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.String[]>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m39670(__this, ___value, method) (( void (*) (List_1_t2666 *, int32_t, const MethodInfo*))List_1_set_Capacity_m22565_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.String[]>::get_Count()
#define List_1_get_Count_m39671(__this, method) (( int32_t (*) (List_1_t2666 *, const MethodInfo*))List_1_get_Count_m13927_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.String[]>::get_Item(System.Int32)
#define List_1_get_Item_m39672(__this, ___index, method) (( StringU5BU5D_t20* (*) (List_1_t2666 *, int32_t, const MethodInfo*))List_1_get_Item_m13950_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.String[]>::set_Item(System.Int32,T)
#define List_1_set_Item_m39673(__this, ___index, ___value, method) (( void (*) (List_1_t2666 *, int32_t, StringU5BU5D_t20*, const MethodInfo*))List_1_set_Item_m13951_gshared)(__this, ___index, ___value, method)

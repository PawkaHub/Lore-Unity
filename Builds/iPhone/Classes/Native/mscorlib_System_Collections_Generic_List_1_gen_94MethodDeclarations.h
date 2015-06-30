#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Byte[]>
struct List_1_t2768;
// System.Object
struct Object_t;
// System.Byte[]
struct ByteU5BU5D_t25;
// System.Collections.Generic.IEnumerable`1<System.Byte[]>
struct IEnumerable_1_t7062;
// System.Byte[][]
struct ByteU5BU5DU5BU5D_t1351;
// System.Collections.Generic.IEnumerator`1<System.Byte[]>
struct IEnumerator_1_t7063;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Collections.Generic.ICollection`1<System.Byte[]>
struct ICollection_1_t7064;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Byte[]>
struct ReadOnlyCollection_1_t6098;
// System.Predicate`1<System.Byte[]>
struct Predicate_1_t6099;
// System.Collections.Generic.IComparer`1<System.Byte[]>
struct IComparer_1_t7065;
// System.Comparison`1<System.Byte[]>
struct Comparison_1_t6101;
// System.Collections.Generic.List`1/Enumerator<System.Byte[]>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_101.h"

// System.Void System.Collections.Generic.List`1<System.Byte[]>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_genMethodDeclarations.h"
#define List_1__ctor_m13713(__this, method) (( void (*) (List_1_t2768 *, const MethodInfo*))List_1__ctor_m84_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m40949(__this, ___collection, method) (( void (*) (List_1_t2768 *, Object_t*, const MethodInfo*))List_1__ctor_m3166_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::.ctor(System.Int32)
#define List_1__ctor_m40950(__this, ___capacity, method) (( void (*) (List_1_t2768 *, int32_t, const MethodInfo*))List_1__ctor_m22534_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::.ctor(T[],System.Int32)
#define List_1__ctor_m40951(__this, ___data, ___size, method) (( void (*) (List_1_t2768 *, ByteU5BU5DU5BU5D_t1351*, int32_t, const MethodInfo*))List_1__ctor_m22535_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::.cctor()
#define List_1__cctor_m40952(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m22536_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Byte[]>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m40953(__this, method) (( Object_t* (*) (List_1_t2768 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m13947_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m40954(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t2768 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m13930_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Byte[]>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m40955(__this, method) (( Object_t * (*) (List_1_t2768 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m13926_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Byte[]>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m40956(__this, ___item, method) (( int32_t (*) (List_1_t2768 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m13935_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Byte[]>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m40957(__this, ___item, method) (( bool (*) (List_1_t2768 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m13937_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Byte[]>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m40958(__this, ___item, method) (( int32_t (*) (List_1_t2768 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m13938_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m40959(__this, ___index, ___item, method) (( void (*) (List_1_t2768 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m13939_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m40960(__this, ___item, method) (( void (*) (List_1_t2768 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m13940_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Byte[]>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m40961(__this, method) (( bool (*) (List_1_t2768 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m13942_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Byte[]>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m40962(__this, method) (( bool (*) (List_1_t2768 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m13928_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Byte[]>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m40963(__this, method) (( Object_t * (*) (List_1_t2768 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m13929_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Byte[]>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m40964(__this, method) (( bool (*) (List_1_t2768 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m13931_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Byte[]>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m40965(__this, method) (( bool (*) (List_1_t2768 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m13932_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Byte[]>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m40966(__this, ___index, method) (( Object_t * (*) (List_1_t2768 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m13933_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m40967(__this, ___index, ___value, method) (( void (*) (List_1_t2768 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m13934_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::Add(T)
#define List_1_Add_m40968(__this, ___item, method) (( void (*) (List_1_t2768 *, ByteU5BU5D_t25*, const MethodInfo*))List_1_Add_m13943_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m40969(__this, ___newCount, method) (( void (*) (List_1_t2768 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m22537_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m40970(__this, ___idx, ___count, method) (( void (*) (List_1_t2768 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m22538_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m40971(__this, ___collection, method) (( void (*) (List_1_t2768 *, Object_t*, const MethodInfo*))List_1_AddCollection_m22539_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m40972(__this, ___enumerable, method) (( void (*) (List_1_t2768 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m22540_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m40973(__this, ___collection, method) (( void (*) (List_1_t2768 *, Object_t*, const MethodInfo*))List_1_AddRange_m87_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Byte[]>::AsReadOnly()
#define List_1_AsReadOnly_m40974(__this, method) (( ReadOnlyCollection_1_t6098 * (*) (List_1_t2768 *, const MethodInfo*))List_1_AsReadOnly_m22541_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::Clear()
#define List_1_Clear_m40975(__this, method) (( void (*) (List_1_t2768 *, const MethodInfo*))List_1_Clear_m13936_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Byte[]>::Contains(T)
#define List_1_Contains_m40976(__this, ___item, method) (( bool (*) (List_1_t2768 *, ByteU5BU5D_t25*, const MethodInfo*))List_1_Contains_m13944_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m40977(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t2768 *, ByteU5BU5DU5BU5D_t1351*, int32_t, const MethodInfo*))List_1_CopyTo_m13945_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Byte[]>::Find(System.Predicate`1<T>)
#define List_1_Find_m40978(__this, ___match, method) (( ByteU5BU5D_t25* (*) (List_1_t2768 *, Predicate_1_t6099 *, const MethodInfo*))List_1_Find_m22542_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m40979(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t6099 *, const MethodInfo*))List_1_CheckMatch_m22543_gshared)(__this /* static, unused */, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Byte[]>::FindAll(System.Predicate`1<T>)
#define List_1_FindAll_m40980(__this, ___match, method) (( List_1_t2768 * (*) (List_1_t2768 *, Predicate_1_t6099 *, const MethodInfo*))List_1_FindAll_m22544_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Byte[]>::FindAllStackBits(System.Predicate`1<T>)
#define List_1_FindAllStackBits_m40981(__this, ___match, method) (( List_1_t2768 * (*) (List_1_t2768 *, Predicate_1_t6099 *, const MethodInfo*))List_1_FindAllStackBits_m22545_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Byte[]>::FindAllList(System.Predicate`1<T>)
#define List_1_FindAllList_m40982(__this, ___match, method) (( List_1_t2768 * (*) (List_1_t2768 *, Predicate_1_t6099 *, const MethodInfo*))List_1_FindAllList_m22546_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Byte[]>::FindIndex(System.Predicate`1<T>)
#define List_1_FindIndex_m40983(__this, ___match, method) (( int32_t (*) (List_1_t2768 *, Predicate_1_t6099 *, const MethodInfo*))List_1_FindIndex_m22547_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Byte[]>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m40984(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t2768 *, int32_t, int32_t, Predicate_1_t6099 *, const MethodInfo*))List_1_GetIndex_m22548_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Byte[]>::GetEnumerator()
#define List_1_GetEnumerator_m40985(__this, method) (( Enumerator_t6100  (*) (List_1_t2768 *, const MethodInfo*))List_1_GetEnumerator_m22549_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Byte[]>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m40986(__this, ___index, ___count, method) (( List_1_t2768 * (*) (List_1_t2768 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m22550_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Byte[]>::IndexOf(T)
#define List_1_IndexOf_m40987(__this, ___item, method) (( int32_t (*) (List_1_t2768 *, ByteU5BU5D_t25*, const MethodInfo*))List_1_IndexOf_m13948_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m40988(__this, ___start, ___delta, method) (( void (*) (List_1_t2768 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m22551_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m40989(__this, ___index, method) (( void (*) (List_1_t2768 *, int32_t, const MethodInfo*))List_1_CheckIndex_m22552_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::Insert(System.Int32,T)
#define List_1_Insert_m40990(__this, ___index, ___item, method) (( void (*) (List_1_t2768 *, int32_t, ByteU5BU5D_t25*, const MethodInfo*))List_1_Insert_m13949_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m40991(__this, ___collection, method) (( void (*) (List_1_t2768 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m22553_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m40992(__this, ___index, ___collection, method) (( void (*) (List_1_t2768 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m22554_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m40993(__this, ___index, ___collection, method) (( void (*) (List_1_t2768 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m22555_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m40994(__this, ___index, ___enumerable, method) (( void (*) (List_1_t2768 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m22556_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Byte[]>::Remove(T)
#define List_1_Remove_m40995(__this, ___item, method) (( bool (*) (List_1_t2768 *, ByteU5BU5D_t25*, const MethodInfo*))List_1_Remove_m13946_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Byte[]>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m40996(__this, ___match, method) (( int32_t (*) (List_1_t2768 *, Predicate_1_t6099 *, const MethodInfo*))List_1_RemoveAll_m22557_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m40997(__this, ___index, method) (( void (*) (List_1_t2768 *, int32_t, const MethodInfo*))List_1_RemoveAt_m13941_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m40998(__this, ___index, ___count, method) (( void (*) (List_1_t2768 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m22558_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::Reverse()
#define List_1_Reverse_m40999(__this, method) (( void (*) (List_1_t2768 *, const MethodInfo*))List_1_Reverse_m22559_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::Sort()
#define List_1_Sort_m41000(__this, method) (( void (*) (List_1_t2768 *, const MethodInfo*))List_1_Sort_m22560_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m41001(__this, ___comparer, method) (( void (*) (List_1_t2768 *, Object_t*, const MethodInfo*))List_1_Sort_m22561_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m41002(__this, ___comparison, method) (( void (*) (List_1_t2768 *, Comparison_1_t6101 *, const MethodInfo*))List_1_Sort_m22562_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Byte[]>::ToArray()
#define List_1_ToArray_m41003(__this, method) (( ByteU5BU5DU5BU5D_t1351* (*) (List_1_t2768 *, const MethodInfo*))List_1_ToArray_m3165_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::TrimExcess()
#define List_1_TrimExcess_m41004(__this, method) (( void (*) (List_1_t2768 *, const MethodInfo*))List_1_TrimExcess_m22563_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Byte[]>::get_Capacity()
#define List_1_get_Capacity_m41005(__this, method) (( int32_t (*) (List_1_t2768 *, const MethodInfo*))List_1_get_Capacity_m22564_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m41006(__this, ___value, method) (( void (*) (List_1_t2768 *, int32_t, const MethodInfo*))List_1_set_Capacity_m22565_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Byte[]>::get_Count()
#define List_1_get_Count_m41007(__this, method) (( int32_t (*) (List_1_t2768 *, const MethodInfo*))List_1_get_Count_m13927_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Byte[]>::get_Item(System.Int32)
#define List_1_get_Item_m41008(__this, ___index, method) (( ByteU5BU5D_t25* (*) (List_1_t2768 *, int32_t, const MethodInfo*))List_1_get_Item_m13950_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::set_Item(System.Int32,T)
#define List_1_set_Item_m41009(__this, ___index, ___value, method) (( void (*) (List_1_t2768 *, int32_t, ByteU5BU5D_t25*, const MethodInfo*))List_1_set_Item_m13951_gshared)(__this, ___index, ___value, method)

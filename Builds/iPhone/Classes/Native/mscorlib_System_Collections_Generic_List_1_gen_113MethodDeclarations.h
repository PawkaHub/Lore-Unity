#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>
struct List_1_t5655;
// System.Object
struct Object_t;
// System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>
struct Tuple_2_t1848;
// System.Collections.Generic.IEnumerable`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>
struct IEnumerable_1_t6804;
// System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>[]
struct Tuple_2U5BU5D_t5654;
// System.Collections.Generic.IEnumerator`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>
struct IEnumerator_1_t6800;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Collections.Generic.ICollection`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>
struct ICollection_1_t6805;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>
struct ReadOnlyCollection_1_t6806;
// System.Predicate`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>
struct Predicate_1_t6807;
// System.Collections.Generic.IComparer`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>
struct IComparer_1_t6808;
// System.Comparison`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>
struct Comparison_1_t6809;
// System.Collections.Generic.List`1/Enumerator<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_113.h"

// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_genMethodDeclarations.h"
#define List_1__ctor_m34083(__this, method) (( void (*) (List_1_t5655 *, const MethodInfo*))List_1__ctor_m84_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m34084(__this, ___collection, method) (( void (*) (List_1_t5655 *, Object_t*, const MethodInfo*))List_1__ctor_m3166_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::.ctor(System.Int32)
#define List_1__ctor_m34085(__this, ___capacity, method) (( void (*) (List_1_t5655 *, int32_t, const MethodInfo*))List_1__ctor_m22534_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::.ctor(T[],System.Int32)
#define List_1__ctor_m34086(__this, ___data, ___size, method) (( void (*) (List_1_t5655 *, Tuple_2U5BU5D_t5654*, int32_t, const MethodInfo*))List_1__ctor_m22535_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::.cctor()
#define List_1__cctor_m34087(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m22536_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m34088(__this, method) (( Object_t* (*) (List_1_t5655 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m13947_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m34089(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t5655 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m13930_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m34090(__this, method) (( Object_t * (*) (List_1_t5655 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m13926_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m34091(__this, ___item, method) (( int32_t (*) (List_1_t5655 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m13935_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m34092(__this, ___item, method) (( bool (*) (List_1_t5655 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m13937_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m34093(__this, ___item, method) (( int32_t (*) (List_1_t5655 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m13938_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m34094(__this, ___index, ___item, method) (( void (*) (List_1_t5655 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m13939_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m34095(__this, ___item, method) (( void (*) (List_1_t5655 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m13940_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m34096(__this, method) (( bool (*) (List_1_t5655 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m13942_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m34097(__this, method) (( bool (*) (List_1_t5655 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m13928_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m34098(__this, method) (( Object_t * (*) (List_1_t5655 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m13929_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m34099(__this, method) (( bool (*) (List_1_t5655 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m13931_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m34100(__this, method) (( bool (*) (List_1_t5655 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m13932_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m34101(__this, ___index, method) (( Object_t * (*) (List_1_t5655 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m13933_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m34102(__this, ___index, ___value, method) (( void (*) (List_1_t5655 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m13934_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::Add(T)
#define List_1_Add_m34103(__this, ___item, method) (( void (*) (List_1_t5655 *, Tuple_2_t1848 *, const MethodInfo*))List_1_Add_m13943_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m34104(__this, ___newCount, method) (( void (*) (List_1_t5655 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m22537_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m34105(__this, ___idx, ___count, method) (( void (*) (List_1_t5655 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m22538_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m34106(__this, ___collection, method) (( void (*) (List_1_t5655 *, Object_t*, const MethodInfo*))List_1_AddCollection_m22539_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m34107(__this, ___enumerable, method) (( void (*) (List_1_t5655 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m22540_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m34108(__this, ___collection, method) (( void (*) (List_1_t5655 *, Object_t*, const MethodInfo*))List_1_AddRange_m87_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::AsReadOnly()
#define List_1_AsReadOnly_m34109(__this, method) (( ReadOnlyCollection_1_t6806 * (*) (List_1_t5655 *, const MethodInfo*))List_1_AsReadOnly_m22541_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::Clear()
#define List_1_Clear_m34110(__this, method) (( void (*) (List_1_t5655 *, const MethodInfo*))List_1_Clear_m13936_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::Contains(T)
#define List_1_Contains_m34111(__this, ___item, method) (( bool (*) (List_1_t5655 *, Tuple_2_t1848 *, const MethodInfo*))List_1_Contains_m13944_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m34112(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t5655 *, Tuple_2U5BU5D_t5654*, int32_t, const MethodInfo*))List_1_CopyTo_m13945_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::Find(System.Predicate`1<T>)
#define List_1_Find_m34113(__this, ___match, method) (( Tuple_2_t1848 * (*) (List_1_t5655 *, Predicate_1_t6807 *, const MethodInfo*))List_1_Find_m22542_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m34114(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t6807 *, const MethodInfo*))List_1_CheckMatch_m22543_gshared)(__this /* static, unused */, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::FindAll(System.Predicate`1<T>)
#define List_1_FindAll_m34115(__this, ___match, method) (( List_1_t5655 * (*) (List_1_t5655 *, Predicate_1_t6807 *, const MethodInfo*))List_1_FindAll_m22544_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::FindAllStackBits(System.Predicate`1<T>)
#define List_1_FindAllStackBits_m34116(__this, ___match, method) (( List_1_t5655 * (*) (List_1_t5655 *, Predicate_1_t6807 *, const MethodInfo*))List_1_FindAllStackBits_m22545_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::FindAllList(System.Predicate`1<T>)
#define List_1_FindAllList_m34117(__this, ___match, method) (( List_1_t5655 * (*) (List_1_t5655 *, Predicate_1_t6807 *, const MethodInfo*))List_1_FindAllList_m22546_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::FindIndex(System.Predicate`1<T>)
#define List_1_FindIndex_m34118(__this, ___match, method) (( int32_t (*) (List_1_t5655 *, Predicate_1_t6807 *, const MethodInfo*))List_1_FindIndex_m22547_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m34119(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t5655 *, int32_t, int32_t, Predicate_1_t6807 *, const MethodInfo*))List_1_GetIndex_m22548_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::GetEnumerator()
#define List_1_GetEnumerator_m34120(__this, method) (( Enumerator_t6810  (*) (List_1_t5655 *, const MethodInfo*))List_1_GetEnumerator_m22549_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m34121(__this, ___index, ___count, method) (( List_1_t5655 * (*) (List_1_t5655 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m22550_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::IndexOf(T)
#define List_1_IndexOf_m34122(__this, ___item, method) (( int32_t (*) (List_1_t5655 *, Tuple_2_t1848 *, const MethodInfo*))List_1_IndexOf_m13948_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m34123(__this, ___start, ___delta, method) (( void (*) (List_1_t5655 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m22551_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m34124(__this, ___index, method) (( void (*) (List_1_t5655 *, int32_t, const MethodInfo*))List_1_CheckIndex_m22552_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::Insert(System.Int32,T)
#define List_1_Insert_m34125(__this, ___index, ___item, method) (( void (*) (List_1_t5655 *, int32_t, Tuple_2_t1848 *, const MethodInfo*))List_1_Insert_m13949_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m34126(__this, ___collection, method) (( void (*) (List_1_t5655 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m22553_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m34127(__this, ___index, ___collection, method) (( void (*) (List_1_t5655 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m22554_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m34128(__this, ___index, ___collection, method) (( void (*) (List_1_t5655 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m22555_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m34129(__this, ___index, ___enumerable, method) (( void (*) (List_1_t5655 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m22556_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::Remove(T)
#define List_1_Remove_m34130(__this, ___item, method) (( bool (*) (List_1_t5655 *, Tuple_2_t1848 *, const MethodInfo*))List_1_Remove_m13946_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m34131(__this, ___match, method) (( int32_t (*) (List_1_t5655 *, Predicate_1_t6807 *, const MethodInfo*))List_1_RemoveAll_m22557_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m34132(__this, ___index, method) (( void (*) (List_1_t5655 *, int32_t, const MethodInfo*))List_1_RemoveAt_m13941_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m34133(__this, ___index, ___count, method) (( void (*) (List_1_t5655 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m22558_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::Reverse()
#define List_1_Reverse_m34134(__this, method) (( void (*) (List_1_t5655 *, const MethodInfo*))List_1_Reverse_m22559_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::Sort()
#define List_1_Sort_m34135(__this, method) (( void (*) (List_1_t5655 *, const MethodInfo*))List_1_Sort_m22560_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m34136(__this, ___comparer, method) (( void (*) (List_1_t5655 *, Object_t*, const MethodInfo*))List_1_Sort_m22561_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m34137(__this, ___comparison, method) (( void (*) (List_1_t5655 *, Comparison_1_t6809 *, const MethodInfo*))List_1_Sort_m22562_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::ToArray()
#define List_1_ToArray_m34138(__this, method) (( Tuple_2U5BU5D_t5654* (*) (List_1_t5655 *, const MethodInfo*))List_1_ToArray_m3165_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::TrimExcess()
#define List_1_TrimExcess_m34139(__this, method) (( void (*) (List_1_t5655 *, const MethodInfo*))List_1_TrimExcess_m22563_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::get_Capacity()
#define List_1_get_Capacity_m34140(__this, method) (( int32_t (*) (List_1_t5655 *, const MethodInfo*))List_1_get_Capacity_m22564_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m34141(__this, ___value, method) (( void (*) (List_1_t5655 *, int32_t, const MethodInfo*))List_1_set_Capacity_m22565_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::get_Count()
#define List_1_get_Count_m34142(__this, method) (( int32_t (*) (List_1_t5655 *, const MethodInfo*))List_1_get_Count_m13927_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::get_Item(System.Int32)
#define List_1_get_Item_m34143(__this, ___index, method) (( Tuple_2_t1848 * (*) (List_1_t5655 *, int32_t, const MethodInfo*))List_1_get_Item_m13950_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::set_Item(System.Int32,T)
#define List_1_set_Item_m34144(__this, ___index, ___value, method) (( void (*) (List_1_t5655 *, int32_t, Tuple_2_t1848 *, const MethodInfo*))List_1_set_Item_m13951_gshared)(__this, ___index, ___value, method)

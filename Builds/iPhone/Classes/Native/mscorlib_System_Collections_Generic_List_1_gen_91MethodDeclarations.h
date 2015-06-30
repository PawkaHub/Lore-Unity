#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<Language.Lua.Tuple`2<System.Int32,System.String>>
struct List_1_t2650;
// System.Object
struct Object_t;
// Language.Lua.Tuple`2<System.Int32,System.String>
struct Tuple_2_t2675;
// System.Collections.Generic.IEnumerable`1<Language.Lua.Tuple`2<System.Int32,System.String>>
struct IEnumerable_1_t7030;
// Language.Lua.Tuple`2<System.Int32,System.String>[]
struct Tuple_2U5BU5D_t6049;
// System.Collections.Generic.IEnumerator`1<Language.Lua.Tuple`2<System.Int32,System.String>>
struct IEnumerator_1_t7031;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Collections.Generic.ICollection`1<Language.Lua.Tuple`2<System.Int32,System.String>>
struct ICollection_1_t7032;
// System.Collections.ObjectModel.ReadOnlyCollection`1<Language.Lua.Tuple`2<System.Int32,System.String>>
struct ReadOnlyCollection_1_t6051;
// System.Predicate`1<Language.Lua.Tuple`2<System.Int32,System.String>>
struct Predicate_1_t6052;
// System.Collections.Generic.IComparer`1<Language.Lua.Tuple`2<System.Int32,System.String>>
struct IComparer_1_t7033;
// System.Comparison`1<Language.Lua.Tuple`2<System.Int32,System.String>>
struct Comparison_1_t6053;
// System.Collections.Generic.List`1/Enumerator<Language.Lua.Tuple`2<System.Int32,System.String>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_33.h"

// System.Void System.Collections.Generic.List`1<Language.Lua.Tuple`2<System.Int32,System.String>>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_genMethodDeclarations.h"
#define List_1__ctor_m12214(__this, method) (( void (*) (List_1_t2650 *, const MethodInfo*))List_1__ctor_m84_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Tuple`2<System.Int32,System.String>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m40220(__this, ___collection, method) (( void (*) (List_1_t2650 *, Object_t*, const MethodInfo*))List_1__ctor_m3166_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Tuple`2<System.Int32,System.String>>::.ctor(System.Int32)
#define List_1__ctor_m40221(__this, ___capacity, method) (( void (*) (List_1_t2650 *, int32_t, const MethodInfo*))List_1__ctor_m22534_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Tuple`2<System.Int32,System.String>>::.ctor(T[],System.Int32)
#define List_1__ctor_m40222(__this, ___data, ___size, method) (( void (*) (List_1_t2650 *, Tuple_2U5BU5D_t6049*, int32_t, const MethodInfo*))List_1__ctor_m22535_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Tuple`2<System.Int32,System.String>>::.cctor()
#define List_1__cctor_m40223(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m22536_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<Language.Lua.Tuple`2<System.Int32,System.String>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m40224(__this, method) (( Object_t* (*) (List_1_t2650 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m13947_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Tuple`2<System.Int32,System.String>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m40225(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t2650 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m13930_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<Language.Lua.Tuple`2<System.Int32,System.String>>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m40226(__this, method) (( Object_t * (*) (List_1_t2650 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m13926_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<Language.Lua.Tuple`2<System.Int32,System.String>>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m40227(__this, ___item, method) (( int32_t (*) (List_1_t2650 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m13935_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<Language.Lua.Tuple`2<System.Int32,System.String>>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m40228(__this, ___item, method) (( bool (*) (List_1_t2650 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m13937_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<Language.Lua.Tuple`2<System.Int32,System.String>>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m40229(__this, ___item, method) (( int32_t (*) (List_1_t2650 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m13938_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Tuple`2<System.Int32,System.String>>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m40230(__this, ___index, ___item, method) (( void (*) (List_1_t2650 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m13939_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Tuple`2<System.Int32,System.String>>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m40231(__this, ___item, method) (( void (*) (List_1_t2650 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m13940_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<Language.Lua.Tuple`2<System.Int32,System.String>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m40232(__this, method) (( bool (*) (List_1_t2650 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m13942_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Language.Lua.Tuple`2<System.Int32,System.String>>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m40233(__this, method) (( bool (*) (List_1_t2650 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m13928_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<Language.Lua.Tuple`2<System.Int32,System.String>>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m40234(__this, method) (( Object_t * (*) (List_1_t2650 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m13929_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Language.Lua.Tuple`2<System.Int32,System.String>>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m40235(__this, method) (( bool (*) (List_1_t2650 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m13931_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Language.Lua.Tuple`2<System.Int32,System.String>>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m40236(__this, method) (( bool (*) (List_1_t2650 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m13932_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<Language.Lua.Tuple`2<System.Int32,System.String>>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m40237(__this, ___index, method) (( Object_t * (*) (List_1_t2650 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m13933_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Tuple`2<System.Int32,System.String>>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m40238(__this, ___index, ___value, method) (( void (*) (List_1_t2650 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m13934_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Tuple`2<System.Int32,System.String>>::Add(T)
#define List_1_Add_m40239(__this, ___item, method) (( void (*) (List_1_t2650 *, Tuple_2_t2675 *, const MethodInfo*))List_1_Add_m13943_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Tuple`2<System.Int32,System.String>>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m40240(__this, ___newCount, method) (( void (*) (List_1_t2650 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m22537_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Tuple`2<System.Int32,System.String>>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m40241(__this, ___idx, ___count, method) (( void (*) (List_1_t2650 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m22538_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Tuple`2<System.Int32,System.String>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m40242(__this, ___collection, method) (( void (*) (List_1_t2650 *, Object_t*, const MethodInfo*))List_1_AddCollection_m22539_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Tuple`2<System.Int32,System.String>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m40243(__this, ___enumerable, method) (( void (*) (List_1_t2650 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m22540_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Tuple`2<System.Int32,System.String>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m40244(__this, ___collection, method) (( void (*) (List_1_t2650 *, Object_t*, const MethodInfo*))List_1_AddRange_m87_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<Language.Lua.Tuple`2<System.Int32,System.String>>::AsReadOnly()
#define List_1_AsReadOnly_m40245(__this, method) (( ReadOnlyCollection_1_t6051 * (*) (List_1_t2650 *, const MethodInfo*))List_1_AsReadOnly_m22541_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Tuple`2<System.Int32,System.String>>::Clear()
#define List_1_Clear_m40246(__this, method) (( void (*) (List_1_t2650 *, const MethodInfo*))List_1_Clear_m13936_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Language.Lua.Tuple`2<System.Int32,System.String>>::Contains(T)
#define List_1_Contains_m40247(__this, ___item, method) (( bool (*) (List_1_t2650 *, Tuple_2_t2675 *, const MethodInfo*))List_1_Contains_m13944_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Tuple`2<System.Int32,System.String>>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m40248(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t2650 *, Tuple_2U5BU5D_t6049*, int32_t, const MethodInfo*))List_1_CopyTo_m13945_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<Language.Lua.Tuple`2<System.Int32,System.String>>::Find(System.Predicate`1<T>)
#define List_1_Find_m40249(__this, ___match, method) (( Tuple_2_t2675 * (*) (List_1_t2650 *, Predicate_1_t6052 *, const MethodInfo*))List_1_Find_m22542_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Tuple`2<System.Int32,System.String>>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m40250(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t6052 *, const MethodInfo*))List_1_CheckMatch_m22543_gshared)(__this /* static, unused */, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<Language.Lua.Tuple`2<System.Int32,System.String>>::FindAll(System.Predicate`1<T>)
#define List_1_FindAll_m40251(__this, ___match, method) (( List_1_t2650 * (*) (List_1_t2650 *, Predicate_1_t6052 *, const MethodInfo*))List_1_FindAll_m22544_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<Language.Lua.Tuple`2<System.Int32,System.String>>::FindAllStackBits(System.Predicate`1<T>)
#define List_1_FindAllStackBits_m40252(__this, ___match, method) (( List_1_t2650 * (*) (List_1_t2650 *, Predicate_1_t6052 *, const MethodInfo*))List_1_FindAllStackBits_m22545_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<Language.Lua.Tuple`2<System.Int32,System.String>>::FindAllList(System.Predicate`1<T>)
#define List_1_FindAllList_m40253(__this, ___match, method) (( List_1_t2650 * (*) (List_1_t2650 *, Predicate_1_t6052 *, const MethodInfo*))List_1_FindAllList_m22546_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<Language.Lua.Tuple`2<System.Int32,System.String>>::FindIndex(System.Predicate`1<T>)
#define List_1_FindIndex_m40254(__this, ___match, method) (( int32_t (*) (List_1_t2650 *, Predicate_1_t6052 *, const MethodInfo*))List_1_FindIndex_m22547_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<Language.Lua.Tuple`2<System.Int32,System.String>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m40255(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t2650 *, int32_t, int32_t, Predicate_1_t6052 *, const MethodInfo*))List_1_GetIndex_m22548_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Language.Lua.Tuple`2<System.Int32,System.String>>::GetEnumerator()
#define List_1_GetEnumerator_m12225(__this, method) (( Enumerator_t2677  (*) (List_1_t2650 *, const MethodInfo*))List_1_GetEnumerator_m22549_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<Language.Lua.Tuple`2<System.Int32,System.String>>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m40256(__this, ___index, ___count, method) (( List_1_t2650 * (*) (List_1_t2650 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m22550_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<Language.Lua.Tuple`2<System.Int32,System.String>>::IndexOf(T)
#define List_1_IndexOf_m40257(__this, ___item, method) (( int32_t (*) (List_1_t2650 *, Tuple_2_t2675 *, const MethodInfo*))List_1_IndexOf_m13948_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Tuple`2<System.Int32,System.String>>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m40258(__this, ___start, ___delta, method) (( void (*) (List_1_t2650 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m22551_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Tuple`2<System.Int32,System.String>>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m40259(__this, ___index, method) (( void (*) (List_1_t2650 *, int32_t, const MethodInfo*))List_1_CheckIndex_m22552_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Tuple`2<System.Int32,System.String>>::Insert(System.Int32,T)
#define List_1_Insert_m40260(__this, ___index, ___item, method) (( void (*) (List_1_t2650 *, int32_t, Tuple_2_t2675 *, const MethodInfo*))List_1_Insert_m13949_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Tuple`2<System.Int32,System.String>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m40261(__this, ___collection, method) (( void (*) (List_1_t2650 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m22553_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Tuple`2<System.Int32,System.String>>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m40262(__this, ___index, ___collection, method) (( void (*) (List_1_t2650 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m22554_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Tuple`2<System.Int32,System.String>>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m40263(__this, ___index, ___collection, method) (( void (*) (List_1_t2650 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m22555_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Tuple`2<System.Int32,System.String>>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m40264(__this, ___index, ___enumerable, method) (( void (*) (List_1_t2650 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m22556_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<Language.Lua.Tuple`2<System.Int32,System.String>>::Remove(T)
#define List_1_Remove_m40265(__this, ___item, method) (( bool (*) (List_1_t2650 *, Tuple_2_t2675 *, const MethodInfo*))List_1_Remove_m13946_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<Language.Lua.Tuple`2<System.Int32,System.String>>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m40266(__this, ___match, method) (( int32_t (*) (List_1_t2650 *, Predicate_1_t6052 *, const MethodInfo*))List_1_RemoveAll_m22557_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Tuple`2<System.Int32,System.String>>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m40267(__this, ___index, method) (( void (*) (List_1_t2650 *, int32_t, const MethodInfo*))List_1_RemoveAt_m13941_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Tuple`2<System.Int32,System.String>>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m12224(__this, ___index, ___count, method) (( void (*) (List_1_t2650 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m22558_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Tuple`2<System.Int32,System.String>>::Reverse()
#define List_1_Reverse_m40268(__this, method) (( void (*) (List_1_t2650 *, const MethodInfo*))List_1_Reverse_m22559_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Tuple`2<System.Int32,System.String>>::Sort()
#define List_1_Sort_m40269(__this, method) (( void (*) (List_1_t2650 *, const MethodInfo*))List_1_Sort_m22560_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Tuple`2<System.Int32,System.String>>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m40270(__this, ___comparer, method) (( void (*) (List_1_t2650 *, Object_t*, const MethodInfo*))List_1_Sort_m22561_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Tuple`2<System.Int32,System.String>>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m40271(__this, ___comparison, method) (( void (*) (List_1_t2650 *, Comparison_1_t6053 *, const MethodInfo*))List_1_Sort_m22562_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<Language.Lua.Tuple`2<System.Int32,System.String>>::ToArray()
#define List_1_ToArray_m40272(__this, method) (( Tuple_2U5BU5D_t6049* (*) (List_1_t2650 *, const MethodInfo*))List_1_ToArray_m3165_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Tuple`2<System.Int32,System.String>>::TrimExcess()
#define List_1_TrimExcess_m40273(__this, method) (( void (*) (List_1_t2650 *, const MethodInfo*))List_1_TrimExcess_m22563_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<Language.Lua.Tuple`2<System.Int32,System.String>>::get_Capacity()
#define List_1_get_Capacity_m40274(__this, method) (( int32_t (*) (List_1_t2650 *, const MethodInfo*))List_1_get_Capacity_m22564_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Tuple`2<System.Int32,System.String>>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m40275(__this, ___value, method) (( void (*) (List_1_t2650 *, int32_t, const MethodInfo*))List_1_set_Capacity_m22565_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<Language.Lua.Tuple`2<System.Int32,System.String>>::get_Count()
#define List_1_get_Count_m40276(__this, method) (( int32_t (*) (List_1_t2650 *, const MethodInfo*))List_1_get_Count_m13927_gshared)(__this, method)
// T System.Collections.Generic.List`1<Language.Lua.Tuple`2<System.Int32,System.String>>::get_Item(System.Int32)
#define List_1_get_Item_m40277(__this, ___index, method) (( Tuple_2_t2675 * (*) (List_1_t2650 *, int32_t, const MethodInfo*))List_1_get_Item_m13950_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Tuple`2<System.Int32,System.String>>::set_Item(System.Int32,T)
#define List_1_set_Item_m40278(__this, ___index, ___value, method) (( void (*) (List_1_t2650 *, int32_t, Tuple_2_t2675 *, const MethodInfo*))List_1_set_Item_m13951_gshared)(__this, ___index, ___value, method)

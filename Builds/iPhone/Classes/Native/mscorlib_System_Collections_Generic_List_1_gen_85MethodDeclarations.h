#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<Language.Lua.Access>
struct List_1_t2616;
// System.Object
struct Object_t;
// Language.Lua.Access
struct Access_t2595;
// System.Collections.Generic.IEnumerable`1<Language.Lua.Access>
struct IEnumerable_1_t7001;
// Language.Lua.Access[]
struct AccessU5BU5D_t5994;
// System.Collections.Generic.IEnumerator`1<Language.Lua.Access>
struct IEnumerator_1_t7002;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Collections.Generic.ICollection`1<Language.Lua.Access>
struct ICollection_1_t7003;
// System.Collections.ObjectModel.ReadOnlyCollection`1<Language.Lua.Access>
struct ReadOnlyCollection_1_t5996;
// System.Predicate`1<Language.Lua.Access>
struct Predicate_1_t5997;
// System.Collections.Generic.IComparer`1<Language.Lua.Access>
struct IComparer_1_t7004;
// System.Comparison`1<Language.Lua.Access>
struct Comparison_1_t5998;
// System.Collections.Generic.List`1/Enumerator<Language.Lua.Access>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_30.h"

// System.Void System.Collections.Generic.List`1<Language.Lua.Access>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_genMethodDeclarations.h"
#define List_1__ctor_m12163(__this, method) (( void (*) (List_1_t2616 *, const MethodInfo*))List_1__ctor_m84_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Access>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m39298(__this, ___collection, method) (( void (*) (List_1_t2616 *, Object_t*, const MethodInfo*))List_1__ctor_m3166_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Access>::.ctor(System.Int32)
#define List_1__ctor_m39299(__this, ___capacity, method) (( void (*) (List_1_t2616 *, int32_t, const MethodInfo*))List_1__ctor_m22534_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Access>::.ctor(T[],System.Int32)
#define List_1__ctor_m39300(__this, ___data, ___size, method) (( void (*) (List_1_t2616 *, AccessU5BU5D_t5994*, int32_t, const MethodInfo*))List_1__ctor_m22535_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Access>::.cctor()
#define List_1__cctor_m39301(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m22536_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<Language.Lua.Access>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m39302(__this, method) (( Object_t* (*) (List_1_t2616 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m13947_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Access>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m39303(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t2616 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m13930_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<Language.Lua.Access>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m39304(__this, method) (( Object_t * (*) (List_1_t2616 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m13926_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<Language.Lua.Access>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m39305(__this, ___item, method) (( int32_t (*) (List_1_t2616 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m13935_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<Language.Lua.Access>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m39306(__this, ___item, method) (( bool (*) (List_1_t2616 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m13937_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<Language.Lua.Access>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m39307(__this, ___item, method) (( int32_t (*) (List_1_t2616 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m13938_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Access>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m39308(__this, ___index, ___item, method) (( void (*) (List_1_t2616 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m13939_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Access>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m39309(__this, ___item, method) (( void (*) (List_1_t2616 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m13940_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<Language.Lua.Access>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m39310(__this, method) (( bool (*) (List_1_t2616 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m13942_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Language.Lua.Access>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m39311(__this, method) (( bool (*) (List_1_t2616 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m13928_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<Language.Lua.Access>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m39312(__this, method) (( Object_t * (*) (List_1_t2616 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m13929_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Language.Lua.Access>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m39313(__this, method) (( bool (*) (List_1_t2616 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m13931_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Language.Lua.Access>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m39314(__this, method) (( bool (*) (List_1_t2616 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m13932_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<Language.Lua.Access>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m39315(__this, ___index, method) (( Object_t * (*) (List_1_t2616 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m13933_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Access>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m39316(__this, ___index, ___value, method) (( void (*) (List_1_t2616 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m13934_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Access>::Add(T)
#define List_1_Add_m39317(__this, ___item, method) (( void (*) (List_1_t2616 *, Access_t2595 *, const MethodInfo*))List_1_Add_m13943_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Access>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m39318(__this, ___newCount, method) (( void (*) (List_1_t2616 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m22537_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Access>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m39319(__this, ___idx, ___count, method) (( void (*) (List_1_t2616 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m22538_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Access>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m39320(__this, ___collection, method) (( void (*) (List_1_t2616 *, Object_t*, const MethodInfo*))List_1_AddCollection_m22539_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Access>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m39321(__this, ___enumerable, method) (( void (*) (List_1_t2616 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m22540_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Access>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m39322(__this, ___collection, method) (( void (*) (List_1_t2616 *, Object_t*, const MethodInfo*))List_1_AddRange_m87_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<Language.Lua.Access>::AsReadOnly()
#define List_1_AsReadOnly_m39323(__this, method) (( ReadOnlyCollection_1_t5996 * (*) (List_1_t2616 *, const MethodInfo*))List_1_AsReadOnly_m22541_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Access>::Clear()
#define List_1_Clear_m39324(__this, method) (( void (*) (List_1_t2616 *, const MethodInfo*))List_1_Clear_m13936_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Language.Lua.Access>::Contains(T)
#define List_1_Contains_m39325(__this, ___item, method) (( bool (*) (List_1_t2616 *, Access_t2595 *, const MethodInfo*))List_1_Contains_m13944_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Access>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m39326(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t2616 *, AccessU5BU5D_t5994*, int32_t, const MethodInfo*))List_1_CopyTo_m13945_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<Language.Lua.Access>::Find(System.Predicate`1<T>)
#define List_1_Find_m39327(__this, ___match, method) (( Access_t2595 * (*) (List_1_t2616 *, Predicate_1_t5997 *, const MethodInfo*))List_1_Find_m22542_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Access>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m39328(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t5997 *, const MethodInfo*))List_1_CheckMatch_m22543_gshared)(__this /* static, unused */, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<Language.Lua.Access>::FindAll(System.Predicate`1<T>)
#define List_1_FindAll_m39329(__this, ___match, method) (( List_1_t2616 * (*) (List_1_t2616 *, Predicate_1_t5997 *, const MethodInfo*))List_1_FindAll_m22544_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<Language.Lua.Access>::FindAllStackBits(System.Predicate`1<T>)
#define List_1_FindAllStackBits_m39330(__this, ___match, method) (( List_1_t2616 * (*) (List_1_t2616 *, Predicate_1_t5997 *, const MethodInfo*))List_1_FindAllStackBits_m22545_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<Language.Lua.Access>::FindAllList(System.Predicate`1<T>)
#define List_1_FindAllList_m39331(__this, ___match, method) (( List_1_t2616 * (*) (List_1_t2616 *, Predicate_1_t5997 *, const MethodInfo*))List_1_FindAllList_m22546_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<Language.Lua.Access>::FindIndex(System.Predicate`1<T>)
#define List_1_FindIndex_m39332(__this, ___match, method) (( int32_t (*) (List_1_t2616 *, Predicate_1_t5997 *, const MethodInfo*))List_1_FindIndex_m22547_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<Language.Lua.Access>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m39333(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t2616 *, int32_t, int32_t, Predicate_1_t5997 *, const MethodInfo*))List_1_GetIndex_m22548_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Language.Lua.Access>::GetEnumerator()
#define List_1_GetEnumerator_m12164(__this, method) (( Enumerator_t2667  (*) (List_1_t2616 *, const MethodInfo*))List_1_GetEnumerator_m22549_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<Language.Lua.Access>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m39334(__this, ___index, ___count, method) (( List_1_t2616 * (*) (List_1_t2616 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m22550_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<Language.Lua.Access>::IndexOf(T)
#define List_1_IndexOf_m39335(__this, ___item, method) (( int32_t (*) (List_1_t2616 *, Access_t2595 *, const MethodInfo*))List_1_IndexOf_m13948_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Access>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m39336(__this, ___start, ___delta, method) (( void (*) (List_1_t2616 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m22551_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Access>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m39337(__this, ___index, method) (( void (*) (List_1_t2616 *, int32_t, const MethodInfo*))List_1_CheckIndex_m22552_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Access>::Insert(System.Int32,T)
#define List_1_Insert_m39338(__this, ___index, ___item, method) (( void (*) (List_1_t2616 *, int32_t, Access_t2595 *, const MethodInfo*))List_1_Insert_m13949_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Access>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m39339(__this, ___collection, method) (( void (*) (List_1_t2616 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m22553_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Access>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m39340(__this, ___index, ___collection, method) (( void (*) (List_1_t2616 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m22554_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Access>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m39341(__this, ___index, ___collection, method) (( void (*) (List_1_t2616 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m22555_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Access>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m39342(__this, ___index, ___enumerable, method) (( void (*) (List_1_t2616 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m22556_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<Language.Lua.Access>::Remove(T)
#define List_1_Remove_m39343(__this, ___item, method) (( bool (*) (List_1_t2616 *, Access_t2595 *, const MethodInfo*))List_1_Remove_m13946_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<Language.Lua.Access>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m39344(__this, ___match, method) (( int32_t (*) (List_1_t2616 *, Predicate_1_t5997 *, const MethodInfo*))List_1_RemoveAll_m22557_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Access>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m39345(__this, ___index, method) (( void (*) (List_1_t2616 *, int32_t, const MethodInfo*))List_1_RemoveAt_m13941_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Access>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m39346(__this, ___index, ___count, method) (( void (*) (List_1_t2616 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m22558_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Access>::Reverse()
#define List_1_Reverse_m39347(__this, method) (( void (*) (List_1_t2616 *, const MethodInfo*))List_1_Reverse_m22559_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Access>::Sort()
#define List_1_Sort_m39348(__this, method) (( void (*) (List_1_t2616 *, const MethodInfo*))List_1_Sort_m22560_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Access>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m39349(__this, ___comparer, method) (( void (*) (List_1_t2616 *, Object_t*, const MethodInfo*))List_1_Sort_m22561_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Access>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m39350(__this, ___comparison, method) (( void (*) (List_1_t2616 *, Comparison_1_t5998 *, const MethodInfo*))List_1_Sort_m22562_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<Language.Lua.Access>::ToArray()
#define List_1_ToArray_m39351(__this, method) (( AccessU5BU5D_t5994* (*) (List_1_t2616 *, const MethodInfo*))List_1_ToArray_m3165_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Access>::TrimExcess()
#define List_1_TrimExcess_m39352(__this, method) (( void (*) (List_1_t2616 *, const MethodInfo*))List_1_TrimExcess_m22563_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<Language.Lua.Access>::get_Capacity()
#define List_1_get_Capacity_m39353(__this, method) (( int32_t (*) (List_1_t2616 *, const MethodInfo*))List_1_get_Capacity_m22564_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Access>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m39354(__this, ___value, method) (( void (*) (List_1_t2616 *, int32_t, const MethodInfo*))List_1_set_Capacity_m22565_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<Language.Lua.Access>::get_Count()
#define List_1_get_Count_m39355(__this, method) (( int32_t (*) (List_1_t2616 *, const MethodInfo*))List_1_get_Count_m13927_gshared)(__this, method)
// T System.Collections.Generic.List`1<Language.Lua.Access>::get_Item(System.Int32)
#define List_1_get_Item_m39356(__this, ___index, method) (( Access_t2595 * (*) (List_1_t2616 *, int32_t, const MethodInfo*))List_1_get_Item_m13950_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Access>::set_Item(System.Int32,T)
#define List_1_set_Item_m39357(__this, ___index, ___value, method) (( void (*) (List_1_t2616 *, int32_t, Access_t2595 *, const MethodInfo*))List_1_set_Item_m13951_gshared)(__this, ___index, ___value, method)

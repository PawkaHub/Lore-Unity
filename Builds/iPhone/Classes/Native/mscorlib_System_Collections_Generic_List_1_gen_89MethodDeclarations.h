#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<Language.Lua.Field>
struct List_1_t2619;
// System.Object
struct Object_t;
// Language.Lua.Field
struct Field_t2655;
// System.Collections.Generic.IEnumerable`1<Language.Lua.Field>
struct IEnumerable_1_t7017;
// Language.Lua.Field[]
struct FieldU5BU5D_t6016;
// System.Collections.Generic.IEnumerator`1<Language.Lua.Field>
struct IEnumerator_1_t7018;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Collections.Generic.ICollection`1<Language.Lua.Field>
struct ICollection_1_t7019;
// System.Collections.ObjectModel.ReadOnlyCollection`1<Language.Lua.Field>
struct ReadOnlyCollection_1_t6018;
// System.Predicate`1<Language.Lua.Field>
struct Predicate_1_t6019;
// System.Collections.Generic.IComparer`1<Language.Lua.Field>
struct IComparer_1_t7020;
// System.Comparison`1<Language.Lua.Field>
struct Comparison_1_t6020;
// System.Collections.Generic.List`1/Enumerator<Language.Lua.Field>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_31.h"

// System.Void System.Collections.Generic.List`1<Language.Lua.Field>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_genMethodDeclarations.h"
#define List_1__ctor_m12167(__this, method) (( void (*) (List_1_t2619 *, const MethodInfo*))List_1__ctor_m84_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Field>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m39718(__this, ___collection, method) (( void (*) (List_1_t2619 *, Object_t*, const MethodInfo*))List_1__ctor_m3166_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Field>::.ctor(System.Int32)
#define List_1__ctor_m39719(__this, ___capacity, method) (( void (*) (List_1_t2619 *, int32_t, const MethodInfo*))List_1__ctor_m22534_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Field>::.ctor(T[],System.Int32)
#define List_1__ctor_m39720(__this, ___data, ___size, method) (( void (*) (List_1_t2619 *, FieldU5BU5D_t6016*, int32_t, const MethodInfo*))List_1__ctor_m22535_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Field>::.cctor()
#define List_1__cctor_m39721(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m22536_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<Language.Lua.Field>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m39722(__this, method) (( Object_t* (*) (List_1_t2619 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m13947_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Field>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m39723(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t2619 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m13930_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<Language.Lua.Field>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m39724(__this, method) (( Object_t * (*) (List_1_t2619 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m13926_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<Language.Lua.Field>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m39725(__this, ___item, method) (( int32_t (*) (List_1_t2619 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m13935_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<Language.Lua.Field>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m39726(__this, ___item, method) (( bool (*) (List_1_t2619 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m13937_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<Language.Lua.Field>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m39727(__this, ___item, method) (( int32_t (*) (List_1_t2619 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m13938_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Field>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m39728(__this, ___index, ___item, method) (( void (*) (List_1_t2619 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m13939_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Field>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m39729(__this, ___item, method) (( void (*) (List_1_t2619 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m13940_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<Language.Lua.Field>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m39730(__this, method) (( bool (*) (List_1_t2619 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m13942_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Language.Lua.Field>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m39731(__this, method) (( bool (*) (List_1_t2619 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m13928_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<Language.Lua.Field>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m39732(__this, method) (( Object_t * (*) (List_1_t2619 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m13929_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Language.Lua.Field>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m39733(__this, method) (( bool (*) (List_1_t2619 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m13931_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Language.Lua.Field>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m39734(__this, method) (( bool (*) (List_1_t2619 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m13932_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<Language.Lua.Field>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m39735(__this, ___index, method) (( Object_t * (*) (List_1_t2619 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m13933_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Field>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m39736(__this, ___index, ___value, method) (( void (*) (List_1_t2619 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m13934_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Field>::Add(T)
#define List_1_Add_m39737(__this, ___item, method) (( void (*) (List_1_t2619 *, Field_t2655 *, const MethodInfo*))List_1_Add_m13943_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Field>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m39738(__this, ___newCount, method) (( void (*) (List_1_t2619 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m22537_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Field>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m39739(__this, ___idx, ___count, method) (( void (*) (List_1_t2619 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m22538_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Field>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m39740(__this, ___collection, method) (( void (*) (List_1_t2619 *, Object_t*, const MethodInfo*))List_1_AddCollection_m22539_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Field>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m39741(__this, ___enumerable, method) (( void (*) (List_1_t2619 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m22540_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Field>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m39742(__this, ___collection, method) (( void (*) (List_1_t2619 *, Object_t*, const MethodInfo*))List_1_AddRange_m87_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<Language.Lua.Field>::AsReadOnly()
#define List_1_AsReadOnly_m39743(__this, method) (( ReadOnlyCollection_1_t6018 * (*) (List_1_t2619 *, const MethodInfo*))List_1_AsReadOnly_m22541_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Field>::Clear()
#define List_1_Clear_m39744(__this, method) (( void (*) (List_1_t2619 *, const MethodInfo*))List_1_Clear_m13936_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Language.Lua.Field>::Contains(T)
#define List_1_Contains_m39745(__this, ___item, method) (( bool (*) (List_1_t2619 *, Field_t2655 *, const MethodInfo*))List_1_Contains_m13944_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Field>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m39746(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t2619 *, FieldU5BU5D_t6016*, int32_t, const MethodInfo*))List_1_CopyTo_m13945_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<Language.Lua.Field>::Find(System.Predicate`1<T>)
#define List_1_Find_m39747(__this, ___match, method) (( Field_t2655 * (*) (List_1_t2619 *, Predicate_1_t6019 *, const MethodInfo*))List_1_Find_m22542_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Field>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m39748(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t6019 *, const MethodInfo*))List_1_CheckMatch_m22543_gshared)(__this /* static, unused */, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<Language.Lua.Field>::FindAll(System.Predicate`1<T>)
#define List_1_FindAll_m39749(__this, ___match, method) (( List_1_t2619 * (*) (List_1_t2619 *, Predicate_1_t6019 *, const MethodInfo*))List_1_FindAll_m22544_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<Language.Lua.Field>::FindAllStackBits(System.Predicate`1<T>)
#define List_1_FindAllStackBits_m39750(__this, ___match, method) (( List_1_t2619 * (*) (List_1_t2619 *, Predicate_1_t6019 *, const MethodInfo*))List_1_FindAllStackBits_m22545_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<Language.Lua.Field>::FindAllList(System.Predicate`1<T>)
#define List_1_FindAllList_m39751(__this, ___match, method) (( List_1_t2619 * (*) (List_1_t2619 *, Predicate_1_t6019 *, const MethodInfo*))List_1_FindAllList_m22546_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<Language.Lua.Field>::FindIndex(System.Predicate`1<T>)
#define List_1_FindIndex_m39752(__this, ___match, method) (( int32_t (*) (List_1_t2619 *, Predicate_1_t6019 *, const MethodInfo*))List_1_FindIndex_m22547_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<Language.Lua.Field>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m39753(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t2619 *, int32_t, int32_t, Predicate_1_t6019 *, const MethodInfo*))List_1_GetIndex_m22548_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Language.Lua.Field>::GetEnumerator()
#define List_1_GetEnumerator_m12168(__this, method) (( Enumerator_t2668  (*) (List_1_t2619 *, const MethodInfo*))List_1_GetEnumerator_m22549_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<Language.Lua.Field>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m39754(__this, ___index, ___count, method) (( List_1_t2619 * (*) (List_1_t2619 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m22550_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<Language.Lua.Field>::IndexOf(T)
#define List_1_IndexOf_m39755(__this, ___item, method) (( int32_t (*) (List_1_t2619 *, Field_t2655 *, const MethodInfo*))List_1_IndexOf_m13948_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Field>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m39756(__this, ___start, ___delta, method) (( void (*) (List_1_t2619 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m22551_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Field>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m39757(__this, ___index, method) (( void (*) (List_1_t2619 *, int32_t, const MethodInfo*))List_1_CheckIndex_m22552_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Field>::Insert(System.Int32,T)
#define List_1_Insert_m39758(__this, ___index, ___item, method) (( void (*) (List_1_t2619 *, int32_t, Field_t2655 *, const MethodInfo*))List_1_Insert_m13949_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Field>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m39759(__this, ___collection, method) (( void (*) (List_1_t2619 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m22553_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Field>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m39760(__this, ___index, ___collection, method) (( void (*) (List_1_t2619 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m22554_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Field>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m39761(__this, ___index, ___collection, method) (( void (*) (List_1_t2619 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m22555_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Field>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m39762(__this, ___index, ___enumerable, method) (( void (*) (List_1_t2619 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m22556_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<Language.Lua.Field>::Remove(T)
#define List_1_Remove_m39763(__this, ___item, method) (( bool (*) (List_1_t2619 *, Field_t2655 *, const MethodInfo*))List_1_Remove_m13946_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<Language.Lua.Field>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m39764(__this, ___match, method) (( int32_t (*) (List_1_t2619 *, Predicate_1_t6019 *, const MethodInfo*))List_1_RemoveAll_m22557_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Field>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m39765(__this, ___index, method) (( void (*) (List_1_t2619 *, int32_t, const MethodInfo*))List_1_RemoveAt_m13941_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Field>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m39766(__this, ___index, ___count, method) (( void (*) (List_1_t2619 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m22558_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Field>::Reverse()
#define List_1_Reverse_m39767(__this, method) (( void (*) (List_1_t2619 *, const MethodInfo*))List_1_Reverse_m22559_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Field>::Sort()
#define List_1_Sort_m39768(__this, method) (( void (*) (List_1_t2619 *, const MethodInfo*))List_1_Sort_m22560_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Field>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m39769(__this, ___comparer, method) (( void (*) (List_1_t2619 *, Object_t*, const MethodInfo*))List_1_Sort_m22561_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Field>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m39770(__this, ___comparison, method) (( void (*) (List_1_t2619 *, Comparison_1_t6020 *, const MethodInfo*))List_1_Sort_m22562_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<Language.Lua.Field>::ToArray()
#define List_1_ToArray_m39771(__this, method) (( FieldU5BU5D_t6016* (*) (List_1_t2619 *, const MethodInfo*))List_1_ToArray_m3165_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Field>::TrimExcess()
#define List_1_TrimExcess_m39772(__this, method) (( void (*) (List_1_t2619 *, const MethodInfo*))List_1_TrimExcess_m22563_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<Language.Lua.Field>::get_Capacity()
#define List_1_get_Capacity_m39773(__this, method) (( int32_t (*) (List_1_t2619 *, const MethodInfo*))List_1_get_Capacity_m22564_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Field>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m39774(__this, ___value, method) (( void (*) (List_1_t2619 *, int32_t, const MethodInfo*))List_1_set_Capacity_m22565_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<Language.Lua.Field>::get_Count()
#define List_1_get_Count_m39775(__this, method) (( int32_t (*) (List_1_t2619 *, const MethodInfo*))List_1_get_Count_m13927_gshared)(__this, method)
// T System.Collections.Generic.List`1<Language.Lua.Field>::get_Item(System.Int32)
#define List_1_get_Item_m39776(__this, ___index, method) (( Field_t2655 * (*) (List_1_t2619 *, int32_t, const MethodInfo*))List_1_get_Item_m13950_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Field>::set_Item(System.Int32,T)
#define List_1_set_Item_m39777(__this, ___index, ___value, method) (( void (*) (List_1_t2619 *, int32_t, Field_t2655 *, const MethodInfo*))List_1_set_Item_m13951_gshared)(__this, ___index, ___value, method)

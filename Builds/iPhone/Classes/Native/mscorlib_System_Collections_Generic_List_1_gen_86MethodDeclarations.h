#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<Language.Lua.Statement>
struct List_1_t2578;
// System.Object
struct Object_t;
// Language.Lua.Statement
struct Statement_t2576;
// System.Collections.Generic.IEnumerable`1<Language.Lua.Statement>
struct IEnumerable_1_t7005;
// Language.Lua.Statement[]
struct StatementU5BU5D_t5999;
// System.Collections.Generic.IEnumerator`1<Language.Lua.Statement>
struct IEnumerator_1_t7006;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Collections.Generic.ICollection`1<Language.Lua.Statement>
struct ICollection_1_t7007;
// System.Collections.ObjectModel.ReadOnlyCollection`1<Language.Lua.Statement>
struct ReadOnlyCollection_1_t6001;
// System.Predicate`1<Language.Lua.Statement>
struct Predicate_1_t6002;
// System.Collections.Generic.IComparer`1<Language.Lua.Statement>
struct IComparer_1_t7008;
// System.Comparison`1<Language.Lua.Statement>
struct Comparison_1_t6003;
// System.Collections.Generic.List`1/Enumerator<Language.Lua.Statement>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_28.h"

// System.Void System.Collections.Generic.List`1<Language.Lua.Statement>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_genMethodDeclarations.h"
#define List_1__ctor_m12140(__this, method) (( void (*) (List_1_t2578 *, const MethodInfo*))List_1__ctor_m84_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Statement>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m39400(__this, ___collection, method) (( void (*) (List_1_t2578 *, Object_t*, const MethodInfo*))List_1__ctor_m3166_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Statement>::.ctor(System.Int32)
#define List_1__ctor_m39401(__this, ___capacity, method) (( void (*) (List_1_t2578 *, int32_t, const MethodInfo*))List_1__ctor_m22534_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Statement>::.ctor(T[],System.Int32)
#define List_1__ctor_m39402(__this, ___data, ___size, method) (( void (*) (List_1_t2578 *, StatementU5BU5D_t5999*, int32_t, const MethodInfo*))List_1__ctor_m22535_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Statement>::.cctor()
#define List_1__cctor_m39403(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m22536_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<Language.Lua.Statement>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m39404(__this, method) (( Object_t* (*) (List_1_t2578 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m13947_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Statement>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m39405(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t2578 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m13930_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<Language.Lua.Statement>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m39406(__this, method) (( Object_t * (*) (List_1_t2578 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m13926_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<Language.Lua.Statement>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m39407(__this, ___item, method) (( int32_t (*) (List_1_t2578 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m13935_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<Language.Lua.Statement>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m39408(__this, ___item, method) (( bool (*) (List_1_t2578 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m13937_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<Language.Lua.Statement>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m39409(__this, ___item, method) (( int32_t (*) (List_1_t2578 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m13938_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Statement>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m39410(__this, ___index, ___item, method) (( void (*) (List_1_t2578 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m13939_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Statement>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m39411(__this, ___item, method) (( void (*) (List_1_t2578 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m13940_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<Language.Lua.Statement>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m39412(__this, method) (( bool (*) (List_1_t2578 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m13942_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Language.Lua.Statement>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m39413(__this, method) (( bool (*) (List_1_t2578 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m13928_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<Language.Lua.Statement>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m39414(__this, method) (( Object_t * (*) (List_1_t2578 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m13929_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Language.Lua.Statement>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m39415(__this, method) (( bool (*) (List_1_t2578 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m13931_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Language.Lua.Statement>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m39416(__this, method) (( bool (*) (List_1_t2578 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m13932_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<Language.Lua.Statement>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m39417(__this, ___index, method) (( Object_t * (*) (List_1_t2578 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m13933_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Statement>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m39418(__this, ___index, ___value, method) (( void (*) (List_1_t2578 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m13934_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Statement>::Add(T)
#define List_1_Add_m39419(__this, ___item, method) (( void (*) (List_1_t2578 *, Statement_t2576 *, const MethodInfo*))List_1_Add_m13943_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Statement>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m39420(__this, ___newCount, method) (( void (*) (List_1_t2578 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m22537_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Statement>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m39421(__this, ___idx, ___count, method) (( void (*) (List_1_t2578 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m22538_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Statement>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m39422(__this, ___collection, method) (( void (*) (List_1_t2578 *, Object_t*, const MethodInfo*))List_1_AddCollection_m22539_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Statement>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m39423(__this, ___enumerable, method) (( void (*) (List_1_t2578 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m22540_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Statement>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m39424(__this, ___collection, method) (( void (*) (List_1_t2578 *, Object_t*, const MethodInfo*))List_1_AddRange_m87_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<Language.Lua.Statement>::AsReadOnly()
#define List_1_AsReadOnly_m39425(__this, method) (( ReadOnlyCollection_1_t6001 * (*) (List_1_t2578 *, const MethodInfo*))List_1_AsReadOnly_m22541_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Statement>::Clear()
#define List_1_Clear_m39426(__this, method) (( void (*) (List_1_t2578 *, const MethodInfo*))List_1_Clear_m13936_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Language.Lua.Statement>::Contains(T)
#define List_1_Contains_m39427(__this, ___item, method) (( bool (*) (List_1_t2578 *, Statement_t2576 *, const MethodInfo*))List_1_Contains_m13944_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Statement>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m39428(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t2578 *, StatementU5BU5D_t5999*, int32_t, const MethodInfo*))List_1_CopyTo_m13945_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<Language.Lua.Statement>::Find(System.Predicate`1<T>)
#define List_1_Find_m39429(__this, ___match, method) (( Statement_t2576 * (*) (List_1_t2578 *, Predicate_1_t6002 *, const MethodInfo*))List_1_Find_m22542_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Statement>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m39430(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t6002 *, const MethodInfo*))List_1_CheckMatch_m22543_gshared)(__this /* static, unused */, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<Language.Lua.Statement>::FindAll(System.Predicate`1<T>)
#define List_1_FindAll_m39431(__this, ___match, method) (( List_1_t2578 * (*) (List_1_t2578 *, Predicate_1_t6002 *, const MethodInfo*))List_1_FindAll_m22544_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<Language.Lua.Statement>::FindAllStackBits(System.Predicate`1<T>)
#define List_1_FindAllStackBits_m39432(__this, ___match, method) (( List_1_t2578 * (*) (List_1_t2578 *, Predicate_1_t6002 *, const MethodInfo*))List_1_FindAllStackBits_m22545_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<Language.Lua.Statement>::FindAllList(System.Predicate`1<T>)
#define List_1_FindAllList_m39433(__this, ___match, method) (( List_1_t2578 * (*) (List_1_t2578 *, Predicate_1_t6002 *, const MethodInfo*))List_1_FindAllList_m22546_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<Language.Lua.Statement>::FindIndex(System.Predicate`1<T>)
#define List_1_FindIndex_m39434(__this, ___match, method) (( int32_t (*) (List_1_t2578 *, Predicate_1_t6002 *, const MethodInfo*))List_1_FindIndex_m22547_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<Language.Lua.Statement>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m39435(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t2578 *, int32_t, int32_t, Predicate_1_t6002 *, const MethodInfo*))List_1_GetIndex_m22548_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Language.Lua.Statement>::GetEnumerator()
#define List_1_GetEnumerator_m12141(__this, method) (( Enumerator_t2663  (*) (List_1_t2578 *, const MethodInfo*))List_1_GetEnumerator_m22549_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<Language.Lua.Statement>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m39436(__this, ___index, ___count, method) (( List_1_t2578 * (*) (List_1_t2578 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m22550_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<Language.Lua.Statement>::IndexOf(T)
#define List_1_IndexOf_m39437(__this, ___item, method) (( int32_t (*) (List_1_t2578 *, Statement_t2576 *, const MethodInfo*))List_1_IndexOf_m13948_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Statement>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m39438(__this, ___start, ___delta, method) (( void (*) (List_1_t2578 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m22551_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Statement>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m39439(__this, ___index, method) (( void (*) (List_1_t2578 *, int32_t, const MethodInfo*))List_1_CheckIndex_m22552_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Statement>::Insert(System.Int32,T)
#define List_1_Insert_m39440(__this, ___index, ___item, method) (( void (*) (List_1_t2578 *, int32_t, Statement_t2576 *, const MethodInfo*))List_1_Insert_m13949_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Statement>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m39441(__this, ___collection, method) (( void (*) (List_1_t2578 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m22553_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Statement>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m39442(__this, ___index, ___collection, method) (( void (*) (List_1_t2578 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m22554_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Statement>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m39443(__this, ___index, ___collection, method) (( void (*) (List_1_t2578 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m22555_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Statement>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m39444(__this, ___index, ___enumerable, method) (( void (*) (List_1_t2578 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m22556_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<Language.Lua.Statement>::Remove(T)
#define List_1_Remove_m39445(__this, ___item, method) (( bool (*) (List_1_t2578 *, Statement_t2576 *, const MethodInfo*))List_1_Remove_m13946_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<Language.Lua.Statement>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m39446(__this, ___match, method) (( int32_t (*) (List_1_t2578 *, Predicate_1_t6002 *, const MethodInfo*))List_1_RemoveAll_m22557_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Statement>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m39447(__this, ___index, method) (( void (*) (List_1_t2578 *, int32_t, const MethodInfo*))List_1_RemoveAt_m13941_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Statement>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m39448(__this, ___index, ___count, method) (( void (*) (List_1_t2578 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m22558_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Statement>::Reverse()
#define List_1_Reverse_m39449(__this, method) (( void (*) (List_1_t2578 *, const MethodInfo*))List_1_Reverse_m22559_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Statement>::Sort()
#define List_1_Sort_m39450(__this, method) (( void (*) (List_1_t2578 *, const MethodInfo*))List_1_Sort_m22560_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Statement>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m39451(__this, ___comparer, method) (( void (*) (List_1_t2578 *, Object_t*, const MethodInfo*))List_1_Sort_m22561_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Statement>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m39452(__this, ___comparison, method) (( void (*) (List_1_t2578 *, Comparison_1_t6003 *, const MethodInfo*))List_1_Sort_m22562_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<Language.Lua.Statement>::ToArray()
#define List_1_ToArray_m39453(__this, method) (( StatementU5BU5D_t5999* (*) (List_1_t2578 *, const MethodInfo*))List_1_ToArray_m3165_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Statement>::TrimExcess()
#define List_1_TrimExcess_m39454(__this, method) (( void (*) (List_1_t2578 *, const MethodInfo*))List_1_TrimExcess_m22563_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<Language.Lua.Statement>::get_Capacity()
#define List_1_get_Capacity_m39455(__this, method) (( int32_t (*) (List_1_t2578 *, const MethodInfo*))List_1_get_Capacity_m22564_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Statement>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m39456(__this, ___value, method) (( void (*) (List_1_t2578 *, int32_t, const MethodInfo*))List_1_set_Capacity_m22565_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<Language.Lua.Statement>::get_Count()
#define List_1_get_Count_m39457(__this, method) (( int32_t (*) (List_1_t2578 *, const MethodInfo*))List_1_get_Count_m13927_gshared)(__this, method)
// T System.Collections.Generic.List`1<Language.Lua.Statement>::get_Item(System.Int32)
#define List_1_get_Item_m39458(__this, ___index, method) (( Statement_t2576 * (*) (List_1_t2578 *, int32_t, const MethodInfo*))List_1_get_Item_m13950_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Statement>::set_Item(System.Int32,T)
#define List_1_set_Item_m39459(__this, ___index, ___value, method) (( void (*) (List_1_t2578 *, int32_t, Statement_t2576 *, const MethodInfo*))List_1_set_Item_m13951_gshared)(__this, ___index, ___value, method)

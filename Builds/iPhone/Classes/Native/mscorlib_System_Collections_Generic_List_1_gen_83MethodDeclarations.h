#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<Language.Lua.Expr>
struct List_1_t2574;
// System.Object
struct Object_t;
// Language.Lua.Expr
struct Expr_t2581;
// System.Collections.Generic.IEnumerable`1<Language.Lua.Expr>
struct IEnumerable_1_t6995;
// Language.Lua.Expr[]
struct ExprU5BU5D_t5984;
// System.Collections.Generic.IEnumerator`1<Language.Lua.Expr>
struct IEnumerator_1_t6996;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Collections.Generic.ICollection`1<Language.Lua.Expr>
struct ICollection_1_t6997;
// System.Collections.ObjectModel.ReadOnlyCollection`1<Language.Lua.Expr>
struct ReadOnlyCollection_1_t5986;
// System.Predicate`1<Language.Lua.Expr>
struct Predicate_1_t5987;
// System.Collections.Generic.IComparer`1<Language.Lua.Expr>
struct IComparer_1_t6998;
// System.Comparison`1<Language.Lua.Expr>
struct Comparison_1_t5988;
// System.Collections.Generic.List`1/Enumerator<Language.Lua.Expr>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_32.h"

// System.Void System.Collections.Generic.List`1<Language.Lua.Expr>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_genMethodDeclarations.h"
#define List_1__ctor_m12138(__this, method) (( void (*) (List_1_t2574 *, const MethodInfo*))List_1__ctor_m84_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Expr>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m39091(__this, ___collection, method) (( void (*) (List_1_t2574 *, Object_t*, const MethodInfo*))List_1__ctor_m3166_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Expr>::.ctor(System.Int32)
#define List_1__ctor_m39092(__this, ___capacity, method) (( void (*) (List_1_t2574 *, int32_t, const MethodInfo*))List_1__ctor_m22534_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Expr>::.ctor(T[],System.Int32)
#define List_1__ctor_m39093(__this, ___data, ___size, method) (( void (*) (List_1_t2574 *, ExprU5BU5D_t5984*, int32_t, const MethodInfo*))List_1__ctor_m22535_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Expr>::.cctor()
#define List_1__cctor_m39094(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m22536_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<Language.Lua.Expr>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m39095(__this, method) (( Object_t* (*) (List_1_t2574 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m13947_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Expr>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m39096(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t2574 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m13930_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<Language.Lua.Expr>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m39097(__this, method) (( Object_t * (*) (List_1_t2574 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m13926_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<Language.Lua.Expr>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m39098(__this, ___item, method) (( int32_t (*) (List_1_t2574 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m13935_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<Language.Lua.Expr>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m39099(__this, ___item, method) (( bool (*) (List_1_t2574 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m13937_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<Language.Lua.Expr>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m39100(__this, ___item, method) (( int32_t (*) (List_1_t2574 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m13938_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Expr>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m39101(__this, ___index, ___item, method) (( void (*) (List_1_t2574 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m13939_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Expr>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m39102(__this, ___item, method) (( void (*) (List_1_t2574 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m13940_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<Language.Lua.Expr>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m39103(__this, method) (( bool (*) (List_1_t2574 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m13942_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Language.Lua.Expr>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m39104(__this, method) (( bool (*) (List_1_t2574 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m13928_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<Language.Lua.Expr>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m39105(__this, method) (( Object_t * (*) (List_1_t2574 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m13929_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Language.Lua.Expr>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m39106(__this, method) (( bool (*) (List_1_t2574 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m13931_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Language.Lua.Expr>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m39107(__this, method) (( bool (*) (List_1_t2574 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m13932_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<Language.Lua.Expr>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m39108(__this, ___index, method) (( Object_t * (*) (List_1_t2574 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m13933_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Expr>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m39109(__this, ___index, ___value, method) (( void (*) (List_1_t2574 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m13934_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Expr>::Add(T)
#define List_1_Add_m39110(__this, ___item, method) (( void (*) (List_1_t2574 *, Expr_t2581 *, const MethodInfo*))List_1_Add_m13943_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Expr>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m39111(__this, ___newCount, method) (( void (*) (List_1_t2574 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m22537_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Expr>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m39112(__this, ___idx, ___count, method) (( void (*) (List_1_t2574 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m22538_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Expr>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m39113(__this, ___collection, method) (( void (*) (List_1_t2574 *, Object_t*, const MethodInfo*))List_1_AddCollection_m22539_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Expr>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m39114(__this, ___enumerable, method) (( void (*) (List_1_t2574 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m22540_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Expr>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m39115(__this, ___collection, method) (( void (*) (List_1_t2574 *, Object_t*, const MethodInfo*))List_1_AddRange_m87_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<Language.Lua.Expr>::AsReadOnly()
#define List_1_AsReadOnly_m39116(__this, method) (( ReadOnlyCollection_1_t5986 * (*) (List_1_t2574 *, const MethodInfo*))List_1_AsReadOnly_m22541_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Expr>::Clear()
#define List_1_Clear_m39117(__this, method) (( void (*) (List_1_t2574 *, const MethodInfo*))List_1_Clear_m13936_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Language.Lua.Expr>::Contains(T)
#define List_1_Contains_m39118(__this, ___item, method) (( bool (*) (List_1_t2574 *, Expr_t2581 *, const MethodInfo*))List_1_Contains_m13944_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Expr>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m39119(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t2574 *, ExprU5BU5D_t5984*, int32_t, const MethodInfo*))List_1_CopyTo_m13945_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<Language.Lua.Expr>::Find(System.Predicate`1<T>)
#define List_1_Find_m39120(__this, ___match, method) (( Expr_t2581 * (*) (List_1_t2574 *, Predicate_1_t5987 *, const MethodInfo*))List_1_Find_m22542_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Expr>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m39121(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t5987 *, const MethodInfo*))List_1_CheckMatch_m22543_gshared)(__this /* static, unused */, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<Language.Lua.Expr>::FindAll(System.Predicate`1<T>)
#define List_1_FindAll_m39122(__this, ___match, method) (( List_1_t2574 * (*) (List_1_t2574 *, Predicate_1_t5987 *, const MethodInfo*))List_1_FindAll_m22544_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<Language.Lua.Expr>::FindAllStackBits(System.Predicate`1<T>)
#define List_1_FindAllStackBits_m39123(__this, ___match, method) (( List_1_t2574 * (*) (List_1_t2574 *, Predicate_1_t5987 *, const MethodInfo*))List_1_FindAllStackBits_m22545_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<Language.Lua.Expr>::FindAllList(System.Predicate`1<T>)
#define List_1_FindAllList_m39124(__this, ___match, method) (( List_1_t2574 * (*) (List_1_t2574 *, Predicate_1_t5987 *, const MethodInfo*))List_1_FindAllList_m22546_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<Language.Lua.Expr>::FindIndex(System.Predicate`1<T>)
#define List_1_FindIndex_m39125(__this, ___match, method) (( int32_t (*) (List_1_t2574 *, Predicate_1_t5987 *, const MethodInfo*))List_1_FindIndex_m22547_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<Language.Lua.Expr>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m39126(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t2574 *, int32_t, int32_t, Predicate_1_t5987 *, const MethodInfo*))List_1_GetIndex_m22548_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Language.Lua.Expr>::GetEnumerator()
#define List_1_GetEnumerator_m12203(__this, method) (( Enumerator_t2673  (*) (List_1_t2574 *, const MethodInfo*))List_1_GetEnumerator_m22549_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<Language.Lua.Expr>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m39127(__this, ___index, ___count, method) (( List_1_t2574 * (*) (List_1_t2574 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m22550_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<Language.Lua.Expr>::IndexOf(T)
#define List_1_IndexOf_m39128(__this, ___item, method) (( int32_t (*) (List_1_t2574 *, Expr_t2581 *, const MethodInfo*))List_1_IndexOf_m13948_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Expr>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m39129(__this, ___start, ___delta, method) (( void (*) (List_1_t2574 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m22551_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Expr>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m39130(__this, ___index, method) (( void (*) (List_1_t2574 *, int32_t, const MethodInfo*))List_1_CheckIndex_m22552_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Expr>::Insert(System.Int32,T)
#define List_1_Insert_m39131(__this, ___index, ___item, method) (( void (*) (List_1_t2574 *, int32_t, Expr_t2581 *, const MethodInfo*))List_1_Insert_m13949_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Expr>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m39132(__this, ___collection, method) (( void (*) (List_1_t2574 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m22553_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Expr>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m39133(__this, ___index, ___collection, method) (( void (*) (List_1_t2574 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m22554_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Expr>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m39134(__this, ___index, ___collection, method) (( void (*) (List_1_t2574 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m22555_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Expr>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m39135(__this, ___index, ___enumerable, method) (( void (*) (List_1_t2574 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m22556_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<Language.Lua.Expr>::Remove(T)
#define List_1_Remove_m39136(__this, ___item, method) (( bool (*) (List_1_t2574 *, Expr_t2581 *, const MethodInfo*))List_1_Remove_m13946_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<Language.Lua.Expr>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m39137(__this, ___match, method) (( int32_t (*) (List_1_t2574 *, Predicate_1_t5987 *, const MethodInfo*))List_1_RemoveAll_m22557_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Expr>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m39138(__this, ___index, method) (( void (*) (List_1_t2574 *, int32_t, const MethodInfo*))List_1_RemoveAt_m13941_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Expr>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m39139(__this, ___index, ___count, method) (( void (*) (List_1_t2574 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m22558_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Expr>::Reverse()
#define List_1_Reverse_m39140(__this, method) (( void (*) (List_1_t2574 *, const MethodInfo*))List_1_Reverse_m22559_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Expr>::Sort()
#define List_1_Sort_m39141(__this, method) (( void (*) (List_1_t2574 *, const MethodInfo*))List_1_Sort_m22560_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Expr>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m39142(__this, ___comparer, method) (( void (*) (List_1_t2574 *, Object_t*, const MethodInfo*))List_1_Sort_m22561_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Expr>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m39143(__this, ___comparison, method) (( void (*) (List_1_t2574 *, Comparison_1_t5988 *, const MethodInfo*))List_1_Sort_m22562_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<Language.Lua.Expr>::ToArray()
#define List_1_ToArray_m39144(__this, method) (( ExprU5BU5D_t5984* (*) (List_1_t2574 *, const MethodInfo*))List_1_ToArray_m3165_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Expr>::TrimExcess()
#define List_1_TrimExcess_m39145(__this, method) (( void (*) (List_1_t2574 *, const MethodInfo*))List_1_TrimExcess_m22563_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<Language.Lua.Expr>::get_Capacity()
#define List_1_get_Capacity_m39146(__this, method) (( int32_t (*) (List_1_t2574 *, const MethodInfo*))List_1_get_Capacity_m22564_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Expr>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m39147(__this, ___value, method) (( void (*) (List_1_t2574 *, int32_t, const MethodInfo*))List_1_set_Capacity_m22565_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<Language.Lua.Expr>::get_Count()
#define List_1_get_Count_m39148(__this, method) (( int32_t (*) (List_1_t2574 *, const MethodInfo*))List_1_get_Count_m13927_gshared)(__this, method)
// T System.Collections.Generic.List`1<Language.Lua.Expr>::get_Item(System.Int32)
#define List_1_get_Item_m39149(__this, ___index, method) (( Expr_t2581 * (*) (List_1_t2574 *, int32_t, const MethodInfo*))List_1_get_Item_m13950_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Expr>::set_Item(System.Int32,T)
#define List_1_set_Item_m39150(__this, ___index, ___value, method) (( void (*) (List_1_t2574 *, int32_t, Expr_t2581 *, const MethodInfo*))List_1_set_Item_m13951_gshared)(__this, ___index, ___value, method)

#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<Language.Lua.Var>
struct List_1_t2573;
// System.Object
struct Object_t;
// Language.Lua.Var
struct Var_t2659;
// System.Collections.Generic.IEnumerable`1<Language.Lua.Var>
struct IEnumerable_1_t6991;
// Language.Lua.Var[]
struct VarU5BU5D_t5978;
// System.Collections.Generic.IEnumerator`1<Language.Lua.Var>
struct IEnumerator_1_t6992;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Collections.Generic.ICollection`1<Language.Lua.Var>
struct ICollection_1_t6993;
// System.Collections.ObjectModel.ReadOnlyCollection`1<Language.Lua.Var>
struct ReadOnlyCollection_1_t5980;
// System.Predicate`1<Language.Lua.Var>
struct Predicate_1_t5981;
// System.Collections.Generic.IComparer`1<Language.Lua.Var>
struct IComparer_1_t6994;
// System.Comparison`1<Language.Lua.Var>
struct Comparison_1_t5983;
// System.Collections.Generic.List`1/Enumerator<Language.Lua.Var>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_96.h"

// System.Void System.Collections.Generic.List`1<Language.Lua.Var>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_genMethodDeclarations.h"
#define List_1__ctor_m12137(__this, method) (( void (*) (List_1_t2573 *, const MethodInfo*))List_1__ctor_m84_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Var>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m38986(__this, ___collection, method) (( void (*) (List_1_t2573 *, Object_t*, const MethodInfo*))List_1__ctor_m3166_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Var>::.ctor(System.Int32)
#define List_1__ctor_m38987(__this, ___capacity, method) (( void (*) (List_1_t2573 *, int32_t, const MethodInfo*))List_1__ctor_m22534_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Var>::.ctor(T[],System.Int32)
#define List_1__ctor_m38988(__this, ___data, ___size, method) (( void (*) (List_1_t2573 *, VarU5BU5D_t5978*, int32_t, const MethodInfo*))List_1__ctor_m22535_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Var>::.cctor()
#define List_1__cctor_m38989(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m22536_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<Language.Lua.Var>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m38990(__this, method) (( Object_t* (*) (List_1_t2573 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m13947_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Var>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m38991(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t2573 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m13930_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<Language.Lua.Var>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m38992(__this, method) (( Object_t * (*) (List_1_t2573 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m13926_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<Language.Lua.Var>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m38993(__this, ___item, method) (( int32_t (*) (List_1_t2573 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m13935_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<Language.Lua.Var>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m38994(__this, ___item, method) (( bool (*) (List_1_t2573 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m13937_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<Language.Lua.Var>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m38995(__this, ___item, method) (( int32_t (*) (List_1_t2573 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m13938_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Var>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m38996(__this, ___index, ___item, method) (( void (*) (List_1_t2573 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m13939_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Var>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m38997(__this, ___item, method) (( void (*) (List_1_t2573 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m13940_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<Language.Lua.Var>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m38998(__this, method) (( bool (*) (List_1_t2573 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m13942_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Language.Lua.Var>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m38999(__this, method) (( bool (*) (List_1_t2573 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m13928_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<Language.Lua.Var>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m39000(__this, method) (( Object_t * (*) (List_1_t2573 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m13929_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Language.Lua.Var>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m39001(__this, method) (( bool (*) (List_1_t2573 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m13931_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Language.Lua.Var>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m39002(__this, method) (( bool (*) (List_1_t2573 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m13932_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<Language.Lua.Var>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m39003(__this, ___index, method) (( Object_t * (*) (List_1_t2573 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m13933_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Var>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m39004(__this, ___index, ___value, method) (( void (*) (List_1_t2573 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m13934_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Var>::Add(T)
#define List_1_Add_m39005(__this, ___item, method) (( void (*) (List_1_t2573 *, Var_t2659 *, const MethodInfo*))List_1_Add_m13943_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Var>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m39006(__this, ___newCount, method) (( void (*) (List_1_t2573 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m22537_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Var>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m39007(__this, ___idx, ___count, method) (( void (*) (List_1_t2573 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m22538_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Var>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m39008(__this, ___collection, method) (( void (*) (List_1_t2573 *, Object_t*, const MethodInfo*))List_1_AddCollection_m22539_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Var>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m39009(__this, ___enumerable, method) (( void (*) (List_1_t2573 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m22540_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Var>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m39010(__this, ___collection, method) (( void (*) (List_1_t2573 *, Object_t*, const MethodInfo*))List_1_AddRange_m87_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<Language.Lua.Var>::AsReadOnly()
#define List_1_AsReadOnly_m39011(__this, method) (( ReadOnlyCollection_1_t5980 * (*) (List_1_t2573 *, const MethodInfo*))List_1_AsReadOnly_m22541_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Var>::Clear()
#define List_1_Clear_m39012(__this, method) (( void (*) (List_1_t2573 *, const MethodInfo*))List_1_Clear_m13936_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Language.Lua.Var>::Contains(T)
#define List_1_Contains_m39013(__this, ___item, method) (( bool (*) (List_1_t2573 *, Var_t2659 *, const MethodInfo*))List_1_Contains_m13944_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Var>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m39014(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t2573 *, VarU5BU5D_t5978*, int32_t, const MethodInfo*))List_1_CopyTo_m13945_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<Language.Lua.Var>::Find(System.Predicate`1<T>)
#define List_1_Find_m39015(__this, ___match, method) (( Var_t2659 * (*) (List_1_t2573 *, Predicate_1_t5981 *, const MethodInfo*))List_1_Find_m22542_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Var>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m39016(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t5981 *, const MethodInfo*))List_1_CheckMatch_m22543_gshared)(__this /* static, unused */, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<Language.Lua.Var>::FindAll(System.Predicate`1<T>)
#define List_1_FindAll_m39017(__this, ___match, method) (( List_1_t2573 * (*) (List_1_t2573 *, Predicate_1_t5981 *, const MethodInfo*))List_1_FindAll_m22544_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<Language.Lua.Var>::FindAllStackBits(System.Predicate`1<T>)
#define List_1_FindAllStackBits_m39018(__this, ___match, method) (( List_1_t2573 * (*) (List_1_t2573 *, Predicate_1_t5981 *, const MethodInfo*))List_1_FindAllStackBits_m22545_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<Language.Lua.Var>::FindAllList(System.Predicate`1<T>)
#define List_1_FindAllList_m39019(__this, ___match, method) (( List_1_t2573 * (*) (List_1_t2573 *, Predicate_1_t5981 *, const MethodInfo*))List_1_FindAllList_m22546_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<Language.Lua.Var>::FindIndex(System.Predicate`1<T>)
#define List_1_FindIndex_m39020(__this, ___match, method) (( int32_t (*) (List_1_t2573 *, Predicate_1_t5981 *, const MethodInfo*))List_1_FindIndex_m22547_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<Language.Lua.Var>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m39021(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t2573 *, int32_t, int32_t, Predicate_1_t5981 *, const MethodInfo*))List_1_GetIndex_m22548_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Language.Lua.Var>::GetEnumerator()
#define List_1_GetEnumerator_m39022(__this, method) (( Enumerator_t5982  (*) (List_1_t2573 *, const MethodInfo*))List_1_GetEnumerator_m22549_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<Language.Lua.Var>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m39023(__this, ___index, ___count, method) (( List_1_t2573 * (*) (List_1_t2573 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m22550_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<Language.Lua.Var>::IndexOf(T)
#define List_1_IndexOf_m39024(__this, ___item, method) (( int32_t (*) (List_1_t2573 *, Var_t2659 *, const MethodInfo*))List_1_IndexOf_m13948_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Var>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m39025(__this, ___start, ___delta, method) (( void (*) (List_1_t2573 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m22551_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Var>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m39026(__this, ___index, method) (( void (*) (List_1_t2573 *, int32_t, const MethodInfo*))List_1_CheckIndex_m22552_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Var>::Insert(System.Int32,T)
#define List_1_Insert_m39027(__this, ___index, ___item, method) (( void (*) (List_1_t2573 *, int32_t, Var_t2659 *, const MethodInfo*))List_1_Insert_m13949_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Var>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m39028(__this, ___collection, method) (( void (*) (List_1_t2573 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m22553_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Var>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m39029(__this, ___index, ___collection, method) (( void (*) (List_1_t2573 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m22554_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Var>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m39030(__this, ___index, ___collection, method) (( void (*) (List_1_t2573 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m22555_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Var>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m39031(__this, ___index, ___enumerable, method) (( void (*) (List_1_t2573 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m22556_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<Language.Lua.Var>::Remove(T)
#define List_1_Remove_m39032(__this, ___item, method) (( bool (*) (List_1_t2573 *, Var_t2659 *, const MethodInfo*))List_1_Remove_m13946_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<Language.Lua.Var>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m39033(__this, ___match, method) (( int32_t (*) (List_1_t2573 *, Predicate_1_t5981 *, const MethodInfo*))List_1_RemoveAll_m22557_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Var>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m39034(__this, ___index, method) (( void (*) (List_1_t2573 *, int32_t, const MethodInfo*))List_1_RemoveAt_m13941_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Var>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m39035(__this, ___index, ___count, method) (( void (*) (List_1_t2573 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m22558_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Var>::Reverse()
#define List_1_Reverse_m39036(__this, method) (( void (*) (List_1_t2573 *, const MethodInfo*))List_1_Reverse_m22559_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Var>::Sort()
#define List_1_Sort_m39037(__this, method) (( void (*) (List_1_t2573 *, const MethodInfo*))List_1_Sort_m22560_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Var>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m39038(__this, ___comparer, method) (( void (*) (List_1_t2573 *, Object_t*, const MethodInfo*))List_1_Sort_m22561_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Var>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m39039(__this, ___comparison, method) (( void (*) (List_1_t2573 *, Comparison_1_t5983 *, const MethodInfo*))List_1_Sort_m22562_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<Language.Lua.Var>::ToArray()
#define List_1_ToArray_m39040(__this, method) (( VarU5BU5D_t5978* (*) (List_1_t2573 *, const MethodInfo*))List_1_ToArray_m3165_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Var>::TrimExcess()
#define List_1_TrimExcess_m39041(__this, method) (( void (*) (List_1_t2573 *, const MethodInfo*))List_1_TrimExcess_m22563_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<Language.Lua.Var>::get_Capacity()
#define List_1_get_Capacity_m39042(__this, method) (( int32_t (*) (List_1_t2573 *, const MethodInfo*))List_1_get_Capacity_m22564_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Var>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m39043(__this, ___value, method) (( void (*) (List_1_t2573 *, int32_t, const MethodInfo*))List_1_set_Capacity_m22565_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<Language.Lua.Var>::get_Count()
#define List_1_get_Count_m39044(__this, method) (( int32_t (*) (List_1_t2573 *, const MethodInfo*))List_1_get_Count_m13927_gshared)(__this, method)
// T System.Collections.Generic.List`1<Language.Lua.Var>::get_Item(System.Int32)
#define List_1_get_Item_m39045(__this, ___index, method) (( Var_t2659 * (*) (List_1_t2573 *, int32_t, const MethodInfo*))List_1_get_Item_m13950_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Var>::set_Item(System.Int32,T)
#define List_1_set_Item_m39046(__this, ___index, ___value, method) (( void (*) (List_1_t2573 *, int32_t, Var_t2659 *, const MethodInfo*))List_1_set_Item_m13951_gshared)(__this, ___index, ___value, method)

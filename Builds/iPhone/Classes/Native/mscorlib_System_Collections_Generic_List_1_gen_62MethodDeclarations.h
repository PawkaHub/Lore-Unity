#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation>>
struct List_1_t1458;
// System.Object
struct Object_t;
// System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation>
struct IDictionary_2_t1450;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation>>
struct IEnumerable_1_t1609;
// System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation>[]
struct IDictionary_2U5BU5D_t5759;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation>>
struct IEnumerator_1_t6820;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation>>
struct ICollection_1_t6869;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation>>
struct ReadOnlyCollection_1_t5761;
// System.Predicate`1<System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation>>
struct Predicate_1_t5762;
// System.Collections.Generic.IComparer`1<System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation>>
struct IComparer_1_t6870;
// System.Comparison`1<System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation>>
struct Comparison_1_t5764;
// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_79.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation>>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_genMethodDeclarations.h"
#define List_1__ctor_m35643(__this, method) (( void (*) (List_1_t1458 *, const MethodInfo*))List_1__ctor_m84_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m35644(__this, ___collection, method) (( void (*) (List_1_t1458 *, Object_t*, const MethodInfo*))List_1__ctor_m3166_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation>>::.ctor(System.Int32)
#define List_1__ctor_m35645(__this, ___capacity, method) (( void (*) (List_1_t1458 *, int32_t, const MethodInfo*))List_1__ctor_m22534_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation>>::.ctor(T[],System.Int32)
#define List_1__ctor_m35646(__this, ___data, ___size, method) (( void (*) (List_1_t1458 *, IDictionary_2U5BU5D_t5759*, int32_t, const MethodInfo*))List_1__ctor_m22535_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation>>::.cctor()
#define List_1__cctor_m35647(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m22536_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m35648(__this, method) (( Object_t* (*) (List_1_t1458 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m13947_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m35649(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t1458 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m13930_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation>>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m35650(__this, method) (( Object_t * (*) (List_1_t1458 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m13926_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation>>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m35651(__this, ___item, method) (( int32_t (*) (List_1_t1458 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m13935_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation>>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m35652(__this, ___item, method) (( bool (*) (List_1_t1458 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m13937_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation>>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m35653(__this, ___item, method) (( int32_t (*) (List_1_t1458 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m13938_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation>>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m35654(__this, ___index, ___item, method) (( void (*) (List_1_t1458 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m13939_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation>>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m35655(__this, ___item, method) (( void (*) (List_1_t1458 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m13940_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m35656(__this, method) (( bool (*) (List_1_t1458 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m13942_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation>>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m35657(__this, method) (( bool (*) (List_1_t1458 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m13928_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation>>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m35658(__this, method) (( Object_t * (*) (List_1_t1458 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m13929_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation>>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m35659(__this, method) (( bool (*) (List_1_t1458 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m13931_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation>>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m35660(__this, method) (( bool (*) (List_1_t1458 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m13932_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation>>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m35661(__this, ___index, method) (( Object_t * (*) (List_1_t1458 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m13933_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation>>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m35662(__this, ___index, ___value, method) (( void (*) (List_1_t1458 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m13934_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation>>::Add(T)
#define List_1_Add_m35663(__this, ___item, method) (( void (*) (List_1_t1458 *, Object_t*, const MethodInfo*))List_1_Add_m13943_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation>>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m35664(__this, ___newCount, method) (( void (*) (List_1_t1458 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m22537_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation>>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m35665(__this, ___idx, ___count, method) (( void (*) (List_1_t1458 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m22538_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m35666(__this, ___collection, method) (( void (*) (List_1_t1458 *, Object_t*, const MethodInfo*))List_1_AddCollection_m22539_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m35667(__this, ___enumerable, method) (( void (*) (List_1_t1458 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m22540_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m35668(__this, ___collection, method) (( void (*) (List_1_t1458 *, Object_t*, const MethodInfo*))List_1_AddRange_m87_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation>>::AsReadOnly()
#define List_1_AsReadOnly_m35669(__this, method) (( ReadOnlyCollection_1_t5761 * (*) (List_1_t1458 *, const MethodInfo*))List_1_AsReadOnly_m22541_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation>>::Clear()
#define List_1_Clear_m35670(__this, method) (( void (*) (List_1_t1458 *, const MethodInfo*))List_1_Clear_m13936_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation>>::Contains(T)
#define List_1_Contains_m35671(__this, ___item, method) (( bool (*) (List_1_t1458 *, Object_t*, const MethodInfo*))List_1_Contains_m13944_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation>>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m35672(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t1458 *, IDictionary_2U5BU5D_t5759*, int32_t, const MethodInfo*))List_1_CopyTo_m13945_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation>>::Find(System.Predicate`1<T>)
#define List_1_Find_m35673(__this, ___match, method) (( Object_t* (*) (List_1_t1458 *, Predicate_1_t5762 *, const MethodInfo*))List_1_Find_m22542_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation>>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m35674(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t5762 *, const MethodInfo*))List_1_CheckMatch_m22543_gshared)(__this /* static, unused */, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation>>::FindAll(System.Predicate`1<T>)
#define List_1_FindAll_m35675(__this, ___match, method) (( List_1_t1458 * (*) (List_1_t1458 *, Predicate_1_t5762 *, const MethodInfo*))List_1_FindAll_m22544_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation>>::FindAllStackBits(System.Predicate`1<T>)
#define List_1_FindAllStackBits_m35676(__this, ___match, method) (( List_1_t1458 * (*) (List_1_t1458 *, Predicate_1_t5762 *, const MethodInfo*))List_1_FindAllStackBits_m22545_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation>>::FindAllList(System.Predicate`1<T>)
#define List_1_FindAllList_m35677(__this, ___match, method) (( List_1_t1458 * (*) (List_1_t1458 *, Predicate_1_t5762 *, const MethodInfo*))List_1_FindAllList_m22546_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation>>::FindIndex(System.Predicate`1<T>)
#define List_1_FindIndex_m35678(__this, ___match, method) (( int32_t (*) (List_1_t1458 *, Predicate_1_t5762 *, const MethodInfo*))List_1_FindIndex_m22547_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m35679(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t1458 *, int32_t, int32_t, Predicate_1_t5762 *, const MethodInfo*))List_1_GetIndex_m22548_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation>>::GetEnumerator()
#define List_1_GetEnumerator_m35680(__this, method) (( Enumerator_t5763  (*) (List_1_t1458 *, const MethodInfo*))List_1_GetEnumerator_m22549_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation>>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m35681(__this, ___index, ___count, method) (( List_1_t1458 * (*) (List_1_t1458 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m22550_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation>>::IndexOf(T)
#define List_1_IndexOf_m35682(__this, ___item, method) (( int32_t (*) (List_1_t1458 *, Object_t*, const MethodInfo*))List_1_IndexOf_m13948_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation>>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m35683(__this, ___start, ___delta, method) (( void (*) (List_1_t1458 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m22551_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation>>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m35684(__this, ___index, method) (( void (*) (List_1_t1458 *, int32_t, const MethodInfo*))List_1_CheckIndex_m22552_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation>>::Insert(System.Int32,T)
#define List_1_Insert_m35685(__this, ___index, ___item, method) (( void (*) (List_1_t1458 *, int32_t, Object_t*, const MethodInfo*))List_1_Insert_m13949_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m35686(__this, ___collection, method) (( void (*) (List_1_t1458 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m22553_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation>>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m35687(__this, ___index, ___collection, method) (( void (*) (List_1_t1458 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m22554_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation>>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m35688(__this, ___index, ___collection, method) (( void (*) (List_1_t1458 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m22555_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation>>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m35689(__this, ___index, ___enumerable, method) (( void (*) (List_1_t1458 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m22556_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation>>::Remove(T)
#define List_1_Remove_m35690(__this, ___item, method) (( bool (*) (List_1_t1458 *, Object_t*, const MethodInfo*))List_1_Remove_m13946_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation>>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m35691(__this, ___match, method) (( int32_t (*) (List_1_t1458 *, Predicate_1_t5762 *, const MethodInfo*))List_1_RemoveAll_m22557_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation>>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m35692(__this, ___index, method) (( void (*) (List_1_t1458 *, int32_t, const MethodInfo*))List_1_RemoveAt_m13941_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation>>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m35693(__this, ___index, ___count, method) (( void (*) (List_1_t1458 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m22558_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation>>::Reverse()
#define List_1_Reverse_m35694(__this, method) (( void (*) (List_1_t1458 *, const MethodInfo*))List_1_Reverse_m22559_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation>>::Sort()
#define List_1_Sort_m35695(__this, method) (( void (*) (List_1_t1458 *, const MethodInfo*))List_1_Sort_m22560_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation>>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m35696(__this, ___comparer, method) (( void (*) (List_1_t1458 *, Object_t*, const MethodInfo*))List_1_Sort_m22561_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation>>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m35697(__this, ___comparison, method) (( void (*) (List_1_t1458 *, Comparison_1_t5764 *, const MethodInfo*))List_1_Sort_m22562_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation>>::ToArray()
#define List_1_ToArray_m35698(__this, method) (( IDictionary_2U5BU5D_t5759* (*) (List_1_t1458 *, const MethodInfo*))List_1_ToArray_m3165_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation>>::TrimExcess()
#define List_1_TrimExcess_m35699(__this, method) (( void (*) (List_1_t1458 *, const MethodInfo*))List_1_TrimExcess_m22563_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation>>::get_Capacity()
#define List_1_get_Capacity_m35700(__this, method) (( int32_t (*) (List_1_t1458 *, const MethodInfo*))List_1_get_Capacity_m22564_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation>>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m35701(__this, ___value, method) (( void (*) (List_1_t1458 *, int32_t, const MethodInfo*))List_1_set_Capacity_m22565_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation>>::get_Count()
#define List_1_get_Count_m35702(__this, method) (( int32_t (*) (List_1_t1458 *, const MethodInfo*))List_1_get_Count_m13927_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation>>::get_Item(System.Int32)
#define List_1_get_Item_m35703(__this, ___index, method) (( Object_t* (*) (List_1_t1458 *, int32_t, const MethodInfo*))List_1_get_Item_m13950_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation>>::set_Item(System.Int32,T)
#define List_1_set_Item_m35704(__this, ___index, ___value, method) (( void (*) (List_1_t1458 *, int32_t, Object_t*, const MethodInfo*))List_1_set_Item_m13951_gshared)(__this, ___index, ___value, method)

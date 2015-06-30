#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.Texture2D>
struct List_1_t783;
// System.Object
struct Object_t;
// UnityEngine.Texture2D
struct Texture2D_t90;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Texture2D>
struct IEnumerable_1_t6668;
// UnityEngine.Texture2D[]
struct Texture2DU5BU5D_t547;
// System.Collections.Generic.IEnumerator`1<UnityEngine.Texture2D>
struct IEnumerator_1_t6669;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Collections.Generic.ICollection`1<UnityEngine.Texture2D>
struct ICollection_1_t6670;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Texture2D>
struct ReadOnlyCollection_1_t5347;
// System.Predicate`1<UnityEngine.Texture2D>
struct Predicate_1_t5348;
// System.Collections.Generic.IComparer`1<UnityEngine.Texture2D>
struct IComparer_1_t6671;
// System.Comparison`1<UnityEngine.Texture2D>
struct Comparison_1_t5350;
// System.Collections.Generic.List`1/Enumerator<UnityEngine.Texture2D>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_69.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.Texture2D>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_genMethodDeclarations.h"
#define List_1__ctor_m5276(__this, method) (( void (*) (List_1_t783 *, const MethodInfo*))List_1__ctor_m84_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Texture2D>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m29602(__this, ___collection, method) (( void (*) (List_1_t783 *, Object_t*, const MethodInfo*))List_1__ctor_m3166_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Texture2D>::.ctor(System.Int32)
#define List_1__ctor_m29603(__this, ___capacity, method) (( void (*) (List_1_t783 *, int32_t, const MethodInfo*))List_1__ctor_m22534_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Texture2D>::.ctor(T[],System.Int32)
#define List_1__ctor_m29604(__this, ___data, ___size, method) (( void (*) (List_1_t783 *, Texture2DU5BU5D_t547*, int32_t, const MethodInfo*))List_1__ctor_m22535_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Texture2D>::.cctor()
#define List_1__cctor_m29605(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m22536_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.Texture2D>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m29606(__this, method) (( Object_t* (*) (List_1_t783 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m13947_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Texture2D>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m29607(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t783 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m13930_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.Texture2D>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m29608(__this, method) (( Object_t * (*) (List_1_t783 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m13926_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Texture2D>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m29609(__this, ___item, method) (( int32_t (*) (List_1_t783 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m13935_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Texture2D>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m29610(__this, ___item, method) (( bool (*) (List_1_t783 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m13937_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Texture2D>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m29611(__this, ___item, method) (( int32_t (*) (List_1_t783 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m13938_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Texture2D>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m29612(__this, ___index, ___item, method) (( void (*) (List_1_t783 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m13939_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Texture2D>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m29613(__this, ___item, method) (( void (*) (List_1_t783 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m13940_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Texture2D>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m29614(__this, method) (( bool (*) (List_1_t783 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m13942_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Texture2D>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m29615(__this, method) (( bool (*) (List_1_t783 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m13928_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.Texture2D>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m29616(__this, method) (( Object_t * (*) (List_1_t783 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m13929_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Texture2D>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m29617(__this, method) (( bool (*) (List_1_t783 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m13931_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Texture2D>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m29618(__this, method) (( bool (*) (List_1_t783 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m13932_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.Texture2D>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m29619(__this, ___index, method) (( Object_t * (*) (List_1_t783 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m13933_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Texture2D>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m29620(__this, ___index, ___value, method) (( void (*) (List_1_t783 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m13934_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Texture2D>::Add(T)
#define List_1_Add_m29621(__this, ___item, method) (( void (*) (List_1_t783 *, Texture2D_t90 *, const MethodInfo*))List_1_Add_m13943_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Texture2D>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m29622(__this, ___newCount, method) (( void (*) (List_1_t783 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m22537_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Texture2D>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m29623(__this, ___idx, ___count, method) (( void (*) (List_1_t783 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m22538_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Texture2D>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m29624(__this, ___collection, method) (( void (*) (List_1_t783 *, Object_t*, const MethodInfo*))List_1_AddCollection_m22539_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Texture2D>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m29625(__this, ___enumerable, method) (( void (*) (List_1_t783 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m22540_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Texture2D>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m29626(__this, ___collection, method) (( void (*) (List_1_t783 *, Object_t*, const MethodInfo*))List_1_AddRange_m87_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.Texture2D>::AsReadOnly()
#define List_1_AsReadOnly_m29627(__this, method) (( ReadOnlyCollection_1_t5347 * (*) (List_1_t783 *, const MethodInfo*))List_1_AsReadOnly_m22541_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Texture2D>::Clear()
#define List_1_Clear_m29628(__this, method) (( void (*) (List_1_t783 *, const MethodInfo*))List_1_Clear_m13936_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Texture2D>::Contains(T)
#define List_1_Contains_m29629(__this, ___item, method) (( bool (*) (List_1_t783 *, Texture2D_t90 *, const MethodInfo*))List_1_Contains_m13944_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Texture2D>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m29630(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t783 *, Texture2DU5BU5D_t547*, int32_t, const MethodInfo*))List_1_CopyTo_m13945_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.Texture2D>::Find(System.Predicate`1<T>)
#define List_1_Find_m29631(__this, ___match, method) (( Texture2D_t90 * (*) (List_1_t783 *, Predicate_1_t5348 *, const MethodInfo*))List_1_Find_m22542_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Texture2D>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m29632(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t5348 *, const MethodInfo*))List_1_CheckMatch_m22543_gshared)(__this /* static, unused */, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.Texture2D>::FindAll(System.Predicate`1<T>)
#define List_1_FindAll_m29633(__this, ___match, method) (( List_1_t783 * (*) (List_1_t783 *, Predicate_1_t5348 *, const MethodInfo*))List_1_FindAll_m22544_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.Texture2D>::FindAllStackBits(System.Predicate`1<T>)
#define List_1_FindAllStackBits_m29634(__this, ___match, method) (( List_1_t783 * (*) (List_1_t783 *, Predicate_1_t5348 *, const MethodInfo*))List_1_FindAllStackBits_m22545_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.Texture2D>::FindAllList(System.Predicate`1<T>)
#define List_1_FindAllList_m29635(__this, ___match, method) (( List_1_t783 * (*) (List_1_t783 *, Predicate_1_t5348 *, const MethodInfo*))List_1_FindAllList_m22546_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Texture2D>::FindIndex(System.Predicate`1<T>)
#define List_1_FindIndex_m29636(__this, ___match, method) (( int32_t (*) (List_1_t783 *, Predicate_1_t5348 *, const MethodInfo*))List_1_FindIndex_m22547_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Texture2D>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m29637(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t783 *, int32_t, int32_t, Predicate_1_t5348 *, const MethodInfo*))List_1_GetIndex_m22548_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.Texture2D>::GetEnumerator()
#define List_1_GetEnumerator_m29638(__this, method) (( Enumerator_t5349  (*) (List_1_t783 *, const MethodInfo*))List_1_GetEnumerator_m22549_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.Texture2D>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m29639(__this, ___index, ___count, method) (( List_1_t783 * (*) (List_1_t783 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m22550_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Texture2D>::IndexOf(T)
#define List_1_IndexOf_m29640(__this, ___item, method) (( int32_t (*) (List_1_t783 *, Texture2D_t90 *, const MethodInfo*))List_1_IndexOf_m13948_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Texture2D>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m29641(__this, ___start, ___delta, method) (( void (*) (List_1_t783 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m22551_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Texture2D>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m29642(__this, ___index, method) (( void (*) (List_1_t783 *, int32_t, const MethodInfo*))List_1_CheckIndex_m22552_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Texture2D>::Insert(System.Int32,T)
#define List_1_Insert_m29643(__this, ___index, ___item, method) (( void (*) (List_1_t783 *, int32_t, Texture2D_t90 *, const MethodInfo*))List_1_Insert_m13949_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Texture2D>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m29644(__this, ___collection, method) (( void (*) (List_1_t783 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m22553_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Texture2D>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m29645(__this, ___index, ___collection, method) (( void (*) (List_1_t783 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m22554_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Texture2D>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m29646(__this, ___index, ___collection, method) (( void (*) (List_1_t783 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m22555_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Texture2D>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m29647(__this, ___index, ___enumerable, method) (( void (*) (List_1_t783 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m22556_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Texture2D>::Remove(T)
#define List_1_Remove_m29648(__this, ___item, method) (( bool (*) (List_1_t783 *, Texture2D_t90 *, const MethodInfo*))List_1_Remove_m13946_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Texture2D>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m29649(__this, ___match, method) (( int32_t (*) (List_1_t783 *, Predicate_1_t5348 *, const MethodInfo*))List_1_RemoveAll_m22557_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Texture2D>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m29650(__this, ___index, method) (( void (*) (List_1_t783 *, int32_t, const MethodInfo*))List_1_RemoveAt_m13941_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Texture2D>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m29651(__this, ___index, ___count, method) (( void (*) (List_1_t783 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m22558_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Texture2D>::Reverse()
#define List_1_Reverse_m29652(__this, method) (( void (*) (List_1_t783 *, const MethodInfo*))List_1_Reverse_m22559_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Texture2D>::Sort()
#define List_1_Sort_m29653(__this, method) (( void (*) (List_1_t783 *, const MethodInfo*))List_1_Sort_m22560_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Texture2D>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m29654(__this, ___comparer, method) (( void (*) (List_1_t783 *, Object_t*, const MethodInfo*))List_1_Sort_m22561_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Texture2D>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m29655(__this, ___comparison, method) (( void (*) (List_1_t783 *, Comparison_1_t5350 *, const MethodInfo*))List_1_Sort_m22562_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.Texture2D>::ToArray()
#define List_1_ToArray_m29656(__this, method) (( Texture2DU5BU5D_t547* (*) (List_1_t783 *, const MethodInfo*))List_1_ToArray_m3165_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Texture2D>::TrimExcess()
#define List_1_TrimExcess_m29657(__this, method) (( void (*) (List_1_t783 *, const MethodInfo*))List_1_TrimExcess_m22563_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Texture2D>::get_Capacity()
#define List_1_get_Capacity_m29658(__this, method) (( int32_t (*) (List_1_t783 *, const MethodInfo*))List_1_get_Capacity_m22564_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Texture2D>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m29659(__this, ___value, method) (( void (*) (List_1_t783 *, int32_t, const MethodInfo*))List_1_set_Capacity_m22565_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Texture2D>::get_Count()
#define List_1_get_Count_m29660(__this, method) (( int32_t (*) (List_1_t783 *, const MethodInfo*))List_1_get_Count_m13927_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.Texture2D>::get_Item(System.Int32)
#define List_1_get_Item_m29661(__this, ___index, method) (( Texture2D_t90 * (*) (List_1_t783 *, int32_t, const MethodInfo*))List_1_get_Item_m13950_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Texture2D>::set_Item(System.Int32,T)
#define List_1_set_Item_m29662(__this, ___index, ___value, method) (( void (*) (List_1_t783 *, int32_t, Texture2D_t90 *, const MethodInfo*))List_1_set_Item_m13951_gshared)(__this, ___index, ___value, method)

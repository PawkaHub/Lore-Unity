#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<PhotonPlayer>
struct List_1_t652;
// System.Object
struct Object_t;
// PhotonPlayer
struct PhotonPlayer_t432;
// System.Collections.Generic.IEnumerable`1<PhotonPlayer>
struct IEnumerable_1_t6545;
// PhotonPlayer[]
struct PhotonPlayerU5BU5D_t419;
// System.Collections.Generic.IEnumerator`1<PhotonPlayer>
struct IEnumerator_1_t6544;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Collections.Generic.ICollection`1<PhotonPlayer>
struct ICollection_1_t6546;
// System.Collections.ObjectModel.ReadOnlyCollection`1<PhotonPlayer>
struct ReadOnlyCollection_1_t5156;
// System.Predicate`1<PhotonPlayer>
struct Predicate_1_t5157;
// System.Collections.Generic.IComparer`1<PhotonPlayer>
struct IComparer_1_t6547;
// System.Comparison`1<PhotonPlayer>
struct Comparison_1_t5158;
// System.Collections.Generic.List`1/Enumerator<PhotonPlayer>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_4.h"

// System.Void System.Collections.Generic.List`1<PhotonPlayer>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_genMethodDeclarations.h"
#define List_1__ctor_m3132(__this, method) (( void (*) (List_1_t652 *, const MethodInfo*))List_1__ctor_m84_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<PhotonPlayer>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m26588(__this, ___collection, method) (( void (*) (List_1_t652 *, Object_t*, const MethodInfo*))List_1__ctor_m3166_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<PhotonPlayer>::.ctor(System.Int32)
#define List_1__ctor_m26589(__this, ___capacity, method) (( void (*) (List_1_t652 *, int32_t, const MethodInfo*))List_1__ctor_m22534_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<PhotonPlayer>::.ctor(T[],System.Int32)
#define List_1__ctor_m26590(__this, ___data, ___size, method) (( void (*) (List_1_t652 *, PhotonPlayerU5BU5D_t419*, int32_t, const MethodInfo*))List_1__ctor_m22535_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<PhotonPlayer>::.cctor()
#define List_1__cctor_m26591(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m22536_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<PhotonPlayer>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m26592(__this, method) (( Object_t* (*) (List_1_t652 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m13947_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<PhotonPlayer>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m26593(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t652 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m13930_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<PhotonPlayer>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m26594(__this, method) (( Object_t * (*) (List_1_t652 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m13926_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<PhotonPlayer>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m26595(__this, ___item, method) (( int32_t (*) (List_1_t652 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m13935_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<PhotonPlayer>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m26596(__this, ___item, method) (( bool (*) (List_1_t652 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m13937_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<PhotonPlayer>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m26597(__this, ___item, method) (( int32_t (*) (List_1_t652 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m13938_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<PhotonPlayer>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m26598(__this, ___index, ___item, method) (( void (*) (List_1_t652 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m13939_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<PhotonPlayer>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m26599(__this, ___item, method) (( void (*) (List_1_t652 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m13940_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<PhotonPlayer>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m26600(__this, method) (( bool (*) (List_1_t652 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m13942_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<PhotonPlayer>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m26601(__this, method) (( bool (*) (List_1_t652 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m13928_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<PhotonPlayer>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m26602(__this, method) (( Object_t * (*) (List_1_t652 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m13929_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<PhotonPlayer>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m26603(__this, method) (( bool (*) (List_1_t652 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m13931_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<PhotonPlayer>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m26604(__this, method) (( bool (*) (List_1_t652 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m13932_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<PhotonPlayer>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m26605(__this, ___index, method) (( Object_t * (*) (List_1_t652 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m13933_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<PhotonPlayer>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m26606(__this, ___index, ___value, method) (( void (*) (List_1_t652 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m13934_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<PhotonPlayer>::Add(T)
#define List_1_Add_m26607(__this, ___item, method) (( void (*) (List_1_t652 *, PhotonPlayer_t432 *, const MethodInfo*))List_1_Add_m13943_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<PhotonPlayer>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m26608(__this, ___newCount, method) (( void (*) (List_1_t652 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m22537_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<PhotonPlayer>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m26609(__this, ___idx, ___count, method) (( void (*) (List_1_t652 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m22538_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<PhotonPlayer>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m26610(__this, ___collection, method) (( void (*) (List_1_t652 *, Object_t*, const MethodInfo*))List_1_AddCollection_m22539_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<PhotonPlayer>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m26611(__this, ___enumerable, method) (( void (*) (List_1_t652 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m22540_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<PhotonPlayer>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m26612(__this, ___collection, method) (( void (*) (List_1_t652 *, Object_t*, const MethodInfo*))List_1_AddRange_m87_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<PhotonPlayer>::AsReadOnly()
#define List_1_AsReadOnly_m26613(__this, method) (( ReadOnlyCollection_1_t5156 * (*) (List_1_t652 *, const MethodInfo*))List_1_AsReadOnly_m22541_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<PhotonPlayer>::Clear()
#define List_1_Clear_m26614(__this, method) (( void (*) (List_1_t652 *, const MethodInfo*))List_1_Clear_m13936_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<PhotonPlayer>::Contains(T)
#define List_1_Contains_m26615(__this, ___item, method) (( bool (*) (List_1_t652 *, PhotonPlayer_t432 *, const MethodInfo*))List_1_Contains_m13944_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<PhotonPlayer>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m26616(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t652 *, PhotonPlayerU5BU5D_t419*, int32_t, const MethodInfo*))List_1_CopyTo_m13945_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<PhotonPlayer>::Find(System.Predicate`1<T>)
#define List_1_Find_m26617(__this, ___match, method) (( PhotonPlayer_t432 * (*) (List_1_t652 *, Predicate_1_t5157 *, const MethodInfo*))List_1_Find_m22542_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<PhotonPlayer>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m26618(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t5157 *, const MethodInfo*))List_1_CheckMatch_m22543_gshared)(__this /* static, unused */, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<PhotonPlayer>::FindAll(System.Predicate`1<T>)
#define List_1_FindAll_m26619(__this, ___match, method) (( List_1_t652 * (*) (List_1_t652 *, Predicate_1_t5157 *, const MethodInfo*))List_1_FindAll_m22544_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<PhotonPlayer>::FindAllStackBits(System.Predicate`1<T>)
#define List_1_FindAllStackBits_m26620(__this, ___match, method) (( List_1_t652 * (*) (List_1_t652 *, Predicate_1_t5157 *, const MethodInfo*))List_1_FindAllStackBits_m22545_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<PhotonPlayer>::FindAllList(System.Predicate`1<T>)
#define List_1_FindAllList_m26621(__this, ___match, method) (( List_1_t652 * (*) (List_1_t652 *, Predicate_1_t5157 *, const MethodInfo*))List_1_FindAllList_m22546_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<PhotonPlayer>::FindIndex(System.Predicate`1<T>)
#define List_1_FindIndex_m26622(__this, ___match, method) (( int32_t (*) (List_1_t652 *, Predicate_1_t5157 *, const MethodInfo*))List_1_FindIndex_m22547_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<PhotonPlayer>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m26623(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t652 *, int32_t, int32_t, Predicate_1_t5157 *, const MethodInfo*))List_1_GetIndex_m22548_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<PhotonPlayer>::GetEnumerator()
#define List_1_GetEnumerator_m3052(__this, method) (( Enumerator_t653  (*) (List_1_t652 *, const MethodInfo*))List_1_GetEnumerator_m22549_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<PhotonPlayer>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m26624(__this, ___index, ___count, method) (( List_1_t652 * (*) (List_1_t652 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m22550_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<PhotonPlayer>::IndexOf(T)
#define List_1_IndexOf_m26625(__this, ___item, method) (( int32_t (*) (List_1_t652 *, PhotonPlayer_t432 *, const MethodInfo*))List_1_IndexOf_m13948_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<PhotonPlayer>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m26626(__this, ___start, ___delta, method) (( void (*) (List_1_t652 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m22551_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<PhotonPlayer>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m26627(__this, ___index, method) (( void (*) (List_1_t652 *, int32_t, const MethodInfo*))List_1_CheckIndex_m22552_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<PhotonPlayer>::Insert(System.Int32,T)
#define List_1_Insert_m26628(__this, ___index, ___item, method) (( void (*) (List_1_t652 *, int32_t, PhotonPlayer_t432 *, const MethodInfo*))List_1_Insert_m13949_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<PhotonPlayer>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m26629(__this, ___collection, method) (( void (*) (List_1_t652 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m22553_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<PhotonPlayer>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m26630(__this, ___index, ___collection, method) (( void (*) (List_1_t652 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m22554_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<PhotonPlayer>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m26631(__this, ___index, ___collection, method) (( void (*) (List_1_t652 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m22555_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<PhotonPlayer>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m26632(__this, ___index, ___enumerable, method) (( void (*) (List_1_t652 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m22556_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<PhotonPlayer>::Remove(T)
#define List_1_Remove_m26633(__this, ___item, method) (( bool (*) (List_1_t652 *, PhotonPlayer_t432 *, const MethodInfo*))List_1_Remove_m13946_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<PhotonPlayer>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m26634(__this, ___match, method) (( int32_t (*) (List_1_t652 *, Predicate_1_t5157 *, const MethodInfo*))List_1_RemoveAll_m22557_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<PhotonPlayer>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m26635(__this, ___index, method) (( void (*) (List_1_t652 *, int32_t, const MethodInfo*))List_1_RemoveAt_m13941_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<PhotonPlayer>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m26636(__this, ___index, ___count, method) (( void (*) (List_1_t652 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m22558_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<PhotonPlayer>::Reverse()
#define List_1_Reverse_m26637(__this, method) (( void (*) (List_1_t652 *, const MethodInfo*))List_1_Reverse_m22559_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<PhotonPlayer>::Sort()
#define List_1_Sort_m26638(__this, method) (( void (*) (List_1_t652 *, const MethodInfo*))List_1_Sort_m22560_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<PhotonPlayer>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m26639(__this, ___comparer, method) (( void (*) (List_1_t652 *, Object_t*, const MethodInfo*))List_1_Sort_m22561_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<PhotonPlayer>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m26640(__this, ___comparison, method) (( void (*) (List_1_t652 *, Comparison_1_t5158 *, const MethodInfo*))List_1_Sort_m22562_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<PhotonPlayer>::ToArray()
#define List_1_ToArray_m3133(__this, method) (( PhotonPlayerU5BU5D_t419* (*) (List_1_t652 *, const MethodInfo*))List_1_ToArray_m3165_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<PhotonPlayer>::TrimExcess()
#define List_1_TrimExcess_m26641(__this, method) (( void (*) (List_1_t652 *, const MethodInfo*))List_1_TrimExcess_m22563_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<PhotonPlayer>::get_Capacity()
#define List_1_get_Capacity_m26642(__this, method) (( int32_t (*) (List_1_t652 *, const MethodInfo*))List_1_get_Capacity_m22564_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<PhotonPlayer>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m26643(__this, ___value, method) (( void (*) (List_1_t652 *, int32_t, const MethodInfo*))List_1_set_Capacity_m22565_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<PhotonPlayer>::get_Count()
#define List_1_get_Count_m26644(__this, method) (( int32_t (*) (List_1_t652 *, const MethodInfo*))List_1_get_Count_m13927_gshared)(__this, method)
// T System.Collections.Generic.List`1<PhotonPlayer>::get_Item(System.Int32)
#define List_1_get_Item_m26645(__this, ___index, method) (( PhotonPlayer_t432 * (*) (List_1_t652 *, int32_t, const MethodInfo*))List_1_get_Item_m13950_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<PhotonPlayer>::set_Item(System.Int32,T)
#define List_1_set_Item_m26646(__this, ___index, ___value, method) (( void (*) (List_1_t652 *, int32_t, PhotonPlayer_t432 *, const MethodInfo*))List_1_set_Item_m13951_gshared)(__this, ___index, ___value, method)

#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>
struct List_1_t2911;
// System.Object
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t2905;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Events.BaseInvokableCall>
struct IEnumerable_1_t7158;
// UnityEngine.Events.BaseInvokableCall[]
struct BaseInvokableCallU5BU5D_t6266;
// System.Collections.Generic.IEnumerator`1<UnityEngine.Events.BaseInvokableCall>
struct IEnumerator_1_t7159;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Collections.Generic.ICollection`1<UnityEngine.Events.BaseInvokableCall>
struct ICollection_1_t7160;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Events.BaseInvokableCall>
struct ReadOnlyCollection_1_t6268;
// System.Predicate`1<UnityEngine.Events.BaseInvokableCall>
struct Predicate_1_t2978;
// System.Collections.Generic.IComparer`1<UnityEngine.Events.BaseInvokableCall>
struct IComparer_1_t7161;
// System.Comparison`1<UnityEngine.Events.BaseInvokableCall>
struct Comparison_1_t6270;
// System.Collections.Generic.List`1/Enumerator<UnityEngine.Events.BaseInvokableCall>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_109.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_genMethodDeclarations.h"
#define List_1__ctor_m13787(__this, method) (( void (*) (List_1_t2911 *, const MethodInfo*))List_1__ctor_m84_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m43304(__this, ___collection, method) (( void (*) (List_1_t2911 *, Object_t*, const MethodInfo*))List_1__ctor_m3166_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::.ctor(System.Int32)
#define List_1__ctor_m43305(__this, ___capacity, method) (( void (*) (List_1_t2911 *, int32_t, const MethodInfo*))List_1__ctor_m22534_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::.ctor(T[],System.Int32)
#define List_1__ctor_m43306(__this, ___data, ___size, method) (( void (*) (List_1_t2911 *, BaseInvokableCallU5BU5D_t6266*, int32_t, const MethodInfo*))List_1__ctor_m22535_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::.cctor()
#define List_1__cctor_m43307(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m22536_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m43308(__this, method) (( Object_t* (*) (List_1_t2911 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m13947_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m43309(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t2911 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m13930_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m43310(__this, method) (( Object_t * (*) (List_1_t2911 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m13926_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m43311(__this, ___item, method) (( int32_t (*) (List_1_t2911 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m13935_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m43312(__this, ___item, method) (( bool (*) (List_1_t2911 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m13937_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m43313(__this, ___item, method) (( int32_t (*) (List_1_t2911 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m13938_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m43314(__this, ___index, ___item, method) (( void (*) (List_1_t2911 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m13939_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m43315(__this, ___item, method) (( void (*) (List_1_t2911 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m13940_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m43316(__this, method) (( bool (*) (List_1_t2911 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m13942_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m43317(__this, method) (( bool (*) (List_1_t2911 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m13928_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m43318(__this, method) (( Object_t * (*) (List_1_t2911 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m13929_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m43319(__this, method) (( bool (*) (List_1_t2911 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m13931_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m43320(__this, method) (( bool (*) (List_1_t2911 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m13932_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m43321(__this, ___index, method) (( Object_t * (*) (List_1_t2911 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m13933_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m43322(__this, ___index, ___value, method) (( void (*) (List_1_t2911 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m13934_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Add(T)
#define List_1_Add_m43323(__this, ___item, method) (( void (*) (List_1_t2911 *, BaseInvokableCall_t2905 *, const MethodInfo*))List_1_Add_m13943_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m43324(__this, ___newCount, method) (( void (*) (List_1_t2911 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m22537_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m43325(__this, ___idx, ___count, method) (( void (*) (List_1_t2911 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m22538_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m43326(__this, ___collection, method) (( void (*) (List_1_t2911 *, Object_t*, const MethodInfo*))List_1_AddCollection_m22539_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m43327(__this, ___enumerable, method) (( void (*) (List_1_t2911 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m22540_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m13790(__this, ___collection, method) (( void (*) (List_1_t2911 *, Object_t*, const MethodInfo*))List_1_AddRange_m87_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::AsReadOnly()
#define List_1_AsReadOnly_m43328(__this, method) (( ReadOnlyCollection_1_t6268 * (*) (List_1_t2911 *, const MethodInfo*))List_1_AsReadOnly_m22541_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Clear()
#define List_1_Clear_m43329(__this, method) (( void (*) (List_1_t2911 *, const MethodInfo*))List_1_Clear_m13936_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Contains(T)
#define List_1_Contains_m43330(__this, ___item, method) (( bool (*) (List_1_t2911 *, BaseInvokableCall_t2905 *, const MethodInfo*))List_1_Contains_m13944_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m43331(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t2911 *, BaseInvokableCallU5BU5D_t6266*, int32_t, const MethodInfo*))List_1_CopyTo_m13945_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Find(System.Predicate`1<T>)
#define List_1_Find_m43332(__this, ___match, method) (( BaseInvokableCall_t2905 * (*) (List_1_t2911 *, Predicate_1_t2978 *, const MethodInfo*))List_1_Find_m22542_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m43333(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t2978 *, const MethodInfo*))List_1_CheckMatch_m22543_gshared)(__this /* static, unused */, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::FindAll(System.Predicate`1<T>)
#define List_1_FindAll_m43334(__this, ___match, method) (( List_1_t2911 * (*) (List_1_t2911 *, Predicate_1_t2978 *, const MethodInfo*))List_1_FindAll_m22544_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::FindAllStackBits(System.Predicate`1<T>)
#define List_1_FindAllStackBits_m43335(__this, ___match, method) (( List_1_t2911 * (*) (List_1_t2911 *, Predicate_1_t2978 *, const MethodInfo*))List_1_FindAllStackBits_m22545_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::FindAllList(System.Predicate`1<T>)
#define List_1_FindAllList_m43336(__this, ___match, method) (( List_1_t2911 * (*) (List_1_t2911 *, Predicate_1_t2978 *, const MethodInfo*))List_1_FindAllList_m22546_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::FindIndex(System.Predicate`1<T>)
#define List_1_FindIndex_m43337(__this, ___match, method) (( int32_t (*) (List_1_t2911 *, Predicate_1_t2978 *, const MethodInfo*))List_1_FindIndex_m22547_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m43338(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t2911 *, int32_t, int32_t, Predicate_1_t2978 *, const MethodInfo*))List_1_GetIndex_m22548_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::GetEnumerator()
#define List_1_GetEnumerator_m43339(__this, method) (( Enumerator_t6269  (*) (List_1_t2911 *, const MethodInfo*))List_1_GetEnumerator_m22549_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m43340(__this, ___index, ___count, method) (( List_1_t2911 * (*) (List_1_t2911 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m22550_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::IndexOf(T)
#define List_1_IndexOf_m43341(__this, ___item, method) (( int32_t (*) (List_1_t2911 *, BaseInvokableCall_t2905 *, const MethodInfo*))List_1_IndexOf_m13948_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m43342(__this, ___start, ___delta, method) (( void (*) (List_1_t2911 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m22551_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m43343(__this, ___index, method) (( void (*) (List_1_t2911 *, int32_t, const MethodInfo*))List_1_CheckIndex_m22552_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Insert(System.Int32,T)
#define List_1_Insert_m43344(__this, ___index, ___item, method) (( void (*) (List_1_t2911 *, int32_t, BaseInvokableCall_t2905 *, const MethodInfo*))List_1_Insert_m13949_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m43345(__this, ___collection, method) (( void (*) (List_1_t2911 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m22553_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m43346(__this, ___index, ___collection, method) (( void (*) (List_1_t2911 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m22554_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m43347(__this, ___index, ___collection, method) (( void (*) (List_1_t2911 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m22555_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m43348(__this, ___index, ___enumerable, method) (( void (*) (List_1_t2911 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m22556_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Remove(T)
#define List_1_Remove_m43349(__this, ___item, method) (( bool (*) (List_1_t2911 *, BaseInvokableCall_t2905 *, const MethodInfo*))List_1_Remove_m13946_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m13789(__this, ___match, method) (( int32_t (*) (List_1_t2911 *, Predicate_1_t2978 *, const MethodInfo*))List_1_RemoveAll_m22557_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m43350(__this, ___index, method) (( void (*) (List_1_t2911 *, int32_t, const MethodInfo*))List_1_RemoveAt_m13941_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m43351(__this, ___index, ___count, method) (( void (*) (List_1_t2911 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m22558_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Reverse()
#define List_1_Reverse_m43352(__this, method) (( void (*) (List_1_t2911 *, const MethodInfo*))List_1_Reverse_m22559_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Sort()
#define List_1_Sort_m43353(__this, method) (( void (*) (List_1_t2911 *, const MethodInfo*))List_1_Sort_m22560_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m43354(__this, ___comparer, method) (( void (*) (List_1_t2911 *, Object_t*, const MethodInfo*))List_1_Sort_m22561_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m43355(__this, ___comparison, method) (( void (*) (List_1_t2911 *, Comparison_1_t6270 *, const MethodInfo*))List_1_Sort_m22562_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::ToArray()
#define List_1_ToArray_m43356(__this, method) (( BaseInvokableCallU5BU5D_t6266* (*) (List_1_t2911 *, const MethodInfo*))List_1_ToArray_m3165_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::TrimExcess()
#define List_1_TrimExcess_m43357(__this, method) (( void (*) (List_1_t2911 *, const MethodInfo*))List_1_TrimExcess_m22563_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::get_Capacity()
#define List_1_get_Capacity_m43358(__this, method) (( int32_t (*) (List_1_t2911 *, const MethodInfo*))List_1_get_Capacity_m22564_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m43359(__this, ___value, method) (( void (*) (List_1_t2911 *, int32_t, const MethodInfo*))List_1_set_Capacity_m22565_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::get_Count()
#define List_1_get_Count_m43360(__this, method) (( int32_t (*) (List_1_t2911 *, const MethodInfo*))List_1_get_Count_m13927_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::get_Item(System.Int32)
#define List_1_get_Item_m43361(__this, ___index, method) (( BaseInvokableCall_t2905 * (*) (List_1_t2911 *, int32_t, const MethodInfo*))List_1_get_Item_m13950_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::set_Item(System.Int32,T)
#define List_1_set_Item_m43362(__this, ___index, ___value, method) (( void (*) (List_1_t2911 *, int32_t, BaseInvokableCall_t2905 *, const MethodInfo*))List_1_set_Item_m13951_gshared)(__this, ___index, ___value, method)

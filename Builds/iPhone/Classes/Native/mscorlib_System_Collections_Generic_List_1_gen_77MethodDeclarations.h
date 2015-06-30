#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2077;
// System.Object
struct Object_t;
// UnityEngine.CanvasGroup
struct CanvasGroup_t211;
// System.Collections.Generic.IEnumerable`1<UnityEngine.CanvasGroup>
struct IEnumerable_1_t6970;
// UnityEngine.CanvasGroup[]
struct CanvasGroupU5BU5D_t5925;
// System.Collections.Generic.IEnumerator`1<UnityEngine.CanvasGroup>
struct IEnumerator_1_t6971;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Collections.Generic.ICollection`1<UnityEngine.CanvasGroup>
struct ICollection_1_t6972;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.CanvasGroup>
struct ReadOnlyCollection_1_t5927;
// System.Predicate`1<UnityEngine.CanvasGroup>
struct Predicate_1_t5928;
// System.Collections.Generic.IComparer`1<UnityEngine.CanvasGroup>
struct IComparer_1_t6973;
// System.Comparison`1<UnityEngine.CanvasGroup>
struct Comparison_1_t5930;
// System.Collections.Generic.List`1/Enumerator<UnityEngine.CanvasGroup>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_92.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_genMethodDeclarations.h"
#define List_1__ctor_m9541(__this, method) (( void (*) (List_1_t2077 *, const MethodInfo*))List_1__ctor_m84_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m38327(__this, ___collection, method) (( void (*) (List_1_t2077 *, Object_t*, const MethodInfo*))List_1__ctor_m3166_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::.ctor(System.Int32)
#define List_1__ctor_m38328(__this, ___capacity, method) (( void (*) (List_1_t2077 *, int32_t, const MethodInfo*))List_1__ctor_m22534_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::.ctor(T[],System.Int32)
#define List_1__ctor_m38329(__this, ___data, ___size, method) (( void (*) (List_1_t2077 *, CanvasGroupU5BU5D_t5925*, int32_t, const MethodInfo*))List_1__ctor_m22535_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::.cctor()
#define List_1__cctor_m38330(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m22536_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m38331(__this, method) (( Object_t* (*) (List_1_t2077 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m13947_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m38332(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t2077 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m13930_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m38333(__this, method) (( Object_t * (*) (List_1_t2077 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m13926_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m38334(__this, ___item, method) (( int32_t (*) (List_1_t2077 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m13935_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m38335(__this, ___item, method) (( bool (*) (List_1_t2077 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m13937_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m38336(__this, ___item, method) (( int32_t (*) (List_1_t2077 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m13938_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m38337(__this, ___index, ___item, method) (( void (*) (List_1_t2077 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m13939_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m38338(__this, ___item, method) (( void (*) (List_1_t2077 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m13940_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m38339(__this, method) (( bool (*) (List_1_t2077 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m13942_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m38340(__this, method) (( bool (*) (List_1_t2077 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m13928_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m38341(__this, method) (( Object_t * (*) (List_1_t2077 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m13929_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m38342(__this, method) (( bool (*) (List_1_t2077 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m13931_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m38343(__this, method) (( bool (*) (List_1_t2077 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m13932_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m38344(__this, ___index, method) (( Object_t * (*) (List_1_t2077 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m13933_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m38345(__this, ___index, ___value, method) (( void (*) (List_1_t2077 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m13934_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::Add(T)
#define List_1_Add_m38346(__this, ___item, method) (( void (*) (List_1_t2077 *, CanvasGroup_t211 *, const MethodInfo*))List_1_Add_m13943_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m38347(__this, ___newCount, method) (( void (*) (List_1_t2077 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m22537_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m38348(__this, ___idx, ___count, method) (( void (*) (List_1_t2077 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m22538_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m38349(__this, ___collection, method) (( void (*) (List_1_t2077 *, Object_t*, const MethodInfo*))List_1_AddCollection_m22539_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m38350(__this, ___enumerable, method) (( void (*) (List_1_t2077 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m22540_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m38351(__this, ___collection, method) (( void (*) (List_1_t2077 *, Object_t*, const MethodInfo*))List_1_AddRange_m87_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::AsReadOnly()
#define List_1_AsReadOnly_m38352(__this, method) (( ReadOnlyCollection_1_t5927 * (*) (List_1_t2077 *, const MethodInfo*))List_1_AsReadOnly_m22541_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::Clear()
#define List_1_Clear_m38353(__this, method) (( void (*) (List_1_t2077 *, const MethodInfo*))List_1_Clear_m13936_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::Contains(T)
#define List_1_Contains_m38354(__this, ___item, method) (( bool (*) (List_1_t2077 *, CanvasGroup_t211 *, const MethodInfo*))List_1_Contains_m13944_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m38355(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t2077 *, CanvasGroupU5BU5D_t5925*, int32_t, const MethodInfo*))List_1_CopyTo_m13945_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::Find(System.Predicate`1<T>)
#define List_1_Find_m38356(__this, ___match, method) (( CanvasGroup_t211 * (*) (List_1_t2077 *, Predicate_1_t5928 *, const MethodInfo*))List_1_Find_m22542_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m38357(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t5928 *, const MethodInfo*))List_1_CheckMatch_m22543_gshared)(__this /* static, unused */, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::FindAll(System.Predicate`1<T>)
#define List_1_FindAll_m38358(__this, ___match, method) (( List_1_t2077 * (*) (List_1_t2077 *, Predicate_1_t5928 *, const MethodInfo*))List_1_FindAll_m22544_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::FindAllStackBits(System.Predicate`1<T>)
#define List_1_FindAllStackBits_m38359(__this, ___match, method) (( List_1_t2077 * (*) (List_1_t2077 *, Predicate_1_t5928 *, const MethodInfo*))List_1_FindAllStackBits_m22545_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::FindAllList(System.Predicate`1<T>)
#define List_1_FindAllList_m38360(__this, ___match, method) (( List_1_t2077 * (*) (List_1_t2077 *, Predicate_1_t5928 *, const MethodInfo*))List_1_FindAllList_m22546_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::FindIndex(System.Predicate`1<T>)
#define List_1_FindIndex_m38361(__this, ___match, method) (( int32_t (*) (List_1_t2077 *, Predicate_1_t5928 *, const MethodInfo*))List_1_FindIndex_m22547_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m38362(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t2077 *, int32_t, int32_t, Predicate_1_t5928 *, const MethodInfo*))List_1_GetIndex_m22548_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::GetEnumerator()
#define List_1_GetEnumerator_m38363(__this, method) (( Enumerator_t5929  (*) (List_1_t2077 *, const MethodInfo*))List_1_GetEnumerator_m22549_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m38364(__this, ___index, ___count, method) (( List_1_t2077 * (*) (List_1_t2077 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m22550_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::IndexOf(T)
#define List_1_IndexOf_m38365(__this, ___item, method) (( int32_t (*) (List_1_t2077 *, CanvasGroup_t211 *, const MethodInfo*))List_1_IndexOf_m13948_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m38366(__this, ___start, ___delta, method) (( void (*) (List_1_t2077 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m22551_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m38367(__this, ___index, method) (( void (*) (List_1_t2077 *, int32_t, const MethodInfo*))List_1_CheckIndex_m22552_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::Insert(System.Int32,T)
#define List_1_Insert_m38368(__this, ___index, ___item, method) (( void (*) (List_1_t2077 *, int32_t, CanvasGroup_t211 *, const MethodInfo*))List_1_Insert_m13949_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m38369(__this, ___collection, method) (( void (*) (List_1_t2077 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m22553_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m38370(__this, ___index, ___collection, method) (( void (*) (List_1_t2077 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m22554_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m38371(__this, ___index, ___collection, method) (( void (*) (List_1_t2077 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m22555_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m38372(__this, ___index, ___enumerable, method) (( void (*) (List_1_t2077 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m22556_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::Remove(T)
#define List_1_Remove_m38373(__this, ___item, method) (( bool (*) (List_1_t2077 *, CanvasGroup_t211 *, const MethodInfo*))List_1_Remove_m13946_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m38374(__this, ___match, method) (( int32_t (*) (List_1_t2077 *, Predicate_1_t5928 *, const MethodInfo*))List_1_RemoveAll_m22557_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m38375(__this, ___index, method) (( void (*) (List_1_t2077 *, int32_t, const MethodInfo*))List_1_RemoveAt_m13941_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m38376(__this, ___index, ___count, method) (( void (*) (List_1_t2077 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m22558_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::Reverse()
#define List_1_Reverse_m38377(__this, method) (( void (*) (List_1_t2077 *, const MethodInfo*))List_1_Reverse_m22559_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::Sort()
#define List_1_Sort_m38378(__this, method) (( void (*) (List_1_t2077 *, const MethodInfo*))List_1_Sort_m22560_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m38379(__this, ___comparer, method) (( void (*) (List_1_t2077 *, Object_t*, const MethodInfo*))List_1_Sort_m22561_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m38380(__this, ___comparison, method) (( void (*) (List_1_t2077 *, Comparison_1_t5930 *, const MethodInfo*))List_1_Sort_m22562_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::ToArray()
#define List_1_ToArray_m38381(__this, method) (( CanvasGroupU5BU5D_t5925* (*) (List_1_t2077 *, const MethodInfo*))List_1_ToArray_m3165_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::TrimExcess()
#define List_1_TrimExcess_m38382(__this, method) (( void (*) (List_1_t2077 *, const MethodInfo*))List_1_TrimExcess_m22563_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::get_Capacity()
#define List_1_get_Capacity_m38383(__this, method) (( int32_t (*) (List_1_t2077 *, const MethodInfo*))List_1_get_Capacity_m22564_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m38384(__this, ___value, method) (( void (*) (List_1_t2077 *, int32_t, const MethodInfo*))List_1_set_Capacity_m22565_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::get_Count()
#define List_1_get_Count_m38385(__this, method) (( int32_t (*) (List_1_t2077 *, const MethodInfo*))List_1_get_Count_m13927_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::get_Item(System.Int32)
#define List_1_get_Item_m38386(__this, ___index, method) (( CanvasGroup_t211 * (*) (List_1_t2077 *, int32_t, const MethodInfo*))List_1_get_Item_m13950_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CanvasGroup>::set_Item(System.Int32,T)
#define List_1_set_Item_m38387(__this, ___index, ___value, method) (( void (*) (List_1_t2077 *, int32_t, CanvasGroup_t211 *, const MethodInfo*))List_1_set_Item_m13951_gshared)(__this, ___index, ___value, method)

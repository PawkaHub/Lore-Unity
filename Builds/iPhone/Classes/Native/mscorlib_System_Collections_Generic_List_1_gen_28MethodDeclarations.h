#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<PhotonPlayer>
struct List_1_t740;
// System.Object
struct Object_t;
// PhotonPlayer
struct PhotonPlayer_t460;
// System.Collections.Generic.IEnumerable`1<PhotonPlayer>
struct IEnumerable_1_t10016;
// PhotonPlayer[]
struct PhotonPlayerU5BU5D_t447;
// System.Collections.Generic.IEnumerator`1<PhotonPlayer>
struct IEnumerator_1_t10015;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Collections.Generic.ICollection`1<PhotonPlayer>
struct ICollection_1_t10017;
// System.Collections.ObjectModel.ReadOnlyCollection`1<PhotonPlayer>
struct ReadOnlyCollection_1_t6572;
// System.Predicate`1<PhotonPlayer>
struct Predicate_1_t6573;
// System.Collections.Generic.IComparer`1<PhotonPlayer>
struct IComparer_1_t10018;
// System.Comparison`1<PhotonPlayer>
struct Comparison_1_t6574;
// System.Collections.Generic.List`1/Enumerator<PhotonPlayer>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_7.h"

// System.Void System.Collections.Generic.List`1<PhotonPlayer>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_genMethodDeclarations.h"
#define List_1__ctor_m3446(__this, method) (( void (*) (List_1_t740 *, const MethodInfo*))List_1__ctor_m84_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<PhotonPlayer>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m29502(__this, ___collection, method) (( void (*) (List_1_t740 *, Object_t*, const MethodInfo*))List_1__ctor_m3480_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<PhotonPlayer>::.ctor(System.Int32)
#define List_1__ctor_m29503(__this, ___capacity, method) (( void (*) (List_1_t740 *, int32_t, const MethodInfo*))List_1__ctor_m24292_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<PhotonPlayer>::.ctor(T[],System.Int32)
#define List_1__ctor_m29504(__this, ___data, ___size, method) (( void (*) (List_1_t740 *, PhotonPlayerU5BU5D_t447*, int32_t, const MethodInfo*))List_1__ctor_m24293_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<PhotonPlayer>::.cctor()
#define List_1__cctor_m29505(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m24294_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<PhotonPlayer>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m29506(__this, method) (( Object_t* (*) (List_1_t740 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m18232_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<PhotonPlayer>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m29507(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t740 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m18215_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<PhotonPlayer>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m29508(__this, method) (( Object_t * (*) (List_1_t740 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m18211_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<PhotonPlayer>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m29509(__this, ___item, method) (( int32_t (*) (List_1_t740 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m18220_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<PhotonPlayer>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m29510(__this, ___item, method) (( bool (*) (List_1_t740 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m18222_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<PhotonPlayer>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m29511(__this, ___item, method) (( int32_t (*) (List_1_t740 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m18223_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<PhotonPlayer>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m29512(__this, ___index, ___item, method) (( void (*) (List_1_t740 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m18224_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<PhotonPlayer>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m29513(__this, ___item, method) (( void (*) (List_1_t740 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m18225_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<PhotonPlayer>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m29514(__this, method) (( bool (*) (List_1_t740 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m18227_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<PhotonPlayer>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m29515(__this, method) (( bool (*) (List_1_t740 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m18213_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<PhotonPlayer>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m29516(__this, method) (( Object_t * (*) (List_1_t740 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m18214_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<PhotonPlayer>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m29517(__this, method) (( bool (*) (List_1_t740 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m18216_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<PhotonPlayer>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m29518(__this, method) (( bool (*) (List_1_t740 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m18217_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<PhotonPlayer>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m29519(__this, ___index, method) (( Object_t * (*) (List_1_t740 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m18218_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<PhotonPlayer>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m29520(__this, ___index, ___value, method) (( void (*) (List_1_t740 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m18219_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<PhotonPlayer>::Add(T)
#define List_1_Add_m29521(__this, ___item, method) (( void (*) (List_1_t740 *, PhotonPlayer_t460 *, const MethodInfo*))List_1_Add_m18228_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<PhotonPlayer>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m29522(__this, ___newCount, method) (( void (*) (List_1_t740 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m24295_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<PhotonPlayer>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m29523(__this, ___idx, ___count, method) (( void (*) (List_1_t740 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m24296_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<PhotonPlayer>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m29524(__this, ___collection, method) (( void (*) (List_1_t740 *, Object_t*, const MethodInfo*))List_1_AddCollection_m24297_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<PhotonPlayer>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m29525(__this, ___enumerable, method) (( void (*) (List_1_t740 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m24298_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<PhotonPlayer>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m29526(__this, ___collection, method) (( void (*) (List_1_t740 *, Object_t*, const MethodInfo*))List_1_AddRange_m87_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<PhotonPlayer>::AsReadOnly()
#define List_1_AsReadOnly_m29527(__this, method) (( ReadOnlyCollection_1_t6572 * (*) (List_1_t740 *, const MethodInfo*))List_1_AsReadOnly_m24299_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<PhotonPlayer>::Clear()
#define List_1_Clear_m29528(__this, method) (( void (*) (List_1_t740 *, const MethodInfo*))List_1_Clear_m18221_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<PhotonPlayer>::Contains(T)
#define List_1_Contains_m29529(__this, ___item, method) (( bool (*) (List_1_t740 *, PhotonPlayer_t460 *, const MethodInfo*))List_1_Contains_m18229_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<PhotonPlayer>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m29530(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t740 *, PhotonPlayerU5BU5D_t447*, int32_t, const MethodInfo*))List_1_CopyTo_m18230_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<PhotonPlayer>::Find(System.Predicate`1<T>)
#define List_1_Find_m29531(__this, ___match, method) (( PhotonPlayer_t460 * (*) (List_1_t740 *, Predicate_1_t6573 *, const MethodInfo*))List_1_Find_m24300_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<PhotonPlayer>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m29532(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t6573 *, const MethodInfo*))List_1_CheckMatch_m24301_gshared)(__this /* static, unused */, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<PhotonPlayer>::FindAll(System.Predicate`1<T>)
#define List_1_FindAll_m29533(__this, ___match, method) (( List_1_t740 * (*) (List_1_t740 *, Predicate_1_t6573 *, const MethodInfo*))List_1_FindAll_m24302_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<PhotonPlayer>::FindAllStackBits(System.Predicate`1<T>)
#define List_1_FindAllStackBits_m29534(__this, ___match, method) (( List_1_t740 * (*) (List_1_t740 *, Predicate_1_t6573 *, const MethodInfo*))List_1_FindAllStackBits_m24303_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<PhotonPlayer>::FindAllList(System.Predicate`1<T>)
#define List_1_FindAllList_m29535(__this, ___match, method) (( List_1_t740 * (*) (List_1_t740 *, Predicate_1_t6573 *, const MethodInfo*))List_1_FindAllList_m24304_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<PhotonPlayer>::FindIndex(System.Predicate`1<T>)
#define List_1_FindIndex_m29536(__this, ___match, method) (( int32_t (*) (List_1_t740 *, Predicate_1_t6573 *, const MethodInfo*))List_1_FindIndex_m24305_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<PhotonPlayer>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m29537(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t740 *, int32_t, int32_t, Predicate_1_t6573 *, const MethodInfo*))List_1_GetIndex_m24306_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<PhotonPlayer>::GetEnumerator()
#define List_1_GetEnumerator_m3368(__this, method) (( Enumerator_t741  (*) (List_1_t740 *, const MethodInfo*))List_1_GetEnumerator_m24307_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<PhotonPlayer>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m29538(__this, ___index, ___count, method) (( List_1_t740 * (*) (List_1_t740 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m24308_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<PhotonPlayer>::IndexOf(T)
#define List_1_IndexOf_m29539(__this, ___item, method) (( int32_t (*) (List_1_t740 *, PhotonPlayer_t460 *, const MethodInfo*))List_1_IndexOf_m18233_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<PhotonPlayer>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m29540(__this, ___start, ___delta, method) (( void (*) (List_1_t740 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m24309_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<PhotonPlayer>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m29541(__this, ___index, method) (( void (*) (List_1_t740 *, int32_t, const MethodInfo*))List_1_CheckIndex_m24310_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<PhotonPlayer>::Insert(System.Int32,T)
#define List_1_Insert_m29542(__this, ___index, ___item, method) (( void (*) (List_1_t740 *, int32_t, PhotonPlayer_t460 *, const MethodInfo*))List_1_Insert_m18234_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<PhotonPlayer>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m29543(__this, ___collection, method) (( void (*) (List_1_t740 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m24311_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<PhotonPlayer>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m29544(__this, ___index, ___collection, method) (( void (*) (List_1_t740 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m24312_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<PhotonPlayer>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m29545(__this, ___index, ___collection, method) (( void (*) (List_1_t740 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m24313_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<PhotonPlayer>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m29546(__this, ___index, ___enumerable, method) (( void (*) (List_1_t740 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m24314_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<PhotonPlayer>::Remove(T)
#define List_1_Remove_m29547(__this, ___item, method) (( bool (*) (List_1_t740 *, PhotonPlayer_t460 *, const MethodInfo*))List_1_Remove_m18231_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<PhotonPlayer>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m29548(__this, ___match, method) (( int32_t (*) (List_1_t740 *, Predicate_1_t6573 *, const MethodInfo*))List_1_RemoveAll_m24315_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<PhotonPlayer>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m29549(__this, ___index, method) (( void (*) (List_1_t740 *, int32_t, const MethodInfo*))List_1_RemoveAt_m18226_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<PhotonPlayer>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m29550(__this, ___index, ___count, method) (( void (*) (List_1_t740 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m24316_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<PhotonPlayer>::Reverse()
#define List_1_Reverse_m29551(__this, method) (( void (*) (List_1_t740 *, const MethodInfo*))List_1_Reverse_m24317_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<PhotonPlayer>::Sort()
#define List_1_Sort_m29552(__this, method) (( void (*) (List_1_t740 *, const MethodInfo*))List_1_Sort_m24318_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<PhotonPlayer>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m29553(__this, ___comparer, method) (( void (*) (List_1_t740 *, Object_t*, const MethodInfo*))List_1_Sort_m24319_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<PhotonPlayer>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m29554(__this, ___comparison, method) (( void (*) (List_1_t740 *, Comparison_1_t6574 *, const MethodInfo*))List_1_Sort_m24320_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<PhotonPlayer>::ToArray()
#define List_1_ToArray_m3447(__this, method) (( PhotonPlayerU5BU5D_t447* (*) (List_1_t740 *, const MethodInfo*))List_1_ToArray_m3479_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<PhotonPlayer>::TrimExcess()
#define List_1_TrimExcess_m29555(__this, method) (( void (*) (List_1_t740 *, const MethodInfo*))List_1_TrimExcess_m24321_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<PhotonPlayer>::get_Capacity()
#define List_1_get_Capacity_m29556(__this, method) (( int32_t (*) (List_1_t740 *, const MethodInfo*))List_1_get_Capacity_m24322_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<PhotonPlayer>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m29557(__this, ___value, method) (( void (*) (List_1_t740 *, int32_t, const MethodInfo*))List_1_set_Capacity_m24323_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<PhotonPlayer>::get_Count()
#define List_1_get_Count_m29558(__this, method) (( int32_t (*) (List_1_t740 *, const MethodInfo*))List_1_get_Count_m18212_gshared)(__this, method)
// T System.Collections.Generic.List`1<PhotonPlayer>::get_Item(System.Int32)
#define List_1_get_Item_m29559(__this, ___index, method) (( PhotonPlayer_t460 * (*) (List_1_t740 *, int32_t, const MethodInfo*))List_1_get_Item_m18235_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<PhotonPlayer>::set_Item(System.Int32,T)
#define List_1_set_Item_m29560(__this, ___index, ___value, method) (( void (*) (List_1_t740 *, int32_t, PhotonPlayer_t460 *, const MethodInfo*))List_1_set_Item_m18236_gshared)(__this, ___index, ___value, method)

#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Reflection.MethodInfo>
struct List_1_t761;
// System.Object
struct Object_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Collections.Generic.IEnumerable`1<System.Reflection.MethodInfo>
struct IEnumerable_1_t2123;
// System.Reflection.MethodInfo[]
struct MethodInfoU5BU5D_t2714;
// System.Collections.Generic.IEnumerator`1<System.Reflection.MethodInfo>
struct IEnumerator_1_t10042;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Collections.Generic.ICollection`1<System.Reflection.MethodInfo>
struct ICollection_1_t10043;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Reflection.MethodInfo>
struct ReadOnlyCollection_1_t6611;
// System.Predicate`1<System.Reflection.MethodInfo>
struct Predicate_1_t6612;
// System.Collections.Generic.IComparer`1<System.Reflection.MethodInfo>
struct IComparer_1_t10044;
// System.Comparison`1<System.Reflection.MethodInfo>
struct Comparison_1_t6614;
// System.Collections.Generic.List`1/Enumerator<System.Reflection.MethodInfo>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_69.h"

// System.Void System.Collections.Generic.List`1<System.Reflection.MethodInfo>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_genMethodDeclarations.h"
#define List_1__ctor_m18716(__this, method) (( void (*) (List_1_t761 *, const MethodInfo*))List_1__ctor_m84_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Reflection.MethodInfo>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m30125(__this, ___collection, method) (( void (*) (List_1_t761 *, Object_t*, const MethodInfo*))List_1__ctor_m3480_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Reflection.MethodInfo>::.ctor(System.Int32)
#define List_1__ctor_m30126(__this, ___capacity, method) (( void (*) (List_1_t761 *, int32_t, const MethodInfo*))List_1__ctor_m24292_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Reflection.MethodInfo>::.ctor(T[],System.Int32)
#define List_1__ctor_m30127(__this, ___data, ___size, method) (( void (*) (List_1_t761 *, MethodInfoU5BU5D_t2714*, int32_t, const MethodInfo*))List_1__ctor_m24293_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Reflection.MethodInfo>::.cctor()
#define List_1__cctor_m30128(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m24294_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Reflection.MethodInfo>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m30129(__this, method) (( Object_t* (*) (List_1_t761 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m18232_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Reflection.MethodInfo>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m30130(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t761 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m18215_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Reflection.MethodInfo>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m30131(__this, method) (( Object_t * (*) (List_1_t761 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m18211_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Reflection.MethodInfo>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m30132(__this, ___item, method) (( int32_t (*) (List_1_t761 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m18220_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Reflection.MethodInfo>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m30133(__this, ___item, method) (( bool (*) (List_1_t761 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m18222_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Reflection.MethodInfo>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m30134(__this, ___item, method) (( int32_t (*) (List_1_t761 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m18223_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Reflection.MethodInfo>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m30135(__this, ___index, ___item, method) (( void (*) (List_1_t761 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m18224_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Reflection.MethodInfo>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m30136(__this, ___item, method) (( void (*) (List_1_t761 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m18225_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Reflection.MethodInfo>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m30137(__this, method) (( bool (*) (List_1_t761 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m18227_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Reflection.MethodInfo>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m30138(__this, method) (( bool (*) (List_1_t761 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m18213_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Reflection.MethodInfo>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m30139(__this, method) (( Object_t * (*) (List_1_t761 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m18214_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Reflection.MethodInfo>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m30140(__this, method) (( bool (*) (List_1_t761 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m18216_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Reflection.MethodInfo>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m30141(__this, method) (( bool (*) (List_1_t761 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m18217_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Reflection.MethodInfo>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m30142(__this, ___index, method) (( Object_t * (*) (List_1_t761 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m18218_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Reflection.MethodInfo>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m30143(__this, ___index, ___value, method) (( void (*) (List_1_t761 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m18219_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Reflection.MethodInfo>::Add(T)
#define List_1_Add_m30144(__this, ___item, method) (( void (*) (List_1_t761 *, MethodInfo_t *, const MethodInfo*))List_1_Add_m18228_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Reflection.MethodInfo>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m30145(__this, ___newCount, method) (( void (*) (List_1_t761 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m24295_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Reflection.MethodInfo>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m30146(__this, ___idx, ___count, method) (( void (*) (List_1_t761 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m24296_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Reflection.MethodInfo>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m30147(__this, ___collection, method) (( void (*) (List_1_t761 *, Object_t*, const MethodInfo*))List_1_AddCollection_m24297_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Reflection.MethodInfo>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m30148(__this, ___enumerable, method) (( void (*) (List_1_t761 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m24298_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Reflection.MethodInfo>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m30149(__this, ___collection, method) (( void (*) (List_1_t761 *, Object_t*, const MethodInfo*))List_1_AddRange_m87_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Reflection.MethodInfo>::AsReadOnly()
#define List_1_AsReadOnly_m30150(__this, method) (( ReadOnlyCollection_1_t6611 * (*) (List_1_t761 *, const MethodInfo*))List_1_AsReadOnly_m24299_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Reflection.MethodInfo>::Clear()
#define List_1_Clear_m30151(__this, method) (( void (*) (List_1_t761 *, const MethodInfo*))List_1_Clear_m18221_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Reflection.MethodInfo>::Contains(T)
#define List_1_Contains_m30152(__this, ___item, method) (( bool (*) (List_1_t761 *, MethodInfo_t *, const MethodInfo*))List_1_Contains_m18229_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Reflection.MethodInfo>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m30153(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t761 *, MethodInfoU5BU5D_t2714*, int32_t, const MethodInfo*))List_1_CopyTo_m18230_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Reflection.MethodInfo>::Find(System.Predicate`1<T>)
#define List_1_Find_m30154(__this, ___match, method) (( MethodInfo_t * (*) (List_1_t761 *, Predicate_1_t6612 *, const MethodInfo*))List_1_Find_m24300_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Reflection.MethodInfo>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m30155(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t6612 *, const MethodInfo*))List_1_CheckMatch_m24301_gshared)(__this /* static, unused */, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Reflection.MethodInfo>::FindAll(System.Predicate`1<T>)
#define List_1_FindAll_m30156(__this, ___match, method) (( List_1_t761 * (*) (List_1_t761 *, Predicate_1_t6612 *, const MethodInfo*))List_1_FindAll_m24302_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Reflection.MethodInfo>::FindAllStackBits(System.Predicate`1<T>)
#define List_1_FindAllStackBits_m30157(__this, ___match, method) (( List_1_t761 * (*) (List_1_t761 *, Predicate_1_t6612 *, const MethodInfo*))List_1_FindAllStackBits_m24303_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Reflection.MethodInfo>::FindAllList(System.Predicate`1<T>)
#define List_1_FindAllList_m30158(__this, ___match, method) (( List_1_t761 * (*) (List_1_t761 *, Predicate_1_t6612 *, const MethodInfo*))List_1_FindAllList_m24304_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Reflection.MethodInfo>::FindIndex(System.Predicate`1<T>)
#define List_1_FindIndex_m30159(__this, ___match, method) (( int32_t (*) (List_1_t761 *, Predicate_1_t6612 *, const MethodInfo*))List_1_FindIndex_m24305_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Reflection.MethodInfo>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m30160(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t761 *, int32_t, int32_t, Predicate_1_t6612 *, const MethodInfo*))List_1_GetIndex_m24306_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Reflection.MethodInfo>::GetEnumerator()
#define List_1_GetEnumerator_m30161(__this, method) (( Enumerator_t6613  (*) (List_1_t761 *, const MethodInfo*))List_1_GetEnumerator_m24307_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Reflection.MethodInfo>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m30162(__this, ___index, ___count, method) (( List_1_t761 * (*) (List_1_t761 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m24308_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Reflection.MethodInfo>::IndexOf(T)
#define List_1_IndexOf_m30163(__this, ___item, method) (( int32_t (*) (List_1_t761 *, MethodInfo_t *, const MethodInfo*))List_1_IndexOf_m18233_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Reflection.MethodInfo>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m30164(__this, ___start, ___delta, method) (( void (*) (List_1_t761 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m24309_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Reflection.MethodInfo>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m30165(__this, ___index, method) (( void (*) (List_1_t761 *, int32_t, const MethodInfo*))List_1_CheckIndex_m24310_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Reflection.MethodInfo>::Insert(System.Int32,T)
#define List_1_Insert_m30166(__this, ___index, ___item, method) (( void (*) (List_1_t761 *, int32_t, MethodInfo_t *, const MethodInfo*))List_1_Insert_m18234_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Reflection.MethodInfo>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m30167(__this, ___collection, method) (( void (*) (List_1_t761 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m24311_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Reflection.MethodInfo>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m30168(__this, ___index, ___collection, method) (( void (*) (List_1_t761 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m24312_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Reflection.MethodInfo>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m30169(__this, ___index, ___collection, method) (( void (*) (List_1_t761 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m24313_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Reflection.MethodInfo>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m30170(__this, ___index, ___enumerable, method) (( void (*) (List_1_t761 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m24314_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Reflection.MethodInfo>::Remove(T)
#define List_1_Remove_m30171(__this, ___item, method) (( bool (*) (List_1_t761 *, MethodInfo_t *, const MethodInfo*))List_1_Remove_m18231_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Reflection.MethodInfo>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m30172(__this, ___match, method) (( int32_t (*) (List_1_t761 *, Predicate_1_t6612 *, const MethodInfo*))List_1_RemoveAll_m24315_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Reflection.MethodInfo>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m30173(__this, ___index, method) (( void (*) (List_1_t761 *, int32_t, const MethodInfo*))List_1_RemoveAt_m18226_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Reflection.MethodInfo>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m30174(__this, ___index, ___count, method) (( void (*) (List_1_t761 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m24316_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Reflection.MethodInfo>::Reverse()
#define List_1_Reverse_m30175(__this, method) (( void (*) (List_1_t761 *, const MethodInfo*))List_1_Reverse_m24317_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Reflection.MethodInfo>::Sort()
#define List_1_Sort_m30176(__this, method) (( void (*) (List_1_t761 *, const MethodInfo*))List_1_Sort_m24318_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Reflection.MethodInfo>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m30177(__this, ___comparer, method) (( void (*) (List_1_t761 *, Object_t*, const MethodInfo*))List_1_Sort_m24319_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Reflection.MethodInfo>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m30178(__this, ___comparison, method) (( void (*) (List_1_t761 *, Comparison_1_t6614 *, const MethodInfo*))List_1_Sort_m24320_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Reflection.MethodInfo>::ToArray()
#define List_1_ToArray_m30179(__this, method) (( MethodInfoU5BU5D_t2714* (*) (List_1_t761 *, const MethodInfo*))List_1_ToArray_m3479_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Reflection.MethodInfo>::TrimExcess()
#define List_1_TrimExcess_m30180(__this, method) (( void (*) (List_1_t761 *, const MethodInfo*))List_1_TrimExcess_m24321_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Reflection.MethodInfo>::get_Capacity()
#define List_1_get_Capacity_m30181(__this, method) (( int32_t (*) (List_1_t761 *, const MethodInfo*))List_1_get_Capacity_m24322_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Reflection.MethodInfo>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m30182(__this, ___value, method) (( void (*) (List_1_t761 *, int32_t, const MethodInfo*))List_1_set_Capacity_m24323_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Reflection.MethodInfo>::get_Count()
#define List_1_get_Count_m30183(__this, method) (( int32_t (*) (List_1_t761 *, const MethodInfo*))List_1_get_Count_m18212_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Reflection.MethodInfo>::get_Item(System.Int32)
#define List_1_get_Item_m30184(__this, ___index, method) (( MethodInfo_t * (*) (List_1_t761 *, int32_t, const MethodInfo*))List_1_get_Item_m18235_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Reflection.MethodInfo>::set_Item(System.Int32,T)
#define List_1_set_Item_m30185(__this, ___index, ___value, method) (( void (*) (List_1_t761 *, int32_t, MethodInfo_t *, const MethodInfo*))List_1_set_Item_m18236_gshared)(__this, ___index, ___value, method)

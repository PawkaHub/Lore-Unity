#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Exception>
struct List_1_t2718;
// System.Object
struct Object_t;
// System.Exception
struct Exception_t496;
// System.Collections.Generic.IEnumerable`1<System.Exception>
struct IEnumerable_1_t728;
// System.Exception[]
struct ExceptionU5BU5D_t9393;
// System.Collections.Generic.IEnumerator`1<System.Exception>
struct IEnumerator_1_t805;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Collections.Generic.ICollection`1<System.Exception>
struct ICollection_1_t10836;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Exception>
struct ReadOnlyCollection_1_t730;
// System.Predicate`1<System.Exception>
struct Predicate_1_t9394;
// System.Collections.Generic.IComparer`1<System.Exception>
struct IComparer_1_t10837;
// System.Comparison`1<System.Exception>
struct Comparison_1_t9396;
// System.Collections.Generic.List`1/Enumerator<System.Exception>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_138.h"

// System.Void System.Collections.Generic.List`1<System.Exception>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_genMethodDeclarations.h"
#define List_1__ctor_m9374(__this, method) (( void (*) (List_1_t2718 *, const MethodInfo*))List_1__ctor_m84_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m66629(__this, ___collection, method) (( void (*) (List_1_t2718 *, Object_t*, const MethodInfo*))List_1__ctor_m3480_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::.ctor(System.Int32)
#define List_1__ctor_m66630(__this, ___capacity, method) (( void (*) (List_1_t2718 *, int32_t, const MethodInfo*))List_1__ctor_m24292_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::.ctor(T[],System.Int32)
#define List_1__ctor_m66631(__this, ___data, ___size, method) (( void (*) (List_1_t2718 *, ExceptionU5BU5D_t9393*, int32_t, const MethodInfo*))List_1__ctor_m24293_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::.cctor()
#define List_1__cctor_m66632(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m24294_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Exception>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m66633(__this, method) (( Object_t* (*) (List_1_t2718 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m18232_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m66634(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t2718 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m18215_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Exception>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m66635(__this, method) (( Object_t * (*) (List_1_t2718 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m18211_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Exception>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m66636(__this, ___item, method) (( int32_t (*) (List_1_t2718 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m18220_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Exception>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m66637(__this, ___item, method) (( bool (*) (List_1_t2718 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m18222_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Exception>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m66638(__this, ___item, method) (( int32_t (*) (List_1_t2718 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m18223_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m66639(__this, ___index, ___item, method) (( void (*) (List_1_t2718 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m18224_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m66640(__this, ___item, method) (( void (*) (List_1_t2718 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m18225_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Exception>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m66641(__this, method) (( bool (*) (List_1_t2718 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m18227_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Exception>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m66642(__this, method) (( bool (*) (List_1_t2718 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m18213_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Exception>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m66643(__this, method) (( Object_t * (*) (List_1_t2718 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m18214_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Exception>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m66644(__this, method) (( bool (*) (List_1_t2718 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m18216_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Exception>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m66645(__this, method) (( bool (*) (List_1_t2718 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m18217_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Exception>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m66646(__this, ___index, method) (( Object_t * (*) (List_1_t2718 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m18218_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m66647(__this, ___index, ___value, method) (( void (*) (List_1_t2718 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m18219_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::Add(T)
#define List_1_Add_m66648(__this, ___item, method) (( void (*) (List_1_t2718 *, Exception_t496 *, const MethodInfo*))List_1_Add_m18228_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m66649(__this, ___newCount, method) (( void (*) (List_1_t2718 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m24295_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m66650(__this, ___idx, ___count, method) (( void (*) (List_1_t2718 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m24296_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m66651(__this, ___collection, method) (( void (*) (List_1_t2718 *, Object_t*, const MethodInfo*))List_1_AddCollection_m24297_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m66652(__this, ___enumerable, method) (( void (*) (List_1_t2718 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m24298_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m9375(__this, ___collection, method) (( void (*) (List_1_t2718 *, Object_t*, const MethodInfo*))List_1_AddRange_m87_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Exception>::AsReadOnly()
#define List_1_AsReadOnly_m66653(__this, method) (( ReadOnlyCollection_1_t730 * (*) (List_1_t2718 *, const MethodInfo*))List_1_AsReadOnly_m24299_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::Clear()
#define List_1_Clear_m66654(__this, method) (( void (*) (List_1_t2718 *, const MethodInfo*))List_1_Clear_m18221_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Exception>::Contains(T)
#define List_1_Contains_m66655(__this, ___item, method) (( bool (*) (List_1_t2718 *, Exception_t496 *, const MethodInfo*))List_1_Contains_m18229_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m66656(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t2718 *, ExceptionU5BU5D_t9393*, int32_t, const MethodInfo*))List_1_CopyTo_m18230_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Exception>::Find(System.Predicate`1<T>)
#define List_1_Find_m66657(__this, ___match, method) (( Exception_t496 * (*) (List_1_t2718 *, Predicate_1_t9394 *, const MethodInfo*))List_1_Find_m24300_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m66658(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t9394 *, const MethodInfo*))List_1_CheckMatch_m24301_gshared)(__this /* static, unused */, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Exception>::FindAll(System.Predicate`1<T>)
#define List_1_FindAll_m66659(__this, ___match, method) (( List_1_t2718 * (*) (List_1_t2718 *, Predicate_1_t9394 *, const MethodInfo*))List_1_FindAll_m24302_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Exception>::FindAllStackBits(System.Predicate`1<T>)
#define List_1_FindAllStackBits_m66660(__this, ___match, method) (( List_1_t2718 * (*) (List_1_t2718 *, Predicate_1_t9394 *, const MethodInfo*))List_1_FindAllStackBits_m24303_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Exception>::FindAllList(System.Predicate`1<T>)
#define List_1_FindAllList_m66661(__this, ___match, method) (( List_1_t2718 * (*) (List_1_t2718 *, Predicate_1_t9394 *, const MethodInfo*))List_1_FindAllList_m24304_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Exception>::FindIndex(System.Predicate`1<T>)
#define List_1_FindIndex_m66662(__this, ___match, method) (( int32_t (*) (List_1_t2718 *, Predicate_1_t9394 *, const MethodInfo*))List_1_FindIndex_m24305_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Exception>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m66663(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t2718 *, int32_t, int32_t, Predicate_1_t9394 *, const MethodInfo*))List_1_GetIndex_m24306_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Exception>::GetEnumerator()
#define List_1_GetEnumerator_m66664(__this, method) (( Enumerator_t9395  (*) (List_1_t2718 *, const MethodInfo*))List_1_GetEnumerator_m24307_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Exception>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m66665(__this, ___index, ___count, method) (( List_1_t2718 * (*) (List_1_t2718 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m24308_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Exception>::IndexOf(T)
#define List_1_IndexOf_m66666(__this, ___item, method) (( int32_t (*) (List_1_t2718 *, Exception_t496 *, const MethodInfo*))List_1_IndexOf_m18233_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m66667(__this, ___start, ___delta, method) (( void (*) (List_1_t2718 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m24309_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m66668(__this, ___index, method) (( void (*) (List_1_t2718 *, int32_t, const MethodInfo*))List_1_CheckIndex_m24310_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::Insert(System.Int32,T)
#define List_1_Insert_m66669(__this, ___index, ___item, method) (( void (*) (List_1_t2718 *, int32_t, Exception_t496 *, const MethodInfo*))List_1_Insert_m18234_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m66670(__this, ___collection, method) (( void (*) (List_1_t2718 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m24311_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m66671(__this, ___index, ___collection, method) (( void (*) (List_1_t2718 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m24312_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m66672(__this, ___index, ___collection, method) (( void (*) (List_1_t2718 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m24313_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m66673(__this, ___index, ___enumerable, method) (( void (*) (List_1_t2718 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m24314_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Exception>::Remove(T)
#define List_1_Remove_m66674(__this, ___item, method) (( bool (*) (List_1_t2718 *, Exception_t496 *, const MethodInfo*))List_1_Remove_m18231_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Exception>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m66675(__this, ___match, method) (( int32_t (*) (List_1_t2718 *, Predicate_1_t9394 *, const MethodInfo*))List_1_RemoveAll_m24315_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m66676(__this, ___index, method) (( void (*) (List_1_t2718 *, int32_t, const MethodInfo*))List_1_RemoveAt_m18226_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m66677(__this, ___index, ___count, method) (( void (*) (List_1_t2718 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m24316_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::Reverse()
#define List_1_Reverse_m66678(__this, method) (( void (*) (List_1_t2718 *, const MethodInfo*))List_1_Reverse_m24317_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::Sort()
#define List_1_Sort_m66679(__this, method) (( void (*) (List_1_t2718 *, const MethodInfo*))List_1_Sort_m24318_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m66680(__this, ___comparer, method) (( void (*) (List_1_t2718 *, Object_t*, const MethodInfo*))List_1_Sort_m24319_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m66681(__this, ___comparison, method) (( void (*) (List_1_t2718 *, Comparison_1_t9396 *, const MethodInfo*))List_1_Sort_m24320_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Exception>::ToArray()
#define List_1_ToArray_m66682(__this, method) (( ExceptionU5BU5D_t9393* (*) (List_1_t2718 *, const MethodInfo*))List_1_ToArray_m3479_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::TrimExcess()
#define List_1_TrimExcess_m66683(__this, method) (( void (*) (List_1_t2718 *, const MethodInfo*))List_1_TrimExcess_m24321_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Exception>::get_Capacity()
#define List_1_get_Capacity_m66684(__this, method) (( int32_t (*) (List_1_t2718 *, const MethodInfo*))List_1_get_Capacity_m24322_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m66685(__this, ___value, method) (( void (*) (List_1_t2718 *, int32_t, const MethodInfo*))List_1_set_Capacity_m24323_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Exception>::get_Count()
#define List_1_get_Count_m66686(__this, method) (( int32_t (*) (List_1_t2718 *, const MethodInfo*))List_1_get_Count_m18212_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Exception>::get_Item(System.Int32)
#define List_1_get_Item_m66687(__this, ___index, method) (( Exception_t496 * (*) (List_1_t2718 *, int32_t, const MethodInfo*))List_1_get_Item_m18235_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Exception>::set_Item(System.Int32,T)
#define List_1_set_Item_m66688(__this, ___index, ___value, method) (( void (*) (List_1_t2718 *, int32_t, Exception_t496 *, const MethodInfo*))List_1_set_Item_m18236_gshared)(__this, ___index, ___value, method)

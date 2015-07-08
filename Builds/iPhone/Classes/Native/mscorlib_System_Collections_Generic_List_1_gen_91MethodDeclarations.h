#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<Language.Lua.Access>
struct List_1_t3782;
// System.Object
struct Object_t;
// Language.Lua.Access
struct Access_t3761;
// System.Collections.Generic.IEnumerable`1<Language.Lua.Access>
struct IEnumerable_1_t10882;
// Language.Lua.Access[]
struct AccessU5BU5D_t9500;
// System.Collections.Generic.IEnumerator`1<Language.Lua.Access>
struct IEnumerator_1_t10883;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Collections.Generic.ICollection`1<Language.Lua.Access>
struct ICollection_1_t10884;
// System.Collections.ObjectModel.ReadOnlyCollection`1<Language.Lua.Access>
struct ReadOnlyCollection_1_t9502;
// System.Predicate`1<Language.Lua.Access>
struct Predicate_1_t9503;
// System.Collections.Generic.IComparer`1<Language.Lua.Access>
struct IComparer_1_t10885;
// System.Comparison`1<Language.Lua.Access>
struct Comparison_1_t9504;
// System.Collections.Generic.List`1/Enumerator<Language.Lua.Access>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_33.h"

// System.Void System.Collections.Generic.List`1<Language.Lua.Access>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_genMethodDeclarations.h"
#define List_1__ctor_m11374(__this, method) (( void (*) (List_1_t3782 *, const MethodInfo*))List_1__ctor_m84_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Access>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m68130(__this, ___collection, method) (( void (*) (List_1_t3782 *, Object_t*, const MethodInfo*))List_1__ctor_m3480_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Access>::.ctor(System.Int32)
#define List_1__ctor_m68131(__this, ___capacity, method) (( void (*) (List_1_t3782 *, int32_t, const MethodInfo*))List_1__ctor_m24292_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Access>::.ctor(T[],System.Int32)
#define List_1__ctor_m68132(__this, ___data, ___size, method) (( void (*) (List_1_t3782 *, AccessU5BU5D_t9500*, int32_t, const MethodInfo*))List_1__ctor_m24293_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Access>::.cctor()
#define List_1__cctor_m68133(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m24294_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<Language.Lua.Access>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m68134(__this, method) (( Object_t* (*) (List_1_t3782 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m18232_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Access>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m68135(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t3782 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m18215_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<Language.Lua.Access>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m68136(__this, method) (( Object_t * (*) (List_1_t3782 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m18211_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<Language.Lua.Access>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m68137(__this, ___item, method) (( int32_t (*) (List_1_t3782 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m18220_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<Language.Lua.Access>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m68138(__this, ___item, method) (( bool (*) (List_1_t3782 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m18222_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<Language.Lua.Access>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m68139(__this, ___item, method) (( int32_t (*) (List_1_t3782 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m18223_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Access>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m68140(__this, ___index, ___item, method) (( void (*) (List_1_t3782 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m18224_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Access>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m68141(__this, ___item, method) (( void (*) (List_1_t3782 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m18225_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<Language.Lua.Access>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m68142(__this, method) (( bool (*) (List_1_t3782 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m18227_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Language.Lua.Access>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m68143(__this, method) (( bool (*) (List_1_t3782 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m18213_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<Language.Lua.Access>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m68144(__this, method) (( Object_t * (*) (List_1_t3782 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m18214_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Language.Lua.Access>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m68145(__this, method) (( bool (*) (List_1_t3782 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m18216_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Language.Lua.Access>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m68146(__this, method) (( bool (*) (List_1_t3782 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m18217_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<Language.Lua.Access>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m68147(__this, ___index, method) (( Object_t * (*) (List_1_t3782 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m18218_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Access>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m68148(__this, ___index, ___value, method) (( void (*) (List_1_t3782 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m18219_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Access>::Add(T)
#define List_1_Add_m68149(__this, ___item, method) (( void (*) (List_1_t3782 *, Access_t3761 *, const MethodInfo*))List_1_Add_m18228_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Access>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m68150(__this, ___newCount, method) (( void (*) (List_1_t3782 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m24295_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Access>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m68151(__this, ___idx, ___count, method) (( void (*) (List_1_t3782 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m24296_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Access>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m68152(__this, ___collection, method) (( void (*) (List_1_t3782 *, Object_t*, const MethodInfo*))List_1_AddCollection_m24297_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Access>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m68153(__this, ___enumerable, method) (( void (*) (List_1_t3782 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m24298_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Access>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m68154(__this, ___collection, method) (( void (*) (List_1_t3782 *, Object_t*, const MethodInfo*))List_1_AddRange_m87_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<Language.Lua.Access>::AsReadOnly()
#define List_1_AsReadOnly_m68155(__this, method) (( ReadOnlyCollection_1_t9502 * (*) (List_1_t3782 *, const MethodInfo*))List_1_AsReadOnly_m24299_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Access>::Clear()
#define List_1_Clear_m68156(__this, method) (( void (*) (List_1_t3782 *, const MethodInfo*))List_1_Clear_m18221_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Language.Lua.Access>::Contains(T)
#define List_1_Contains_m68157(__this, ___item, method) (( bool (*) (List_1_t3782 *, Access_t3761 *, const MethodInfo*))List_1_Contains_m18229_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Access>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m68158(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t3782 *, AccessU5BU5D_t9500*, int32_t, const MethodInfo*))List_1_CopyTo_m18230_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<Language.Lua.Access>::Find(System.Predicate`1<T>)
#define List_1_Find_m68159(__this, ___match, method) (( Access_t3761 * (*) (List_1_t3782 *, Predicate_1_t9503 *, const MethodInfo*))List_1_Find_m24300_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Access>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m68160(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t9503 *, const MethodInfo*))List_1_CheckMatch_m24301_gshared)(__this /* static, unused */, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<Language.Lua.Access>::FindAll(System.Predicate`1<T>)
#define List_1_FindAll_m68161(__this, ___match, method) (( List_1_t3782 * (*) (List_1_t3782 *, Predicate_1_t9503 *, const MethodInfo*))List_1_FindAll_m24302_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<Language.Lua.Access>::FindAllStackBits(System.Predicate`1<T>)
#define List_1_FindAllStackBits_m68162(__this, ___match, method) (( List_1_t3782 * (*) (List_1_t3782 *, Predicate_1_t9503 *, const MethodInfo*))List_1_FindAllStackBits_m24303_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<Language.Lua.Access>::FindAllList(System.Predicate`1<T>)
#define List_1_FindAllList_m68163(__this, ___match, method) (( List_1_t3782 * (*) (List_1_t3782 *, Predicate_1_t9503 *, const MethodInfo*))List_1_FindAllList_m24304_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<Language.Lua.Access>::FindIndex(System.Predicate`1<T>)
#define List_1_FindIndex_m68164(__this, ___match, method) (( int32_t (*) (List_1_t3782 *, Predicate_1_t9503 *, const MethodInfo*))List_1_FindIndex_m24305_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<Language.Lua.Access>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m68165(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t3782 *, int32_t, int32_t, Predicate_1_t9503 *, const MethodInfo*))List_1_GetIndex_m24306_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Language.Lua.Access>::GetEnumerator()
#define List_1_GetEnumerator_m11375(__this, method) (( Enumerator_t3834  (*) (List_1_t3782 *, const MethodInfo*))List_1_GetEnumerator_m24307_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<Language.Lua.Access>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m68166(__this, ___index, ___count, method) (( List_1_t3782 * (*) (List_1_t3782 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m24308_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<Language.Lua.Access>::IndexOf(T)
#define List_1_IndexOf_m68167(__this, ___item, method) (( int32_t (*) (List_1_t3782 *, Access_t3761 *, const MethodInfo*))List_1_IndexOf_m18233_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Access>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m68168(__this, ___start, ___delta, method) (( void (*) (List_1_t3782 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m24309_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Access>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m68169(__this, ___index, method) (( void (*) (List_1_t3782 *, int32_t, const MethodInfo*))List_1_CheckIndex_m24310_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Access>::Insert(System.Int32,T)
#define List_1_Insert_m68170(__this, ___index, ___item, method) (( void (*) (List_1_t3782 *, int32_t, Access_t3761 *, const MethodInfo*))List_1_Insert_m18234_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Access>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m68171(__this, ___collection, method) (( void (*) (List_1_t3782 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m24311_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Access>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m68172(__this, ___index, ___collection, method) (( void (*) (List_1_t3782 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m24312_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Access>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m68173(__this, ___index, ___collection, method) (( void (*) (List_1_t3782 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m24313_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Access>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m68174(__this, ___index, ___enumerable, method) (( void (*) (List_1_t3782 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m24314_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<Language.Lua.Access>::Remove(T)
#define List_1_Remove_m68175(__this, ___item, method) (( bool (*) (List_1_t3782 *, Access_t3761 *, const MethodInfo*))List_1_Remove_m18231_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<Language.Lua.Access>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m68176(__this, ___match, method) (( int32_t (*) (List_1_t3782 *, Predicate_1_t9503 *, const MethodInfo*))List_1_RemoveAll_m24315_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Access>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m68177(__this, ___index, method) (( void (*) (List_1_t3782 *, int32_t, const MethodInfo*))List_1_RemoveAt_m18226_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Access>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m68178(__this, ___index, ___count, method) (( void (*) (List_1_t3782 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m24316_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Access>::Reverse()
#define List_1_Reverse_m68179(__this, method) (( void (*) (List_1_t3782 *, const MethodInfo*))List_1_Reverse_m24317_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Access>::Sort()
#define List_1_Sort_m68180(__this, method) (( void (*) (List_1_t3782 *, const MethodInfo*))List_1_Sort_m24318_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Access>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m68181(__this, ___comparer, method) (( void (*) (List_1_t3782 *, Object_t*, const MethodInfo*))List_1_Sort_m24319_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Access>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m68182(__this, ___comparison, method) (( void (*) (List_1_t3782 *, Comparison_1_t9504 *, const MethodInfo*))List_1_Sort_m24320_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<Language.Lua.Access>::ToArray()
#define List_1_ToArray_m68183(__this, method) (( AccessU5BU5D_t9500* (*) (List_1_t3782 *, const MethodInfo*))List_1_ToArray_m3479_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Access>::TrimExcess()
#define List_1_TrimExcess_m68184(__this, method) (( void (*) (List_1_t3782 *, const MethodInfo*))List_1_TrimExcess_m24321_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<Language.Lua.Access>::get_Capacity()
#define List_1_get_Capacity_m68185(__this, method) (( int32_t (*) (List_1_t3782 *, const MethodInfo*))List_1_get_Capacity_m24322_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Access>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m68186(__this, ___value, method) (( void (*) (List_1_t3782 *, int32_t, const MethodInfo*))List_1_set_Capacity_m24323_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<Language.Lua.Access>::get_Count()
#define List_1_get_Count_m68187(__this, method) (( int32_t (*) (List_1_t3782 *, const MethodInfo*))List_1_get_Count_m18212_gshared)(__this, method)
// T System.Collections.Generic.List`1<Language.Lua.Access>::get_Item(System.Int32)
#define List_1_get_Item_m68188(__this, ___index, method) (( Access_t3761 * (*) (List_1_t3782 *, int32_t, const MethodInfo*))List_1_get_Item_m18235_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Access>::set_Item(System.Int32,T)
#define List_1_set_Item_m68189(__this, ___index, ___value, method) (( void (*) (List_1_t3782 *, int32_t, Access_t3761 *, const MethodInfo*))List_1_set_Item_m18236_gshared)(__this, ___index, ___value, method)

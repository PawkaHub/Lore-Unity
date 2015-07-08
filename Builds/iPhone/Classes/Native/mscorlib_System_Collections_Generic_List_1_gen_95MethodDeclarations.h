#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<Language.Lua.Field>
struct List_1_t3785;
// System.Object
struct Object_t;
// Language.Lua.Field
struct Field_t3823;
// System.Collections.Generic.IEnumerable`1<Language.Lua.Field>
struct IEnumerable_1_t10898;
// Language.Lua.Field[]
struct FieldU5BU5D_t9522;
// System.Collections.Generic.IEnumerator`1<Language.Lua.Field>
struct IEnumerator_1_t10899;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Collections.Generic.ICollection`1<Language.Lua.Field>
struct ICollection_1_t10900;
// System.Collections.ObjectModel.ReadOnlyCollection`1<Language.Lua.Field>
struct ReadOnlyCollection_1_t9524;
// System.Predicate`1<Language.Lua.Field>
struct Predicate_1_t9525;
// System.Collections.Generic.IComparer`1<Language.Lua.Field>
struct IComparer_1_t10901;
// System.Comparison`1<Language.Lua.Field>
struct Comparison_1_t9526;
// System.Collections.Generic.List`1/Enumerator<Language.Lua.Field>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_34.h"

// System.Void System.Collections.Generic.List`1<Language.Lua.Field>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_genMethodDeclarations.h"
#define List_1__ctor_m11378(__this, method) (( void (*) (List_1_t3785 *, const MethodInfo*))List_1__ctor_m84_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Field>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m68551(__this, ___collection, method) (( void (*) (List_1_t3785 *, Object_t*, const MethodInfo*))List_1__ctor_m3480_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Field>::.ctor(System.Int32)
#define List_1__ctor_m68552(__this, ___capacity, method) (( void (*) (List_1_t3785 *, int32_t, const MethodInfo*))List_1__ctor_m24292_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Field>::.ctor(T[],System.Int32)
#define List_1__ctor_m68553(__this, ___data, ___size, method) (( void (*) (List_1_t3785 *, FieldU5BU5D_t9522*, int32_t, const MethodInfo*))List_1__ctor_m24293_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Field>::.cctor()
#define List_1__cctor_m68554(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m24294_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<Language.Lua.Field>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m68555(__this, method) (( Object_t* (*) (List_1_t3785 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m18232_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Field>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m68556(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t3785 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m18215_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<Language.Lua.Field>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m68557(__this, method) (( Object_t * (*) (List_1_t3785 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m18211_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<Language.Lua.Field>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m68558(__this, ___item, method) (( int32_t (*) (List_1_t3785 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m18220_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<Language.Lua.Field>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m68559(__this, ___item, method) (( bool (*) (List_1_t3785 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m18222_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<Language.Lua.Field>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m68560(__this, ___item, method) (( int32_t (*) (List_1_t3785 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m18223_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Field>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m68561(__this, ___index, ___item, method) (( void (*) (List_1_t3785 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m18224_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Field>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m68562(__this, ___item, method) (( void (*) (List_1_t3785 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m18225_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<Language.Lua.Field>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m68563(__this, method) (( bool (*) (List_1_t3785 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m18227_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Language.Lua.Field>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m68564(__this, method) (( bool (*) (List_1_t3785 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m18213_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<Language.Lua.Field>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m68565(__this, method) (( Object_t * (*) (List_1_t3785 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m18214_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Language.Lua.Field>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m68566(__this, method) (( bool (*) (List_1_t3785 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m18216_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Language.Lua.Field>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m68567(__this, method) (( bool (*) (List_1_t3785 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m18217_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<Language.Lua.Field>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m68568(__this, ___index, method) (( Object_t * (*) (List_1_t3785 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m18218_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Field>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m68569(__this, ___index, ___value, method) (( void (*) (List_1_t3785 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m18219_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Field>::Add(T)
#define List_1_Add_m68570(__this, ___item, method) (( void (*) (List_1_t3785 *, Field_t3823 *, const MethodInfo*))List_1_Add_m18228_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Field>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m68571(__this, ___newCount, method) (( void (*) (List_1_t3785 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m24295_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Field>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m68572(__this, ___idx, ___count, method) (( void (*) (List_1_t3785 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m24296_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Field>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m68573(__this, ___collection, method) (( void (*) (List_1_t3785 *, Object_t*, const MethodInfo*))List_1_AddCollection_m24297_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Field>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m68574(__this, ___enumerable, method) (( void (*) (List_1_t3785 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m24298_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Field>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m68575(__this, ___collection, method) (( void (*) (List_1_t3785 *, Object_t*, const MethodInfo*))List_1_AddRange_m87_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<Language.Lua.Field>::AsReadOnly()
#define List_1_AsReadOnly_m68576(__this, method) (( ReadOnlyCollection_1_t9524 * (*) (List_1_t3785 *, const MethodInfo*))List_1_AsReadOnly_m24299_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Field>::Clear()
#define List_1_Clear_m68577(__this, method) (( void (*) (List_1_t3785 *, const MethodInfo*))List_1_Clear_m18221_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Language.Lua.Field>::Contains(T)
#define List_1_Contains_m68578(__this, ___item, method) (( bool (*) (List_1_t3785 *, Field_t3823 *, const MethodInfo*))List_1_Contains_m18229_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Field>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m68579(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t3785 *, FieldU5BU5D_t9522*, int32_t, const MethodInfo*))List_1_CopyTo_m18230_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<Language.Lua.Field>::Find(System.Predicate`1<T>)
#define List_1_Find_m68580(__this, ___match, method) (( Field_t3823 * (*) (List_1_t3785 *, Predicate_1_t9525 *, const MethodInfo*))List_1_Find_m24300_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Field>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m68581(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t9525 *, const MethodInfo*))List_1_CheckMatch_m24301_gshared)(__this /* static, unused */, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<Language.Lua.Field>::FindAll(System.Predicate`1<T>)
#define List_1_FindAll_m68582(__this, ___match, method) (( List_1_t3785 * (*) (List_1_t3785 *, Predicate_1_t9525 *, const MethodInfo*))List_1_FindAll_m24302_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<Language.Lua.Field>::FindAllStackBits(System.Predicate`1<T>)
#define List_1_FindAllStackBits_m68583(__this, ___match, method) (( List_1_t3785 * (*) (List_1_t3785 *, Predicate_1_t9525 *, const MethodInfo*))List_1_FindAllStackBits_m24303_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<Language.Lua.Field>::FindAllList(System.Predicate`1<T>)
#define List_1_FindAllList_m68584(__this, ___match, method) (( List_1_t3785 * (*) (List_1_t3785 *, Predicate_1_t9525 *, const MethodInfo*))List_1_FindAllList_m24304_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<Language.Lua.Field>::FindIndex(System.Predicate`1<T>)
#define List_1_FindIndex_m68585(__this, ___match, method) (( int32_t (*) (List_1_t3785 *, Predicate_1_t9525 *, const MethodInfo*))List_1_FindIndex_m24305_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<Language.Lua.Field>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m68586(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t3785 *, int32_t, int32_t, Predicate_1_t9525 *, const MethodInfo*))List_1_GetIndex_m24306_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Language.Lua.Field>::GetEnumerator()
#define List_1_GetEnumerator_m11379(__this, method) (( Enumerator_t3835  (*) (List_1_t3785 *, const MethodInfo*))List_1_GetEnumerator_m24307_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<Language.Lua.Field>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m68587(__this, ___index, ___count, method) (( List_1_t3785 * (*) (List_1_t3785 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m24308_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<Language.Lua.Field>::IndexOf(T)
#define List_1_IndexOf_m68588(__this, ___item, method) (( int32_t (*) (List_1_t3785 *, Field_t3823 *, const MethodInfo*))List_1_IndexOf_m18233_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Field>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m68589(__this, ___start, ___delta, method) (( void (*) (List_1_t3785 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m24309_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Field>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m68590(__this, ___index, method) (( void (*) (List_1_t3785 *, int32_t, const MethodInfo*))List_1_CheckIndex_m24310_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Field>::Insert(System.Int32,T)
#define List_1_Insert_m68591(__this, ___index, ___item, method) (( void (*) (List_1_t3785 *, int32_t, Field_t3823 *, const MethodInfo*))List_1_Insert_m18234_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Field>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m68592(__this, ___collection, method) (( void (*) (List_1_t3785 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m24311_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Field>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m68593(__this, ___index, ___collection, method) (( void (*) (List_1_t3785 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m24312_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Field>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m68594(__this, ___index, ___collection, method) (( void (*) (List_1_t3785 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m24313_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Field>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m68595(__this, ___index, ___enumerable, method) (( void (*) (List_1_t3785 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m24314_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<Language.Lua.Field>::Remove(T)
#define List_1_Remove_m68596(__this, ___item, method) (( bool (*) (List_1_t3785 *, Field_t3823 *, const MethodInfo*))List_1_Remove_m18231_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<Language.Lua.Field>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m68597(__this, ___match, method) (( int32_t (*) (List_1_t3785 *, Predicate_1_t9525 *, const MethodInfo*))List_1_RemoveAll_m24315_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Field>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m68598(__this, ___index, method) (( void (*) (List_1_t3785 *, int32_t, const MethodInfo*))List_1_RemoveAt_m18226_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Field>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m68599(__this, ___index, ___count, method) (( void (*) (List_1_t3785 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m24316_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Field>::Reverse()
#define List_1_Reverse_m68600(__this, method) (( void (*) (List_1_t3785 *, const MethodInfo*))List_1_Reverse_m24317_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Field>::Sort()
#define List_1_Sort_m68601(__this, method) (( void (*) (List_1_t3785 *, const MethodInfo*))List_1_Sort_m24318_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Field>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m68602(__this, ___comparer, method) (( void (*) (List_1_t3785 *, Object_t*, const MethodInfo*))List_1_Sort_m24319_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Field>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m68603(__this, ___comparison, method) (( void (*) (List_1_t3785 *, Comparison_1_t9526 *, const MethodInfo*))List_1_Sort_m24320_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<Language.Lua.Field>::ToArray()
#define List_1_ToArray_m68604(__this, method) (( FieldU5BU5D_t9522* (*) (List_1_t3785 *, const MethodInfo*))List_1_ToArray_m3479_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Field>::TrimExcess()
#define List_1_TrimExcess_m68605(__this, method) (( void (*) (List_1_t3785 *, const MethodInfo*))List_1_TrimExcess_m24321_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<Language.Lua.Field>::get_Capacity()
#define List_1_get_Capacity_m68606(__this, method) (( int32_t (*) (List_1_t3785 *, const MethodInfo*))List_1_get_Capacity_m24322_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Field>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m68607(__this, ___value, method) (( void (*) (List_1_t3785 *, int32_t, const MethodInfo*))List_1_set_Capacity_m24323_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<Language.Lua.Field>::get_Count()
#define List_1_get_Count_m68608(__this, method) (( int32_t (*) (List_1_t3785 *, const MethodInfo*))List_1_get_Count_m18212_gshared)(__this, method)
// T System.Collections.Generic.List`1<Language.Lua.Field>::get_Item(System.Int32)
#define List_1_get_Item_m68609(__this, ___index, method) (( Field_t3823 * (*) (List_1_t3785 *, int32_t, const MethodInfo*))List_1_get_Item_m18235_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Field>::set_Item(System.Int32,T)
#define List_1_set_Item_m68610(__this, ___index, ___value, method) (( void (*) (List_1_t3785 *, int32_t, Field_t3823 *, const MethodInfo*))List_1_set_Item_m18236_gshared)(__this, ___index, ___value, method)

#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<Language.Lua.Field>
struct List_1_t3547;
// System.Object
struct Object_t;
// Language.Lua.Field
struct Field_t3585;
// System.Collections.Generic.IEnumerable`1<Language.Lua.Field>
struct IEnumerable_1_t10607;
// Language.Lua.Field[]
struct FieldU5BU5D_t9240;
// System.Collections.Generic.IEnumerator`1<Language.Lua.Field>
struct IEnumerator_1_t10608;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Collections.Generic.ICollection`1<Language.Lua.Field>
struct ICollection_1_t10609;
// System.Collections.ObjectModel.ReadOnlyCollection`1<Language.Lua.Field>
struct ReadOnlyCollection_1_t9242;
// System.Predicate`1<Language.Lua.Field>
struct Predicate_1_t9243;
// System.Collections.Generic.IComparer`1<Language.Lua.Field>
struct IComparer_1_t10610;
// System.Comparison`1<Language.Lua.Field>
struct Comparison_1_t9244;
// System.Collections.Generic.List`1/Enumerator<Language.Lua.Field>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_31.h"

// System.Void System.Collections.Generic.List`1<Language.Lua.Field>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_genMethodDeclarations.h"
#define List_1__ctor_m10959(__this, method) (( void (*) (List_1_t3547 *, const MethodInfo*))List_1__ctor_m84_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Field>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m67636(__this, ___collection, method) (( void (*) (List_1_t3547 *, Object_t*, const MethodInfo*))List_1__ctor_m3251_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Field>::.ctor(System.Int32)
#define List_1__ctor_m67637(__this, ___capacity, method) (( void (*) (List_1_t3547 *, int32_t, const MethodInfo*))List_1__ctor_m23875_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Field>::.ctor(T[],System.Int32)
#define List_1__ctor_m67638(__this, ___data, ___size, method) (( void (*) (List_1_t3547 *, FieldU5BU5D_t9240*, int32_t, const MethodInfo*))List_1__ctor_m23876_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Field>::.cctor()
#define List_1__cctor_m67639(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m23877_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<Language.Lua.Field>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m67640(__this, method) (( Object_t* (*) (List_1_t3547 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m17814_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Field>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m67641(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t3547 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m17797_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<Language.Lua.Field>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m67642(__this, method) (( Object_t * (*) (List_1_t3547 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m17793_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<Language.Lua.Field>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m67643(__this, ___item, method) (( int32_t (*) (List_1_t3547 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m17802_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<Language.Lua.Field>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m67644(__this, ___item, method) (( bool (*) (List_1_t3547 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m17804_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<Language.Lua.Field>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m67645(__this, ___item, method) (( int32_t (*) (List_1_t3547 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m17805_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Field>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m67646(__this, ___index, ___item, method) (( void (*) (List_1_t3547 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m17806_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Field>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m67647(__this, ___item, method) (( void (*) (List_1_t3547 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m17807_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<Language.Lua.Field>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m67648(__this, method) (( bool (*) (List_1_t3547 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m17809_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Language.Lua.Field>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m67649(__this, method) (( bool (*) (List_1_t3547 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m17795_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<Language.Lua.Field>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m67650(__this, method) (( Object_t * (*) (List_1_t3547 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m17796_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Language.Lua.Field>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m67651(__this, method) (( bool (*) (List_1_t3547 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m17798_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Language.Lua.Field>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m67652(__this, method) (( bool (*) (List_1_t3547 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m17799_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<Language.Lua.Field>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m67653(__this, ___index, method) (( Object_t * (*) (List_1_t3547 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m17800_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Field>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m67654(__this, ___index, ___value, method) (( void (*) (List_1_t3547 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m17801_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Field>::Add(T)
#define List_1_Add_m67655(__this, ___item, method) (( void (*) (List_1_t3547 *, Field_t3585 *, const MethodInfo*))List_1_Add_m17810_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Field>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m67656(__this, ___newCount, method) (( void (*) (List_1_t3547 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m23878_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Field>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m67657(__this, ___idx, ___count, method) (( void (*) (List_1_t3547 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m23879_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Field>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m67658(__this, ___collection, method) (( void (*) (List_1_t3547 *, Object_t*, const MethodInfo*))List_1_AddCollection_m23880_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Field>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m67659(__this, ___enumerable, method) (( void (*) (List_1_t3547 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m23881_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Field>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m67660(__this, ___collection, method) (( void (*) (List_1_t3547 *, Object_t*, const MethodInfo*))List_1_AddRange_m87_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<Language.Lua.Field>::AsReadOnly()
#define List_1_AsReadOnly_m67661(__this, method) (( ReadOnlyCollection_1_t9242 * (*) (List_1_t3547 *, const MethodInfo*))List_1_AsReadOnly_m23882_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Field>::Clear()
#define List_1_Clear_m67662(__this, method) (( void (*) (List_1_t3547 *, const MethodInfo*))List_1_Clear_m17803_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Language.Lua.Field>::Contains(T)
#define List_1_Contains_m67663(__this, ___item, method) (( bool (*) (List_1_t3547 *, Field_t3585 *, const MethodInfo*))List_1_Contains_m17811_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Field>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m67664(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t3547 *, FieldU5BU5D_t9240*, int32_t, const MethodInfo*))List_1_CopyTo_m17812_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<Language.Lua.Field>::Find(System.Predicate`1<T>)
#define List_1_Find_m67665(__this, ___match, method) (( Field_t3585 * (*) (List_1_t3547 *, Predicate_1_t9243 *, const MethodInfo*))List_1_Find_m23883_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Field>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m67666(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t9243 *, const MethodInfo*))List_1_CheckMatch_m23884_gshared)(__this /* static, unused */, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<Language.Lua.Field>::FindAll(System.Predicate`1<T>)
#define List_1_FindAll_m67667(__this, ___match, method) (( List_1_t3547 * (*) (List_1_t3547 *, Predicate_1_t9243 *, const MethodInfo*))List_1_FindAll_m23885_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<Language.Lua.Field>::FindAllStackBits(System.Predicate`1<T>)
#define List_1_FindAllStackBits_m67668(__this, ___match, method) (( List_1_t3547 * (*) (List_1_t3547 *, Predicate_1_t9243 *, const MethodInfo*))List_1_FindAllStackBits_m23886_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<Language.Lua.Field>::FindAllList(System.Predicate`1<T>)
#define List_1_FindAllList_m67669(__this, ___match, method) (( List_1_t3547 * (*) (List_1_t3547 *, Predicate_1_t9243 *, const MethodInfo*))List_1_FindAllList_m23887_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<Language.Lua.Field>::FindIndex(System.Predicate`1<T>)
#define List_1_FindIndex_m67670(__this, ___match, method) (( int32_t (*) (List_1_t3547 *, Predicate_1_t9243 *, const MethodInfo*))List_1_FindIndex_m23888_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<Language.Lua.Field>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m67671(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t3547 *, int32_t, int32_t, Predicate_1_t9243 *, const MethodInfo*))List_1_GetIndex_m23889_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Language.Lua.Field>::GetEnumerator()
#define List_1_GetEnumerator_m10960(__this, method) (( Enumerator_t3597  (*) (List_1_t3547 *, const MethodInfo*))List_1_GetEnumerator_m23890_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<Language.Lua.Field>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m67672(__this, ___index, ___count, method) (( List_1_t3547 * (*) (List_1_t3547 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m23891_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<Language.Lua.Field>::IndexOf(T)
#define List_1_IndexOf_m67673(__this, ___item, method) (( int32_t (*) (List_1_t3547 *, Field_t3585 *, const MethodInfo*))List_1_IndexOf_m17815_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Field>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m67674(__this, ___start, ___delta, method) (( void (*) (List_1_t3547 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m23892_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Field>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m67675(__this, ___index, method) (( void (*) (List_1_t3547 *, int32_t, const MethodInfo*))List_1_CheckIndex_m23893_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Field>::Insert(System.Int32,T)
#define List_1_Insert_m67676(__this, ___index, ___item, method) (( void (*) (List_1_t3547 *, int32_t, Field_t3585 *, const MethodInfo*))List_1_Insert_m17816_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Field>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m67677(__this, ___collection, method) (( void (*) (List_1_t3547 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m23894_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Field>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m67678(__this, ___index, ___collection, method) (( void (*) (List_1_t3547 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m23895_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Field>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m67679(__this, ___index, ___collection, method) (( void (*) (List_1_t3547 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m23896_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Field>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m67680(__this, ___index, ___enumerable, method) (( void (*) (List_1_t3547 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m23897_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<Language.Lua.Field>::Remove(T)
#define List_1_Remove_m67681(__this, ___item, method) (( bool (*) (List_1_t3547 *, Field_t3585 *, const MethodInfo*))List_1_Remove_m17813_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<Language.Lua.Field>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m67682(__this, ___match, method) (( int32_t (*) (List_1_t3547 *, Predicate_1_t9243 *, const MethodInfo*))List_1_RemoveAll_m23898_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Field>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m67683(__this, ___index, method) (( void (*) (List_1_t3547 *, int32_t, const MethodInfo*))List_1_RemoveAt_m17808_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Field>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m67684(__this, ___index, ___count, method) (( void (*) (List_1_t3547 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m23899_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Field>::Reverse()
#define List_1_Reverse_m67685(__this, method) (( void (*) (List_1_t3547 *, const MethodInfo*))List_1_Reverse_m23900_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Field>::Sort()
#define List_1_Sort_m67686(__this, method) (( void (*) (List_1_t3547 *, const MethodInfo*))List_1_Sort_m23901_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Field>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m67687(__this, ___comparer, method) (( void (*) (List_1_t3547 *, Object_t*, const MethodInfo*))List_1_Sort_m23902_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Field>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m67688(__this, ___comparison, method) (( void (*) (List_1_t3547 *, Comparison_1_t9244 *, const MethodInfo*))List_1_Sort_m23903_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<Language.Lua.Field>::ToArray()
#define List_1_ToArray_m67689(__this, method) (( FieldU5BU5D_t9240* (*) (List_1_t3547 *, const MethodInfo*))List_1_ToArray_m3250_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Field>::TrimExcess()
#define List_1_TrimExcess_m67690(__this, method) (( void (*) (List_1_t3547 *, const MethodInfo*))List_1_TrimExcess_m23904_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<Language.Lua.Field>::get_Capacity()
#define List_1_get_Capacity_m67691(__this, method) (( int32_t (*) (List_1_t3547 *, const MethodInfo*))List_1_get_Capacity_m23905_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Field>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m67692(__this, ___value, method) (( void (*) (List_1_t3547 *, int32_t, const MethodInfo*))List_1_set_Capacity_m23906_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<Language.Lua.Field>::get_Count()
#define List_1_get_Count_m67693(__this, method) (( int32_t (*) (List_1_t3547 *, const MethodInfo*))List_1_get_Count_m17794_gshared)(__this, method)
// T System.Collections.Generic.List`1<Language.Lua.Field>::get_Item(System.Int32)
#define List_1_get_Item_m67694(__this, ___index, method) (( Field_t3585 * (*) (List_1_t3547 *, int32_t, const MethodInfo*))List_1_get_Item_m17817_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Field>::set_Item(System.Int32,T)
#define List_1_set_Item_m67695(__this, ___index, ___value, method) (( void (*) (List_1_t3547 *, int32_t, Field_t3585 *, const MethodInfo*))List_1_set_Item_m17818_gshared)(__this, ___index, ___value, method)

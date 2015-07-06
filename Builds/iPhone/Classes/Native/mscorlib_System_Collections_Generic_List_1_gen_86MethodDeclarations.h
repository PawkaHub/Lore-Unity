#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<Language.Lua.Expr>
struct List_1_t3502;
// System.Object
struct Object_t;
// Language.Lua.Expr
struct Expr_t3509;
// System.Collections.Generic.IEnumerable`1<Language.Lua.Expr>
struct IEnumerable_1_t10585;
// Language.Lua.Expr[]
struct ExprU5BU5D_t9208;
// System.Collections.Generic.IEnumerator`1<Language.Lua.Expr>
struct IEnumerator_1_t10586;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Collections.Generic.ICollection`1<Language.Lua.Expr>
struct ICollection_1_t10587;
// System.Collections.ObjectModel.ReadOnlyCollection`1<Language.Lua.Expr>
struct ReadOnlyCollection_1_t9210;
// System.Predicate`1<Language.Lua.Expr>
struct Predicate_1_t9211;
// System.Collections.Generic.IComparer`1<Language.Lua.Expr>
struct IComparer_1_t10588;
// System.Comparison`1<Language.Lua.Expr>
struct Comparison_1_t9212;
// System.Collections.Generic.List`1/Enumerator<Language.Lua.Expr>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_32.h"

// System.Void System.Collections.Generic.List`1<Language.Lua.Expr>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_genMethodDeclarations.h"
#define List_1__ctor_m10929(__this, method) (( void (*) (List_1_t3502 *, const MethodInfo*))List_1__ctor_m84_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Expr>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m67005(__this, ___collection, method) (( void (*) (List_1_t3502 *, Object_t*, const MethodInfo*))List_1__ctor_m3251_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Expr>::.ctor(System.Int32)
#define List_1__ctor_m67006(__this, ___capacity, method) (( void (*) (List_1_t3502 *, int32_t, const MethodInfo*))List_1__ctor_m23875_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Expr>::.ctor(T[],System.Int32)
#define List_1__ctor_m67007(__this, ___data, ___size, method) (( void (*) (List_1_t3502 *, ExprU5BU5D_t9208*, int32_t, const MethodInfo*))List_1__ctor_m23876_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Expr>::.cctor()
#define List_1__cctor_m67008(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m23877_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<Language.Lua.Expr>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m67009(__this, method) (( Object_t* (*) (List_1_t3502 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m17814_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Expr>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m67010(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t3502 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m17797_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<Language.Lua.Expr>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m67011(__this, method) (( Object_t * (*) (List_1_t3502 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m17793_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<Language.Lua.Expr>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m67012(__this, ___item, method) (( int32_t (*) (List_1_t3502 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m17802_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<Language.Lua.Expr>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m67013(__this, ___item, method) (( bool (*) (List_1_t3502 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m17804_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<Language.Lua.Expr>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m67014(__this, ___item, method) (( int32_t (*) (List_1_t3502 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m17805_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Expr>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m67015(__this, ___index, ___item, method) (( void (*) (List_1_t3502 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m17806_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Expr>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m67016(__this, ___item, method) (( void (*) (List_1_t3502 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m17807_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<Language.Lua.Expr>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m67017(__this, method) (( bool (*) (List_1_t3502 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m17809_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Language.Lua.Expr>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m67018(__this, method) (( bool (*) (List_1_t3502 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m17795_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<Language.Lua.Expr>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m67019(__this, method) (( Object_t * (*) (List_1_t3502 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m17796_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Language.Lua.Expr>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m67020(__this, method) (( bool (*) (List_1_t3502 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m17798_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Language.Lua.Expr>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m67021(__this, method) (( bool (*) (List_1_t3502 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m17799_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<Language.Lua.Expr>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m67022(__this, ___index, method) (( Object_t * (*) (List_1_t3502 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m17800_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Expr>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m67023(__this, ___index, ___value, method) (( void (*) (List_1_t3502 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m17801_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Expr>::Add(T)
#define List_1_Add_m67024(__this, ___item, method) (( void (*) (List_1_t3502 *, Expr_t3509 *, const MethodInfo*))List_1_Add_m17810_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Expr>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m67025(__this, ___newCount, method) (( void (*) (List_1_t3502 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m23878_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Expr>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m67026(__this, ___idx, ___count, method) (( void (*) (List_1_t3502 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m23879_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Expr>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m67027(__this, ___collection, method) (( void (*) (List_1_t3502 *, Object_t*, const MethodInfo*))List_1_AddCollection_m23880_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Expr>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m67028(__this, ___enumerable, method) (( void (*) (List_1_t3502 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m23881_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Expr>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m67029(__this, ___collection, method) (( void (*) (List_1_t3502 *, Object_t*, const MethodInfo*))List_1_AddRange_m87_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<Language.Lua.Expr>::AsReadOnly()
#define List_1_AsReadOnly_m67030(__this, method) (( ReadOnlyCollection_1_t9210 * (*) (List_1_t3502 *, const MethodInfo*))List_1_AsReadOnly_m23882_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Expr>::Clear()
#define List_1_Clear_m67031(__this, method) (( void (*) (List_1_t3502 *, const MethodInfo*))List_1_Clear_m17803_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Language.Lua.Expr>::Contains(T)
#define List_1_Contains_m67032(__this, ___item, method) (( bool (*) (List_1_t3502 *, Expr_t3509 *, const MethodInfo*))List_1_Contains_m17811_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Expr>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m67033(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t3502 *, ExprU5BU5D_t9208*, int32_t, const MethodInfo*))List_1_CopyTo_m17812_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<Language.Lua.Expr>::Find(System.Predicate`1<T>)
#define List_1_Find_m67034(__this, ___match, method) (( Expr_t3509 * (*) (List_1_t3502 *, Predicate_1_t9211 *, const MethodInfo*))List_1_Find_m23883_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Expr>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m67035(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t9211 *, const MethodInfo*))List_1_CheckMatch_m23884_gshared)(__this /* static, unused */, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<Language.Lua.Expr>::FindAll(System.Predicate`1<T>)
#define List_1_FindAll_m67036(__this, ___match, method) (( List_1_t3502 * (*) (List_1_t3502 *, Predicate_1_t9211 *, const MethodInfo*))List_1_FindAll_m23885_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<Language.Lua.Expr>::FindAllStackBits(System.Predicate`1<T>)
#define List_1_FindAllStackBits_m67037(__this, ___match, method) (( List_1_t3502 * (*) (List_1_t3502 *, Predicate_1_t9211 *, const MethodInfo*))List_1_FindAllStackBits_m23886_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<Language.Lua.Expr>::FindAllList(System.Predicate`1<T>)
#define List_1_FindAllList_m67038(__this, ___match, method) (( List_1_t3502 * (*) (List_1_t3502 *, Predicate_1_t9211 *, const MethodInfo*))List_1_FindAllList_m23887_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<Language.Lua.Expr>::FindIndex(System.Predicate`1<T>)
#define List_1_FindIndex_m67039(__this, ___match, method) (( int32_t (*) (List_1_t3502 *, Predicate_1_t9211 *, const MethodInfo*))List_1_FindIndex_m23888_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<Language.Lua.Expr>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m67040(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t3502 *, int32_t, int32_t, Predicate_1_t9211 *, const MethodInfo*))List_1_GetIndex_m23889_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Language.Lua.Expr>::GetEnumerator()
#define List_1_GetEnumerator_m10992(__this, method) (( Enumerator_t3601  (*) (List_1_t3502 *, const MethodInfo*))List_1_GetEnumerator_m23890_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<Language.Lua.Expr>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m67041(__this, ___index, ___count, method) (( List_1_t3502 * (*) (List_1_t3502 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m23891_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<Language.Lua.Expr>::IndexOf(T)
#define List_1_IndexOf_m67042(__this, ___item, method) (( int32_t (*) (List_1_t3502 *, Expr_t3509 *, const MethodInfo*))List_1_IndexOf_m17815_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Expr>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m67043(__this, ___start, ___delta, method) (( void (*) (List_1_t3502 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m23892_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Expr>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m67044(__this, ___index, method) (( void (*) (List_1_t3502 *, int32_t, const MethodInfo*))List_1_CheckIndex_m23893_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Expr>::Insert(System.Int32,T)
#define List_1_Insert_m67045(__this, ___index, ___item, method) (( void (*) (List_1_t3502 *, int32_t, Expr_t3509 *, const MethodInfo*))List_1_Insert_m17816_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Expr>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m67046(__this, ___collection, method) (( void (*) (List_1_t3502 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m23894_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Expr>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m67047(__this, ___index, ___collection, method) (( void (*) (List_1_t3502 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m23895_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Expr>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m67048(__this, ___index, ___collection, method) (( void (*) (List_1_t3502 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m23896_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Expr>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m67049(__this, ___index, ___enumerable, method) (( void (*) (List_1_t3502 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m23897_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<Language.Lua.Expr>::Remove(T)
#define List_1_Remove_m67050(__this, ___item, method) (( bool (*) (List_1_t3502 *, Expr_t3509 *, const MethodInfo*))List_1_Remove_m17813_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<Language.Lua.Expr>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m67051(__this, ___match, method) (( int32_t (*) (List_1_t3502 *, Predicate_1_t9211 *, const MethodInfo*))List_1_RemoveAll_m23898_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Expr>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m67052(__this, ___index, method) (( void (*) (List_1_t3502 *, int32_t, const MethodInfo*))List_1_RemoveAt_m17808_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Expr>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m67053(__this, ___index, ___count, method) (( void (*) (List_1_t3502 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m23899_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Expr>::Reverse()
#define List_1_Reverse_m67054(__this, method) (( void (*) (List_1_t3502 *, const MethodInfo*))List_1_Reverse_m23900_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Expr>::Sort()
#define List_1_Sort_m67055(__this, method) (( void (*) (List_1_t3502 *, const MethodInfo*))List_1_Sort_m23901_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Expr>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m67056(__this, ___comparer, method) (( void (*) (List_1_t3502 *, Object_t*, const MethodInfo*))List_1_Sort_m23902_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Expr>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m67057(__this, ___comparison, method) (( void (*) (List_1_t3502 *, Comparison_1_t9212 *, const MethodInfo*))List_1_Sort_m23903_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<Language.Lua.Expr>::ToArray()
#define List_1_ToArray_m67058(__this, method) (( ExprU5BU5D_t9208* (*) (List_1_t3502 *, const MethodInfo*))List_1_ToArray_m3250_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Expr>::TrimExcess()
#define List_1_TrimExcess_m67059(__this, method) (( void (*) (List_1_t3502 *, const MethodInfo*))List_1_TrimExcess_m23904_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<Language.Lua.Expr>::get_Capacity()
#define List_1_get_Capacity_m67060(__this, method) (( int32_t (*) (List_1_t3502 *, const MethodInfo*))List_1_get_Capacity_m23905_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Expr>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m67061(__this, ___value, method) (( void (*) (List_1_t3502 *, int32_t, const MethodInfo*))List_1_set_Capacity_m23906_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<Language.Lua.Expr>::get_Count()
#define List_1_get_Count_m67062(__this, method) (( int32_t (*) (List_1_t3502 *, const MethodInfo*))List_1_get_Count_m17794_gshared)(__this, method)
// T System.Collections.Generic.List`1<Language.Lua.Expr>::get_Item(System.Int32)
#define List_1_get_Item_m67063(__this, ___index, method) (( Expr_t3509 * (*) (List_1_t3502 *, int32_t, const MethodInfo*))List_1_get_Item_m17817_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Expr>::set_Item(System.Int32,T)
#define List_1_set_Item_m67064(__this, ___index, ___value, method) (( void (*) (List_1_t3502 *, int32_t, Expr_t3509 *, const MethodInfo*))List_1_set_Item_m17818_gshared)(__this, ___index, ___value, method)

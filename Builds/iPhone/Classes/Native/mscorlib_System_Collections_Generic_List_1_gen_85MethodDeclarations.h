#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<Language.Lua.Var>
struct List_1_t3501;
// System.Object
struct Object_t;
// Language.Lua.Var
struct Var_t3589;
// System.Collections.Generic.IEnumerable`1<Language.Lua.Var>
struct IEnumerable_1_t10581;
// Language.Lua.Var[]
struct VarU5BU5D_t9202;
// System.Collections.Generic.IEnumerator`1<Language.Lua.Var>
struct IEnumerator_1_t10582;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Collections.Generic.ICollection`1<Language.Lua.Var>
struct ICollection_1_t10583;
// System.Collections.ObjectModel.ReadOnlyCollection`1<Language.Lua.Var>
struct ReadOnlyCollection_1_t9204;
// System.Predicate`1<Language.Lua.Var>
struct Predicate_1_t9205;
// System.Collections.Generic.IComparer`1<Language.Lua.Var>
struct IComparer_1_t10584;
// System.Comparison`1<Language.Lua.Var>
struct Comparison_1_t9207;
// System.Collections.Generic.List`1/Enumerator<Language.Lua.Var>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_139.h"

// System.Void System.Collections.Generic.List`1<Language.Lua.Var>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_genMethodDeclarations.h"
#define List_1__ctor_m10928(__this, method) (( void (*) (List_1_t3501 *, const MethodInfo*))List_1__ctor_m84_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Var>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m66899(__this, ___collection, method) (( void (*) (List_1_t3501 *, Object_t*, const MethodInfo*))List_1__ctor_m3251_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Var>::.ctor(System.Int32)
#define List_1__ctor_m66900(__this, ___capacity, method) (( void (*) (List_1_t3501 *, int32_t, const MethodInfo*))List_1__ctor_m23875_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Var>::.ctor(T[],System.Int32)
#define List_1__ctor_m66901(__this, ___data, ___size, method) (( void (*) (List_1_t3501 *, VarU5BU5D_t9202*, int32_t, const MethodInfo*))List_1__ctor_m23876_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Var>::.cctor()
#define List_1__cctor_m66902(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m23877_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<Language.Lua.Var>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m66903(__this, method) (( Object_t* (*) (List_1_t3501 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m17814_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Var>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m66904(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t3501 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m17797_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<Language.Lua.Var>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m66905(__this, method) (( Object_t * (*) (List_1_t3501 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m17793_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<Language.Lua.Var>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m66906(__this, ___item, method) (( int32_t (*) (List_1_t3501 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m17802_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<Language.Lua.Var>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m66907(__this, ___item, method) (( bool (*) (List_1_t3501 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m17804_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<Language.Lua.Var>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m66908(__this, ___item, method) (( int32_t (*) (List_1_t3501 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m17805_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Var>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m66909(__this, ___index, ___item, method) (( void (*) (List_1_t3501 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m17806_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Var>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m66910(__this, ___item, method) (( void (*) (List_1_t3501 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m17807_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<Language.Lua.Var>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m66911(__this, method) (( bool (*) (List_1_t3501 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m17809_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Language.Lua.Var>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m66912(__this, method) (( bool (*) (List_1_t3501 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m17795_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<Language.Lua.Var>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m66913(__this, method) (( Object_t * (*) (List_1_t3501 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m17796_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Language.Lua.Var>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m66914(__this, method) (( bool (*) (List_1_t3501 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m17798_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Language.Lua.Var>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m66915(__this, method) (( bool (*) (List_1_t3501 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m17799_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<Language.Lua.Var>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m66916(__this, ___index, method) (( Object_t * (*) (List_1_t3501 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m17800_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Var>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m66917(__this, ___index, ___value, method) (( void (*) (List_1_t3501 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m17801_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Var>::Add(T)
#define List_1_Add_m66918(__this, ___item, method) (( void (*) (List_1_t3501 *, Var_t3589 *, const MethodInfo*))List_1_Add_m17810_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Var>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m66919(__this, ___newCount, method) (( void (*) (List_1_t3501 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m23878_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Var>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m66920(__this, ___idx, ___count, method) (( void (*) (List_1_t3501 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m23879_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Var>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m66921(__this, ___collection, method) (( void (*) (List_1_t3501 *, Object_t*, const MethodInfo*))List_1_AddCollection_m23880_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Var>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m66922(__this, ___enumerable, method) (( void (*) (List_1_t3501 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m23881_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Var>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m66923(__this, ___collection, method) (( void (*) (List_1_t3501 *, Object_t*, const MethodInfo*))List_1_AddRange_m87_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<Language.Lua.Var>::AsReadOnly()
#define List_1_AsReadOnly_m66924(__this, method) (( ReadOnlyCollection_1_t9204 * (*) (List_1_t3501 *, const MethodInfo*))List_1_AsReadOnly_m23882_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Var>::Clear()
#define List_1_Clear_m66925(__this, method) (( void (*) (List_1_t3501 *, const MethodInfo*))List_1_Clear_m17803_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Language.Lua.Var>::Contains(T)
#define List_1_Contains_m66926(__this, ___item, method) (( bool (*) (List_1_t3501 *, Var_t3589 *, const MethodInfo*))List_1_Contains_m17811_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Var>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m66927(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t3501 *, VarU5BU5D_t9202*, int32_t, const MethodInfo*))List_1_CopyTo_m17812_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<Language.Lua.Var>::Find(System.Predicate`1<T>)
#define List_1_Find_m66928(__this, ___match, method) (( Var_t3589 * (*) (List_1_t3501 *, Predicate_1_t9205 *, const MethodInfo*))List_1_Find_m23883_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Var>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m66929(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t9205 *, const MethodInfo*))List_1_CheckMatch_m23884_gshared)(__this /* static, unused */, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<Language.Lua.Var>::FindAll(System.Predicate`1<T>)
#define List_1_FindAll_m66930(__this, ___match, method) (( List_1_t3501 * (*) (List_1_t3501 *, Predicate_1_t9205 *, const MethodInfo*))List_1_FindAll_m23885_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<Language.Lua.Var>::FindAllStackBits(System.Predicate`1<T>)
#define List_1_FindAllStackBits_m66931(__this, ___match, method) (( List_1_t3501 * (*) (List_1_t3501 *, Predicate_1_t9205 *, const MethodInfo*))List_1_FindAllStackBits_m23886_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<Language.Lua.Var>::FindAllList(System.Predicate`1<T>)
#define List_1_FindAllList_m66932(__this, ___match, method) (( List_1_t3501 * (*) (List_1_t3501 *, Predicate_1_t9205 *, const MethodInfo*))List_1_FindAllList_m23887_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<Language.Lua.Var>::FindIndex(System.Predicate`1<T>)
#define List_1_FindIndex_m66933(__this, ___match, method) (( int32_t (*) (List_1_t3501 *, Predicate_1_t9205 *, const MethodInfo*))List_1_FindIndex_m23888_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<Language.Lua.Var>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m66934(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t3501 *, int32_t, int32_t, Predicate_1_t9205 *, const MethodInfo*))List_1_GetIndex_m23889_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Language.Lua.Var>::GetEnumerator()
#define List_1_GetEnumerator_m66935(__this, method) (( Enumerator_t9206  (*) (List_1_t3501 *, const MethodInfo*))List_1_GetEnumerator_m23890_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<Language.Lua.Var>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m66936(__this, ___index, ___count, method) (( List_1_t3501 * (*) (List_1_t3501 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m23891_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<Language.Lua.Var>::IndexOf(T)
#define List_1_IndexOf_m66937(__this, ___item, method) (( int32_t (*) (List_1_t3501 *, Var_t3589 *, const MethodInfo*))List_1_IndexOf_m17815_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Var>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m66938(__this, ___start, ___delta, method) (( void (*) (List_1_t3501 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m23892_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Var>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m66939(__this, ___index, method) (( void (*) (List_1_t3501 *, int32_t, const MethodInfo*))List_1_CheckIndex_m23893_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Var>::Insert(System.Int32,T)
#define List_1_Insert_m66940(__this, ___index, ___item, method) (( void (*) (List_1_t3501 *, int32_t, Var_t3589 *, const MethodInfo*))List_1_Insert_m17816_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Var>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m66941(__this, ___collection, method) (( void (*) (List_1_t3501 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m23894_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Var>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m66942(__this, ___index, ___collection, method) (( void (*) (List_1_t3501 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m23895_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Var>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m66943(__this, ___index, ___collection, method) (( void (*) (List_1_t3501 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m23896_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Var>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m66944(__this, ___index, ___enumerable, method) (( void (*) (List_1_t3501 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m23897_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<Language.Lua.Var>::Remove(T)
#define List_1_Remove_m66945(__this, ___item, method) (( bool (*) (List_1_t3501 *, Var_t3589 *, const MethodInfo*))List_1_Remove_m17813_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<Language.Lua.Var>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m66946(__this, ___match, method) (( int32_t (*) (List_1_t3501 *, Predicate_1_t9205 *, const MethodInfo*))List_1_RemoveAll_m23898_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Var>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m66947(__this, ___index, method) (( void (*) (List_1_t3501 *, int32_t, const MethodInfo*))List_1_RemoveAt_m17808_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Var>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m66948(__this, ___index, ___count, method) (( void (*) (List_1_t3501 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m23899_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Var>::Reverse()
#define List_1_Reverse_m66949(__this, method) (( void (*) (List_1_t3501 *, const MethodInfo*))List_1_Reverse_m23900_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Var>::Sort()
#define List_1_Sort_m66950(__this, method) (( void (*) (List_1_t3501 *, const MethodInfo*))List_1_Sort_m23901_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Var>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m66951(__this, ___comparer, method) (( void (*) (List_1_t3501 *, Object_t*, const MethodInfo*))List_1_Sort_m23902_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Var>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m66952(__this, ___comparison, method) (( void (*) (List_1_t3501 *, Comparison_1_t9207 *, const MethodInfo*))List_1_Sort_m23903_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<Language.Lua.Var>::ToArray()
#define List_1_ToArray_m66953(__this, method) (( VarU5BU5D_t9202* (*) (List_1_t3501 *, const MethodInfo*))List_1_ToArray_m3250_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Var>::TrimExcess()
#define List_1_TrimExcess_m66954(__this, method) (( void (*) (List_1_t3501 *, const MethodInfo*))List_1_TrimExcess_m23904_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<Language.Lua.Var>::get_Capacity()
#define List_1_get_Capacity_m66955(__this, method) (( int32_t (*) (List_1_t3501 *, const MethodInfo*))List_1_get_Capacity_m23905_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Var>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m66956(__this, ___value, method) (( void (*) (List_1_t3501 *, int32_t, const MethodInfo*))List_1_set_Capacity_m23906_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<Language.Lua.Var>::get_Count()
#define List_1_get_Count_m66957(__this, method) (( int32_t (*) (List_1_t3501 *, const MethodInfo*))List_1_get_Count_m17794_gshared)(__this, method)
// T System.Collections.Generic.List`1<Language.Lua.Var>::get_Item(System.Int32)
#define List_1_get_Item_m66958(__this, ___index, method) (( Var_t3589 * (*) (List_1_t3501 *, int32_t, const MethodInfo*))List_1_get_Item_m17817_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Var>::set_Item(System.Int32,T)
#define List_1_set_Item_m66959(__this, ___index, ___value, method) (( void (*) (List_1_t3501 *, int32_t, Var_t3589 *, const MethodInfo*))List_1_set_Item_m17818_gshared)(__this, ___index, ___value, method)

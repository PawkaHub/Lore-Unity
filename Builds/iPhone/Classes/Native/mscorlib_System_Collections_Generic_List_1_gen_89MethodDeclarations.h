#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<Language.Lua.Statement>
struct List_1_t3506;
// System.Object
struct Object_t;
// Language.Lua.Statement
struct Statement_t3504;
// System.Collections.Generic.IEnumerable`1<Language.Lua.Statement>
struct IEnumerable_1_t10595;
// Language.Lua.Statement[]
struct StatementU5BU5D_t9223;
// System.Collections.Generic.IEnumerator`1<Language.Lua.Statement>
struct IEnumerator_1_t10596;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Collections.Generic.ICollection`1<Language.Lua.Statement>
struct ICollection_1_t10597;
// System.Collections.ObjectModel.ReadOnlyCollection`1<Language.Lua.Statement>
struct ReadOnlyCollection_1_t9225;
// System.Predicate`1<Language.Lua.Statement>
struct Predicate_1_t9226;
// System.Collections.Generic.IComparer`1<Language.Lua.Statement>
struct IComparer_1_t10598;
// System.Comparison`1<Language.Lua.Statement>
struct Comparison_1_t9227;
// System.Collections.Generic.List`1/Enumerator<Language.Lua.Statement>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_28.h"

// System.Void System.Collections.Generic.List`1<Language.Lua.Statement>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_genMethodDeclarations.h"
#define List_1__ctor_m10932(__this, method) (( void (*) (List_1_t3506 *, const MethodInfo*))List_1__ctor_m84_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Statement>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m67318(__this, ___collection, method) (( void (*) (List_1_t3506 *, Object_t*, const MethodInfo*))List_1__ctor_m3251_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Statement>::.ctor(System.Int32)
#define List_1__ctor_m67319(__this, ___capacity, method) (( void (*) (List_1_t3506 *, int32_t, const MethodInfo*))List_1__ctor_m23875_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Statement>::.ctor(T[],System.Int32)
#define List_1__ctor_m67320(__this, ___data, ___size, method) (( void (*) (List_1_t3506 *, StatementU5BU5D_t9223*, int32_t, const MethodInfo*))List_1__ctor_m23876_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Statement>::.cctor()
#define List_1__cctor_m67321(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m23877_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<Language.Lua.Statement>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m67322(__this, method) (( Object_t* (*) (List_1_t3506 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m17814_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Statement>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m67323(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t3506 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m17797_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<Language.Lua.Statement>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m67324(__this, method) (( Object_t * (*) (List_1_t3506 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m17793_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<Language.Lua.Statement>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m67325(__this, ___item, method) (( int32_t (*) (List_1_t3506 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m17802_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<Language.Lua.Statement>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m67326(__this, ___item, method) (( bool (*) (List_1_t3506 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m17804_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<Language.Lua.Statement>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m67327(__this, ___item, method) (( int32_t (*) (List_1_t3506 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m17805_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Statement>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m67328(__this, ___index, ___item, method) (( void (*) (List_1_t3506 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m17806_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Statement>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m67329(__this, ___item, method) (( void (*) (List_1_t3506 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m17807_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<Language.Lua.Statement>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m67330(__this, method) (( bool (*) (List_1_t3506 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m17809_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Language.Lua.Statement>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m67331(__this, method) (( bool (*) (List_1_t3506 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m17795_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<Language.Lua.Statement>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m67332(__this, method) (( Object_t * (*) (List_1_t3506 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m17796_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Language.Lua.Statement>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m67333(__this, method) (( bool (*) (List_1_t3506 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m17798_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Language.Lua.Statement>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m67334(__this, method) (( bool (*) (List_1_t3506 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m17799_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<Language.Lua.Statement>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m67335(__this, ___index, method) (( Object_t * (*) (List_1_t3506 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m17800_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Statement>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m67336(__this, ___index, ___value, method) (( void (*) (List_1_t3506 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m17801_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Statement>::Add(T)
#define List_1_Add_m67337(__this, ___item, method) (( void (*) (List_1_t3506 *, Statement_t3504 *, const MethodInfo*))List_1_Add_m17810_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Statement>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m67338(__this, ___newCount, method) (( void (*) (List_1_t3506 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m23878_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Statement>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m67339(__this, ___idx, ___count, method) (( void (*) (List_1_t3506 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m23879_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Statement>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m67340(__this, ___collection, method) (( void (*) (List_1_t3506 *, Object_t*, const MethodInfo*))List_1_AddCollection_m23880_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Statement>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m67341(__this, ___enumerable, method) (( void (*) (List_1_t3506 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m23881_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Statement>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m67342(__this, ___collection, method) (( void (*) (List_1_t3506 *, Object_t*, const MethodInfo*))List_1_AddRange_m87_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<Language.Lua.Statement>::AsReadOnly()
#define List_1_AsReadOnly_m67343(__this, method) (( ReadOnlyCollection_1_t9225 * (*) (List_1_t3506 *, const MethodInfo*))List_1_AsReadOnly_m23882_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Statement>::Clear()
#define List_1_Clear_m67344(__this, method) (( void (*) (List_1_t3506 *, const MethodInfo*))List_1_Clear_m17803_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Language.Lua.Statement>::Contains(T)
#define List_1_Contains_m67345(__this, ___item, method) (( bool (*) (List_1_t3506 *, Statement_t3504 *, const MethodInfo*))List_1_Contains_m17811_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Statement>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m67346(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t3506 *, StatementU5BU5D_t9223*, int32_t, const MethodInfo*))List_1_CopyTo_m17812_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<Language.Lua.Statement>::Find(System.Predicate`1<T>)
#define List_1_Find_m67347(__this, ___match, method) (( Statement_t3504 * (*) (List_1_t3506 *, Predicate_1_t9226 *, const MethodInfo*))List_1_Find_m23883_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Statement>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m67348(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t9226 *, const MethodInfo*))List_1_CheckMatch_m23884_gshared)(__this /* static, unused */, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<Language.Lua.Statement>::FindAll(System.Predicate`1<T>)
#define List_1_FindAll_m67349(__this, ___match, method) (( List_1_t3506 * (*) (List_1_t3506 *, Predicate_1_t9226 *, const MethodInfo*))List_1_FindAll_m23885_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<Language.Lua.Statement>::FindAllStackBits(System.Predicate`1<T>)
#define List_1_FindAllStackBits_m67350(__this, ___match, method) (( List_1_t3506 * (*) (List_1_t3506 *, Predicate_1_t9226 *, const MethodInfo*))List_1_FindAllStackBits_m23886_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<Language.Lua.Statement>::FindAllList(System.Predicate`1<T>)
#define List_1_FindAllList_m67351(__this, ___match, method) (( List_1_t3506 * (*) (List_1_t3506 *, Predicate_1_t9226 *, const MethodInfo*))List_1_FindAllList_m23887_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<Language.Lua.Statement>::FindIndex(System.Predicate`1<T>)
#define List_1_FindIndex_m67352(__this, ___match, method) (( int32_t (*) (List_1_t3506 *, Predicate_1_t9226 *, const MethodInfo*))List_1_FindIndex_m23888_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<Language.Lua.Statement>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m67353(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t3506 *, int32_t, int32_t, Predicate_1_t9226 *, const MethodInfo*))List_1_GetIndex_m23889_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Language.Lua.Statement>::GetEnumerator()
#define List_1_GetEnumerator_m10933(__this, method) (( Enumerator_t3592  (*) (List_1_t3506 *, const MethodInfo*))List_1_GetEnumerator_m23890_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<Language.Lua.Statement>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m67354(__this, ___index, ___count, method) (( List_1_t3506 * (*) (List_1_t3506 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m23891_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<Language.Lua.Statement>::IndexOf(T)
#define List_1_IndexOf_m67355(__this, ___item, method) (( int32_t (*) (List_1_t3506 *, Statement_t3504 *, const MethodInfo*))List_1_IndexOf_m17815_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Statement>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m67356(__this, ___start, ___delta, method) (( void (*) (List_1_t3506 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m23892_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Statement>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m67357(__this, ___index, method) (( void (*) (List_1_t3506 *, int32_t, const MethodInfo*))List_1_CheckIndex_m23893_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Statement>::Insert(System.Int32,T)
#define List_1_Insert_m67358(__this, ___index, ___item, method) (( void (*) (List_1_t3506 *, int32_t, Statement_t3504 *, const MethodInfo*))List_1_Insert_m17816_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Statement>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m67359(__this, ___collection, method) (( void (*) (List_1_t3506 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m23894_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Statement>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m67360(__this, ___index, ___collection, method) (( void (*) (List_1_t3506 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m23895_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Statement>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m67361(__this, ___index, ___collection, method) (( void (*) (List_1_t3506 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m23896_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Statement>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m67362(__this, ___index, ___enumerable, method) (( void (*) (List_1_t3506 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m23897_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<Language.Lua.Statement>::Remove(T)
#define List_1_Remove_m67363(__this, ___item, method) (( bool (*) (List_1_t3506 *, Statement_t3504 *, const MethodInfo*))List_1_Remove_m17813_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<Language.Lua.Statement>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m67364(__this, ___match, method) (( int32_t (*) (List_1_t3506 *, Predicate_1_t9226 *, const MethodInfo*))List_1_RemoveAll_m23898_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Statement>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m67365(__this, ___index, method) (( void (*) (List_1_t3506 *, int32_t, const MethodInfo*))List_1_RemoveAt_m17808_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Statement>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m67366(__this, ___index, ___count, method) (( void (*) (List_1_t3506 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m23899_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Statement>::Reverse()
#define List_1_Reverse_m67367(__this, method) (( void (*) (List_1_t3506 *, const MethodInfo*))List_1_Reverse_m23900_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Statement>::Sort()
#define List_1_Sort_m67368(__this, method) (( void (*) (List_1_t3506 *, const MethodInfo*))List_1_Sort_m23901_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Statement>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m67369(__this, ___comparer, method) (( void (*) (List_1_t3506 *, Object_t*, const MethodInfo*))List_1_Sort_m23902_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Statement>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m67370(__this, ___comparison, method) (( void (*) (List_1_t3506 *, Comparison_1_t9227 *, const MethodInfo*))List_1_Sort_m23903_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<Language.Lua.Statement>::ToArray()
#define List_1_ToArray_m67371(__this, method) (( StatementU5BU5D_t9223* (*) (List_1_t3506 *, const MethodInfo*))List_1_ToArray_m3250_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Statement>::TrimExcess()
#define List_1_TrimExcess_m67372(__this, method) (( void (*) (List_1_t3506 *, const MethodInfo*))List_1_TrimExcess_m23904_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<Language.Lua.Statement>::get_Capacity()
#define List_1_get_Capacity_m67373(__this, method) (( int32_t (*) (List_1_t3506 *, const MethodInfo*))List_1_get_Capacity_m23905_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Statement>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m67374(__this, ___value, method) (( void (*) (List_1_t3506 *, int32_t, const MethodInfo*))List_1_set_Capacity_m23906_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<Language.Lua.Statement>::get_Count()
#define List_1_get_Count_m67375(__this, method) (( int32_t (*) (List_1_t3506 *, const MethodInfo*))List_1_get_Count_m17794_gshared)(__this, method)
// T System.Collections.Generic.List`1<Language.Lua.Statement>::get_Item(System.Int32)
#define List_1_get_Item_m67376(__this, ___index, method) (( Statement_t3504 * (*) (List_1_t3506 *, int32_t, const MethodInfo*))List_1_get_Item_m17817_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Statement>::set_Item(System.Int32,T)
#define List_1_set_Item_m67377(__this, ___index, ___value, method) (( void (*) (List_1_t3506 *, int32_t, Statement_t3504 *, const MethodInfo*))List_1_set_Item_m17818_gshared)(__this, ___index, ___value, method)

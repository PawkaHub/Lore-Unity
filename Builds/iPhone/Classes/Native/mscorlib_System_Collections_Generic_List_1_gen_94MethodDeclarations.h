#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<Language.Lua.Tuple`2<System.Int32,System.String>>
struct List_1_t3580;
// System.Object
struct Object_t;
// Language.Lua.Tuple`2<System.Int32,System.String>
struct Tuple_2_t3603;
// System.Collections.Generic.IEnumerable`1<Language.Lua.Tuple`2<System.Int32,System.String>>
struct IEnumerable_1_t10615;
// Language.Lua.Tuple`2<System.Int32,System.String>[]
struct Tuple_2U5BU5D_t9256;
// System.Collections.Generic.IEnumerator`1<Language.Lua.Tuple`2<System.Int32,System.String>>
struct IEnumerator_1_t10616;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Collections.Generic.ICollection`1<Language.Lua.Tuple`2<System.Int32,System.String>>
struct ICollection_1_t10617;
// System.Collections.ObjectModel.ReadOnlyCollection`1<Language.Lua.Tuple`2<System.Int32,System.String>>
struct ReadOnlyCollection_1_t9258;
// System.Predicate`1<Language.Lua.Tuple`2<System.Int32,System.String>>
struct Predicate_1_t9259;
// System.Collections.Generic.IComparer`1<Language.Lua.Tuple`2<System.Int32,System.String>>
struct IComparer_1_t10618;
// System.Comparison`1<Language.Lua.Tuple`2<System.Int32,System.String>>
struct Comparison_1_t9260;
// System.Collections.Generic.List`1/Enumerator<Language.Lua.Tuple`2<System.Int32,System.String>>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_33.h"

// System.Void System.Collections.Generic.List`1<Language.Lua.Tuple`2<System.Int32,System.String>>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_genMethodDeclarations.h"
#define List_1__ctor_m11005(__this, method) (( void (*) (List_1_t3580 *, const MethodInfo*))List_1__ctor_m84_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Tuple`2<System.Int32,System.String>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m67971(__this, ___collection, method) (( void (*) (List_1_t3580 *, Object_t*, const MethodInfo*))List_1__ctor_m3251_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Tuple`2<System.Int32,System.String>>::.ctor(System.Int32)
#define List_1__ctor_m67972(__this, ___capacity, method) (( void (*) (List_1_t3580 *, int32_t, const MethodInfo*))List_1__ctor_m23875_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Tuple`2<System.Int32,System.String>>::.ctor(T[],System.Int32)
#define List_1__ctor_m67973(__this, ___data, ___size, method) (( void (*) (List_1_t3580 *, Tuple_2U5BU5D_t9256*, int32_t, const MethodInfo*))List_1__ctor_m23876_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Tuple`2<System.Int32,System.String>>::.cctor()
#define List_1__cctor_m67974(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m23877_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<Language.Lua.Tuple`2<System.Int32,System.String>>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m67975(__this, method) (( Object_t* (*) (List_1_t3580 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m17814_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Tuple`2<System.Int32,System.String>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m67976(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t3580 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m17797_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<Language.Lua.Tuple`2<System.Int32,System.String>>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m67977(__this, method) (( Object_t * (*) (List_1_t3580 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m17793_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<Language.Lua.Tuple`2<System.Int32,System.String>>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m67978(__this, ___item, method) (( int32_t (*) (List_1_t3580 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m17802_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<Language.Lua.Tuple`2<System.Int32,System.String>>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m67979(__this, ___item, method) (( bool (*) (List_1_t3580 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m17804_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<Language.Lua.Tuple`2<System.Int32,System.String>>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m67980(__this, ___item, method) (( int32_t (*) (List_1_t3580 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m17805_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Tuple`2<System.Int32,System.String>>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m67981(__this, ___index, ___item, method) (( void (*) (List_1_t3580 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m17806_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Tuple`2<System.Int32,System.String>>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m67982(__this, ___item, method) (( void (*) (List_1_t3580 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m17807_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<Language.Lua.Tuple`2<System.Int32,System.String>>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m67983(__this, method) (( bool (*) (List_1_t3580 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m17809_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Language.Lua.Tuple`2<System.Int32,System.String>>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m67984(__this, method) (( bool (*) (List_1_t3580 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m17795_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<Language.Lua.Tuple`2<System.Int32,System.String>>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m67985(__this, method) (( Object_t * (*) (List_1_t3580 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m17796_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Language.Lua.Tuple`2<System.Int32,System.String>>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m67986(__this, method) (( bool (*) (List_1_t3580 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m17798_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Language.Lua.Tuple`2<System.Int32,System.String>>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m67987(__this, method) (( bool (*) (List_1_t3580 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m17799_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<Language.Lua.Tuple`2<System.Int32,System.String>>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m67988(__this, ___index, method) (( Object_t * (*) (List_1_t3580 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m17800_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Tuple`2<System.Int32,System.String>>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m67989(__this, ___index, ___value, method) (( void (*) (List_1_t3580 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m17801_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Tuple`2<System.Int32,System.String>>::Add(T)
#define List_1_Add_m67990(__this, ___item, method) (( void (*) (List_1_t3580 *, Tuple_2_t3603 *, const MethodInfo*))List_1_Add_m17810_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Tuple`2<System.Int32,System.String>>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m67991(__this, ___newCount, method) (( void (*) (List_1_t3580 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m23878_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Tuple`2<System.Int32,System.String>>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m67992(__this, ___idx, ___count, method) (( void (*) (List_1_t3580 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m23879_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Tuple`2<System.Int32,System.String>>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m67993(__this, ___collection, method) (( void (*) (List_1_t3580 *, Object_t*, const MethodInfo*))List_1_AddCollection_m23880_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Tuple`2<System.Int32,System.String>>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m67994(__this, ___enumerable, method) (( void (*) (List_1_t3580 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m23881_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Tuple`2<System.Int32,System.String>>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m67995(__this, ___collection, method) (( void (*) (List_1_t3580 *, Object_t*, const MethodInfo*))List_1_AddRange_m87_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<Language.Lua.Tuple`2<System.Int32,System.String>>::AsReadOnly()
#define List_1_AsReadOnly_m67996(__this, method) (( ReadOnlyCollection_1_t9258 * (*) (List_1_t3580 *, const MethodInfo*))List_1_AsReadOnly_m23882_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Tuple`2<System.Int32,System.String>>::Clear()
#define List_1_Clear_m67997(__this, method) (( void (*) (List_1_t3580 *, const MethodInfo*))List_1_Clear_m17803_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Language.Lua.Tuple`2<System.Int32,System.String>>::Contains(T)
#define List_1_Contains_m67998(__this, ___item, method) (( bool (*) (List_1_t3580 *, Tuple_2_t3603 *, const MethodInfo*))List_1_Contains_m17811_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Tuple`2<System.Int32,System.String>>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m67999(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t3580 *, Tuple_2U5BU5D_t9256*, int32_t, const MethodInfo*))List_1_CopyTo_m17812_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<Language.Lua.Tuple`2<System.Int32,System.String>>::Find(System.Predicate`1<T>)
#define List_1_Find_m68000(__this, ___match, method) (( Tuple_2_t3603 * (*) (List_1_t3580 *, Predicate_1_t9259 *, const MethodInfo*))List_1_Find_m23883_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Tuple`2<System.Int32,System.String>>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m68001(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t9259 *, const MethodInfo*))List_1_CheckMatch_m23884_gshared)(__this /* static, unused */, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<Language.Lua.Tuple`2<System.Int32,System.String>>::FindAll(System.Predicate`1<T>)
#define List_1_FindAll_m68002(__this, ___match, method) (( List_1_t3580 * (*) (List_1_t3580 *, Predicate_1_t9259 *, const MethodInfo*))List_1_FindAll_m23885_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<Language.Lua.Tuple`2<System.Int32,System.String>>::FindAllStackBits(System.Predicate`1<T>)
#define List_1_FindAllStackBits_m68003(__this, ___match, method) (( List_1_t3580 * (*) (List_1_t3580 *, Predicate_1_t9259 *, const MethodInfo*))List_1_FindAllStackBits_m23886_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<Language.Lua.Tuple`2<System.Int32,System.String>>::FindAllList(System.Predicate`1<T>)
#define List_1_FindAllList_m68004(__this, ___match, method) (( List_1_t3580 * (*) (List_1_t3580 *, Predicate_1_t9259 *, const MethodInfo*))List_1_FindAllList_m23887_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<Language.Lua.Tuple`2<System.Int32,System.String>>::FindIndex(System.Predicate`1<T>)
#define List_1_FindIndex_m68005(__this, ___match, method) (( int32_t (*) (List_1_t3580 *, Predicate_1_t9259 *, const MethodInfo*))List_1_FindIndex_m23888_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<Language.Lua.Tuple`2<System.Int32,System.String>>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m68006(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t3580 *, int32_t, int32_t, Predicate_1_t9259 *, const MethodInfo*))List_1_GetIndex_m23889_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Language.Lua.Tuple`2<System.Int32,System.String>>::GetEnumerator()
#define List_1_GetEnumerator_m11016(__this, method) (( Enumerator_t3605  (*) (List_1_t3580 *, const MethodInfo*))List_1_GetEnumerator_m23890_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<Language.Lua.Tuple`2<System.Int32,System.String>>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m68007(__this, ___index, ___count, method) (( List_1_t3580 * (*) (List_1_t3580 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m23891_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<Language.Lua.Tuple`2<System.Int32,System.String>>::IndexOf(T)
#define List_1_IndexOf_m68008(__this, ___item, method) (( int32_t (*) (List_1_t3580 *, Tuple_2_t3603 *, const MethodInfo*))List_1_IndexOf_m17815_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Tuple`2<System.Int32,System.String>>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m68009(__this, ___start, ___delta, method) (( void (*) (List_1_t3580 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m23892_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Tuple`2<System.Int32,System.String>>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m68010(__this, ___index, method) (( void (*) (List_1_t3580 *, int32_t, const MethodInfo*))List_1_CheckIndex_m23893_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Tuple`2<System.Int32,System.String>>::Insert(System.Int32,T)
#define List_1_Insert_m68011(__this, ___index, ___item, method) (( void (*) (List_1_t3580 *, int32_t, Tuple_2_t3603 *, const MethodInfo*))List_1_Insert_m17816_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Tuple`2<System.Int32,System.String>>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m68012(__this, ___collection, method) (( void (*) (List_1_t3580 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m23894_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Tuple`2<System.Int32,System.String>>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m68013(__this, ___index, ___collection, method) (( void (*) (List_1_t3580 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m23895_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Tuple`2<System.Int32,System.String>>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m68014(__this, ___index, ___collection, method) (( void (*) (List_1_t3580 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m23896_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Tuple`2<System.Int32,System.String>>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m68015(__this, ___index, ___enumerable, method) (( void (*) (List_1_t3580 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m23897_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<Language.Lua.Tuple`2<System.Int32,System.String>>::Remove(T)
#define List_1_Remove_m68016(__this, ___item, method) (( bool (*) (List_1_t3580 *, Tuple_2_t3603 *, const MethodInfo*))List_1_Remove_m17813_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<Language.Lua.Tuple`2<System.Int32,System.String>>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m68017(__this, ___match, method) (( int32_t (*) (List_1_t3580 *, Predicate_1_t9259 *, const MethodInfo*))List_1_RemoveAll_m23898_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Tuple`2<System.Int32,System.String>>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m68018(__this, ___index, method) (( void (*) (List_1_t3580 *, int32_t, const MethodInfo*))List_1_RemoveAt_m17808_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Tuple`2<System.Int32,System.String>>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m11015(__this, ___index, ___count, method) (( void (*) (List_1_t3580 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m23899_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Tuple`2<System.Int32,System.String>>::Reverse()
#define List_1_Reverse_m68019(__this, method) (( void (*) (List_1_t3580 *, const MethodInfo*))List_1_Reverse_m23900_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Tuple`2<System.Int32,System.String>>::Sort()
#define List_1_Sort_m68020(__this, method) (( void (*) (List_1_t3580 *, const MethodInfo*))List_1_Sort_m23901_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Tuple`2<System.Int32,System.String>>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m68021(__this, ___comparer, method) (( void (*) (List_1_t3580 *, Object_t*, const MethodInfo*))List_1_Sort_m23902_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Tuple`2<System.Int32,System.String>>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m68022(__this, ___comparison, method) (( void (*) (List_1_t3580 *, Comparison_1_t9260 *, const MethodInfo*))List_1_Sort_m23903_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<Language.Lua.Tuple`2<System.Int32,System.String>>::ToArray()
#define List_1_ToArray_m68023(__this, method) (( Tuple_2U5BU5D_t9256* (*) (List_1_t3580 *, const MethodInfo*))List_1_ToArray_m3250_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Tuple`2<System.Int32,System.String>>::TrimExcess()
#define List_1_TrimExcess_m68024(__this, method) (( void (*) (List_1_t3580 *, const MethodInfo*))List_1_TrimExcess_m23904_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<Language.Lua.Tuple`2<System.Int32,System.String>>::get_Capacity()
#define List_1_get_Capacity_m68025(__this, method) (( int32_t (*) (List_1_t3580 *, const MethodInfo*))List_1_get_Capacity_m23905_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Tuple`2<System.Int32,System.String>>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m68026(__this, ___value, method) (( void (*) (List_1_t3580 *, int32_t, const MethodInfo*))List_1_set_Capacity_m23906_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<Language.Lua.Tuple`2<System.Int32,System.String>>::get_Count()
#define List_1_get_Count_m68027(__this, method) (( int32_t (*) (List_1_t3580 *, const MethodInfo*))List_1_get_Count_m17794_gshared)(__this, method)
// T System.Collections.Generic.List`1<Language.Lua.Tuple`2<System.Int32,System.String>>::get_Item(System.Int32)
#define List_1_get_Item_m68028(__this, ___index, method) (( Tuple_2_t3603 * (*) (List_1_t3580 *, int32_t, const MethodInfo*))List_1_get_Item_m17817_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Language.Lua.Tuple`2<System.Int32,System.String>>::set_Item(System.Int32,T)
#define List_1_set_Item_m68029(__this, ___index, ___value, method) (( void (*) (List_1_t3580 *, int32_t, Tuple_2_t3603 *, const MethodInfo*))List_1_set_Item_m17818_gshared)(__this, ___index, ___value, method)

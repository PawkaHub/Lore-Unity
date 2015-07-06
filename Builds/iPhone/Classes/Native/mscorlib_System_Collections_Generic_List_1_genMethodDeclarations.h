#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Object>
struct List_1_t2;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t998;
// System.Object[]
struct ObjectU5BU5D_t21;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t744;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1554;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>
struct ReadOnlyCollection_1_t1517;
// System.Predicate`1<System.Object>
struct Predicate_1_t5972;
// System.Collections.Generic.IComparer`1<System.Object>
struct IComparer_1_t6879;
// System.Comparison`1<System.Object>
struct Comparison_1_t5979;
// System.Collections.Generic.List`1/Enumerator<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_41.h"

// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C" void List_1__ctor_m84_gshared (List_1_t2 * __this, const MethodInfo* method);
#define List_1__ctor_m84(__this, method) (( void (*) (List_1_t2 *, const MethodInfo*))List_1__ctor_m84_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m3251_gshared (List_1_t2 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m3251(__this, ___collection, method) (( void (*) (List_1_t2 *, Object_t*, const MethodInfo*))List_1__ctor_m3251_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Int32)
extern "C" void List_1__ctor_m23875_gshared (List_1_t2 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m23875(__this, ___capacity, method) (( void (*) (List_1_t2 *, int32_t, const MethodInfo*))List_1__ctor_m23875_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m23876_gshared (List_1_t2 * __this, ObjectU5BU5D_t21* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m23876(__this, ___data, ___size, method) (( void (*) (List_1_t2 *, ObjectU5BU5D_t21*, int32_t, const MethodInfo*))List_1__ctor_m23876_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.cctor()
extern "C" void List_1__cctor_m23877_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m23877(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m23877_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m17814_gshared (List_1_t2 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m17814(__this, method) (( Object_t* (*) (List_1_t2 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m17814_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m17797_gshared (List_1_t2 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m17797(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t2 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m17797_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m17793_gshared (List_1_t2 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m17793(__this, method) (( Object_t * (*) (List_1_t2 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m17793_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m17802_gshared (List_1_t2 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m17802(__this, ___item, method) (( int32_t (*) (List_1_t2 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m17802_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m17804_gshared (List_1_t2 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m17804(__this, ___item, method) (( bool (*) (List_1_t2 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m17804_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m17805_gshared (List_1_t2 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m17805(__this, ___item, method) (( int32_t (*) (List_1_t2 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m17805_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m17806_gshared (List_1_t2 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m17806(__this, ___index, ___item, method) (( void (*) (List_1_t2 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m17806_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m17807_gshared (List_1_t2 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m17807(__this, ___item, method) (( void (*) (List_1_t2 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m17807_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m17809_gshared (List_1_t2 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m17809(__this, method) (( bool (*) (List_1_t2 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m17809_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m17795_gshared (List_1_t2 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m17795(__this, method) (( bool (*) (List_1_t2 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m17795_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m17796_gshared (List_1_t2 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m17796(__this, method) (( Object_t * (*) (List_1_t2 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m17796_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m17798_gshared (List_1_t2 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m17798(__this, method) (( bool (*) (List_1_t2 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m17798_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m17799_gshared (List_1_t2 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m17799(__this, method) (( bool (*) (List_1_t2 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m17799_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m17800_gshared (List_1_t2 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m17800(__this, ___index, method) (( Object_t * (*) (List_1_t2 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m17800_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m17801_gshared (List_1_t2 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m17801(__this, ___index, ___value, method) (( void (*) (List_1_t2 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m17801_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
extern "C" void List_1_Add_m17810_gshared (List_1_t2 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Add_m17810(__this, ___item, method) (( void (*) (List_1_t2 *, Object_t *, const MethodInfo*))List_1_Add_m17810_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m23878_gshared (List_1_t2 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m23878(__this, ___newCount, method) (( void (*) (List_1_t2 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m23878_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m23879_gshared (List_1_t2 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m23879(__this, ___idx, ___count, method) (( void (*) (List_1_t2 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m23879_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m23880_gshared (List_1_t2 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m23880(__this, ___collection, method) (( void (*) (List_1_t2 *, Object_t*, const MethodInfo*))List_1_AddCollection_m23880_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m23881_gshared (List_1_t2 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m23881(__this, ___enumerable, method) (( void (*) (List_1_t2 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m23881_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m87_gshared (List_1_t2 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m87(__this, ___collection, method) (( void (*) (List_1_t2 *, Object_t*, const MethodInfo*))List_1_AddRange_m87_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Object>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t1517 * List_1_AsReadOnly_m23882_gshared (List_1_t2 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m23882(__this, method) (( ReadOnlyCollection_1_t1517 * (*) (List_1_t2 *, const MethodInfo*))List_1_AsReadOnly_m23882_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
extern "C" void List_1_Clear_m17803_gshared (List_1_t2 * __this, const MethodInfo* method);
#define List_1_Clear_m17803(__this, method) (( void (*) (List_1_t2 *, const MethodInfo*))List_1_Clear_m17803_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(T)
extern "C" bool List_1_Contains_m17811_gshared (List_1_t2 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Contains_m17811(__this, ___item, method) (( bool (*) (List_1_t2 *, Object_t *, const MethodInfo*))List_1_Contains_m17811_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m17812_gshared (List_1_t2 * __this, ObjectU5BU5D_t21* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m17812(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t2 *, ObjectU5BU5D_t21*, int32_t, const MethodInfo*))List_1_CopyTo_m17812_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Object>::Find(System.Predicate`1<T>)
extern "C" Object_t * List_1_Find_m23883_gshared (List_1_t2 * __this, Predicate_1_t5972 * ___match, const MethodInfo* method);
#define List_1_Find_m23883(__this, ___match, method) (( Object_t * (*) (List_1_t2 *, Predicate_1_t5972 *, const MethodInfo*))List_1_Find_m23883_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m23884_gshared (Object_t * __this /* static, unused */, Predicate_1_t5972 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m23884(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t5972 *, const MethodInfo*))List_1_CheckMatch_m23884_gshared)(__this /* static, unused */, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Object>::FindAll(System.Predicate`1<T>)
extern "C" List_1_t2 * List_1_FindAll_m23885_gshared (List_1_t2 * __this, Predicate_1_t5972 * ___match, const MethodInfo* method);
#define List_1_FindAll_m23885(__this, ___match, method) (( List_1_t2 * (*) (List_1_t2 *, Predicate_1_t5972 *, const MethodInfo*))List_1_FindAll_m23885_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Object>::FindAllStackBits(System.Predicate`1<T>)
extern "C" List_1_t2 * List_1_FindAllStackBits_m23886_gshared (List_1_t2 * __this, Predicate_1_t5972 * ___match, const MethodInfo* method);
#define List_1_FindAllStackBits_m23886(__this, ___match, method) (( List_1_t2 * (*) (List_1_t2 *, Predicate_1_t5972 *, const MethodInfo*))List_1_FindAllStackBits_m23886_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Object>::FindAllList(System.Predicate`1<T>)
extern "C" List_1_t2 * List_1_FindAllList_m23887_gshared (List_1_t2 * __this, Predicate_1_t5972 * ___match, const MethodInfo* method);
#define List_1_FindAllList_m23887(__this, ___match, method) (( List_1_t2 * (*) (List_1_t2 *, Predicate_1_t5972 *, const MethodInfo*))List_1_FindAllList_m23887_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::FindIndex(System.Predicate`1<T>)
extern "C" int32_t List_1_FindIndex_m23888_gshared (List_1_t2 * __this, Predicate_1_t5972 * ___match, const MethodInfo* method);
#define List_1_FindIndex_m23888(__this, ___match, method) (( int32_t (*) (List_1_t2 *, Predicate_1_t5972 *, const MethodInfo*))List_1_FindIndex_m23888_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m23889_gshared (List_1_t2 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t5972 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m23889(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t2 *, int32_t, int32_t, Predicate_1_t5972 *, const MethodInfo*))List_1_GetIndex_m23889_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
extern "C" Enumerator_t5967  List_1_GetEnumerator_m23890_gshared (List_1_t2 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m23890(__this, method) (( Enumerator_t5967  (*) (List_1_t2 *, const MethodInfo*))List_1_GetEnumerator_m23890_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Object>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t2 * List_1_GetRange_m23891_gshared (List_1_t2 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m23891(__this, ___index, ___count, method) (( List_1_t2 * (*) (List_1_t2 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m23891_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m17815_gshared (List_1_t2 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_IndexOf_m17815(__this, ___item, method) (( int32_t (*) (List_1_t2 *, Object_t *, const MethodInfo*))List_1_IndexOf_m17815_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m23892_gshared (List_1_t2 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m23892(__this, ___start, ___delta, method) (( void (*) (List_1_t2 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m23892_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m23893_gshared (List_1_t2 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m23893(__this, ___index, method) (( void (*) (List_1_t2 *, int32_t, const MethodInfo*))List_1_CheckIndex_m23893_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m17816_gshared (List_1_t2 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_Insert_m17816(__this, ___index, ___item, method) (( void (*) (List_1_t2 *, int32_t, Object_t *, const MethodInfo*))List_1_Insert_m17816_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m23894_gshared (List_1_t2 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m23894(__this, ___collection, method) (( void (*) (List_1_t2 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m23894_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Object>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m23895_gshared (List_1_t2 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m23895(__this, ___index, ___collection, method) (( void (*) (List_1_t2 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m23895_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Object>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m23896_gshared (List_1_t2 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m23896(__this, ___index, ___collection, method) (( void (*) (List_1_t2 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m23896_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Object>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m23897_gshared (List_1_t2 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m23897(__this, ___index, ___enumerable, method) (( void (*) (List_1_t2 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m23897_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(T)
extern "C" bool List_1_Remove_m17813_gshared (List_1_t2 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Remove_m17813(__this, ___item, method) (( bool (*) (List_1_t2 *, Object_t *, const MethodInfo*))List_1_Remove_m17813_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m23898_gshared (List_1_t2 * __this, Predicate_1_t5972 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m23898(__this, ___match, method) (( int32_t (*) (List_1_t2 *, Predicate_1_t5972 *, const MethodInfo*))List_1_RemoveAll_m23898_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m17808_gshared (List_1_t2 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m17808(__this, ___index, method) (( void (*) (List_1_t2 *, int32_t, const MethodInfo*))List_1_RemoveAt_m17808_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m23899_gshared (List_1_t2 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m23899(__this, ___index, ___count, method) (( void (*) (List_1_t2 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m23899_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Reverse()
extern "C" void List_1_Reverse_m23900_gshared (List_1_t2 * __this, const MethodInfo* method);
#define List_1_Reverse_m23900(__this, method) (( void (*) (List_1_t2 *, const MethodInfo*))List_1_Reverse_m23900_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Sort()
extern "C" void List_1_Sort_m23901_gshared (List_1_t2 * __this, const MethodInfo* method);
#define List_1_Sort_m23901(__this, method) (( void (*) (List_1_t2 *, const MethodInfo*))List_1_Sort_m23901_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m23902_gshared (List_1_t2 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m23902(__this, ___comparer, method) (( void (*) (List_1_t2 *, Object_t*, const MethodInfo*))List_1_Sort_m23902_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m23903_gshared (List_1_t2 * __this, Comparison_1_t5979 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m23903(__this, ___comparison, method) (( void (*) (List_1_t2 *, Comparison_1_t5979 *, const MethodInfo*))List_1_Sort_m23903_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Object>::ToArray()
extern "C" ObjectU5BU5D_t21* List_1_ToArray_m3250_gshared (List_1_t2 * __this, const MethodInfo* method);
#define List_1_ToArray_m3250(__this, method) (( ObjectU5BU5D_t21* (*) (List_1_t2 *, const MethodInfo*))List_1_ToArray_m3250_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::TrimExcess()
extern "C" void List_1_TrimExcess_m23904_gshared (List_1_t2 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m23904(__this, method) (( void (*) (List_1_t2 *, const MethodInfo*))List_1_TrimExcess_m23904_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m23905_gshared (List_1_t2 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m23905(__this, method) (( int32_t (*) (List_1_t2 *, const MethodInfo*))List_1_get_Capacity_m23905_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m23906_gshared (List_1_t2 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m23906(__this, ___value, method) (( void (*) (List_1_t2 *, int32_t, const MethodInfo*))List_1_set_Capacity_m23906_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
extern "C" int32_t List_1_get_Count_m17794_gshared (List_1_t2 * __this, const MethodInfo* method);
#define List_1_get_Count_m17794(__this, method) (( int32_t (*) (List_1_t2 *, const MethodInfo*))List_1_get_Count_m17794_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * List_1_get_Item_m17817_gshared (List_1_t2 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m17817(__this, ___index, method) (( Object_t * (*) (List_1_t2 *, int32_t, const MethodInfo*))List_1_get_Item_m17817_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m17818_gshared (List_1_t2 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_set_Item_m17818(__this, ___index, ___value, method) (( void (*) (List_1_t2 *, int32_t, Object_t *, const MethodInfo*))List_1_set_Item_m17818_gshared)(__this, ___index, ___value, method)

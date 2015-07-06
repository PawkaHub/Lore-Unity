#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Int32>
struct List_1_t82;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Int32>
struct IEnumerable_1_t1818;
// System.Int32[]
struct Int32U5BU5D_t119;
// System.Collections.Generic.IEnumerator`1<System.Int32>
struct IEnumerator_1_t3057;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t9603;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Int32>
struct ReadOnlyCollection_1_t6042;
// System.Predicate`1<System.Int32>
struct Predicate_1_t6044;
// System.Collections.Generic.IComparer`1<System.Int32>
struct IComparer_1_t5941;
// System.Comparison`1<System.Int32>
struct Comparison_1_t6048;
// System.Collections.Generic.List`1/Enumerator<System.Int32>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_42.h"

// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
extern "C" void List_1__ctor_m2526_gshared (List_1_t82 * __this, const MethodInfo* method);
#define List_1__ctor_m2526(__this, method) (( void (*) (List_1_t82 *, const MethodInfo*))List_1__ctor_m2526_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m24765_gshared (List_1_t82 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m24765(__this, ___collection, method) (( void (*) (List_1_t82 *, Object_t*, const MethodInfo*))List_1__ctor_m24765_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor(System.Int32)
extern "C" void List_1__ctor_m24767_gshared (List_1_t82 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m24767(__this, ___capacity, method) (( void (*) (List_1_t82 *, int32_t, const MethodInfo*))List_1__ctor_m24767_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m24769_gshared (List_1_t82 * __this, Int32U5BU5D_t119* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m24769(__this, ___data, ___size, method) (( void (*) (List_1_t82 *, Int32U5BU5D_t119*, int32_t, const MethodInfo*))List_1__ctor_m24769_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::.cctor()
extern "C" void List_1__cctor_m24771_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m24771(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m24771_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Int32>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m24773_gshared (List_1_t82 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m24773(__this, method) (( Object_t* (*) (List_1_t82 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m24773_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m24775_gshared (List_1_t82 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m24775(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t82 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m24775_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m24777_gshared (List_1_t82 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m24777(__this, method) (( Object_t * (*) (List_1_t82 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m24777_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m24779_gshared (List_1_t82 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m24779(__this, ___item, method) (( int32_t (*) (List_1_t82 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m24779_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m24781_gshared (List_1_t82 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m24781(__this, ___item, method) (( bool (*) (List_1_t82 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m24781_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m24783_gshared (List_1_t82 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m24783(__this, ___item, method) (( int32_t (*) (List_1_t82 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m24783_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m24785_gshared (List_1_t82 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m24785(__this, ___index, ___item, method) (( void (*) (List_1_t82 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m24785_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m24787_gshared (List_1_t82 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m24787(__this, ___item, method) (( void (*) (List_1_t82 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m24787_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m24789_gshared (List_1_t82 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m24789(__this, method) (( bool (*) (List_1_t82 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m24789_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m24791_gshared (List_1_t82 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m24791(__this, method) (( bool (*) (List_1_t82 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m24791_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m24793_gshared (List_1_t82 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m24793(__this, method) (( Object_t * (*) (List_1_t82 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m24793_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m24795_gshared (List_1_t82 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m24795(__this, method) (( bool (*) (List_1_t82 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m24795_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m24797_gshared (List_1_t82 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m24797(__this, method) (( bool (*) (List_1_t82 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m24797_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m24799_gshared (List_1_t82 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m24799(__this, ___index, method) (( Object_t * (*) (List_1_t82 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m24799_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m24801_gshared (List_1_t82 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m24801(__this, ___index, ___value, method) (( void (*) (List_1_t82 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m24801_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(T)
extern "C" void List_1_Add_m24803_gshared (List_1_t82 * __this, int32_t ___item, const MethodInfo* method);
#define List_1_Add_m24803(__this, ___item, method) (( void (*) (List_1_t82 *, int32_t, const MethodInfo*))List_1_Add_m24803_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m24805_gshared (List_1_t82 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m24805(__this, ___newCount, method) (( void (*) (List_1_t82 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m24805_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m24807_gshared (List_1_t82 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m24807(__this, ___idx, ___count, method) (( void (*) (List_1_t82 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m24807_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m24809_gshared (List_1_t82 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m24809(__this, ___collection, method) (( void (*) (List_1_t82 *, Object_t*, const MethodInfo*))List_1_AddCollection_m24809_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m24811_gshared (List_1_t82 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m24811(__this, ___enumerable, method) (( void (*) (List_1_t82 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m24811_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m24813_gshared (List_1_t82 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m24813(__this, ___collection, method) (( void (*) (List_1_t82 *, Object_t*, const MethodInfo*))List_1_AddRange_m24813_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Int32>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t6042 * List_1_AsReadOnly_m24815_gshared (List_1_t82 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m24815(__this, method) (( ReadOnlyCollection_1_t6042 * (*) (List_1_t82 *, const MethodInfo*))List_1_AsReadOnly_m24815_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Clear()
extern "C" void List_1_Clear_m24817_gshared (List_1_t82 * __this, const MethodInfo* method);
#define List_1_Clear_m24817(__this, method) (( void (*) (List_1_t82 *, const MethodInfo*))List_1_Clear_m24817_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::Contains(T)
extern "C" bool List_1_Contains_m24819_gshared (List_1_t82 * __this, int32_t ___item, const MethodInfo* method);
#define List_1_Contains_m24819(__this, ___item, method) (( bool (*) (List_1_t82 *, int32_t, const MethodInfo*))List_1_Contains_m24819_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m24821_gshared (List_1_t82 * __this, Int32U5BU5D_t119* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m24821(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t82 *, Int32U5BU5D_t119*, int32_t, const MethodInfo*))List_1_CopyTo_m24821_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Int32>::Find(System.Predicate`1<T>)
extern "C" int32_t List_1_Find_m24823_gshared (List_1_t82 * __this, Predicate_1_t6044 * ___match, const MethodInfo* method);
#define List_1_Find_m24823(__this, ___match, method) (( int32_t (*) (List_1_t82 *, Predicate_1_t6044 *, const MethodInfo*))List_1_Find_m24823_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m24825_gshared (Object_t * __this /* static, unused */, Predicate_1_t6044 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m24825(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t6044 *, const MethodInfo*))List_1_CheckMatch_m24825_gshared)(__this /* static, unused */, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Int32>::FindAll(System.Predicate`1<T>)
extern "C" List_1_t82 * List_1_FindAll_m24827_gshared (List_1_t82 * __this, Predicate_1_t6044 * ___match, const MethodInfo* method);
#define List_1_FindAll_m24827(__this, ___match, method) (( List_1_t82 * (*) (List_1_t82 *, Predicate_1_t6044 *, const MethodInfo*))List_1_FindAll_m24827_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Int32>::FindAllStackBits(System.Predicate`1<T>)
extern "C" List_1_t82 * List_1_FindAllStackBits_m24829_gshared (List_1_t82 * __this, Predicate_1_t6044 * ___match, const MethodInfo* method);
#define List_1_FindAllStackBits_m24829(__this, ___match, method) (( List_1_t82 * (*) (List_1_t82 *, Predicate_1_t6044 *, const MethodInfo*))List_1_FindAllStackBits_m24829_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Int32>::FindAllList(System.Predicate`1<T>)
extern "C" List_1_t82 * List_1_FindAllList_m24831_gshared (List_1_t82 * __this, Predicate_1_t6044 * ___match, const MethodInfo* method);
#define List_1_FindAllList_m24831(__this, ___match, method) (( List_1_t82 * (*) (List_1_t82 *, Predicate_1_t6044 *, const MethodInfo*))List_1_FindAllList_m24831_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::FindIndex(System.Predicate`1<T>)
extern "C" int32_t List_1_FindIndex_m24833_gshared (List_1_t82 * __this, Predicate_1_t6044 * ___match, const MethodInfo* method);
#define List_1_FindIndex_m24833(__this, ___match, method) (( int32_t (*) (List_1_t82 *, Predicate_1_t6044 *, const MethodInfo*))List_1_FindIndex_m24833_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m24835_gshared (List_1_t82 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t6044 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m24835(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t82 *, int32_t, int32_t, Predicate_1_t6044 *, const MethodInfo*))List_1_GetIndex_m24835_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Int32>::GetEnumerator()
extern "C" Enumerator_t6040  List_1_GetEnumerator_m24837_gshared (List_1_t82 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m24837(__this, method) (( Enumerator_t6040  (*) (List_1_t82 *, const MethodInfo*))List_1_GetEnumerator_m24837_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Int32>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t82 * List_1_GetRange_m24839_gshared (List_1_t82 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m24839(__this, ___index, ___count, method) (( List_1_t82 * (*) (List_1_t82 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m24839_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m24841_gshared (List_1_t82 * __this, int32_t ___item, const MethodInfo* method);
#define List_1_IndexOf_m24841(__this, ___item, method) (( int32_t (*) (List_1_t82 *, int32_t, const MethodInfo*))List_1_IndexOf_m24841_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m24843_gshared (List_1_t82 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m24843(__this, ___start, ___delta, method) (( void (*) (List_1_t82 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m24843_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m24845_gshared (List_1_t82 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m24845(__this, ___index, method) (( void (*) (List_1_t82 *, int32_t, const MethodInfo*))List_1_CheckIndex_m24845_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m24847_gshared (List_1_t82 * __this, int32_t ___index, int32_t ___item, const MethodInfo* method);
#define List_1_Insert_m24847(__this, ___index, ___item, method) (( void (*) (List_1_t82 *, int32_t, int32_t, const MethodInfo*))List_1_Insert_m24847_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m24849_gshared (List_1_t82 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m24849(__this, ___collection, method) (( void (*) (List_1_t82 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m24849_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m24851_gshared (List_1_t82 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m24851(__this, ___index, ___collection, method) (( void (*) (List_1_t82 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m24851_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m24853_gshared (List_1_t82 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m24853(__this, ___index, ___collection, method) (( void (*) (List_1_t82 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m24853_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m24855_gshared (List_1_t82 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m24855(__this, ___index, ___enumerable, method) (( void (*) (List_1_t82 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m24855_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::Remove(T)
extern "C" bool List_1_Remove_m24857_gshared (List_1_t82 * __this, int32_t ___item, const MethodInfo* method);
#define List_1_Remove_m24857(__this, ___item, method) (( bool (*) (List_1_t82 *, int32_t, const MethodInfo*))List_1_Remove_m24857_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m24859_gshared (List_1_t82 * __this, Predicate_1_t6044 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m24859(__this, ___match, method) (( int32_t (*) (List_1_t82 *, Predicate_1_t6044 *, const MethodInfo*))List_1_RemoveAll_m24859_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m24861_gshared (List_1_t82 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m24861(__this, ___index, method) (( void (*) (List_1_t82 *, int32_t, const MethodInfo*))List_1_RemoveAt_m24861_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m24863_gshared (List_1_t82 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m24863(__this, ___index, ___count, method) (( void (*) (List_1_t82 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m24863_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Reverse()
extern "C" void List_1_Reverse_m24864_gshared (List_1_t82 * __this, const MethodInfo* method);
#define List_1_Reverse_m24864(__this, method) (( void (*) (List_1_t82 *, const MethodInfo*))List_1_Reverse_m24864_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Sort()
extern "C" void List_1_Sort_m24866_gshared (List_1_t82 * __this, const MethodInfo* method);
#define List_1_Sort_m24866(__this, method) (( void (*) (List_1_t82 *, const MethodInfo*))List_1_Sort_m24866_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m24868_gshared (List_1_t82 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m24868(__this, ___comparer, method) (( void (*) (List_1_t82 *, Object_t*, const MethodInfo*))List_1_Sort_m24868_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m24870_gshared (List_1_t82 * __this, Comparison_1_t6048 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m24870(__this, ___comparison, method) (( void (*) (List_1_t82 *, Comparison_1_t6048 *, const MethodInfo*))List_1_Sort_m24870_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Int32>::ToArray()
extern "C" Int32U5BU5D_t119* List_1_ToArray_m3229_gshared (List_1_t82 * __this, const MethodInfo* method);
#define List_1_ToArray_m3229(__this, method) (( Int32U5BU5D_t119* (*) (List_1_t82 *, const MethodInfo*))List_1_ToArray_m3229_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::TrimExcess()
extern "C" void List_1_TrimExcess_m24873_gshared (List_1_t82 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m24873(__this, method) (( void (*) (List_1_t82 *, const MethodInfo*))List_1_TrimExcess_m24873_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m24875_gshared (List_1_t82 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m24875(__this, method) (( int32_t (*) (List_1_t82 *, const MethodInfo*))List_1_get_Capacity_m24875_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m24877_gshared (List_1_t82 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m24877(__this, ___value, method) (( void (*) (List_1_t82 *, int32_t, const MethodInfo*))List_1_set_Capacity_m24877_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Count()
extern "C" int32_t List_1_get_Count_m24879_gshared (List_1_t82 * __this, const MethodInfo* method);
#define List_1_get_Count_m24879(__this, method) (( int32_t (*) (List_1_t82 *, const MethodInfo*))List_1_get_Count_m24879_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Int32>::get_Item(System.Int32)
extern "C" int32_t List_1_get_Item_m24881_gshared (List_1_t82 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m24881(__this, ___index, method) (( int32_t (*) (List_1_t82 *, int32_t, const MethodInfo*))List_1_get_Item_m24881_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m24883_gshared (List_1_t82 * __this, int32_t ___index, int32_t ___value, const MethodInfo* method);
#define List_1_set_Item_m24883(__this, ___index, ___value, method) (( void (*) (List_1_t82 *, int32_t, int32_t, const MethodInfo*))List_1_set_Item_m24883_gshared)(__this, ___index, ___value, method)

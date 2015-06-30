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
struct IEnumerable_1_t1612;
// System.Int32[]
struct Int32U5BU5D_t119;
// System.Collections.Generic.IEnumerator`1<System.Int32>
struct IEnumerator_1_t3228;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t6431;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Int32>
struct ReadOnlyCollection_1_t4954;
// System.Predicate`1<System.Int32>
struct Predicate_1_t4956;
// System.Collections.Generic.IComparer`1<System.Int32>
struct IComparer_1_t4851;
// System.Comparison`1<System.Int32>
struct Comparison_1_t4960;
// System.Collections.Generic.List`1/Enumerator<System.Int32>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_40.h"

// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
extern "C" void List_1__ctor_m2439_gshared (List_1_t82 * __this, const MethodInfo* method);
#define List_1__ctor_m2439(__this, method) (( void (*) (List_1_t82 *, const MethodInfo*))List_1__ctor_m2439_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m23391_gshared (List_1_t82 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m23391(__this, ___collection, method) (( void (*) (List_1_t82 *, Object_t*, const MethodInfo*))List_1__ctor_m23391_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor(System.Int32)
extern "C" void List_1__ctor_m23393_gshared (List_1_t82 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m23393(__this, ___capacity, method) (( void (*) (List_1_t82 *, int32_t, const MethodInfo*))List_1__ctor_m23393_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m23395_gshared (List_1_t82 * __this, Int32U5BU5D_t119* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m23395(__this, ___data, ___size, method) (( void (*) (List_1_t82 *, Int32U5BU5D_t119*, int32_t, const MethodInfo*))List_1__ctor_m23395_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::.cctor()
extern "C" void List_1__cctor_m23397_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m23397(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m23397_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Int32>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m23399_gshared (List_1_t82 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m23399(__this, method) (( Object_t* (*) (List_1_t82 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m23399_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m23401_gshared (List_1_t82 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m23401(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t82 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m23401_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m23403_gshared (List_1_t82 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m23403(__this, method) (( Object_t * (*) (List_1_t82 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m23403_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m23405_gshared (List_1_t82 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m23405(__this, ___item, method) (( int32_t (*) (List_1_t82 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m23405_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m23407_gshared (List_1_t82 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m23407(__this, ___item, method) (( bool (*) (List_1_t82 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m23407_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m23409_gshared (List_1_t82 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m23409(__this, ___item, method) (( int32_t (*) (List_1_t82 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m23409_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m23411_gshared (List_1_t82 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m23411(__this, ___index, ___item, method) (( void (*) (List_1_t82 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m23411_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m23413_gshared (List_1_t82 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m23413(__this, ___item, method) (( void (*) (List_1_t82 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m23413_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m23415_gshared (List_1_t82 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m23415(__this, method) (( bool (*) (List_1_t82 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m23415_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m23417_gshared (List_1_t82 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m23417(__this, method) (( bool (*) (List_1_t82 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m23417_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m23419_gshared (List_1_t82 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m23419(__this, method) (( Object_t * (*) (List_1_t82 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m23419_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m23421_gshared (List_1_t82 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m23421(__this, method) (( bool (*) (List_1_t82 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m23421_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m23423_gshared (List_1_t82 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m23423(__this, method) (( bool (*) (List_1_t82 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m23423_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m23425_gshared (List_1_t82 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m23425(__this, ___index, method) (( Object_t * (*) (List_1_t82 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m23425_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m23427_gshared (List_1_t82 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m23427(__this, ___index, ___value, method) (( void (*) (List_1_t82 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m23427_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(T)
extern "C" void List_1_Add_m23429_gshared (List_1_t82 * __this, int32_t ___item, const MethodInfo* method);
#define List_1_Add_m23429(__this, ___item, method) (( void (*) (List_1_t82 *, int32_t, const MethodInfo*))List_1_Add_m23429_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m23431_gshared (List_1_t82 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m23431(__this, ___newCount, method) (( void (*) (List_1_t82 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m23431_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m23433_gshared (List_1_t82 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m23433(__this, ___idx, ___count, method) (( void (*) (List_1_t82 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m23433_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m23435_gshared (List_1_t82 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m23435(__this, ___collection, method) (( void (*) (List_1_t82 *, Object_t*, const MethodInfo*))List_1_AddCollection_m23435_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m23437_gshared (List_1_t82 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m23437(__this, ___enumerable, method) (( void (*) (List_1_t82 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m23437_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m23439_gshared (List_1_t82 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m23439(__this, ___collection, method) (( void (*) (List_1_t82 *, Object_t*, const MethodInfo*))List_1_AddRange_m23439_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Int32>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t4954 * List_1_AsReadOnly_m23441_gshared (List_1_t82 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m23441(__this, method) (( ReadOnlyCollection_1_t4954 * (*) (List_1_t82 *, const MethodInfo*))List_1_AsReadOnly_m23441_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Clear()
extern "C" void List_1_Clear_m23443_gshared (List_1_t82 * __this, const MethodInfo* method);
#define List_1_Clear_m23443(__this, method) (( void (*) (List_1_t82 *, const MethodInfo*))List_1_Clear_m23443_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::Contains(T)
extern "C" bool List_1_Contains_m23445_gshared (List_1_t82 * __this, int32_t ___item, const MethodInfo* method);
#define List_1_Contains_m23445(__this, ___item, method) (( bool (*) (List_1_t82 *, int32_t, const MethodInfo*))List_1_Contains_m23445_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m23447_gshared (List_1_t82 * __this, Int32U5BU5D_t119* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m23447(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t82 *, Int32U5BU5D_t119*, int32_t, const MethodInfo*))List_1_CopyTo_m23447_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Int32>::Find(System.Predicate`1<T>)
extern "C" int32_t List_1_Find_m23449_gshared (List_1_t82 * __this, Predicate_1_t4956 * ___match, const MethodInfo* method);
#define List_1_Find_m23449(__this, ___match, method) (( int32_t (*) (List_1_t82 *, Predicate_1_t4956 *, const MethodInfo*))List_1_Find_m23449_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m23451_gshared (Object_t * __this /* static, unused */, Predicate_1_t4956 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m23451(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t4956 *, const MethodInfo*))List_1_CheckMatch_m23451_gshared)(__this /* static, unused */, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Int32>::FindAll(System.Predicate`1<T>)
extern "C" List_1_t82 * List_1_FindAll_m23453_gshared (List_1_t82 * __this, Predicate_1_t4956 * ___match, const MethodInfo* method);
#define List_1_FindAll_m23453(__this, ___match, method) (( List_1_t82 * (*) (List_1_t82 *, Predicate_1_t4956 *, const MethodInfo*))List_1_FindAll_m23453_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Int32>::FindAllStackBits(System.Predicate`1<T>)
extern "C" List_1_t82 * List_1_FindAllStackBits_m23455_gshared (List_1_t82 * __this, Predicate_1_t4956 * ___match, const MethodInfo* method);
#define List_1_FindAllStackBits_m23455(__this, ___match, method) (( List_1_t82 * (*) (List_1_t82 *, Predicate_1_t4956 *, const MethodInfo*))List_1_FindAllStackBits_m23455_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Int32>::FindAllList(System.Predicate`1<T>)
extern "C" List_1_t82 * List_1_FindAllList_m23457_gshared (List_1_t82 * __this, Predicate_1_t4956 * ___match, const MethodInfo* method);
#define List_1_FindAllList_m23457(__this, ___match, method) (( List_1_t82 * (*) (List_1_t82 *, Predicate_1_t4956 *, const MethodInfo*))List_1_FindAllList_m23457_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::FindIndex(System.Predicate`1<T>)
extern "C" int32_t List_1_FindIndex_m23459_gshared (List_1_t82 * __this, Predicate_1_t4956 * ___match, const MethodInfo* method);
#define List_1_FindIndex_m23459(__this, ___match, method) (( int32_t (*) (List_1_t82 *, Predicate_1_t4956 *, const MethodInfo*))List_1_FindIndex_m23459_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m23461_gshared (List_1_t82 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t4956 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m23461(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t82 *, int32_t, int32_t, Predicate_1_t4956 *, const MethodInfo*))List_1_GetIndex_m23461_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Int32>::GetEnumerator()
extern "C" Enumerator_t4952  List_1_GetEnumerator_m23463_gshared (List_1_t82 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m23463(__this, method) (( Enumerator_t4952  (*) (List_1_t82 *, const MethodInfo*))List_1_GetEnumerator_m23463_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Int32>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t82 * List_1_GetRange_m23465_gshared (List_1_t82 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m23465(__this, ___index, ___count, method) (( List_1_t82 * (*) (List_1_t82 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m23465_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m23467_gshared (List_1_t82 * __this, int32_t ___item, const MethodInfo* method);
#define List_1_IndexOf_m23467(__this, ___item, method) (( int32_t (*) (List_1_t82 *, int32_t, const MethodInfo*))List_1_IndexOf_m23467_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m23469_gshared (List_1_t82 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m23469(__this, ___start, ___delta, method) (( void (*) (List_1_t82 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m23469_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m23471_gshared (List_1_t82 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m23471(__this, ___index, method) (( void (*) (List_1_t82 *, int32_t, const MethodInfo*))List_1_CheckIndex_m23471_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m23473_gshared (List_1_t82 * __this, int32_t ___index, int32_t ___item, const MethodInfo* method);
#define List_1_Insert_m23473(__this, ___index, ___item, method) (( void (*) (List_1_t82 *, int32_t, int32_t, const MethodInfo*))List_1_Insert_m23473_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m23475_gshared (List_1_t82 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m23475(__this, ___collection, method) (( void (*) (List_1_t82 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m23475_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m23477_gshared (List_1_t82 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m23477(__this, ___index, ___collection, method) (( void (*) (List_1_t82 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m23477_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m23479_gshared (List_1_t82 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m23479(__this, ___index, ___collection, method) (( void (*) (List_1_t82 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m23479_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m23481_gshared (List_1_t82 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m23481(__this, ___index, ___enumerable, method) (( void (*) (List_1_t82 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m23481_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::Remove(T)
extern "C" bool List_1_Remove_m23483_gshared (List_1_t82 * __this, int32_t ___item, const MethodInfo* method);
#define List_1_Remove_m23483(__this, ___item, method) (( bool (*) (List_1_t82 *, int32_t, const MethodInfo*))List_1_Remove_m23483_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m23485_gshared (List_1_t82 * __this, Predicate_1_t4956 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m23485(__this, ___match, method) (( int32_t (*) (List_1_t82 *, Predicate_1_t4956 *, const MethodInfo*))List_1_RemoveAll_m23485_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m23487_gshared (List_1_t82 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m23487(__this, ___index, method) (( void (*) (List_1_t82 *, int32_t, const MethodInfo*))List_1_RemoveAt_m23487_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m23489_gshared (List_1_t82 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m23489(__this, ___index, ___count, method) (( void (*) (List_1_t82 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m23489_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Reverse()
extern "C" void List_1_Reverse_m23490_gshared (List_1_t82 * __this, const MethodInfo* method);
#define List_1_Reverse_m23490(__this, method) (( void (*) (List_1_t82 *, const MethodInfo*))List_1_Reverse_m23490_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Sort()
extern "C" void List_1_Sort_m23492_gshared (List_1_t82 * __this, const MethodInfo* method);
#define List_1_Sort_m23492(__this, method) (( void (*) (List_1_t82 *, const MethodInfo*))List_1_Sort_m23492_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m23494_gshared (List_1_t82 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m23494(__this, ___comparer, method) (( void (*) (List_1_t82 *, Object_t*, const MethodInfo*))List_1_Sort_m23494_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m23496_gshared (List_1_t82 * __this, Comparison_1_t4960 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m23496(__this, ___comparison, method) (( void (*) (List_1_t82 *, Comparison_1_t4960 *, const MethodInfo*))List_1_Sort_m23496_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Int32>::ToArray()
extern "C" Int32U5BU5D_t119* List_1_ToArray_m3144_gshared (List_1_t82 * __this, const MethodInfo* method);
#define List_1_ToArray_m3144(__this, method) (( Int32U5BU5D_t119* (*) (List_1_t82 *, const MethodInfo*))List_1_ToArray_m3144_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::TrimExcess()
extern "C" void List_1_TrimExcess_m23499_gshared (List_1_t82 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m23499(__this, method) (( void (*) (List_1_t82 *, const MethodInfo*))List_1_TrimExcess_m23499_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m23501_gshared (List_1_t82 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m23501(__this, method) (( int32_t (*) (List_1_t82 *, const MethodInfo*))List_1_get_Capacity_m23501_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m23503_gshared (List_1_t82 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m23503(__this, ___value, method) (( void (*) (List_1_t82 *, int32_t, const MethodInfo*))List_1_set_Capacity_m23503_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Count()
extern "C" int32_t List_1_get_Count_m23505_gshared (List_1_t82 * __this, const MethodInfo* method);
#define List_1_get_Count_m23505(__this, method) (( int32_t (*) (List_1_t82 *, const MethodInfo*))List_1_get_Count_m23505_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Int32>::get_Item(System.Int32)
extern "C" int32_t List_1_get_Item_m23507_gshared (List_1_t82 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m23507(__this, ___index, method) (( int32_t (*) (List_1_t82 *, int32_t, const MethodInfo*))List_1_get_Item_m23507_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m23509_gshared (List_1_t82 * __this, int32_t ___index, int32_t ___value, const MethodInfo* method);
#define List_1_set_Item_m23509(__this, ___index, ___value, method) (( void (*) (List_1_t82 *, int32_t, int32_t, const MethodInfo*))List_1_set_Item_m23509_gshared)(__this, ___index, ___value, method)

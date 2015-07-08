#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t63;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Vector3>
struct IEnumerable_1_t9899;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t92;
// System.Collections.Generic.IEnumerator`1<UnityEngine.Vector3>
struct IEnumerator_1_t9900;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Collections.Generic.ICollection`1<UnityEngine.Vector3>
struct ICollection_1_t9901;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Vector3>
struct ReadOnlyCollection_1_t6295;
// System.Predicate`1<UnityEngine.Vector3>
struct Predicate_1_t6299;
// System.Collections.Generic.IComparer`1<UnityEngine.Vector3>
struct IComparer_1_t9902;
// System.Comparison`1<UnityEngine.Vector3>
struct Comparison_1_t6302;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.Vector3>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_47.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::.ctor()
extern "C" void List_1__ctor_m2658_gshared (List_1_t63 * __this, const MethodInfo* method);
#define List_1__ctor_m2658(__this, method) (( void (*) (List_1_t63 *, const MethodInfo*))List_1__ctor_m2658_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m25435_gshared (List_1_t63 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m25435(__this, ___collection, method) (( void (*) (List_1_t63 *, Object_t*, const MethodInfo*))List_1__ctor_m25435_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::.ctor(System.Int32)
extern "C" void List_1__ctor_m25436_gshared (List_1_t63 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m25436(__this, ___capacity, method) (( void (*) (List_1_t63 *, int32_t, const MethodInfo*))List_1__ctor_m25436_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m25437_gshared (List_1_t63 * __this, Vector3U5BU5D_t92* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m25437(__this, ___data, ___size, method) (( void (*) (List_1_t63 *, Vector3U5BU5D_t92*, int32_t, const MethodInfo*))List_1__ctor_m25437_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::.cctor()
extern "C" void List_1__cctor_m25438_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m25438(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m25438_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.Vector3>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m25439_gshared (List_1_t63 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m25439(__this, method) (( Object_t* (*) (List_1_t63 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m25439_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m25440_gshared (List_1_t63 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m25440(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t63 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m25440_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.Vector3>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m25441_gshared (List_1_t63 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m25441(__this, method) (( Object_t * (*) (List_1_t63 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m25441_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m25442_gshared (List_1_t63 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m25442(__this, ___item, method) (( int32_t (*) (List_1_t63 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m25442_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Vector3>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m25443_gshared (List_1_t63 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m25443(__this, ___item, method) (( bool (*) (List_1_t63 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m25443_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m25444_gshared (List_1_t63 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m25444(__this, ___item, method) (( int32_t (*) (List_1_t63 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m25444_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m25445_gshared (List_1_t63 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m25445(__this, ___index, ___item, method) (( void (*) (List_1_t63 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m25445_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m25446_gshared (List_1_t63 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m25446(__this, ___item, method) (( void (*) (List_1_t63 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m25446_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Vector3>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m25447_gshared (List_1_t63 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m25447(__this, method) (( bool (*) (List_1_t63 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m25447_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Vector3>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m25448_gshared (List_1_t63 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m25448(__this, method) (( bool (*) (List_1_t63 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m25448_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.Vector3>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m25449_gshared (List_1_t63 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m25449(__this, method) (( Object_t * (*) (List_1_t63 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m25449_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Vector3>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m25450_gshared (List_1_t63 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m25450(__this, method) (( bool (*) (List_1_t63 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m25450_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Vector3>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m25451_gshared (List_1_t63 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m25451(__this, method) (( bool (*) (List_1_t63 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m25451_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.Vector3>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m25452_gshared (List_1_t63 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m25452(__this, ___index, method) (( Object_t * (*) (List_1_t63 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m25452_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m25453_gshared (List_1_t63 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m25453(__this, ___index, ___value, method) (( void (*) (List_1_t63 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m25453_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Add(T)
extern "C" void List_1_Add_m25454_gshared (List_1_t63 * __this, Vector3_t53  ___item, const MethodInfo* method);
#define List_1_Add_m25454(__this, ___item, method) (( void (*) (List_1_t63 *, Vector3_t53 , const MethodInfo*))List_1_Add_m25454_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m25455_gshared (List_1_t63 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m25455(__this, ___newCount, method) (( void (*) (List_1_t63 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m25455_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m25456_gshared (List_1_t63 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m25456(__this, ___idx, ___count, method) (( void (*) (List_1_t63 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m25456_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m25457_gshared (List_1_t63 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m25457(__this, ___collection, method) (( void (*) (List_1_t63 *, Object_t*, const MethodInfo*))List_1_AddCollection_m25457_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m25458_gshared (List_1_t63 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m25458(__this, ___enumerable, method) (( void (*) (List_1_t63 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m25458_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m25459_gshared (List_1_t63 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m25459(__this, ___collection, method) (( void (*) (List_1_t63 *, Object_t*, const MethodInfo*))List_1_AddRange_m25459_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.Vector3>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t6295 * List_1_AsReadOnly_m25460_gshared (List_1_t63 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m25460(__this, method) (( ReadOnlyCollection_1_t6295 * (*) (List_1_t63 *, const MethodInfo*))List_1_AsReadOnly_m25460_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Clear()
extern "C" void List_1_Clear_m25461_gshared (List_1_t63 * __this, const MethodInfo* method);
#define List_1_Clear_m25461(__this, method) (( void (*) (List_1_t63 *, const MethodInfo*))List_1_Clear_m25461_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Vector3>::Contains(T)
extern "C" bool List_1_Contains_m25462_gshared (List_1_t63 * __this, Vector3_t53  ___item, const MethodInfo* method);
#define List_1_Contains_m25462(__this, ___item, method) (( bool (*) (List_1_t63 *, Vector3_t53 , const MethodInfo*))List_1_Contains_m25462_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m25463_gshared (List_1_t63 * __this, Vector3U5BU5D_t92* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m25463(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t63 *, Vector3U5BU5D_t92*, int32_t, const MethodInfo*))List_1_CopyTo_m25463_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.Vector3>::Find(System.Predicate`1<T>)
extern "C" Vector3_t53  List_1_Find_m25464_gshared (List_1_t63 * __this, Predicate_1_t6299 * ___match, const MethodInfo* method);
#define List_1_Find_m25464(__this, ___match, method) (( Vector3_t53  (*) (List_1_t63 *, Predicate_1_t6299 *, const MethodInfo*))List_1_Find_m25464_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m25465_gshared (Object_t * __this /* static, unused */, Predicate_1_t6299 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m25465(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t6299 *, const MethodInfo*))List_1_CheckMatch_m25465_gshared)(__this /* static, unused */, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.Vector3>::FindAll(System.Predicate`1<T>)
extern "C" List_1_t63 * List_1_FindAll_m25466_gshared (List_1_t63 * __this, Predicate_1_t6299 * ___match, const MethodInfo* method);
#define List_1_FindAll_m25466(__this, ___match, method) (( List_1_t63 * (*) (List_1_t63 *, Predicate_1_t6299 *, const MethodInfo*))List_1_FindAll_m25466_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.Vector3>::FindAllStackBits(System.Predicate`1<T>)
extern "C" List_1_t63 * List_1_FindAllStackBits_m25467_gshared (List_1_t63 * __this, Predicate_1_t6299 * ___match, const MethodInfo* method);
#define List_1_FindAllStackBits_m25467(__this, ___match, method) (( List_1_t63 * (*) (List_1_t63 *, Predicate_1_t6299 *, const MethodInfo*))List_1_FindAllStackBits_m25467_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.Vector3>::FindAllList(System.Predicate`1<T>)
extern "C" List_1_t63 * List_1_FindAllList_m25468_gshared (List_1_t63 * __this, Predicate_1_t6299 * ___match, const MethodInfo* method);
#define List_1_FindAllList_m25468(__this, ___match, method) (( List_1_t63 * (*) (List_1_t63 *, Predicate_1_t6299 *, const MethodInfo*))List_1_FindAllList_m25468_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::FindIndex(System.Predicate`1<T>)
extern "C" int32_t List_1_FindIndex_m25469_gshared (List_1_t63 * __this, Predicate_1_t6299 * ___match, const MethodInfo* method);
#define List_1_FindIndex_m25469(__this, ___match, method) (( int32_t (*) (List_1_t63 *, Predicate_1_t6299 *, const MethodInfo*))List_1_FindIndex_m25469_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m25470_gshared (List_1_t63 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t6299 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m25470(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t63 *, int32_t, int32_t, Predicate_1_t6299 *, const MethodInfo*))List_1_GetIndex_m25470_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.Vector3>::GetEnumerator()
extern "C" Enumerator_t6293  List_1_GetEnumerator_m25471_gshared (List_1_t63 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m25471(__this, method) (( Enumerator_t6293  (*) (List_1_t63 *, const MethodInfo*))List_1_GetEnumerator_m25471_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.Vector3>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t63 * List_1_GetRange_m2676_gshared (List_1_t63 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m2676(__this, ___index, ___count, method) (( List_1_t63 * (*) (List_1_t63 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m2676_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m25472_gshared (List_1_t63 * __this, Vector3_t53  ___item, const MethodInfo* method);
#define List_1_IndexOf_m25472(__this, ___item, method) (( int32_t (*) (List_1_t63 *, Vector3_t53 , const MethodInfo*))List_1_IndexOf_m25472_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m25473_gshared (List_1_t63 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m25473(__this, ___start, ___delta, method) (( void (*) (List_1_t63 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m25473_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m25474_gshared (List_1_t63 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m25474(__this, ___index, method) (( void (*) (List_1_t63 *, int32_t, const MethodInfo*))List_1_CheckIndex_m25474_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m25475_gshared (List_1_t63 * __this, int32_t ___index, Vector3_t53  ___item, const MethodInfo* method);
#define List_1_Insert_m25475(__this, ___index, ___item, method) (( void (*) (List_1_t63 *, int32_t, Vector3_t53 , const MethodInfo*))List_1_Insert_m25475_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m25476_gshared (List_1_t63 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m25476(__this, ___collection, method) (( void (*) (List_1_t63 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m25476_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m2668_gshared (List_1_t63 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m2668(__this, ___index, ___collection, method) (( void (*) (List_1_t63 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m2668_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m25477_gshared (List_1_t63 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m25477(__this, ___index, ___collection, method) (( void (*) (List_1_t63 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m25477_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m25478_gshared (List_1_t63 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m25478(__this, ___index, ___enumerable, method) (( void (*) (List_1_t63 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m25478_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Vector3>::Remove(T)
extern "C" bool List_1_Remove_m25479_gshared (List_1_t63 * __this, Vector3_t53  ___item, const MethodInfo* method);
#define List_1_Remove_m25479(__this, ___item, method) (( bool (*) (List_1_t63 *, Vector3_t53 , const MethodInfo*))List_1_Remove_m25479_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m25480_gshared (List_1_t63 * __this, Predicate_1_t6299 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m25480(__this, ___match, method) (( int32_t (*) (List_1_t63 *, Predicate_1_t6299 *, const MethodInfo*))List_1_RemoveAll_m25480_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m25481_gshared (List_1_t63 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m25481(__this, ___index, method) (( void (*) (List_1_t63 *, int32_t, const MethodInfo*))List_1_RemoveAt_m25481_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m2671_gshared (List_1_t63 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m2671(__this, ___index, ___count, method) (( void (*) (List_1_t63 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m2671_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Reverse()
extern "C" void List_1_Reverse_m2673_gshared (List_1_t63 * __this, const MethodInfo* method);
#define List_1_Reverse_m2673(__this, method) (( void (*) (List_1_t63 *, const MethodInfo*))List_1_Reverse_m2673_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Sort()
extern "C" void List_1_Sort_m25482_gshared (List_1_t63 * __this, const MethodInfo* method);
#define List_1_Sort_m25482(__this, method) (( void (*) (List_1_t63 *, const MethodInfo*))List_1_Sort_m25482_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m25483_gshared (List_1_t63 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m25483(__this, ___comparer, method) (( void (*) (List_1_t63 *, Object_t*, const MethodInfo*))List_1_Sort_m25483_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m25484_gshared (List_1_t63 * __this, Comparison_1_t6302 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m25484(__this, ___comparison, method) (( void (*) (List_1_t63 *, Comparison_1_t6302 *, const MethodInfo*))List_1_Sort_m25484_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.Vector3>::ToArray()
extern "C" Vector3U5BU5D_t92* List_1_ToArray_m2677_gshared (List_1_t63 * __this, const MethodInfo* method);
#define List_1_ToArray_m2677(__this, method) (( Vector3U5BU5D_t92* (*) (List_1_t63 *, const MethodInfo*))List_1_ToArray_m2677_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::TrimExcess()
extern "C" void List_1_TrimExcess_m25485_gshared (List_1_t63 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m25485(__this, method) (( void (*) (List_1_t63 *, const MethodInfo*))List_1_TrimExcess_m25485_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m25486_gshared (List_1_t63 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m25486(__this, method) (( int32_t (*) (List_1_t63 *, const MethodInfo*))List_1_get_Capacity_m25486_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m25487_gshared (List_1_t63 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m25487(__this, ___value, method) (( void (*) (List_1_t63 *, int32_t, const MethodInfo*))List_1_set_Capacity_m25487_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Count()
extern "C" int32_t List_1_get_Count_m25488_gshared (List_1_t63 * __this, const MethodInfo* method);
#define List_1_get_Count_m25488(__this, method) (( int32_t (*) (List_1_t63 *, const MethodInfo*))List_1_get_Count_m25488_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Item(System.Int32)
extern "C" Vector3_t53  List_1_get_Item_m25489_gshared (List_1_t63 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m25489(__this, ___index, method) (( Vector3_t53  (*) (List_1_t63 *, int32_t, const MethodInfo*))List_1_get_Item_m25489_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m25490_gshared (List_1_t63 * __this, int32_t ___index, Vector3_t53  ___value, const MethodInfo* method);
#define List_1_set_Item_m25490(__this, ___index, ___value, method) (( void (*) (List_1_t63 *, int32_t, Vector3_t53 , const MethodInfo*))List_1_set_Item_m25490_gshared)(__this, ___index, ___value, method)

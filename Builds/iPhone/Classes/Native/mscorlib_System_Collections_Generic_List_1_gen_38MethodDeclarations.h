#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>
struct List_1_t1108;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<UnityEngine.EventSystems.RaycastResult>
struct IEnumerable_1_t10120;
// UnityEngine.EventSystems.RaycastResult[]
struct RaycastResultU5BU5D_t6764;
// System.Collections.Generic.IEnumerator`1<UnityEngine.EventSystems.RaycastResult>
struct IEnumerator_1_t10121;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.RaycastResult>
struct ICollection_1_t10122;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.RaycastResult>
struct ReadOnlyCollection_1_t6768;
// System.Predicate`1<UnityEngine.EventSystems.RaycastResult>
struct Predicate_1_t6772;
// System.Collections.Generic.IComparer`1<UnityEngine.EventSystems.RaycastResult>
struct IComparer_1_t10123;
// System.Comparison`1<UnityEngine.EventSystems.RaycastResult>
struct Comparison_1_t1074;
// UnityEngine.EventSystems.RaycastResult
#include "UnityEngine_UI_UnityEngine_EventSystems_RaycastResult.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.EventSystems.RaycastResult>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_76.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::.ctor()
extern "C" void List_1__ctor_m5256_gshared (List_1_t1108 * __this, const MethodInfo* method);
#define List_1__ctor_m5256(__this, method) (( void (*) (List_1_t1108 *, const MethodInfo*))List_1__ctor_m5256_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m32431_gshared (List_1_t1108 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m32431(__this, ___collection, method) (( void (*) (List_1_t1108 *, Object_t*, const MethodInfo*))List_1__ctor_m32431_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::.ctor(System.Int32)
extern "C" void List_1__ctor_m32432_gshared (List_1_t1108 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m32432(__this, ___capacity, method) (( void (*) (List_1_t1108 *, int32_t, const MethodInfo*))List_1__ctor_m32432_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m32433_gshared (List_1_t1108 * __this, RaycastResultU5BU5D_t6764* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m32433(__this, ___data, ___size, method) (( void (*) (List_1_t1108 *, RaycastResultU5BU5D_t6764*, int32_t, const MethodInfo*))List_1__ctor_m32433_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::.cctor()
extern "C" void List_1__cctor_m32434_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m32434(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m32434_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m32435_gshared (List_1_t1108 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m32435(__this, method) (( Object_t* (*) (List_1_t1108 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m32435_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m32436_gshared (List_1_t1108 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m32436(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t1108 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m32436_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m32437_gshared (List_1_t1108 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m32437(__this, method) (( Object_t * (*) (List_1_t1108 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m32437_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m32438_gshared (List_1_t1108 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m32438(__this, ___item, method) (( int32_t (*) (List_1_t1108 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m32438_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m32439_gshared (List_1_t1108 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m32439(__this, ___item, method) (( bool (*) (List_1_t1108 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m32439_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m32440_gshared (List_1_t1108 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m32440(__this, ___item, method) (( int32_t (*) (List_1_t1108 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m32440_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m32441_gshared (List_1_t1108 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m32441(__this, ___index, ___item, method) (( void (*) (List_1_t1108 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m32441_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m32442_gshared (List_1_t1108 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m32442(__this, ___item, method) (( void (*) (List_1_t1108 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m32442_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m32443_gshared (List_1_t1108 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m32443(__this, method) (( bool (*) (List_1_t1108 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m32443_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m32444_gshared (List_1_t1108 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m32444(__this, method) (( bool (*) (List_1_t1108 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m32444_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m32445_gshared (List_1_t1108 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m32445(__this, method) (( Object_t * (*) (List_1_t1108 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m32445_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m32446_gshared (List_1_t1108 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m32446(__this, method) (( bool (*) (List_1_t1108 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m32446_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m32447_gshared (List_1_t1108 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m32447(__this, method) (( bool (*) (List_1_t1108 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m32447_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m32448_gshared (List_1_t1108 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m32448(__this, ___index, method) (( Object_t * (*) (List_1_t1108 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m32448_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m32449_gshared (List_1_t1108 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m32449(__this, ___index, ___value, method) (( void (*) (List_1_t1108 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m32449_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Add(T)
extern "C" void List_1_Add_m32450_gshared (List_1_t1108 * __this, RaycastResult_t1104  ___item, const MethodInfo* method);
#define List_1_Add_m32450(__this, ___item, method) (( void (*) (List_1_t1108 *, RaycastResult_t1104 , const MethodInfo*))List_1_Add_m32450_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m32451_gshared (List_1_t1108 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m32451(__this, ___newCount, method) (( void (*) (List_1_t1108 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m32451_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m32452_gshared (List_1_t1108 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m32452(__this, ___idx, ___count, method) (( void (*) (List_1_t1108 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m32452_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m32453_gshared (List_1_t1108 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m32453(__this, ___collection, method) (( void (*) (List_1_t1108 *, Object_t*, const MethodInfo*))List_1_AddCollection_m32453_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m32454_gshared (List_1_t1108 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m32454(__this, ___enumerable, method) (( void (*) (List_1_t1108 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m32454_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m32455_gshared (List_1_t1108 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m32455(__this, ___collection, method) (( void (*) (List_1_t1108 *, Object_t*, const MethodInfo*))List_1_AddRange_m32455_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t6768 * List_1_AsReadOnly_m32456_gshared (List_1_t1108 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m32456(__this, method) (( ReadOnlyCollection_1_t6768 * (*) (List_1_t1108 *, const MethodInfo*))List_1_AsReadOnly_m32456_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Clear()
extern "C" void List_1_Clear_m32457_gshared (List_1_t1108 * __this, const MethodInfo* method);
#define List_1_Clear_m32457(__this, method) (( void (*) (List_1_t1108 *, const MethodInfo*))List_1_Clear_m32457_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Contains(T)
extern "C" bool List_1_Contains_m32458_gshared (List_1_t1108 * __this, RaycastResult_t1104  ___item, const MethodInfo* method);
#define List_1_Contains_m32458(__this, ___item, method) (( bool (*) (List_1_t1108 *, RaycastResult_t1104 , const MethodInfo*))List_1_Contains_m32458_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m32459_gshared (List_1_t1108 * __this, RaycastResultU5BU5D_t6764* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m32459(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t1108 *, RaycastResultU5BU5D_t6764*, int32_t, const MethodInfo*))List_1_CopyTo_m32459_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Find(System.Predicate`1<T>)
extern "C" RaycastResult_t1104  List_1_Find_m32460_gshared (List_1_t1108 * __this, Predicate_1_t6772 * ___match, const MethodInfo* method);
#define List_1_Find_m32460(__this, ___match, method) (( RaycastResult_t1104  (*) (List_1_t1108 *, Predicate_1_t6772 *, const MethodInfo*))List_1_Find_m32460_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m32461_gshared (Object_t * __this /* static, unused */, Predicate_1_t6772 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m32461(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t6772 *, const MethodInfo*))List_1_CheckMatch_m32461_gshared)(__this /* static, unused */, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::FindAll(System.Predicate`1<T>)
extern "C" List_1_t1108 * List_1_FindAll_m32462_gshared (List_1_t1108 * __this, Predicate_1_t6772 * ___match, const MethodInfo* method);
#define List_1_FindAll_m32462(__this, ___match, method) (( List_1_t1108 * (*) (List_1_t1108 *, Predicate_1_t6772 *, const MethodInfo*))List_1_FindAll_m32462_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::FindAllStackBits(System.Predicate`1<T>)
extern "C" List_1_t1108 * List_1_FindAllStackBits_m32463_gshared (List_1_t1108 * __this, Predicate_1_t6772 * ___match, const MethodInfo* method);
#define List_1_FindAllStackBits_m32463(__this, ___match, method) (( List_1_t1108 * (*) (List_1_t1108 *, Predicate_1_t6772 *, const MethodInfo*))List_1_FindAllStackBits_m32463_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::FindAllList(System.Predicate`1<T>)
extern "C" List_1_t1108 * List_1_FindAllList_m32464_gshared (List_1_t1108 * __this, Predicate_1_t6772 * ___match, const MethodInfo* method);
#define List_1_FindAllList_m32464(__this, ___match, method) (( List_1_t1108 * (*) (List_1_t1108 *, Predicate_1_t6772 *, const MethodInfo*))List_1_FindAllList_m32464_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::FindIndex(System.Predicate`1<T>)
extern "C" int32_t List_1_FindIndex_m32465_gshared (List_1_t1108 * __this, Predicate_1_t6772 * ___match, const MethodInfo* method);
#define List_1_FindIndex_m32465(__this, ___match, method) (( int32_t (*) (List_1_t1108 *, Predicate_1_t6772 *, const MethodInfo*))List_1_FindIndex_m32465_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m32466_gshared (List_1_t1108 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t6772 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m32466(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t1108 *, int32_t, int32_t, Predicate_1_t6772 *, const MethodInfo*))List_1_GetIndex_m32466_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::GetEnumerator()
extern "C" Enumerator_t6766  List_1_GetEnumerator_m32467_gshared (List_1_t1108 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m32467(__this, method) (( Enumerator_t6766  (*) (List_1_t1108 *, const MethodInfo*))List_1_GetEnumerator_m32467_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t1108 * List_1_GetRange_m32468_gshared (List_1_t1108 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m32468(__this, ___index, ___count, method) (( List_1_t1108 * (*) (List_1_t1108 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m32468_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m32469_gshared (List_1_t1108 * __this, RaycastResult_t1104  ___item, const MethodInfo* method);
#define List_1_IndexOf_m32469(__this, ___item, method) (( int32_t (*) (List_1_t1108 *, RaycastResult_t1104 , const MethodInfo*))List_1_IndexOf_m32469_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m32470_gshared (List_1_t1108 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m32470(__this, ___start, ___delta, method) (( void (*) (List_1_t1108 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m32470_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m32471_gshared (List_1_t1108 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m32471(__this, ___index, method) (( void (*) (List_1_t1108 *, int32_t, const MethodInfo*))List_1_CheckIndex_m32471_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m32472_gshared (List_1_t1108 * __this, int32_t ___index, RaycastResult_t1104  ___item, const MethodInfo* method);
#define List_1_Insert_m32472(__this, ___index, ___item, method) (( void (*) (List_1_t1108 *, int32_t, RaycastResult_t1104 , const MethodInfo*))List_1_Insert_m32472_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m32473_gshared (List_1_t1108 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m32473(__this, ___collection, method) (( void (*) (List_1_t1108 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m32473_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m32474_gshared (List_1_t1108 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m32474(__this, ___index, ___collection, method) (( void (*) (List_1_t1108 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m32474_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m32475_gshared (List_1_t1108 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m32475(__this, ___index, ___collection, method) (( void (*) (List_1_t1108 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m32475_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m32476_gshared (List_1_t1108 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m32476(__this, ___index, ___enumerable, method) (( void (*) (List_1_t1108 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m32476_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Remove(T)
extern "C" bool List_1_Remove_m32477_gshared (List_1_t1108 * __this, RaycastResult_t1104  ___item, const MethodInfo* method);
#define List_1_Remove_m32477(__this, ___item, method) (( bool (*) (List_1_t1108 *, RaycastResult_t1104 , const MethodInfo*))List_1_Remove_m32477_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m32478_gshared (List_1_t1108 * __this, Predicate_1_t6772 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m32478(__this, ___match, method) (( int32_t (*) (List_1_t1108 *, Predicate_1_t6772 *, const MethodInfo*))List_1_RemoveAll_m32478_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m32479_gshared (List_1_t1108 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m32479(__this, ___index, method) (( void (*) (List_1_t1108 *, int32_t, const MethodInfo*))List_1_RemoveAt_m32479_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m32480_gshared (List_1_t1108 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m32480(__this, ___index, ___count, method) (( void (*) (List_1_t1108 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m32480_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Reverse()
extern "C" void List_1_Reverse_m32481_gshared (List_1_t1108 * __this, const MethodInfo* method);
#define List_1_Reverse_m32481(__this, method) (( void (*) (List_1_t1108 *, const MethodInfo*))List_1_Reverse_m32481_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Sort()
extern "C" void List_1_Sort_m32482_gshared (List_1_t1108 * __this, const MethodInfo* method);
#define List_1_Sort_m32482(__this, method) (( void (*) (List_1_t1108 *, const MethodInfo*))List_1_Sort_m32482_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m32483_gshared (List_1_t1108 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m32483(__this, ___comparer, method) (( void (*) (List_1_t1108 *, Object_t*, const MethodInfo*))List_1_Sort_m32483_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m5222_gshared (List_1_t1108 * __this, Comparison_1_t1074 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m5222(__this, ___comparison, method) (( void (*) (List_1_t1108 *, Comparison_1_t1074 *, const MethodInfo*))List_1_Sort_m5222_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::ToArray()
extern "C" RaycastResultU5BU5D_t6764* List_1_ToArray_m32484_gshared (List_1_t1108 * __this, const MethodInfo* method);
#define List_1_ToArray_m32484(__this, method) (( RaycastResultU5BU5D_t6764* (*) (List_1_t1108 *, const MethodInfo*))List_1_ToArray_m32484_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::TrimExcess()
extern "C" void List_1_TrimExcess_m32485_gshared (List_1_t1108 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m32485(__this, method) (( void (*) (List_1_t1108 *, const MethodInfo*))List_1_TrimExcess_m32485_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m32486_gshared (List_1_t1108 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m32486(__this, method) (( int32_t (*) (List_1_t1108 *, const MethodInfo*))List_1_get_Capacity_m32486_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m32487_gshared (List_1_t1108 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m32487(__this, ___value, method) (( void (*) (List_1_t1108 *, int32_t, const MethodInfo*))List_1_set_Capacity_m32487_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::get_Count()
extern "C" int32_t List_1_get_Count_m32488_gshared (List_1_t1108 * __this, const MethodInfo* method);
#define List_1_get_Count_m32488(__this, method) (( int32_t (*) (List_1_t1108 *, const MethodInfo*))List_1_get_Count_m32488_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::get_Item(System.Int32)
extern "C" RaycastResult_t1104  List_1_get_Item_m32489_gshared (List_1_t1108 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m32489(__this, ___index, method) (( RaycastResult_t1104  (*) (List_1_t1108 *, int32_t, const MethodInfo*))List_1_get_Item_m32489_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m32490_gshared (List_1_t1108 * __this, int32_t ___index, RaycastResult_t1104  ___value, const MethodInfo* method);
#define List_1_set_Item_m32490(__this, ___index, ___value, method) (( void (*) (List_1_t1108 *, int32_t, RaycastResult_t1104 , const MethodInfo*))List_1_set_Item_m32490_gshared)(__this, ___index, ___value, method)

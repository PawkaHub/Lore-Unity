#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>
struct List_1_t818;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<UnityEngine.EventSystems.RaycastResult>
struct IEnumerable_1_t9818;
// UnityEngine.EventSystems.RaycastResult[]
struct RaycastResultU5BU5D_t6419;
// System.Collections.Generic.IEnumerator`1<UnityEngine.EventSystems.RaycastResult>
struct IEnumerator_1_t9819;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.RaycastResult>
struct ICollection_1_t9820;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.RaycastResult>
struct ReadOnlyCollection_1_t6423;
// System.Predicate`1<UnityEngine.EventSystems.RaycastResult>
struct Predicate_1_t6427;
// System.Collections.Generic.IComparer`1<UnityEngine.EventSystems.RaycastResult>
struct IComparer_1_t9821;
// System.Comparison`1<UnityEngine.EventSystems.RaycastResult>
struct Comparison_1_t784;
// UnityEngine.EventSystems.RaycastResult
#include "UnityEngine_UI_UnityEngine_EventSystems_RaycastResult.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.EventSystems.RaycastResult>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_71.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::.ctor()
extern "C" void List_1__ctor_m4722_gshared (List_1_t818 * __this, const MethodInfo* method);
#define List_1__ctor_m4722(__this, method) (( void (*) (List_1_t818 *, const MethodInfo*))List_1__ctor_m4722_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m30789_gshared (List_1_t818 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m30789(__this, ___collection, method) (( void (*) (List_1_t818 *, Object_t*, const MethodInfo*))List_1__ctor_m30789_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::.ctor(System.Int32)
extern "C" void List_1__ctor_m30790_gshared (List_1_t818 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m30790(__this, ___capacity, method) (( void (*) (List_1_t818 *, int32_t, const MethodInfo*))List_1__ctor_m30790_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m30791_gshared (List_1_t818 * __this, RaycastResultU5BU5D_t6419* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m30791(__this, ___data, ___size, method) (( void (*) (List_1_t818 *, RaycastResultU5BU5D_t6419*, int32_t, const MethodInfo*))List_1__ctor_m30791_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::.cctor()
extern "C" void List_1__cctor_m30792_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m30792(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m30792_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m30793_gshared (List_1_t818 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m30793(__this, method) (( Object_t* (*) (List_1_t818 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m30793_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m30794_gshared (List_1_t818 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m30794(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t818 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m30794_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m30795_gshared (List_1_t818 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m30795(__this, method) (( Object_t * (*) (List_1_t818 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m30795_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m30796_gshared (List_1_t818 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m30796(__this, ___item, method) (( int32_t (*) (List_1_t818 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m30796_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m30797_gshared (List_1_t818 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m30797(__this, ___item, method) (( bool (*) (List_1_t818 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m30797_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m30798_gshared (List_1_t818 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m30798(__this, ___item, method) (( int32_t (*) (List_1_t818 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m30798_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m30799_gshared (List_1_t818 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m30799(__this, ___index, ___item, method) (( void (*) (List_1_t818 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m30799_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m30800_gshared (List_1_t818 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m30800(__this, ___item, method) (( void (*) (List_1_t818 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m30800_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m30801_gshared (List_1_t818 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m30801(__this, method) (( bool (*) (List_1_t818 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m30801_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m30802_gshared (List_1_t818 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m30802(__this, method) (( bool (*) (List_1_t818 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m30802_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m30803_gshared (List_1_t818 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m30803(__this, method) (( Object_t * (*) (List_1_t818 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m30803_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m30804_gshared (List_1_t818 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m30804(__this, method) (( bool (*) (List_1_t818 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m30804_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m30805_gshared (List_1_t818 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m30805(__this, method) (( bool (*) (List_1_t818 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m30805_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m30806_gshared (List_1_t818 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m30806(__this, ___index, method) (( Object_t * (*) (List_1_t818 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m30806_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m30807_gshared (List_1_t818 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m30807(__this, ___index, ___value, method) (( void (*) (List_1_t818 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m30807_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Add(T)
extern "C" void List_1_Add_m30808_gshared (List_1_t818 * __this, RaycastResult_t814  ___item, const MethodInfo* method);
#define List_1_Add_m30808(__this, ___item, method) (( void (*) (List_1_t818 *, RaycastResult_t814 , const MethodInfo*))List_1_Add_m30808_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m30809_gshared (List_1_t818 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m30809(__this, ___newCount, method) (( void (*) (List_1_t818 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m30809_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m30810_gshared (List_1_t818 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m30810(__this, ___idx, ___count, method) (( void (*) (List_1_t818 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m30810_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m30811_gshared (List_1_t818 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m30811(__this, ___collection, method) (( void (*) (List_1_t818 *, Object_t*, const MethodInfo*))List_1_AddCollection_m30811_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m30812_gshared (List_1_t818 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m30812(__this, ___enumerable, method) (( void (*) (List_1_t818 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m30812_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m30813_gshared (List_1_t818 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m30813(__this, ___collection, method) (( void (*) (List_1_t818 *, Object_t*, const MethodInfo*))List_1_AddRange_m30813_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t6423 * List_1_AsReadOnly_m30814_gshared (List_1_t818 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m30814(__this, method) (( ReadOnlyCollection_1_t6423 * (*) (List_1_t818 *, const MethodInfo*))List_1_AsReadOnly_m30814_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Clear()
extern "C" void List_1_Clear_m30815_gshared (List_1_t818 * __this, const MethodInfo* method);
#define List_1_Clear_m30815(__this, method) (( void (*) (List_1_t818 *, const MethodInfo*))List_1_Clear_m30815_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Contains(T)
extern "C" bool List_1_Contains_m30816_gshared (List_1_t818 * __this, RaycastResult_t814  ___item, const MethodInfo* method);
#define List_1_Contains_m30816(__this, ___item, method) (( bool (*) (List_1_t818 *, RaycastResult_t814 , const MethodInfo*))List_1_Contains_m30816_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m30817_gshared (List_1_t818 * __this, RaycastResultU5BU5D_t6419* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m30817(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t818 *, RaycastResultU5BU5D_t6419*, int32_t, const MethodInfo*))List_1_CopyTo_m30817_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Find(System.Predicate`1<T>)
extern "C" RaycastResult_t814  List_1_Find_m30818_gshared (List_1_t818 * __this, Predicate_1_t6427 * ___match, const MethodInfo* method);
#define List_1_Find_m30818(__this, ___match, method) (( RaycastResult_t814  (*) (List_1_t818 *, Predicate_1_t6427 *, const MethodInfo*))List_1_Find_m30818_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m30819_gshared (Object_t * __this /* static, unused */, Predicate_1_t6427 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m30819(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t6427 *, const MethodInfo*))List_1_CheckMatch_m30819_gshared)(__this /* static, unused */, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::FindAll(System.Predicate`1<T>)
extern "C" List_1_t818 * List_1_FindAll_m30820_gshared (List_1_t818 * __this, Predicate_1_t6427 * ___match, const MethodInfo* method);
#define List_1_FindAll_m30820(__this, ___match, method) (( List_1_t818 * (*) (List_1_t818 *, Predicate_1_t6427 *, const MethodInfo*))List_1_FindAll_m30820_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::FindAllStackBits(System.Predicate`1<T>)
extern "C" List_1_t818 * List_1_FindAllStackBits_m30821_gshared (List_1_t818 * __this, Predicate_1_t6427 * ___match, const MethodInfo* method);
#define List_1_FindAllStackBits_m30821(__this, ___match, method) (( List_1_t818 * (*) (List_1_t818 *, Predicate_1_t6427 *, const MethodInfo*))List_1_FindAllStackBits_m30821_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::FindAllList(System.Predicate`1<T>)
extern "C" List_1_t818 * List_1_FindAllList_m30822_gshared (List_1_t818 * __this, Predicate_1_t6427 * ___match, const MethodInfo* method);
#define List_1_FindAllList_m30822(__this, ___match, method) (( List_1_t818 * (*) (List_1_t818 *, Predicate_1_t6427 *, const MethodInfo*))List_1_FindAllList_m30822_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::FindIndex(System.Predicate`1<T>)
extern "C" int32_t List_1_FindIndex_m30823_gshared (List_1_t818 * __this, Predicate_1_t6427 * ___match, const MethodInfo* method);
#define List_1_FindIndex_m30823(__this, ___match, method) (( int32_t (*) (List_1_t818 *, Predicate_1_t6427 *, const MethodInfo*))List_1_FindIndex_m30823_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m30824_gshared (List_1_t818 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t6427 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m30824(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t818 *, int32_t, int32_t, Predicate_1_t6427 *, const MethodInfo*))List_1_GetIndex_m30824_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::GetEnumerator()
extern "C" Enumerator_t6421  List_1_GetEnumerator_m30825_gshared (List_1_t818 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m30825(__this, method) (( Enumerator_t6421  (*) (List_1_t818 *, const MethodInfo*))List_1_GetEnumerator_m30825_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t818 * List_1_GetRange_m30826_gshared (List_1_t818 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m30826(__this, ___index, ___count, method) (( List_1_t818 * (*) (List_1_t818 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m30826_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m30827_gshared (List_1_t818 * __this, RaycastResult_t814  ___item, const MethodInfo* method);
#define List_1_IndexOf_m30827(__this, ___item, method) (( int32_t (*) (List_1_t818 *, RaycastResult_t814 , const MethodInfo*))List_1_IndexOf_m30827_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m30828_gshared (List_1_t818 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m30828(__this, ___start, ___delta, method) (( void (*) (List_1_t818 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m30828_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m30829_gshared (List_1_t818 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m30829(__this, ___index, method) (( void (*) (List_1_t818 *, int32_t, const MethodInfo*))List_1_CheckIndex_m30829_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m30830_gshared (List_1_t818 * __this, int32_t ___index, RaycastResult_t814  ___item, const MethodInfo* method);
#define List_1_Insert_m30830(__this, ___index, ___item, method) (( void (*) (List_1_t818 *, int32_t, RaycastResult_t814 , const MethodInfo*))List_1_Insert_m30830_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m30831_gshared (List_1_t818 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m30831(__this, ___collection, method) (( void (*) (List_1_t818 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m30831_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m30832_gshared (List_1_t818 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m30832(__this, ___index, ___collection, method) (( void (*) (List_1_t818 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m30832_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m30833_gshared (List_1_t818 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m30833(__this, ___index, ___collection, method) (( void (*) (List_1_t818 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m30833_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m30834_gshared (List_1_t818 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m30834(__this, ___index, ___enumerable, method) (( void (*) (List_1_t818 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m30834_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Remove(T)
extern "C" bool List_1_Remove_m30835_gshared (List_1_t818 * __this, RaycastResult_t814  ___item, const MethodInfo* method);
#define List_1_Remove_m30835(__this, ___item, method) (( bool (*) (List_1_t818 *, RaycastResult_t814 , const MethodInfo*))List_1_Remove_m30835_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m30836_gshared (List_1_t818 * __this, Predicate_1_t6427 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m30836(__this, ___match, method) (( int32_t (*) (List_1_t818 *, Predicate_1_t6427 *, const MethodInfo*))List_1_RemoveAll_m30836_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m30837_gshared (List_1_t818 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m30837(__this, ___index, method) (( void (*) (List_1_t818 *, int32_t, const MethodInfo*))List_1_RemoveAt_m30837_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m30838_gshared (List_1_t818 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m30838(__this, ___index, ___count, method) (( void (*) (List_1_t818 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m30838_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Reverse()
extern "C" void List_1_Reverse_m30839_gshared (List_1_t818 * __this, const MethodInfo* method);
#define List_1_Reverse_m30839(__this, method) (( void (*) (List_1_t818 *, const MethodInfo*))List_1_Reverse_m30839_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Sort()
extern "C" void List_1_Sort_m30840_gshared (List_1_t818 * __this, const MethodInfo* method);
#define List_1_Sort_m30840(__this, method) (( void (*) (List_1_t818 *, const MethodInfo*))List_1_Sort_m30840_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m30841_gshared (List_1_t818 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m30841(__this, ___comparer, method) (( void (*) (List_1_t818 *, Object_t*, const MethodInfo*))List_1_Sort_m30841_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m4688_gshared (List_1_t818 * __this, Comparison_1_t784 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m4688(__this, ___comparison, method) (( void (*) (List_1_t818 *, Comparison_1_t784 *, const MethodInfo*))List_1_Sort_m4688_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::ToArray()
extern "C" RaycastResultU5BU5D_t6419* List_1_ToArray_m30842_gshared (List_1_t818 * __this, const MethodInfo* method);
#define List_1_ToArray_m30842(__this, method) (( RaycastResultU5BU5D_t6419* (*) (List_1_t818 *, const MethodInfo*))List_1_ToArray_m30842_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::TrimExcess()
extern "C" void List_1_TrimExcess_m30843_gshared (List_1_t818 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m30843(__this, method) (( void (*) (List_1_t818 *, const MethodInfo*))List_1_TrimExcess_m30843_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m30844_gshared (List_1_t818 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m30844(__this, method) (( int32_t (*) (List_1_t818 *, const MethodInfo*))List_1_get_Capacity_m30844_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m30845_gshared (List_1_t818 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m30845(__this, ___value, method) (( void (*) (List_1_t818 *, int32_t, const MethodInfo*))List_1_set_Capacity_m30845_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::get_Count()
extern "C" int32_t List_1_get_Count_m30846_gshared (List_1_t818 * __this, const MethodInfo* method);
#define List_1_get_Count_m30846(__this, method) (( int32_t (*) (List_1_t818 *, const MethodInfo*))List_1_get_Count_m30846_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::get_Item(System.Int32)
extern "C" RaycastResult_t814  List_1_get_Item_m30847_gshared (List_1_t818 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m30847(__this, ___index, method) (( RaycastResult_t814  (*) (List_1_t818 *, int32_t, const MethodInfo*))List_1_get_Item_m30847_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m30848_gshared (List_1_t818 * __this, int32_t ___index, RaycastResult_t814  ___value, const MethodInfo* method);
#define List_1_set_Item_m30848(__this, ___index, ___value, method) (( void (*) (List_1_t818 *, int32_t, RaycastResult_t814 , const MethodInfo*))List_1_set_Item_m30848_gshared)(__this, ___index, ___value, method)

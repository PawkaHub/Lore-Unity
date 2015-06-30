#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.UIVertex>
struct List_1_t2058;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<UnityEngine.UIVertex>
struct IEnumerable_1_t6941;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_t2055;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UIVertex>
struct IEnumerator_1_t6940;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Collections.Generic.ICollection`1<UnityEngine.UIVertex>
struct ICollection_1_t2184;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UIVertex>
struct ReadOnlyCollection_1_t5875;
// System.Predicate`1<UnityEngine.UIVertex>
struct Predicate_1_t5876;
// System.Collections.Generic.IComparer`1<UnityEngine.UIVertex>
struct IComparer_1_t6942;
// System.Comparison`1<UnityEngine.UIVertex>
struct Comparison_1_t5878;
// UnityEngine.UIVertex
#include "UnityEngine_UnityEngine_UIVertex.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.UIVertex>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_88.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::.ctor()
extern "C" void List_1__ctor_m9448_gshared (List_1_t2058 * __this, const MethodInfo* method);
#define List_1__ctor_m9448(__this, method) (( void (*) (List_1_t2058 *, const MethodInfo*))List_1__ctor_m9448_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m37567_gshared (List_1_t2058 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m37567(__this, ___collection, method) (( void (*) (List_1_t2058 *, Object_t*, const MethodInfo*))List_1__ctor_m37567_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::.ctor(System.Int32)
extern "C" void List_1__ctor_m13719_gshared (List_1_t2058 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m13719(__this, ___capacity, method) (( void (*) (List_1_t2058 *, int32_t, const MethodInfo*))List_1__ctor_m13719_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m37568_gshared (List_1_t2058 * __this, UIVertexU5BU5D_t2055* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m37568(__this, ___data, ___size, method) (( void (*) (List_1_t2058 *, UIVertexU5BU5D_t2055*, int32_t, const MethodInfo*))List_1__ctor_m37568_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::.cctor()
extern "C" void List_1__cctor_m37569_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m37569(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m37569_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m37570_gshared (List_1_t2058 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m37570(__this, method) (( Object_t* (*) (List_1_t2058 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m37570_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m37571_gshared (List_1_t2058 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m37571(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t2058 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m37571_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m37572_gshared (List_1_t2058 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m37572(__this, method) (( Object_t * (*) (List_1_t2058 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m37572_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m37573_gshared (List_1_t2058 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m37573(__this, ___item, method) (( int32_t (*) (List_1_t2058 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m37573_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m37574_gshared (List_1_t2058 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m37574(__this, ___item, method) (( bool (*) (List_1_t2058 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m37574_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m37575_gshared (List_1_t2058 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m37575(__this, ___item, method) (( int32_t (*) (List_1_t2058 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m37575_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m37576_gshared (List_1_t2058 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m37576(__this, ___index, ___item, method) (( void (*) (List_1_t2058 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m37576_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m37577_gshared (List_1_t2058 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m37577(__this, ___item, method) (( void (*) (List_1_t2058 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m37577_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m37578_gshared (List_1_t2058 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m37578(__this, method) (( bool (*) (List_1_t2058 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m37578_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m37579_gshared (List_1_t2058 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m37579(__this, method) (( bool (*) (List_1_t2058 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m37579_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m37580_gshared (List_1_t2058 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m37580(__this, method) (( Object_t * (*) (List_1_t2058 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m37580_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m37581_gshared (List_1_t2058 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m37581(__this, method) (( bool (*) (List_1_t2058 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m37581_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m37582_gshared (List_1_t2058 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m37582(__this, method) (( bool (*) (List_1_t2058 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m37582_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m37583_gshared (List_1_t2058 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m37583(__this, ___index, method) (( Object_t * (*) (List_1_t2058 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m37583_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m37584_gshared (List_1_t2058 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m37584(__this, ___index, ___value, method) (( void (*) (List_1_t2058 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m37584_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Add(T)
extern "C" void List_1_Add_m37585_gshared (List_1_t2058 * __this, UIVertex_t2056  ___item, const MethodInfo* method);
#define List_1_Add_m37585(__this, ___item, method) (( void (*) (List_1_t2058 *, UIVertex_t2056 , const MethodInfo*))List_1_Add_m37585_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m37586_gshared (List_1_t2058 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m37586(__this, ___newCount, method) (( void (*) (List_1_t2058 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m37586_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m37587_gshared (List_1_t2058 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m37587(__this, ___idx, ___count, method) (( void (*) (List_1_t2058 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m37587_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m37588_gshared (List_1_t2058 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m37588(__this, ___collection, method) (( void (*) (List_1_t2058 *, Object_t*, const MethodInfo*))List_1_AddCollection_m37588_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m37589_gshared (List_1_t2058 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m37589(__this, ___enumerable, method) (( void (*) (List_1_t2058 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m37589_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m37590_gshared (List_1_t2058 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m37590(__this, ___collection, method) (( void (*) (List_1_t2058 *, Object_t*, const MethodInfo*))List_1_AddRange_m37590_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.UIVertex>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t5875 * List_1_AsReadOnly_m37591_gshared (List_1_t2058 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m37591(__this, method) (( ReadOnlyCollection_1_t5875 * (*) (List_1_t2058 *, const MethodInfo*))List_1_AsReadOnly_m37591_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Clear()
extern "C" void List_1_Clear_m37592_gshared (List_1_t2058 * __this, const MethodInfo* method);
#define List_1_Clear_m37592(__this, method) (( void (*) (List_1_t2058 *, const MethodInfo*))List_1_Clear_m37592_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::Contains(T)
extern "C" bool List_1_Contains_m37593_gshared (List_1_t2058 * __this, UIVertex_t2056  ___item, const MethodInfo* method);
#define List_1_Contains_m37593(__this, ___item, method) (( bool (*) (List_1_t2058 *, UIVertex_t2056 , const MethodInfo*))List_1_Contains_m37593_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m37594_gshared (List_1_t2058 * __this, UIVertexU5BU5D_t2055* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m37594(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t2058 *, UIVertexU5BU5D_t2055*, int32_t, const MethodInfo*))List_1_CopyTo_m37594_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.UIVertex>::Find(System.Predicate`1<T>)
extern "C" UIVertex_t2056  List_1_Find_m37595_gshared (List_1_t2058 * __this, Predicate_1_t5876 * ___match, const MethodInfo* method);
#define List_1_Find_m37595(__this, ___match, method) (( UIVertex_t2056  (*) (List_1_t2058 *, Predicate_1_t5876 *, const MethodInfo*))List_1_Find_m37595_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m37596_gshared (Object_t * __this /* static, unused */, Predicate_1_t5876 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m37596(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t5876 *, const MethodInfo*))List_1_CheckMatch_m37596_gshared)(__this /* static, unused */, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.UIVertex>::FindAll(System.Predicate`1<T>)
extern "C" List_1_t2058 * List_1_FindAll_m37597_gshared (List_1_t2058 * __this, Predicate_1_t5876 * ___match, const MethodInfo* method);
#define List_1_FindAll_m37597(__this, ___match, method) (( List_1_t2058 * (*) (List_1_t2058 *, Predicate_1_t5876 *, const MethodInfo*))List_1_FindAll_m37597_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.UIVertex>::FindAllStackBits(System.Predicate`1<T>)
extern "C" List_1_t2058 * List_1_FindAllStackBits_m37598_gshared (List_1_t2058 * __this, Predicate_1_t5876 * ___match, const MethodInfo* method);
#define List_1_FindAllStackBits_m37598(__this, ___match, method) (( List_1_t2058 * (*) (List_1_t2058 *, Predicate_1_t5876 *, const MethodInfo*))List_1_FindAllStackBits_m37598_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.UIVertex>::FindAllList(System.Predicate`1<T>)
extern "C" List_1_t2058 * List_1_FindAllList_m37599_gshared (List_1_t2058 * __this, Predicate_1_t5876 * ___match, const MethodInfo* method);
#define List_1_FindAllList_m37599(__this, ___match, method) (( List_1_t2058 * (*) (List_1_t2058 *, Predicate_1_t5876 *, const MethodInfo*))List_1_FindAllList_m37599_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::FindIndex(System.Predicate`1<T>)
extern "C" int32_t List_1_FindIndex_m37600_gshared (List_1_t2058 * __this, Predicate_1_t5876 * ___match, const MethodInfo* method);
#define List_1_FindIndex_m37600(__this, ___match, method) (( int32_t (*) (List_1_t2058 *, Predicate_1_t5876 *, const MethodInfo*))List_1_FindIndex_m37600_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m37601_gshared (List_1_t2058 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t5876 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m37601(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t2058 *, int32_t, int32_t, Predicate_1_t5876 *, const MethodInfo*))List_1_GetIndex_m37601_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.UIVertex>::GetEnumerator()
extern "C" Enumerator_t5877  List_1_GetEnumerator_m37602_gshared (List_1_t2058 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m37602(__this, method) (( Enumerator_t5877  (*) (List_1_t2058 *, const MethodInfo*))List_1_GetEnumerator_m37602_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.UIVertex>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t2058 * List_1_GetRange_m37603_gshared (List_1_t2058 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m37603(__this, ___index, ___count, method) (( List_1_t2058 * (*) (List_1_t2058 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m37603_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m37604_gshared (List_1_t2058 * __this, UIVertex_t2056  ___item, const MethodInfo* method);
#define List_1_IndexOf_m37604(__this, ___item, method) (( int32_t (*) (List_1_t2058 *, UIVertex_t2056 , const MethodInfo*))List_1_IndexOf_m37604_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m37605_gshared (List_1_t2058 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m37605(__this, ___start, ___delta, method) (( void (*) (List_1_t2058 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m37605_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m37606_gshared (List_1_t2058 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m37606(__this, ___index, method) (( void (*) (List_1_t2058 *, int32_t, const MethodInfo*))List_1_CheckIndex_m37606_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m37607_gshared (List_1_t2058 * __this, int32_t ___index, UIVertex_t2056  ___item, const MethodInfo* method);
#define List_1_Insert_m37607(__this, ___index, ___item, method) (( void (*) (List_1_t2058 *, int32_t, UIVertex_t2056 , const MethodInfo*))List_1_Insert_m37607_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m37608_gshared (List_1_t2058 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m37608(__this, ___collection, method) (( void (*) (List_1_t2058 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m37608_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m37609_gshared (List_1_t2058 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m37609(__this, ___index, ___collection, method) (( void (*) (List_1_t2058 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m37609_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m37610_gshared (List_1_t2058 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m37610(__this, ___index, ___collection, method) (( void (*) (List_1_t2058 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m37610_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m37611_gshared (List_1_t2058 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m37611(__this, ___index, ___enumerable, method) (( void (*) (List_1_t2058 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m37611_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::Remove(T)
extern "C" bool List_1_Remove_m37612_gshared (List_1_t2058 * __this, UIVertex_t2056  ___item, const MethodInfo* method);
#define List_1_Remove_m37612(__this, ___item, method) (( bool (*) (List_1_t2058 *, UIVertex_t2056 , const MethodInfo*))List_1_Remove_m37612_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m37613_gshared (List_1_t2058 * __this, Predicate_1_t5876 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m37613(__this, ___match, method) (( int32_t (*) (List_1_t2058 *, Predicate_1_t5876 *, const MethodInfo*))List_1_RemoveAll_m37613_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m37614_gshared (List_1_t2058 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m37614(__this, ___index, method) (( void (*) (List_1_t2058 *, int32_t, const MethodInfo*))List_1_RemoveAt_m37614_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m37615_gshared (List_1_t2058 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m37615(__this, ___index, ___count, method) (( void (*) (List_1_t2058 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m37615_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Reverse()
extern "C" void List_1_Reverse_m37616_gshared (List_1_t2058 * __this, const MethodInfo* method);
#define List_1_Reverse_m37616(__this, method) (( void (*) (List_1_t2058 *, const MethodInfo*))List_1_Reverse_m37616_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Sort()
extern "C" void List_1_Sort_m37617_gshared (List_1_t2058 * __this, const MethodInfo* method);
#define List_1_Sort_m37617(__this, method) (( void (*) (List_1_t2058 *, const MethodInfo*))List_1_Sort_m37617_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m37618_gshared (List_1_t2058 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m37618(__this, ___comparer, method) (( void (*) (List_1_t2058 *, Object_t*, const MethodInfo*))List_1_Sort_m37618_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m37619_gshared (List_1_t2058 * __this, Comparison_1_t5878 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m37619(__this, ___comparison, method) (( void (*) (List_1_t2058 *, Comparison_1_t5878 *, const MethodInfo*))List_1_Sort_m37619_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.UIVertex>::ToArray()
extern "C" UIVertexU5BU5D_t2055* List_1_ToArray_m9483_gshared (List_1_t2058 * __this, const MethodInfo* method);
#define List_1_ToArray_m9483(__this, method) (( UIVertexU5BU5D_t2055* (*) (List_1_t2058 *, const MethodInfo*))List_1_ToArray_m9483_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::TrimExcess()
extern "C" void List_1_TrimExcess_m37620_gshared (List_1_t2058 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m37620(__this, method) (( void (*) (List_1_t2058 *, const MethodInfo*))List_1_TrimExcess_m37620_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m9384_gshared (List_1_t2058 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m9384(__this, method) (( int32_t (*) (List_1_t2058 *, const MethodInfo*))List_1_get_Capacity_m9384_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m9385_gshared (List_1_t2058 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m9385(__this, ___value, method) (( void (*) (List_1_t2058 *, int32_t, const MethodInfo*))List_1_set_Capacity_m9385_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::get_Count()
extern "C" int32_t List_1_get_Count_m37621_gshared (List_1_t2058 * __this, const MethodInfo* method);
#define List_1_get_Count_m37621(__this, method) (( int32_t (*) (List_1_t2058 *, const MethodInfo*))List_1_get_Count_m37621_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.UIVertex>::get_Item(System.Int32)
extern "C" UIVertex_t2056  List_1_get_Item_m37622_gshared (List_1_t2058 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m37622(__this, ___index, method) (( UIVertex_t2056  (*) (List_1_t2058 *, int32_t, const MethodInfo*))List_1_get_Item_m37622_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m37623_gshared (List_1_t2058 * __this, int32_t ___index, UIVertex_t2056  ___value, const MethodInfo* method);
#define List_1_set_Item_m37623(__this, ___index, ___value, method) (( void (*) (List_1_t2058 *, int32_t, UIVertex_t2056 , const MethodInfo*))List_1_set_Item_m37623_gshared)(__this, ___index, ___value, method)

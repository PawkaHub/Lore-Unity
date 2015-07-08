#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.Color32>
struct List_1_t656;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Color32>
struct IEnumerable_1_t9942;
// UnityEngine.Color32[]
struct Color32U5BU5D_t91;
// System.Collections.Generic.IEnumerator`1<UnityEngine.Color32>
struct IEnumerator_1_t9943;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Collections.Generic.ICollection`1<UnityEngine.Color32>
struct ICollection_1_t9944;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Color32>
struct ReadOnlyCollection_1_t6367;
// System.Predicate`1<UnityEngine.Color32>
struct Predicate_1_t6371;
// System.Collections.Generic.IComparer`1<UnityEngine.Color32>
struct IComparer_1_t9945;
// System.Comparison`1<UnityEngine.Color32>
struct Comparison_1_t6374;
// UnityEngine.Color32
#include "UnityEngine_UnityEngine_Color32.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.Color32>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_58.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::.ctor()
extern "C" void List_1__ctor_m2749_gshared (List_1_t656 * __this, const MethodInfo* method);
#define List_1__ctor_m2749(__this, method) (( void (*) (List_1_t656 *, const MethodInfo*))List_1__ctor_m2749_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m26681_gshared (List_1_t656 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m26681(__this, ___collection, method) (( void (*) (List_1_t656 *, Object_t*, const MethodInfo*))List_1__ctor_m26681_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::.ctor(System.Int32)
extern "C" void List_1__ctor_m26682_gshared (List_1_t656 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m26682(__this, ___capacity, method) (( void (*) (List_1_t656 *, int32_t, const MethodInfo*))List_1__ctor_m26682_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m26683_gshared (List_1_t656 * __this, Color32U5BU5D_t91* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m26683(__this, ___data, ___size, method) (( void (*) (List_1_t656 *, Color32U5BU5D_t91*, int32_t, const MethodInfo*))List_1__ctor_m26683_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::.cctor()
extern "C" void List_1__cctor_m26684_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m26684(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m26684_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.Color32>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m26685_gshared (List_1_t656 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m26685(__this, method) (( Object_t* (*) (List_1_t656 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m26685_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m26686_gshared (List_1_t656 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m26686(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t656 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m26686_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.Color32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m26687_gshared (List_1_t656 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m26687(__this, method) (( Object_t * (*) (List_1_t656 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m26687_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Color32>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m26688_gshared (List_1_t656 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m26688(__this, ___item, method) (( int32_t (*) (List_1_t656 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m26688_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Color32>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m26689_gshared (List_1_t656 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m26689(__this, ___item, method) (( bool (*) (List_1_t656 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m26689_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Color32>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m26690_gshared (List_1_t656 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m26690(__this, ___item, method) (( int32_t (*) (List_1_t656 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m26690_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m26691_gshared (List_1_t656 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m26691(__this, ___index, ___item, method) (( void (*) (List_1_t656 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m26691_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m26692_gshared (List_1_t656 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m26692(__this, ___item, method) (( void (*) (List_1_t656 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m26692_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Color32>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m26693_gshared (List_1_t656 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m26693(__this, method) (( bool (*) (List_1_t656 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m26693_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Color32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m26694_gshared (List_1_t656 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m26694(__this, method) (( bool (*) (List_1_t656 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m26694_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.Color32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m26695_gshared (List_1_t656 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m26695(__this, method) (( Object_t * (*) (List_1_t656 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m26695_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Color32>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m26696_gshared (List_1_t656 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m26696(__this, method) (( bool (*) (List_1_t656 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m26696_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Color32>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m26697_gshared (List_1_t656 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m26697(__this, method) (( bool (*) (List_1_t656 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m26697_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.Color32>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m26698_gshared (List_1_t656 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m26698(__this, ___index, method) (( Object_t * (*) (List_1_t656 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m26698_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m26699_gshared (List_1_t656 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m26699(__this, ___index, ___value, method) (( void (*) (List_1_t656 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m26699_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::Add(T)
extern "C" void List_1_Add_m26700_gshared (List_1_t656 * __this, Color32_t89  ___item, const MethodInfo* method);
#define List_1_Add_m26700(__this, ___item, method) (( void (*) (List_1_t656 *, Color32_t89 , const MethodInfo*))List_1_Add_m26700_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m26701_gshared (List_1_t656 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m26701(__this, ___newCount, method) (( void (*) (List_1_t656 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m26701_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m26702_gshared (List_1_t656 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m26702(__this, ___idx, ___count, method) (( void (*) (List_1_t656 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m26702_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m26703_gshared (List_1_t656 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m26703(__this, ___collection, method) (( void (*) (List_1_t656 *, Object_t*, const MethodInfo*))List_1_AddCollection_m26703_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m26704_gshared (List_1_t656 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m26704(__this, ___enumerable, method) (( void (*) (List_1_t656 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m26704_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m26705_gshared (List_1_t656 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m26705(__this, ___collection, method) (( void (*) (List_1_t656 *, Object_t*, const MethodInfo*))List_1_AddRange_m26705_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.Color32>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t6367 * List_1_AsReadOnly_m26706_gshared (List_1_t656 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m26706(__this, method) (( ReadOnlyCollection_1_t6367 * (*) (List_1_t656 *, const MethodInfo*))List_1_AsReadOnly_m26706_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::Clear()
extern "C" void List_1_Clear_m26707_gshared (List_1_t656 * __this, const MethodInfo* method);
#define List_1_Clear_m26707(__this, method) (( void (*) (List_1_t656 *, const MethodInfo*))List_1_Clear_m26707_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Color32>::Contains(T)
extern "C" bool List_1_Contains_m26708_gshared (List_1_t656 * __this, Color32_t89  ___item, const MethodInfo* method);
#define List_1_Contains_m26708(__this, ___item, method) (( bool (*) (List_1_t656 *, Color32_t89 , const MethodInfo*))List_1_Contains_m26708_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m26709_gshared (List_1_t656 * __this, Color32U5BU5D_t91* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m26709(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t656 *, Color32U5BU5D_t91*, int32_t, const MethodInfo*))List_1_CopyTo_m26709_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.Color32>::Find(System.Predicate`1<T>)
extern "C" Color32_t89  List_1_Find_m26710_gshared (List_1_t656 * __this, Predicate_1_t6371 * ___match, const MethodInfo* method);
#define List_1_Find_m26710(__this, ___match, method) (( Color32_t89  (*) (List_1_t656 *, Predicate_1_t6371 *, const MethodInfo*))List_1_Find_m26710_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m26711_gshared (Object_t * __this /* static, unused */, Predicate_1_t6371 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m26711(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t6371 *, const MethodInfo*))List_1_CheckMatch_m26711_gshared)(__this /* static, unused */, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.Color32>::FindAll(System.Predicate`1<T>)
extern "C" List_1_t656 * List_1_FindAll_m26712_gshared (List_1_t656 * __this, Predicate_1_t6371 * ___match, const MethodInfo* method);
#define List_1_FindAll_m26712(__this, ___match, method) (( List_1_t656 * (*) (List_1_t656 *, Predicate_1_t6371 *, const MethodInfo*))List_1_FindAll_m26712_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.Color32>::FindAllStackBits(System.Predicate`1<T>)
extern "C" List_1_t656 * List_1_FindAllStackBits_m26713_gshared (List_1_t656 * __this, Predicate_1_t6371 * ___match, const MethodInfo* method);
#define List_1_FindAllStackBits_m26713(__this, ___match, method) (( List_1_t656 * (*) (List_1_t656 *, Predicate_1_t6371 *, const MethodInfo*))List_1_FindAllStackBits_m26713_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.Color32>::FindAllList(System.Predicate`1<T>)
extern "C" List_1_t656 * List_1_FindAllList_m26714_gshared (List_1_t656 * __this, Predicate_1_t6371 * ___match, const MethodInfo* method);
#define List_1_FindAllList_m26714(__this, ___match, method) (( List_1_t656 * (*) (List_1_t656 *, Predicate_1_t6371 *, const MethodInfo*))List_1_FindAllList_m26714_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Color32>::FindIndex(System.Predicate`1<T>)
extern "C" int32_t List_1_FindIndex_m26715_gshared (List_1_t656 * __this, Predicate_1_t6371 * ___match, const MethodInfo* method);
#define List_1_FindIndex_m26715(__this, ___match, method) (( int32_t (*) (List_1_t656 *, Predicate_1_t6371 *, const MethodInfo*))List_1_FindIndex_m26715_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Color32>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m26716_gshared (List_1_t656 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t6371 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m26716(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t656 *, int32_t, int32_t, Predicate_1_t6371 *, const MethodInfo*))List_1_GetIndex_m26716_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.Color32>::GetEnumerator()
extern "C" Enumerator_t6365  List_1_GetEnumerator_m26717_gshared (List_1_t656 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m26717(__this, method) (( Enumerator_t6365  (*) (List_1_t656 *, const MethodInfo*))List_1_GetEnumerator_m26717_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.Color32>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t656 * List_1_GetRange_m26718_gshared (List_1_t656 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m26718(__this, ___index, ___count, method) (( List_1_t656 * (*) (List_1_t656 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m26718_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Color32>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m26719_gshared (List_1_t656 * __this, Color32_t89  ___item, const MethodInfo* method);
#define List_1_IndexOf_m26719(__this, ___item, method) (( int32_t (*) (List_1_t656 *, Color32_t89 , const MethodInfo*))List_1_IndexOf_m26719_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m26720_gshared (List_1_t656 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m26720(__this, ___start, ___delta, method) (( void (*) (List_1_t656 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m26720_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m26721_gshared (List_1_t656 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m26721(__this, ___index, method) (( void (*) (List_1_t656 *, int32_t, const MethodInfo*))List_1_CheckIndex_m26721_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m26722_gshared (List_1_t656 * __this, int32_t ___index, Color32_t89  ___item, const MethodInfo* method);
#define List_1_Insert_m26722(__this, ___index, ___item, method) (( void (*) (List_1_t656 *, int32_t, Color32_t89 , const MethodInfo*))List_1_Insert_m26722_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m26723_gshared (List_1_t656 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m26723(__this, ___collection, method) (( void (*) (List_1_t656 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m26723_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m26724_gshared (List_1_t656 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m26724(__this, ___index, ___collection, method) (( void (*) (List_1_t656 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m26724_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m26725_gshared (List_1_t656 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m26725(__this, ___index, ___collection, method) (( void (*) (List_1_t656 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m26725_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m26726_gshared (List_1_t656 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m26726(__this, ___index, ___enumerable, method) (( void (*) (List_1_t656 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m26726_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Color32>::Remove(T)
extern "C" bool List_1_Remove_m26727_gshared (List_1_t656 * __this, Color32_t89  ___item, const MethodInfo* method);
#define List_1_Remove_m26727(__this, ___item, method) (( bool (*) (List_1_t656 *, Color32_t89 , const MethodInfo*))List_1_Remove_m26727_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Color32>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m26728_gshared (List_1_t656 * __this, Predicate_1_t6371 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m26728(__this, ___match, method) (( int32_t (*) (List_1_t656 *, Predicate_1_t6371 *, const MethodInfo*))List_1_RemoveAll_m26728_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m26729_gshared (List_1_t656 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m26729(__this, ___index, method) (( void (*) (List_1_t656 *, int32_t, const MethodInfo*))List_1_RemoveAt_m26729_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m26730_gshared (List_1_t656 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m26730(__this, ___index, ___count, method) (( void (*) (List_1_t656 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m26730_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::Reverse()
extern "C" void List_1_Reverse_m26731_gshared (List_1_t656 * __this, const MethodInfo* method);
#define List_1_Reverse_m26731(__this, method) (( void (*) (List_1_t656 *, const MethodInfo*))List_1_Reverse_m26731_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::Sort()
extern "C" void List_1_Sort_m26732_gshared (List_1_t656 * __this, const MethodInfo* method);
#define List_1_Sort_m26732(__this, method) (( void (*) (List_1_t656 *, const MethodInfo*))List_1_Sort_m26732_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m26733_gshared (List_1_t656 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m26733(__this, ___comparer, method) (( void (*) (List_1_t656 *, Object_t*, const MethodInfo*))List_1_Sort_m26733_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m26734_gshared (List_1_t656 * __this, Comparison_1_t6374 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m26734(__this, ___comparison, method) (( void (*) (List_1_t656 *, Comparison_1_t6374 *, const MethodInfo*))List_1_Sort_m26734_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.Color32>::ToArray()
extern "C" Color32U5BU5D_t91* List_1_ToArray_m2751_gshared (List_1_t656 * __this, const MethodInfo* method);
#define List_1_ToArray_m2751(__this, method) (( Color32U5BU5D_t91* (*) (List_1_t656 *, const MethodInfo*))List_1_ToArray_m2751_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::TrimExcess()
extern "C" void List_1_TrimExcess_m26735_gshared (List_1_t656 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m26735(__this, method) (( void (*) (List_1_t656 *, const MethodInfo*))List_1_TrimExcess_m26735_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Color32>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m26736_gshared (List_1_t656 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m26736(__this, method) (( int32_t (*) (List_1_t656 *, const MethodInfo*))List_1_get_Capacity_m26736_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m26737_gshared (List_1_t656 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m26737(__this, ___value, method) (( void (*) (List_1_t656 *, int32_t, const MethodInfo*))List_1_set_Capacity_m26737_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Color32>::get_Count()
extern "C" int32_t List_1_get_Count_m26738_gshared (List_1_t656 * __this, const MethodInfo* method);
#define List_1_get_Count_m26738(__this, method) (( int32_t (*) (List_1_t656 *, const MethodInfo*))List_1_get_Count_m26738_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.Color32>::get_Item(System.Int32)
extern "C" Color32_t89  List_1_get_Item_m26739_gshared (List_1_t656 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m26739(__this, ___index, method) (( Color32_t89  (*) (List_1_t656 *, int32_t, const MethodInfo*))List_1_get_Item_m26739_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m26740_gshared (List_1_t656 * __this, int32_t ___index, Color32_t89  ___value, const MethodInfo* method);
#define List_1_set_Item_m26740(__this, ___index, ___value, method) (( void (*) (List_1_t656 *, int32_t, Color32_t89 , const MethodInfo*))List_1_set_Item_m26740_gshared)(__this, ___index, ___value, method)

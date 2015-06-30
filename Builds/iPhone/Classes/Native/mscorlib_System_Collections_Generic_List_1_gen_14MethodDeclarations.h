#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.Color32>
struct List_1_t577;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Color32>
struct IEnumerable_1_t6488;
// UnityEngine.Color32[]
struct Color32U5BU5D_t91;
// System.Collections.Generic.IEnumerator`1<UnityEngine.Color32>
struct IEnumerator_1_t6489;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Collections.Generic.ICollection`1<UnityEngine.Color32>
struct ICollection_1_t6490;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Color32>
struct ReadOnlyCollection_1_t5041;
// System.Predicate`1<UnityEngine.Color32>
struct Predicate_1_t5045;
// System.Collections.Generic.IComparer`1<UnityEngine.Color32>
struct IComparer_1_t6491;
// System.Comparison`1<UnityEngine.Color32>
struct Comparison_1_t5048;
// UnityEngine.Color32
#include "UnityEngine_UnityEngine_Color32.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.Color32>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_53.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::.ctor()
extern "C" void List_1__ctor_m2490_gshared (List_1_t577 * __this, const MethodInfo* method);
#define List_1__ctor_m2490(__this, method) (( void (*) (List_1_t577 *, const MethodInfo*))List_1__ctor_m2490_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m24870_gshared (List_1_t577 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m24870(__this, ___collection, method) (( void (*) (List_1_t577 *, Object_t*, const MethodInfo*))List_1__ctor_m24870_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::.ctor(System.Int32)
extern "C" void List_1__ctor_m24871_gshared (List_1_t577 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m24871(__this, ___capacity, method) (( void (*) (List_1_t577 *, int32_t, const MethodInfo*))List_1__ctor_m24871_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m24872_gshared (List_1_t577 * __this, Color32U5BU5D_t91* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m24872(__this, ___data, ___size, method) (( void (*) (List_1_t577 *, Color32U5BU5D_t91*, int32_t, const MethodInfo*))List_1__ctor_m24872_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::.cctor()
extern "C" void List_1__cctor_m24873_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m24873(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m24873_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.Color32>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m24874_gshared (List_1_t577 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m24874(__this, method) (( Object_t* (*) (List_1_t577 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m24874_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m24875_gshared (List_1_t577 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m24875(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t577 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m24875_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.Color32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m24876_gshared (List_1_t577 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m24876(__this, method) (( Object_t * (*) (List_1_t577 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m24876_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Color32>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m24877_gshared (List_1_t577 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m24877(__this, ___item, method) (( int32_t (*) (List_1_t577 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m24877_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Color32>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m24878_gshared (List_1_t577 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m24878(__this, ___item, method) (( bool (*) (List_1_t577 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m24878_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Color32>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m24879_gshared (List_1_t577 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m24879(__this, ___item, method) (( int32_t (*) (List_1_t577 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m24879_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m24880_gshared (List_1_t577 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m24880(__this, ___index, ___item, method) (( void (*) (List_1_t577 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m24880_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m24881_gshared (List_1_t577 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m24881(__this, ___item, method) (( void (*) (List_1_t577 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m24881_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Color32>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m24882_gshared (List_1_t577 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m24882(__this, method) (( bool (*) (List_1_t577 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m24882_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Color32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m24883_gshared (List_1_t577 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m24883(__this, method) (( bool (*) (List_1_t577 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m24883_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.Color32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m24884_gshared (List_1_t577 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m24884(__this, method) (( Object_t * (*) (List_1_t577 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m24884_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Color32>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m24885_gshared (List_1_t577 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m24885(__this, method) (( bool (*) (List_1_t577 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m24885_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Color32>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m24886_gshared (List_1_t577 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m24886(__this, method) (( bool (*) (List_1_t577 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m24886_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.Color32>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m24887_gshared (List_1_t577 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m24887(__this, ___index, method) (( Object_t * (*) (List_1_t577 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m24887_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m24888_gshared (List_1_t577 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m24888(__this, ___index, ___value, method) (( void (*) (List_1_t577 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m24888_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::Add(T)
extern "C" void List_1_Add_m24889_gshared (List_1_t577 * __this, Color32_t89  ___item, const MethodInfo* method);
#define List_1_Add_m24889(__this, ___item, method) (( void (*) (List_1_t577 *, Color32_t89 , const MethodInfo*))List_1_Add_m24889_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m24890_gshared (List_1_t577 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m24890(__this, ___newCount, method) (( void (*) (List_1_t577 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m24890_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m24891_gshared (List_1_t577 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m24891(__this, ___idx, ___count, method) (( void (*) (List_1_t577 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m24891_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m24892_gshared (List_1_t577 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m24892(__this, ___collection, method) (( void (*) (List_1_t577 *, Object_t*, const MethodInfo*))List_1_AddCollection_m24892_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m24893_gshared (List_1_t577 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m24893(__this, ___enumerable, method) (( void (*) (List_1_t577 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m24893_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m24894_gshared (List_1_t577 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m24894(__this, ___collection, method) (( void (*) (List_1_t577 *, Object_t*, const MethodInfo*))List_1_AddRange_m24894_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.Color32>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t5041 * List_1_AsReadOnly_m24895_gshared (List_1_t577 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m24895(__this, method) (( ReadOnlyCollection_1_t5041 * (*) (List_1_t577 *, const MethodInfo*))List_1_AsReadOnly_m24895_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::Clear()
extern "C" void List_1_Clear_m24896_gshared (List_1_t577 * __this, const MethodInfo* method);
#define List_1_Clear_m24896(__this, method) (( void (*) (List_1_t577 *, const MethodInfo*))List_1_Clear_m24896_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Color32>::Contains(T)
extern "C" bool List_1_Contains_m24897_gshared (List_1_t577 * __this, Color32_t89  ___item, const MethodInfo* method);
#define List_1_Contains_m24897(__this, ___item, method) (( bool (*) (List_1_t577 *, Color32_t89 , const MethodInfo*))List_1_Contains_m24897_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m24898_gshared (List_1_t577 * __this, Color32U5BU5D_t91* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m24898(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t577 *, Color32U5BU5D_t91*, int32_t, const MethodInfo*))List_1_CopyTo_m24898_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.Color32>::Find(System.Predicate`1<T>)
extern "C" Color32_t89  List_1_Find_m24899_gshared (List_1_t577 * __this, Predicate_1_t5045 * ___match, const MethodInfo* method);
#define List_1_Find_m24899(__this, ___match, method) (( Color32_t89  (*) (List_1_t577 *, Predicate_1_t5045 *, const MethodInfo*))List_1_Find_m24899_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m24900_gshared (Object_t * __this /* static, unused */, Predicate_1_t5045 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m24900(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t5045 *, const MethodInfo*))List_1_CheckMatch_m24900_gshared)(__this /* static, unused */, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.Color32>::FindAll(System.Predicate`1<T>)
extern "C" List_1_t577 * List_1_FindAll_m24901_gshared (List_1_t577 * __this, Predicate_1_t5045 * ___match, const MethodInfo* method);
#define List_1_FindAll_m24901(__this, ___match, method) (( List_1_t577 * (*) (List_1_t577 *, Predicate_1_t5045 *, const MethodInfo*))List_1_FindAll_m24901_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.Color32>::FindAllStackBits(System.Predicate`1<T>)
extern "C" List_1_t577 * List_1_FindAllStackBits_m24902_gshared (List_1_t577 * __this, Predicate_1_t5045 * ___match, const MethodInfo* method);
#define List_1_FindAllStackBits_m24902(__this, ___match, method) (( List_1_t577 * (*) (List_1_t577 *, Predicate_1_t5045 *, const MethodInfo*))List_1_FindAllStackBits_m24902_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.Color32>::FindAllList(System.Predicate`1<T>)
extern "C" List_1_t577 * List_1_FindAllList_m24903_gshared (List_1_t577 * __this, Predicate_1_t5045 * ___match, const MethodInfo* method);
#define List_1_FindAllList_m24903(__this, ___match, method) (( List_1_t577 * (*) (List_1_t577 *, Predicate_1_t5045 *, const MethodInfo*))List_1_FindAllList_m24903_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Color32>::FindIndex(System.Predicate`1<T>)
extern "C" int32_t List_1_FindIndex_m24904_gshared (List_1_t577 * __this, Predicate_1_t5045 * ___match, const MethodInfo* method);
#define List_1_FindIndex_m24904(__this, ___match, method) (( int32_t (*) (List_1_t577 *, Predicate_1_t5045 *, const MethodInfo*))List_1_FindIndex_m24904_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Color32>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m24905_gshared (List_1_t577 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t5045 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m24905(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t577 *, int32_t, int32_t, Predicate_1_t5045 *, const MethodInfo*))List_1_GetIndex_m24905_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.Color32>::GetEnumerator()
extern "C" Enumerator_t5039  List_1_GetEnumerator_m24906_gshared (List_1_t577 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m24906(__this, method) (( Enumerator_t5039  (*) (List_1_t577 *, const MethodInfo*))List_1_GetEnumerator_m24906_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.Color32>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t577 * List_1_GetRange_m24907_gshared (List_1_t577 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m24907(__this, ___index, ___count, method) (( List_1_t577 * (*) (List_1_t577 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m24907_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Color32>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m24908_gshared (List_1_t577 * __this, Color32_t89  ___item, const MethodInfo* method);
#define List_1_IndexOf_m24908(__this, ___item, method) (( int32_t (*) (List_1_t577 *, Color32_t89 , const MethodInfo*))List_1_IndexOf_m24908_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m24909_gshared (List_1_t577 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m24909(__this, ___start, ___delta, method) (( void (*) (List_1_t577 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m24909_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m24910_gshared (List_1_t577 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m24910(__this, ___index, method) (( void (*) (List_1_t577 *, int32_t, const MethodInfo*))List_1_CheckIndex_m24910_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m24911_gshared (List_1_t577 * __this, int32_t ___index, Color32_t89  ___item, const MethodInfo* method);
#define List_1_Insert_m24911(__this, ___index, ___item, method) (( void (*) (List_1_t577 *, int32_t, Color32_t89 , const MethodInfo*))List_1_Insert_m24911_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m24912_gshared (List_1_t577 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m24912(__this, ___collection, method) (( void (*) (List_1_t577 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m24912_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m24913_gshared (List_1_t577 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m24913(__this, ___index, ___collection, method) (( void (*) (List_1_t577 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m24913_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m24914_gshared (List_1_t577 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m24914(__this, ___index, ___collection, method) (( void (*) (List_1_t577 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m24914_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m24915_gshared (List_1_t577 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m24915(__this, ___index, ___enumerable, method) (( void (*) (List_1_t577 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m24915_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Color32>::Remove(T)
extern "C" bool List_1_Remove_m24916_gshared (List_1_t577 * __this, Color32_t89  ___item, const MethodInfo* method);
#define List_1_Remove_m24916(__this, ___item, method) (( bool (*) (List_1_t577 *, Color32_t89 , const MethodInfo*))List_1_Remove_m24916_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Color32>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m24917_gshared (List_1_t577 * __this, Predicate_1_t5045 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m24917(__this, ___match, method) (( int32_t (*) (List_1_t577 *, Predicate_1_t5045 *, const MethodInfo*))List_1_RemoveAll_m24917_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m24918_gshared (List_1_t577 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m24918(__this, ___index, method) (( void (*) (List_1_t577 *, int32_t, const MethodInfo*))List_1_RemoveAt_m24918_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m24919_gshared (List_1_t577 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m24919(__this, ___index, ___count, method) (( void (*) (List_1_t577 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m24919_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::Reverse()
extern "C" void List_1_Reverse_m24920_gshared (List_1_t577 * __this, const MethodInfo* method);
#define List_1_Reverse_m24920(__this, method) (( void (*) (List_1_t577 *, const MethodInfo*))List_1_Reverse_m24920_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::Sort()
extern "C" void List_1_Sort_m24921_gshared (List_1_t577 * __this, const MethodInfo* method);
#define List_1_Sort_m24921(__this, method) (( void (*) (List_1_t577 *, const MethodInfo*))List_1_Sort_m24921_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m24922_gshared (List_1_t577 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m24922(__this, ___comparer, method) (( void (*) (List_1_t577 *, Object_t*, const MethodInfo*))List_1_Sort_m24922_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m24923_gshared (List_1_t577 * __this, Comparison_1_t5048 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m24923(__this, ___comparison, method) (( void (*) (List_1_t577 *, Comparison_1_t5048 *, const MethodInfo*))List_1_Sort_m24923_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.Color32>::ToArray()
extern "C" Color32U5BU5D_t91* List_1_ToArray_m2492_gshared (List_1_t577 * __this, const MethodInfo* method);
#define List_1_ToArray_m2492(__this, method) (( Color32U5BU5D_t91* (*) (List_1_t577 *, const MethodInfo*))List_1_ToArray_m2492_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::TrimExcess()
extern "C" void List_1_TrimExcess_m24924_gshared (List_1_t577 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m24924(__this, method) (( void (*) (List_1_t577 *, const MethodInfo*))List_1_TrimExcess_m24924_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Color32>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m24925_gshared (List_1_t577 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m24925(__this, method) (( int32_t (*) (List_1_t577 *, const MethodInfo*))List_1_get_Capacity_m24925_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m24926_gshared (List_1_t577 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m24926(__this, ___value, method) (( void (*) (List_1_t577 *, int32_t, const MethodInfo*))List_1_set_Capacity_m24926_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Color32>::get_Count()
extern "C" int32_t List_1_get_Count_m24927_gshared (List_1_t577 * __this, const MethodInfo* method);
#define List_1_get_Count_m24927(__this, method) (( int32_t (*) (List_1_t577 *, const MethodInfo*))List_1_get_Count_m24927_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.Color32>::get_Item(System.Int32)
extern "C" Color32_t89  List_1_get_Item_m24928_gshared (List_1_t577 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m24928(__this, ___index, method) (( Color32_t89  (*) (List_1_t577 *, int32_t, const MethodInfo*))List_1_get_Item_m24928_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m24929_gshared (List_1_t577 * __this, int32_t ___index, Color32_t89  ___value, const MethodInfo* method);
#define List_1_set_Item_m24929(__this, ___index, ___value, method) (( void (*) (List_1_t577 *, int32_t, Color32_t89 , const MethodInfo*))List_1_set_Item_m24929_gshared)(__this, ___index, ___value, method)

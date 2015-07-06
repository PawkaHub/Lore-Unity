#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.UICharInfo>
struct List_1_t4549;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<UnityEngine.UICharInfo>
struct IEnumerable_1_t10664;
// UnityEngine.UICharInfo[]
struct UICharInfoU5BU5D_t4663;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UICharInfo>
struct IEnumerator_1_t10665;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Collections.Generic.ICollection`1<UnityEngine.UICharInfo>
struct ICollection_1_t10666;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UICharInfo>
struct ReadOnlyCollection_1_t9361;
// System.Predicate`1<UnityEngine.UICharInfo>
struct Predicate_1_t9365;
// System.Collections.Generic.IComparer`1<UnityEngine.UICharInfo>
struct IComparer_1_t10667;
// System.Comparison`1<UnityEngine.UICharInfo>
struct Comparison_1_t9368;
// UnityEngine.UICharInfo
#include "UnityEngine_UnityEngine_UICharInfo.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.UICharInfo>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_145.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::.ctor()
extern "C" void List_1__ctor_m69427_gshared (List_1_t4549 * __this, const MethodInfo* method);
#define List_1__ctor_m69427(__this, method) (( void (*) (List_1_t4549 *, const MethodInfo*))List_1__ctor_m69427_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m69428_gshared (List_1_t4549 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m69428(__this, ___collection, method) (( void (*) (List_1_t4549 *, Object_t*, const MethodInfo*))List_1__ctor_m69428_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::.ctor(System.Int32)
extern "C" void List_1__ctor_m17594_gshared (List_1_t4549 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m17594(__this, ___capacity, method) (( void (*) (List_1_t4549 *, int32_t, const MethodInfo*))List_1__ctor_m17594_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m69429_gshared (List_1_t4549 * __this, UICharInfoU5BU5D_t4663* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m69429(__this, ___data, ___size, method) (( void (*) (List_1_t4549 *, UICharInfoU5BU5D_t4663*, int32_t, const MethodInfo*))List_1__ctor_m69429_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::.cctor()
extern "C" void List_1__cctor_m69430_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m69430(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m69430_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m69431_gshared (List_1_t4549 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m69431(__this, method) (( Object_t* (*) (List_1_t4549 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m69431_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m69432_gshared (List_1_t4549 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m69432(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t4549 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m69432_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m69433_gshared (List_1_t4549 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m69433(__this, method) (( Object_t * (*) (List_1_t4549 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m69433_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m69434_gshared (List_1_t4549 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m69434(__this, ___item, method) (( int32_t (*) (List_1_t4549 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m69434_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m69435_gshared (List_1_t4549 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m69435(__this, ___item, method) (( bool (*) (List_1_t4549 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m69435_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m69436_gshared (List_1_t4549 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m69436(__this, ___item, method) (( int32_t (*) (List_1_t4549 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m69436_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m69437_gshared (List_1_t4549 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m69437(__this, ___index, ___item, method) (( void (*) (List_1_t4549 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m69437_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m69438_gshared (List_1_t4549 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m69438(__this, ___item, method) (( void (*) (List_1_t4549 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m69438_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m69439_gshared (List_1_t4549 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m69439(__this, method) (( bool (*) (List_1_t4549 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m69439_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m69440_gshared (List_1_t4549 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m69440(__this, method) (( bool (*) (List_1_t4549 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m69440_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m69441_gshared (List_1_t4549 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m69441(__this, method) (( Object_t * (*) (List_1_t4549 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m69441_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m69442_gshared (List_1_t4549 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m69442(__this, method) (( bool (*) (List_1_t4549 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m69442_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m69443_gshared (List_1_t4549 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m69443(__this, method) (( bool (*) (List_1_t4549 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m69443_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m69444_gshared (List_1_t4549 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m69444(__this, ___index, method) (( Object_t * (*) (List_1_t4549 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m69444_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m69445_gshared (List_1_t4549 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m69445(__this, ___index, ___value, method) (( void (*) (List_1_t4549 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m69445_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Add(T)
extern "C" void List_1_Add_m69446_gshared (List_1_t4549 * __this, UICharInfo_t989  ___item, const MethodInfo* method);
#define List_1_Add_m69446(__this, ___item, method) (( void (*) (List_1_t4549 *, UICharInfo_t989 , const MethodInfo*))List_1_Add_m69446_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m69447_gshared (List_1_t4549 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m69447(__this, ___newCount, method) (( void (*) (List_1_t4549 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m69447_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m69448_gshared (List_1_t4549 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m69448(__this, ___idx, ___count, method) (( void (*) (List_1_t4549 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m69448_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m69449_gshared (List_1_t4549 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m69449(__this, ___collection, method) (( void (*) (List_1_t4549 *, Object_t*, const MethodInfo*))List_1_AddCollection_m69449_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m69450_gshared (List_1_t4549 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m69450(__this, ___enumerable, method) (( void (*) (List_1_t4549 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m69450_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m69451_gshared (List_1_t4549 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m69451(__this, ___collection, method) (( void (*) (List_1_t4549 *, Object_t*, const MethodInfo*))List_1_AddRange_m69451_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.UICharInfo>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t9361 * List_1_AsReadOnly_m69452_gshared (List_1_t4549 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m69452(__this, method) (( ReadOnlyCollection_1_t9361 * (*) (List_1_t4549 *, const MethodInfo*))List_1_AsReadOnly_m69452_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Clear()
extern "C" void List_1_Clear_m69453_gshared (List_1_t4549 * __this, const MethodInfo* method);
#define List_1_Clear_m69453(__this, method) (( void (*) (List_1_t4549 *, const MethodInfo*))List_1_Clear_m69453_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Contains(T)
extern "C" bool List_1_Contains_m69454_gshared (List_1_t4549 * __this, UICharInfo_t989  ___item, const MethodInfo* method);
#define List_1_Contains_m69454(__this, ___item, method) (( bool (*) (List_1_t4549 *, UICharInfo_t989 , const MethodInfo*))List_1_Contains_m69454_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m69455_gshared (List_1_t4549 * __this, UICharInfoU5BU5D_t4663* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m69455(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t4549 *, UICharInfoU5BU5D_t4663*, int32_t, const MethodInfo*))List_1_CopyTo_m69455_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Find(System.Predicate`1<T>)
extern "C" UICharInfo_t989  List_1_Find_m69456_gshared (List_1_t4549 * __this, Predicate_1_t9365 * ___match, const MethodInfo* method);
#define List_1_Find_m69456(__this, ___match, method) (( UICharInfo_t989  (*) (List_1_t4549 *, Predicate_1_t9365 *, const MethodInfo*))List_1_Find_m69456_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m69457_gshared (Object_t * __this /* static, unused */, Predicate_1_t9365 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m69457(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t9365 *, const MethodInfo*))List_1_CheckMatch_m69457_gshared)(__this /* static, unused */, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.UICharInfo>::FindAll(System.Predicate`1<T>)
extern "C" List_1_t4549 * List_1_FindAll_m69458_gshared (List_1_t4549 * __this, Predicate_1_t9365 * ___match, const MethodInfo* method);
#define List_1_FindAll_m69458(__this, ___match, method) (( List_1_t4549 * (*) (List_1_t4549 *, Predicate_1_t9365 *, const MethodInfo*))List_1_FindAll_m69458_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.UICharInfo>::FindAllStackBits(System.Predicate`1<T>)
extern "C" List_1_t4549 * List_1_FindAllStackBits_m69459_gshared (List_1_t4549 * __this, Predicate_1_t9365 * ___match, const MethodInfo* method);
#define List_1_FindAllStackBits_m69459(__this, ___match, method) (( List_1_t4549 * (*) (List_1_t4549 *, Predicate_1_t9365 *, const MethodInfo*))List_1_FindAllStackBits_m69459_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.UICharInfo>::FindAllList(System.Predicate`1<T>)
extern "C" List_1_t4549 * List_1_FindAllList_m69460_gshared (List_1_t4549 * __this, Predicate_1_t9365 * ___match, const MethodInfo* method);
#define List_1_FindAllList_m69460(__this, ___match, method) (( List_1_t4549 * (*) (List_1_t4549 *, Predicate_1_t9365 *, const MethodInfo*))List_1_FindAllList_m69460_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::FindIndex(System.Predicate`1<T>)
extern "C" int32_t List_1_FindIndex_m69461_gshared (List_1_t4549 * __this, Predicate_1_t9365 * ___match, const MethodInfo* method);
#define List_1_FindIndex_m69461(__this, ___match, method) (( int32_t (*) (List_1_t4549 *, Predicate_1_t9365 *, const MethodInfo*))List_1_FindIndex_m69461_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m69462_gshared (List_1_t4549 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t9365 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m69462(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t4549 *, int32_t, int32_t, Predicate_1_t9365 *, const MethodInfo*))List_1_GetIndex_m69462_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.UICharInfo>::GetEnumerator()
extern "C" Enumerator_t9360  List_1_GetEnumerator_m69463_gshared (List_1_t4549 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m69463(__this, method) (( Enumerator_t9360  (*) (List_1_t4549 *, const MethodInfo*))List_1_GetEnumerator_m69463_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.UICharInfo>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t4549 * List_1_GetRange_m69464_gshared (List_1_t4549 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m69464(__this, ___index, ___count, method) (( List_1_t4549 * (*) (List_1_t4549 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m69464_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m69465_gshared (List_1_t4549 * __this, UICharInfo_t989  ___item, const MethodInfo* method);
#define List_1_IndexOf_m69465(__this, ___item, method) (( int32_t (*) (List_1_t4549 *, UICharInfo_t989 , const MethodInfo*))List_1_IndexOf_m69465_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m69466_gshared (List_1_t4549 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m69466(__this, ___start, ___delta, method) (( void (*) (List_1_t4549 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m69466_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m69467_gshared (List_1_t4549 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m69467(__this, ___index, method) (( void (*) (List_1_t4549 *, int32_t, const MethodInfo*))List_1_CheckIndex_m69467_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m69468_gshared (List_1_t4549 * __this, int32_t ___index, UICharInfo_t989  ___item, const MethodInfo* method);
#define List_1_Insert_m69468(__this, ___index, ___item, method) (( void (*) (List_1_t4549 *, int32_t, UICharInfo_t989 , const MethodInfo*))List_1_Insert_m69468_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m69469_gshared (List_1_t4549 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m69469(__this, ___collection, method) (( void (*) (List_1_t4549 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m69469_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m69470_gshared (List_1_t4549 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m69470(__this, ___index, ___collection, method) (( void (*) (List_1_t4549 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m69470_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m69471_gshared (List_1_t4549 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m69471(__this, ___index, ___collection, method) (( void (*) (List_1_t4549 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m69471_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m69472_gshared (List_1_t4549 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m69472(__this, ___index, ___enumerable, method) (( void (*) (List_1_t4549 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m69472_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Remove(T)
extern "C" bool List_1_Remove_m69473_gshared (List_1_t4549 * __this, UICharInfo_t989  ___item, const MethodInfo* method);
#define List_1_Remove_m69473(__this, ___item, method) (( bool (*) (List_1_t4549 *, UICharInfo_t989 , const MethodInfo*))List_1_Remove_m69473_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m69474_gshared (List_1_t4549 * __this, Predicate_1_t9365 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m69474(__this, ___match, method) (( int32_t (*) (List_1_t4549 *, Predicate_1_t9365 *, const MethodInfo*))List_1_RemoveAll_m69474_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m69475_gshared (List_1_t4549 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m69475(__this, ___index, method) (( void (*) (List_1_t4549 *, int32_t, const MethodInfo*))List_1_RemoveAt_m69475_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m69476_gshared (List_1_t4549 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m69476(__this, ___index, ___count, method) (( void (*) (List_1_t4549 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m69476_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Reverse()
extern "C" void List_1_Reverse_m69477_gshared (List_1_t4549 * __this, const MethodInfo* method);
#define List_1_Reverse_m69477(__this, method) (( void (*) (List_1_t4549 *, const MethodInfo*))List_1_Reverse_m69477_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Sort()
extern "C" void List_1_Sort_m69478_gshared (List_1_t4549 * __this, const MethodInfo* method);
#define List_1_Sort_m69478(__this, method) (( void (*) (List_1_t4549 *, const MethodInfo*))List_1_Sort_m69478_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m69479_gshared (List_1_t4549 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m69479(__this, ___comparer, method) (( void (*) (List_1_t4549 *, Object_t*, const MethodInfo*))List_1_Sort_m69479_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m69480_gshared (List_1_t4549 * __this, Comparison_1_t9368 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m69480(__this, ___comparison, method) (( void (*) (List_1_t4549 *, Comparison_1_t9368 *, const MethodInfo*))List_1_Sort_m69480_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.UICharInfo>::ToArray()
extern "C" UICharInfoU5BU5D_t4663* List_1_ToArray_m69481_gshared (List_1_t4549 * __this, const MethodInfo* method);
#define List_1_ToArray_m69481(__this, method) (( UICharInfoU5BU5D_t4663* (*) (List_1_t4549 *, const MethodInfo*))List_1_ToArray_m69481_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::TrimExcess()
extern "C" void List_1_TrimExcess_m69482_gshared (List_1_t4549 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m69482(__this, method) (( void (*) (List_1_t4549 *, const MethodInfo*))List_1_TrimExcess_m69482_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m69483_gshared (List_1_t4549 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m69483(__this, method) (( int32_t (*) (List_1_t4549 *, const MethodInfo*))List_1_get_Capacity_m69483_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m69484_gshared (List_1_t4549 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m69484(__this, ___value, method) (( void (*) (List_1_t4549 *, int32_t, const MethodInfo*))List_1_set_Capacity_m69484_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::get_Count()
extern "C" int32_t List_1_get_Count_m69485_gshared (List_1_t4549 * __this, const MethodInfo* method);
#define List_1_get_Count_m69485(__this, method) (( int32_t (*) (List_1_t4549 *, const MethodInfo*))List_1_get_Count_m69485_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.UICharInfo>::get_Item(System.Int32)
extern "C" UICharInfo_t989  List_1_get_Item_m69486_gshared (List_1_t4549 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m69486(__this, ___index, method) (( UICharInfo_t989  (*) (List_1_t4549 *, int32_t, const MethodInfo*))List_1_get_Item_m69486_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m69487_gshared (List_1_t4549 * __this, int32_t ___index, UICharInfo_t989  ___value, const MethodInfo* method);
#define List_1_set_Item_m69487(__this, ___index, ___value, method) (( void (*) (List_1_t4549 *, int32_t, UICharInfo_t989 , const MethodInfo*))List_1_set_Item_m69487_gshared)(__this, ___index, ___value, method)

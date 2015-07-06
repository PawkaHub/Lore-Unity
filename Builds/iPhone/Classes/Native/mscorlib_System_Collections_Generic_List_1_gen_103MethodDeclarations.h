#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.UILineInfo>
struct List_1_t4550;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<UnityEngine.UILineInfo>
struct IEnumerable_1_t10668;
// UnityEngine.UILineInfo[]
struct UILineInfoU5BU5D_t4664;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UILineInfo>
struct IEnumerator_1_t10669;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Collections.Generic.ICollection`1<UnityEngine.UILineInfo>
struct ICollection_1_t991;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UILineInfo>
struct ReadOnlyCollection_1_t9370;
// System.Predicate`1<UnityEngine.UILineInfo>
struct Predicate_1_t9374;
// System.Collections.Generic.IComparer`1<UnityEngine.UILineInfo>
struct IComparer_1_t10670;
// System.Comparison`1<UnityEngine.UILineInfo>
struct Comparison_1_t9377;
// UnityEngine.UILineInfo
#include "UnityEngine_UnityEngine_UILineInfo.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.UILineInfo>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_146.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::.ctor()
extern "C" void List_1__ctor_m69583_gshared (List_1_t4550 * __this, const MethodInfo* method);
#define List_1__ctor_m69583(__this, method) (( void (*) (List_1_t4550 *, const MethodInfo*))List_1__ctor_m69583_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m69584_gshared (List_1_t4550 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m69584(__this, ___collection, method) (( void (*) (List_1_t4550 *, Object_t*, const MethodInfo*))List_1__ctor_m69584_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::.ctor(System.Int32)
extern "C" void List_1__ctor_m17595_gshared (List_1_t4550 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m17595(__this, ___capacity, method) (( void (*) (List_1_t4550 *, int32_t, const MethodInfo*))List_1__ctor_m17595_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m69585_gshared (List_1_t4550 * __this, UILineInfoU5BU5D_t4664* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m69585(__this, ___data, ___size, method) (( void (*) (List_1_t4550 *, UILineInfoU5BU5D_t4664*, int32_t, const MethodInfo*))List_1__ctor_m69585_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::.cctor()
extern "C" void List_1__cctor_m69586_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m69586(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m69586_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m69587_gshared (List_1_t4550 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m69587(__this, method) (( Object_t* (*) (List_1_t4550 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m69587_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m69588_gshared (List_1_t4550 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m69588(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t4550 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m69588_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m69589_gshared (List_1_t4550 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m69589(__this, method) (( Object_t * (*) (List_1_t4550 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m69589_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m69590_gshared (List_1_t4550 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m69590(__this, ___item, method) (( int32_t (*) (List_1_t4550 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m69590_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m69591_gshared (List_1_t4550 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m69591(__this, ___item, method) (( bool (*) (List_1_t4550 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m69591_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m69592_gshared (List_1_t4550 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m69592(__this, ___item, method) (( int32_t (*) (List_1_t4550 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m69592_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m69593_gshared (List_1_t4550 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m69593(__this, ___index, ___item, method) (( void (*) (List_1_t4550 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m69593_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m69594_gshared (List_1_t4550 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m69594(__this, ___item, method) (( void (*) (List_1_t4550 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m69594_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m69595_gshared (List_1_t4550 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m69595(__this, method) (( bool (*) (List_1_t4550 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m69595_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m69596_gshared (List_1_t4550 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m69596(__this, method) (( bool (*) (List_1_t4550 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m69596_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m69597_gshared (List_1_t4550 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m69597(__this, method) (( Object_t * (*) (List_1_t4550 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m69597_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m69598_gshared (List_1_t4550 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m69598(__this, method) (( bool (*) (List_1_t4550 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m69598_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m69599_gshared (List_1_t4550 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m69599(__this, method) (( bool (*) (List_1_t4550 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m69599_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m69600_gshared (List_1_t4550 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m69600(__this, ___index, method) (( Object_t * (*) (List_1_t4550 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m69600_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m69601_gshared (List_1_t4550 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m69601(__this, ___index, ___value, method) (( void (*) (List_1_t4550 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m69601_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Add(T)
extern "C" void List_1_Add_m69602_gshared (List_1_t4550 * __this, UILineInfo_t987  ___item, const MethodInfo* method);
#define List_1_Add_m69602(__this, ___item, method) (( void (*) (List_1_t4550 *, UILineInfo_t987 , const MethodInfo*))List_1_Add_m69602_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m69603_gshared (List_1_t4550 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m69603(__this, ___newCount, method) (( void (*) (List_1_t4550 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m69603_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m69604_gshared (List_1_t4550 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m69604(__this, ___idx, ___count, method) (( void (*) (List_1_t4550 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m69604_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m69605_gshared (List_1_t4550 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m69605(__this, ___collection, method) (( void (*) (List_1_t4550 *, Object_t*, const MethodInfo*))List_1_AddCollection_m69605_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m69606_gshared (List_1_t4550 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m69606(__this, ___enumerable, method) (( void (*) (List_1_t4550 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m69606_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m69607_gshared (List_1_t4550 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m69607(__this, ___collection, method) (( void (*) (List_1_t4550 *, Object_t*, const MethodInfo*))List_1_AddRange_m69607_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.UILineInfo>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t9370 * List_1_AsReadOnly_m69608_gshared (List_1_t4550 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m69608(__this, method) (( ReadOnlyCollection_1_t9370 * (*) (List_1_t4550 *, const MethodInfo*))List_1_AsReadOnly_m69608_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Clear()
extern "C" void List_1_Clear_m69609_gshared (List_1_t4550 * __this, const MethodInfo* method);
#define List_1_Clear_m69609(__this, method) (( void (*) (List_1_t4550 *, const MethodInfo*))List_1_Clear_m69609_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Contains(T)
extern "C" bool List_1_Contains_m69610_gshared (List_1_t4550 * __this, UILineInfo_t987  ___item, const MethodInfo* method);
#define List_1_Contains_m69610(__this, ___item, method) (( bool (*) (List_1_t4550 *, UILineInfo_t987 , const MethodInfo*))List_1_Contains_m69610_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m69611_gshared (List_1_t4550 * __this, UILineInfoU5BU5D_t4664* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m69611(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t4550 *, UILineInfoU5BU5D_t4664*, int32_t, const MethodInfo*))List_1_CopyTo_m69611_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Find(System.Predicate`1<T>)
extern "C" UILineInfo_t987  List_1_Find_m69612_gshared (List_1_t4550 * __this, Predicate_1_t9374 * ___match, const MethodInfo* method);
#define List_1_Find_m69612(__this, ___match, method) (( UILineInfo_t987  (*) (List_1_t4550 *, Predicate_1_t9374 *, const MethodInfo*))List_1_Find_m69612_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m69613_gshared (Object_t * __this /* static, unused */, Predicate_1_t9374 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m69613(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t9374 *, const MethodInfo*))List_1_CheckMatch_m69613_gshared)(__this /* static, unused */, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.UILineInfo>::FindAll(System.Predicate`1<T>)
extern "C" List_1_t4550 * List_1_FindAll_m69614_gshared (List_1_t4550 * __this, Predicate_1_t9374 * ___match, const MethodInfo* method);
#define List_1_FindAll_m69614(__this, ___match, method) (( List_1_t4550 * (*) (List_1_t4550 *, Predicate_1_t9374 *, const MethodInfo*))List_1_FindAll_m69614_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.UILineInfo>::FindAllStackBits(System.Predicate`1<T>)
extern "C" List_1_t4550 * List_1_FindAllStackBits_m69615_gshared (List_1_t4550 * __this, Predicate_1_t9374 * ___match, const MethodInfo* method);
#define List_1_FindAllStackBits_m69615(__this, ___match, method) (( List_1_t4550 * (*) (List_1_t4550 *, Predicate_1_t9374 *, const MethodInfo*))List_1_FindAllStackBits_m69615_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.UILineInfo>::FindAllList(System.Predicate`1<T>)
extern "C" List_1_t4550 * List_1_FindAllList_m69616_gshared (List_1_t4550 * __this, Predicate_1_t9374 * ___match, const MethodInfo* method);
#define List_1_FindAllList_m69616(__this, ___match, method) (( List_1_t4550 * (*) (List_1_t4550 *, Predicate_1_t9374 *, const MethodInfo*))List_1_FindAllList_m69616_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::FindIndex(System.Predicate`1<T>)
extern "C" int32_t List_1_FindIndex_m69617_gshared (List_1_t4550 * __this, Predicate_1_t9374 * ___match, const MethodInfo* method);
#define List_1_FindIndex_m69617(__this, ___match, method) (( int32_t (*) (List_1_t4550 *, Predicate_1_t9374 *, const MethodInfo*))List_1_FindIndex_m69617_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m69618_gshared (List_1_t4550 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t9374 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m69618(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t4550 *, int32_t, int32_t, Predicate_1_t9374 *, const MethodInfo*))List_1_GetIndex_m69618_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.UILineInfo>::GetEnumerator()
extern "C" Enumerator_t9369  List_1_GetEnumerator_m69619_gshared (List_1_t4550 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m69619(__this, method) (( Enumerator_t9369  (*) (List_1_t4550 *, const MethodInfo*))List_1_GetEnumerator_m69619_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.UILineInfo>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t4550 * List_1_GetRange_m69620_gshared (List_1_t4550 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m69620(__this, ___index, ___count, method) (( List_1_t4550 * (*) (List_1_t4550 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m69620_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m69621_gshared (List_1_t4550 * __this, UILineInfo_t987  ___item, const MethodInfo* method);
#define List_1_IndexOf_m69621(__this, ___item, method) (( int32_t (*) (List_1_t4550 *, UILineInfo_t987 , const MethodInfo*))List_1_IndexOf_m69621_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m69622_gshared (List_1_t4550 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m69622(__this, ___start, ___delta, method) (( void (*) (List_1_t4550 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m69622_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m69623_gshared (List_1_t4550 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m69623(__this, ___index, method) (( void (*) (List_1_t4550 *, int32_t, const MethodInfo*))List_1_CheckIndex_m69623_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m69624_gshared (List_1_t4550 * __this, int32_t ___index, UILineInfo_t987  ___item, const MethodInfo* method);
#define List_1_Insert_m69624(__this, ___index, ___item, method) (( void (*) (List_1_t4550 *, int32_t, UILineInfo_t987 , const MethodInfo*))List_1_Insert_m69624_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m69625_gshared (List_1_t4550 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m69625(__this, ___collection, method) (( void (*) (List_1_t4550 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m69625_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m69626_gshared (List_1_t4550 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m69626(__this, ___index, ___collection, method) (( void (*) (List_1_t4550 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m69626_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m69627_gshared (List_1_t4550 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m69627(__this, ___index, ___collection, method) (( void (*) (List_1_t4550 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m69627_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m69628_gshared (List_1_t4550 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m69628(__this, ___index, ___enumerable, method) (( void (*) (List_1_t4550 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m69628_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Remove(T)
extern "C" bool List_1_Remove_m69629_gshared (List_1_t4550 * __this, UILineInfo_t987  ___item, const MethodInfo* method);
#define List_1_Remove_m69629(__this, ___item, method) (( bool (*) (List_1_t4550 *, UILineInfo_t987 , const MethodInfo*))List_1_Remove_m69629_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m69630_gshared (List_1_t4550 * __this, Predicate_1_t9374 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m69630(__this, ___match, method) (( int32_t (*) (List_1_t4550 *, Predicate_1_t9374 *, const MethodInfo*))List_1_RemoveAll_m69630_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m69631_gshared (List_1_t4550 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m69631(__this, ___index, method) (( void (*) (List_1_t4550 *, int32_t, const MethodInfo*))List_1_RemoveAt_m69631_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m69632_gshared (List_1_t4550 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m69632(__this, ___index, ___count, method) (( void (*) (List_1_t4550 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m69632_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Reverse()
extern "C" void List_1_Reverse_m69633_gshared (List_1_t4550 * __this, const MethodInfo* method);
#define List_1_Reverse_m69633(__this, method) (( void (*) (List_1_t4550 *, const MethodInfo*))List_1_Reverse_m69633_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Sort()
extern "C" void List_1_Sort_m69634_gshared (List_1_t4550 * __this, const MethodInfo* method);
#define List_1_Sort_m69634(__this, method) (( void (*) (List_1_t4550 *, const MethodInfo*))List_1_Sort_m69634_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m69635_gshared (List_1_t4550 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m69635(__this, ___comparer, method) (( void (*) (List_1_t4550 *, Object_t*, const MethodInfo*))List_1_Sort_m69635_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m69636_gshared (List_1_t4550 * __this, Comparison_1_t9377 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m69636(__this, ___comparison, method) (( void (*) (List_1_t4550 *, Comparison_1_t9377 *, const MethodInfo*))List_1_Sort_m69636_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.UILineInfo>::ToArray()
extern "C" UILineInfoU5BU5D_t4664* List_1_ToArray_m69637_gshared (List_1_t4550 * __this, const MethodInfo* method);
#define List_1_ToArray_m69637(__this, method) (( UILineInfoU5BU5D_t4664* (*) (List_1_t4550 *, const MethodInfo*))List_1_ToArray_m69637_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::TrimExcess()
extern "C" void List_1_TrimExcess_m69638_gshared (List_1_t4550 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m69638(__this, method) (( void (*) (List_1_t4550 *, const MethodInfo*))List_1_TrimExcess_m69638_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m69639_gshared (List_1_t4550 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m69639(__this, method) (( int32_t (*) (List_1_t4550 *, const MethodInfo*))List_1_get_Capacity_m69639_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m69640_gshared (List_1_t4550 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m69640(__this, ___value, method) (( void (*) (List_1_t4550 *, int32_t, const MethodInfo*))List_1_set_Capacity_m69640_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::get_Count()
extern "C" int32_t List_1_get_Count_m69641_gshared (List_1_t4550 * __this, const MethodInfo* method);
#define List_1_get_Count_m69641(__this, method) (( int32_t (*) (List_1_t4550 *, const MethodInfo*))List_1_get_Count_m69641_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.UILineInfo>::get_Item(System.Int32)
extern "C" UILineInfo_t987  List_1_get_Item_m69642_gshared (List_1_t4550 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m69642(__this, ___index, method) (( UILineInfo_t987  (*) (List_1_t4550 *, int32_t, const MethodInfo*))List_1_get_Item_m69642_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m69643_gshared (List_1_t4550 * __this, int32_t ___index, UILineInfo_t987  ___value, const MethodInfo* method);
#define List_1_set_Item_m69643(__this, ___index, ___value, method) (( void (*) (List_1_t4550 *, int32_t, UILineInfo_t987 , const MethodInfo*))List_1_set_Item_m69643_gshared)(__this, ___index, ___value, method)

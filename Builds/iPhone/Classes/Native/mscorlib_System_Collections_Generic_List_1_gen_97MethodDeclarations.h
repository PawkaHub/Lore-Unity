#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.UICharInfo>
struct List_1_t2814;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<UnityEngine.UICharInfo>
struct IEnumerable_1_t7074;
// UnityEngine.UICharInfo[]
struct UICharInfoU5BU5D_t2929;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UICharInfo>
struct IEnumerator_1_t7075;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Collections.Generic.ICollection`1<UnityEngine.UICharInfo>
struct ICollection_1_t7076;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UICharInfo>
struct ReadOnlyCollection_1_t6118;
// System.Predicate`1<UnityEngine.UICharInfo>
struct Predicate_1_t6122;
// System.Collections.Generic.IComparer`1<UnityEngine.UICharInfo>
struct IComparer_1_t7077;
// System.Comparison`1<UnityEngine.UICharInfo>
struct Comparison_1_t6125;
// UnityEngine.UICharInfo
#include "UnityEngine_UnityEngine_UICharInfo.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.UICharInfo>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_104.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::.ctor()
extern "C" void List_1__ctor_m41283_gshared (List_1_t2814 * __this, const MethodInfo* method);
#define List_1__ctor_m41283(__this, method) (( void (*) (List_1_t2814 *, const MethodInfo*))List_1__ctor_m41283_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m41284_gshared (List_1_t2814 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m41284(__this, ___collection, method) (( void (*) (List_1_t2814 *, Object_t*, const MethodInfo*))List_1__ctor_m41284_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::.ctor(System.Int32)
extern "C" void List_1__ctor_m13720_gshared (List_1_t2814 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m13720(__this, ___capacity, method) (( void (*) (List_1_t2814 *, int32_t, const MethodInfo*))List_1__ctor_m13720_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m41285_gshared (List_1_t2814 * __this, UICharInfoU5BU5D_t2929* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m41285(__this, ___data, ___size, method) (( void (*) (List_1_t2814 *, UICharInfoU5BU5D_t2929*, int32_t, const MethodInfo*))List_1__ctor_m41285_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::.cctor()
extern "C" void List_1__cctor_m41286_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m41286(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m41286_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m41287_gshared (List_1_t2814 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m41287(__this, method) (( Object_t* (*) (List_1_t2814 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m41287_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m41288_gshared (List_1_t2814 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m41288(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t2814 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m41288_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m41289_gshared (List_1_t2814 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m41289(__this, method) (( Object_t * (*) (List_1_t2814 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m41289_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m41290_gshared (List_1_t2814 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m41290(__this, ___item, method) (( int32_t (*) (List_1_t2814 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m41290_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m41291_gshared (List_1_t2814 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m41291(__this, ___item, method) (( bool (*) (List_1_t2814 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m41291_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m41292_gshared (List_1_t2814 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m41292(__this, ___item, method) (( int32_t (*) (List_1_t2814 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m41292_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m41293_gshared (List_1_t2814 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m41293(__this, ___index, ___item, method) (( void (*) (List_1_t2814 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m41293_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m41294_gshared (List_1_t2814 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m41294(__this, ___item, method) (( void (*) (List_1_t2814 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m41294_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m41295_gshared (List_1_t2814 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m41295(__this, method) (( bool (*) (List_1_t2814 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m41295_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m41296_gshared (List_1_t2814 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m41296(__this, method) (( bool (*) (List_1_t2814 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m41296_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m41297_gshared (List_1_t2814 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m41297(__this, method) (( Object_t * (*) (List_1_t2814 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m41297_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m41298_gshared (List_1_t2814 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m41298(__this, method) (( bool (*) (List_1_t2814 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m41298_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m41299_gshared (List_1_t2814 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m41299(__this, method) (( bool (*) (List_1_t2814 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m41299_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m41300_gshared (List_1_t2814 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m41300(__this, ___index, method) (( Object_t * (*) (List_1_t2814 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m41300_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m41301_gshared (List_1_t2814 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m41301(__this, ___index, ___value, method) (( void (*) (List_1_t2814 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m41301_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Add(T)
extern "C" void List_1_Add_m41302_gshared (List_1_t2814 * __this, UICharInfo_t2177  ___item, const MethodInfo* method);
#define List_1_Add_m41302(__this, ___item, method) (( void (*) (List_1_t2814 *, UICharInfo_t2177 , const MethodInfo*))List_1_Add_m41302_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m41303_gshared (List_1_t2814 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m41303(__this, ___newCount, method) (( void (*) (List_1_t2814 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m41303_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m41304_gshared (List_1_t2814 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m41304(__this, ___idx, ___count, method) (( void (*) (List_1_t2814 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m41304_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m41305_gshared (List_1_t2814 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m41305(__this, ___collection, method) (( void (*) (List_1_t2814 *, Object_t*, const MethodInfo*))List_1_AddCollection_m41305_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m41306_gshared (List_1_t2814 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m41306(__this, ___enumerable, method) (( void (*) (List_1_t2814 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m41306_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m41307_gshared (List_1_t2814 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m41307(__this, ___collection, method) (( void (*) (List_1_t2814 *, Object_t*, const MethodInfo*))List_1_AddRange_m41307_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.UICharInfo>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t6118 * List_1_AsReadOnly_m41308_gshared (List_1_t2814 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m41308(__this, method) (( ReadOnlyCollection_1_t6118 * (*) (List_1_t2814 *, const MethodInfo*))List_1_AsReadOnly_m41308_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Clear()
extern "C" void List_1_Clear_m41309_gshared (List_1_t2814 * __this, const MethodInfo* method);
#define List_1_Clear_m41309(__this, method) (( void (*) (List_1_t2814 *, const MethodInfo*))List_1_Clear_m41309_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Contains(T)
extern "C" bool List_1_Contains_m41310_gshared (List_1_t2814 * __this, UICharInfo_t2177  ___item, const MethodInfo* method);
#define List_1_Contains_m41310(__this, ___item, method) (( bool (*) (List_1_t2814 *, UICharInfo_t2177 , const MethodInfo*))List_1_Contains_m41310_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m41311_gshared (List_1_t2814 * __this, UICharInfoU5BU5D_t2929* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m41311(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t2814 *, UICharInfoU5BU5D_t2929*, int32_t, const MethodInfo*))List_1_CopyTo_m41311_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Find(System.Predicate`1<T>)
extern "C" UICharInfo_t2177  List_1_Find_m41312_gshared (List_1_t2814 * __this, Predicate_1_t6122 * ___match, const MethodInfo* method);
#define List_1_Find_m41312(__this, ___match, method) (( UICharInfo_t2177  (*) (List_1_t2814 *, Predicate_1_t6122 *, const MethodInfo*))List_1_Find_m41312_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m41313_gshared (Object_t * __this /* static, unused */, Predicate_1_t6122 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m41313(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t6122 *, const MethodInfo*))List_1_CheckMatch_m41313_gshared)(__this /* static, unused */, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.UICharInfo>::FindAll(System.Predicate`1<T>)
extern "C" List_1_t2814 * List_1_FindAll_m41314_gshared (List_1_t2814 * __this, Predicate_1_t6122 * ___match, const MethodInfo* method);
#define List_1_FindAll_m41314(__this, ___match, method) (( List_1_t2814 * (*) (List_1_t2814 *, Predicate_1_t6122 *, const MethodInfo*))List_1_FindAll_m41314_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.UICharInfo>::FindAllStackBits(System.Predicate`1<T>)
extern "C" List_1_t2814 * List_1_FindAllStackBits_m41315_gshared (List_1_t2814 * __this, Predicate_1_t6122 * ___match, const MethodInfo* method);
#define List_1_FindAllStackBits_m41315(__this, ___match, method) (( List_1_t2814 * (*) (List_1_t2814 *, Predicate_1_t6122 *, const MethodInfo*))List_1_FindAllStackBits_m41315_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.UICharInfo>::FindAllList(System.Predicate`1<T>)
extern "C" List_1_t2814 * List_1_FindAllList_m41316_gshared (List_1_t2814 * __this, Predicate_1_t6122 * ___match, const MethodInfo* method);
#define List_1_FindAllList_m41316(__this, ___match, method) (( List_1_t2814 * (*) (List_1_t2814 *, Predicate_1_t6122 *, const MethodInfo*))List_1_FindAllList_m41316_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::FindIndex(System.Predicate`1<T>)
extern "C" int32_t List_1_FindIndex_m41317_gshared (List_1_t2814 * __this, Predicate_1_t6122 * ___match, const MethodInfo* method);
#define List_1_FindIndex_m41317(__this, ___match, method) (( int32_t (*) (List_1_t2814 *, Predicate_1_t6122 *, const MethodInfo*))List_1_FindIndex_m41317_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m41318_gshared (List_1_t2814 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t6122 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m41318(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t2814 *, int32_t, int32_t, Predicate_1_t6122 *, const MethodInfo*))List_1_GetIndex_m41318_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.UICharInfo>::GetEnumerator()
extern "C" Enumerator_t6117  List_1_GetEnumerator_m41319_gshared (List_1_t2814 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m41319(__this, method) (( Enumerator_t6117  (*) (List_1_t2814 *, const MethodInfo*))List_1_GetEnumerator_m41319_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.UICharInfo>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t2814 * List_1_GetRange_m41320_gshared (List_1_t2814 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m41320(__this, ___index, ___count, method) (( List_1_t2814 * (*) (List_1_t2814 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m41320_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m41321_gshared (List_1_t2814 * __this, UICharInfo_t2177  ___item, const MethodInfo* method);
#define List_1_IndexOf_m41321(__this, ___item, method) (( int32_t (*) (List_1_t2814 *, UICharInfo_t2177 , const MethodInfo*))List_1_IndexOf_m41321_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m41322_gshared (List_1_t2814 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m41322(__this, ___start, ___delta, method) (( void (*) (List_1_t2814 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m41322_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m41323_gshared (List_1_t2814 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m41323(__this, ___index, method) (( void (*) (List_1_t2814 *, int32_t, const MethodInfo*))List_1_CheckIndex_m41323_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m41324_gshared (List_1_t2814 * __this, int32_t ___index, UICharInfo_t2177  ___item, const MethodInfo* method);
#define List_1_Insert_m41324(__this, ___index, ___item, method) (( void (*) (List_1_t2814 *, int32_t, UICharInfo_t2177 , const MethodInfo*))List_1_Insert_m41324_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m41325_gshared (List_1_t2814 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m41325(__this, ___collection, method) (( void (*) (List_1_t2814 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m41325_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m41326_gshared (List_1_t2814 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m41326(__this, ___index, ___collection, method) (( void (*) (List_1_t2814 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m41326_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m41327_gshared (List_1_t2814 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m41327(__this, ___index, ___collection, method) (( void (*) (List_1_t2814 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m41327_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m41328_gshared (List_1_t2814 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m41328(__this, ___index, ___enumerable, method) (( void (*) (List_1_t2814 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m41328_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Remove(T)
extern "C" bool List_1_Remove_m41329_gshared (List_1_t2814 * __this, UICharInfo_t2177  ___item, const MethodInfo* method);
#define List_1_Remove_m41329(__this, ___item, method) (( bool (*) (List_1_t2814 *, UICharInfo_t2177 , const MethodInfo*))List_1_Remove_m41329_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m41330_gshared (List_1_t2814 * __this, Predicate_1_t6122 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m41330(__this, ___match, method) (( int32_t (*) (List_1_t2814 *, Predicate_1_t6122 *, const MethodInfo*))List_1_RemoveAll_m41330_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m41331_gshared (List_1_t2814 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m41331(__this, ___index, method) (( void (*) (List_1_t2814 *, int32_t, const MethodInfo*))List_1_RemoveAt_m41331_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m41332_gshared (List_1_t2814 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m41332(__this, ___index, ___count, method) (( void (*) (List_1_t2814 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m41332_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Reverse()
extern "C" void List_1_Reverse_m41333_gshared (List_1_t2814 * __this, const MethodInfo* method);
#define List_1_Reverse_m41333(__this, method) (( void (*) (List_1_t2814 *, const MethodInfo*))List_1_Reverse_m41333_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Sort()
extern "C" void List_1_Sort_m41334_gshared (List_1_t2814 * __this, const MethodInfo* method);
#define List_1_Sort_m41334(__this, method) (( void (*) (List_1_t2814 *, const MethodInfo*))List_1_Sort_m41334_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m41335_gshared (List_1_t2814 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m41335(__this, ___comparer, method) (( void (*) (List_1_t2814 *, Object_t*, const MethodInfo*))List_1_Sort_m41335_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m41336_gshared (List_1_t2814 * __this, Comparison_1_t6125 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m41336(__this, ___comparison, method) (( void (*) (List_1_t2814 *, Comparison_1_t6125 *, const MethodInfo*))List_1_Sort_m41336_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.UICharInfo>::ToArray()
extern "C" UICharInfoU5BU5D_t2929* List_1_ToArray_m41337_gshared (List_1_t2814 * __this, const MethodInfo* method);
#define List_1_ToArray_m41337(__this, method) (( UICharInfoU5BU5D_t2929* (*) (List_1_t2814 *, const MethodInfo*))List_1_ToArray_m41337_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::TrimExcess()
extern "C" void List_1_TrimExcess_m41338_gshared (List_1_t2814 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m41338(__this, method) (( void (*) (List_1_t2814 *, const MethodInfo*))List_1_TrimExcess_m41338_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m41339_gshared (List_1_t2814 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m41339(__this, method) (( int32_t (*) (List_1_t2814 *, const MethodInfo*))List_1_get_Capacity_m41339_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m41340_gshared (List_1_t2814 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m41340(__this, ___value, method) (( void (*) (List_1_t2814 *, int32_t, const MethodInfo*))List_1_set_Capacity_m41340_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::get_Count()
extern "C" int32_t List_1_get_Count_m41341_gshared (List_1_t2814 * __this, const MethodInfo* method);
#define List_1_get_Count_m41341(__this, method) (( int32_t (*) (List_1_t2814 *, const MethodInfo*))List_1_get_Count_m41341_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.UICharInfo>::get_Item(System.Int32)
extern "C" UICharInfo_t2177  List_1_get_Item_m41342_gshared (List_1_t2814 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m41342(__this, ___index, method) (( UICharInfo_t2177  (*) (List_1_t2814 *, int32_t, const MethodInfo*))List_1_get_Item_m41342_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m41343_gshared (List_1_t2814 * __this, int32_t ___index, UICharInfo_t2177  ___value, const MethodInfo* method);
#define List_1_set_Item_m41343(__this, ___index, ___value, method) (( void (*) (List_1_t2814 *, int32_t, UICharInfo_t2177 , const MethodInfo*))List_1_set_Item_m41343_gshared)(__this, ___index, ___value, method)

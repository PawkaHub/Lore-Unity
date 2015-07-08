#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.UICharInfo>
struct List_1_t4787;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<UnityEngine.UICharInfo>
struct IEnumerable_1_t10955;
// UnityEngine.UICharInfo[]
struct UICharInfoU5BU5D_t4901;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UICharInfo>
struct IEnumerator_1_t10956;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Collections.Generic.ICollection`1<UnityEngine.UICharInfo>
struct ICollection_1_t10957;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UICharInfo>
struct ReadOnlyCollection_1_t9643;
// System.Predicate`1<UnityEngine.UICharInfo>
struct Predicate_1_t9647;
// System.Collections.Generic.IComparer`1<UnityEngine.UICharInfo>
struct IComparer_1_t10958;
// System.Comparison`1<UnityEngine.UICharInfo>
struct Comparison_1_t9650;
// UnityEngine.UICharInfo
#include "UnityEngine_UnityEngine_UICharInfo.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.UICharInfo>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_148.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::.ctor()
extern "C" void List_1__ctor_m70342_gshared (List_1_t4787 * __this, const MethodInfo* method);
#define List_1__ctor_m70342(__this, method) (( void (*) (List_1_t4787 *, const MethodInfo*))List_1__ctor_m70342_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m70343_gshared (List_1_t4787 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m70343(__this, ___collection, method) (( void (*) (List_1_t4787 *, Object_t*, const MethodInfo*))List_1__ctor_m70343_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::.ctor(System.Int32)
extern "C" void List_1__ctor_m18012_gshared (List_1_t4787 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m18012(__this, ___capacity, method) (( void (*) (List_1_t4787 *, int32_t, const MethodInfo*))List_1__ctor_m18012_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m70344_gshared (List_1_t4787 * __this, UICharInfoU5BU5D_t4901* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m70344(__this, ___data, ___size, method) (( void (*) (List_1_t4787 *, UICharInfoU5BU5D_t4901*, int32_t, const MethodInfo*))List_1__ctor_m70344_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::.cctor()
extern "C" void List_1__cctor_m70345_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m70345(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m70345_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m70346_gshared (List_1_t4787 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m70346(__this, method) (( Object_t* (*) (List_1_t4787 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m70346_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m70347_gshared (List_1_t4787 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m70347(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t4787 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m70347_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m70348_gshared (List_1_t4787 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m70348(__this, method) (( Object_t * (*) (List_1_t4787 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m70348_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m70349_gshared (List_1_t4787 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m70349(__this, ___item, method) (( int32_t (*) (List_1_t4787 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m70349_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m70350_gshared (List_1_t4787 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m70350(__this, ___item, method) (( bool (*) (List_1_t4787 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m70350_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m70351_gshared (List_1_t4787 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m70351(__this, ___item, method) (( int32_t (*) (List_1_t4787 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m70351_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m70352_gshared (List_1_t4787 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m70352(__this, ___index, ___item, method) (( void (*) (List_1_t4787 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m70352_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m70353_gshared (List_1_t4787 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m70353(__this, ___item, method) (( void (*) (List_1_t4787 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m70353_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m70354_gshared (List_1_t4787 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m70354(__this, method) (( bool (*) (List_1_t4787 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m70354_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m70355_gshared (List_1_t4787 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m70355(__this, method) (( bool (*) (List_1_t4787 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m70355_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m70356_gshared (List_1_t4787 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m70356(__this, method) (( Object_t * (*) (List_1_t4787 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m70356_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m70357_gshared (List_1_t4787 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m70357(__this, method) (( bool (*) (List_1_t4787 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m70357_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m70358_gshared (List_1_t4787 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m70358(__this, method) (( bool (*) (List_1_t4787 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m70358_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m70359_gshared (List_1_t4787 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m70359(__this, ___index, method) (( Object_t * (*) (List_1_t4787 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m70359_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m70360_gshared (List_1_t4787 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m70360(__this, ___index, ___value, method) (( void (*) (List_1_t4787 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m70360_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Add(T)
extern "C" void List_1_Add_m70361_gshared (List_1_t4787 * __this, UICharInfo_t798  ___item, const MethodInfo* method);
#define List_1_Add_m70361(__this, ___item, method) (( void (*) (List_1_t4787 *, UICharInfo_t798 , const MethodInfo*))List_1_Add_m70361_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m70362_gshared (List_1_t4787 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m70362(__this, ___newCount, method) (( void (*) (List_1_t4787 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m70362_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m70363_gshared (List_1_t4787 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m70363(__this, ___idx, ___count, method) (( void (*) (List_1_t4787 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m70363_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m70364_gshared (List_1_t4787 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m70364(__this, ___collection, method) (( void (*) (List_1_t4787 *, Object_t*, const MethodInfo*))List_1_AddCollection_m70364_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m70365_gshared (List_1_t4787 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m70365(__this, ___enumerable, method) (( void (*) (List_1_t4787 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m70365_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m70366_gshared (List_1_t4787 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m70366(__this, ___collection, method) (( void (*) (List_1_t4787 *, Object_t*, const MethodInfo*))List_1_AddRange_m70366_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.UICharInfo>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t9643 * List_1_AsReadOnly_m70367_gshared (List_1_t4787 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m70367(__this, method) (( ReadOnlyCollection_1_t9643 * (*) (List_1_t4787 *, const MethodInfo*))List_1_AsReadOnly_m70367_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Clear()
extern "C" void List_1_Clear_m70368_gshared (List_1_t4787 * __this, const MethodInfo* method);
#define List_1_Clear_m70368(__this, method) (( void (*) (List_1_t4787 *, const MethodInfo*))List_1_Clear_m70368_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Contains(T)
extern "C" bool List_1_Contains_m70369_gshared (List_1_t4787 * __this, UICharInfo_t798  ___item, const MethodInfo* method);
#define List_1_Contains_m70369(__this, ___item, method) (( bool (*) (List_1_t4787 *, UICharInfo_t798 , const MethodInfo*))List_1_Contains_m70369_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m70370_gshared (List_1_t4787 * __this, UICharInfoU5BU5D_t4901* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m70370(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t4787 *, UICharInfoU5BU5D_t4901*, int32_t, const MethodInfo*))List_1_CopyTo_m70370_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Find(System.Predicate`1<T>)
extern "C" UICharInfo_t798  List_1_Find_m70371_gshared (List_1_t4787 * __this, Predicate_1_t9647 * ___match, const MethodInfo* method);
#define List_1_Find_m70371(__this, ___match, method) (( UICharInfo_t798  (*) (List_1_t4787 *, Predicate_1_t9647 *, const MethodInfo*))List_1_Find_m70371_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m70372_gshared (Object_t * __this /* static, unused */, Predicate_1_t9647 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m70372(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t9647 *, const MethodInfo*))List_1_CheckMatch_m70372_gshared)(__this /* static, unused */, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.UICharInfo>::FindAll(System.Predicate`1<T>)
extern "C" List_1_t4787 * List_1_FindAll_m70373_gshared (List_1_t4787 * __this, Predicate_1_t9647 * ___match, const MethodInfo* method);
#define List_1_FindAll_m70373(__this, ___match, method) (( List_1_t4787 * (*) (List_1_t4787 *, Predicate_1_t9647 *, const MethodInfo*))List_1_FindAll_m70373_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.UICharInfo>::FindAllStackBits(System.Predicate`1<T>)
extern "C" List_1_t4787 * List_1_FindAllStackBits_m70374_gshared (List_1_t4787 * __this, Predicate_1_t9647 * ___match, const MethodInfo* method);
#define List_1_FindAllStackBits_m70374(__this, ___match, method) (( List_1_t4787 * (*) (List_1_t4787 *, Predicate_1_t9647 *, const MethodInfo*))List_1_FindAllStackBits_m70374_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.UICharInfo>::FindAllList(System.Predicate`1<T>)
extern "C" List_1_t4787 * List_1_FindAllList_m70375_gshared (List_1_t4787 * __this, Predicate_1_t9647 * ___match, const MethodInfo* method);
#define List_1_FindAllList_m70375(__this, ___match, method) (( List_1_t4787 * (*) (List_1_t4787 *, Predicate_1_t9647 *, const MethodInfo*))List_1_FindAllList_m70375_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::FindIndex(System.Predicate`1<T>)
extern "C" int32_t List_1_FindIndex_m70376_gshared (List_1_t4787 * __this, Predicate_1_t9647 * ___match, const MethodInfo* method);
#define List_1_FindIndex_m70376(__this, ___match, method) (( int32_t (*) (List_1_t4787 *, Predicate_1_t9647 *, const MethodInfo*))List_1_FindIndex_m70376_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m70377_gshared (List_1_t4787 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t9647 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m70377(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t4787 *, int32_t, int32_t, Predicate_1_t9647 *, const MethodInfo*))List_1_GetIndex_m70377_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.UICharInfo>::GetEnumerator()
extern "C" Enumerator_t9642  List_1_GetEnumerator_m70378_gshared (List_1_t4787 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m70378(__this, method) (( Enumerator_t9642  (*) (List_1_t4787 *, const MethodInfo*))List_1_GetEnumerator_m70378_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.UICharInfo>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t4787 * List_1_GetRange_m70379_gshared (List_1_t4787 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m70379(__this, ___index, ___count, method) (( List_1_t4787 * (*) (List_1_t4787 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m70379_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m70380_gshared (List_1_t4787 * __this, UICharInfo_t798  ___item, const MethodInfo* method);
#define List_1_IndexOf_m70380(__this, ___item, method) (( int32_t (*) (List_1_t4787 *, UICharInfo_t798 , const MethodInfo*))List_1_IndexOf_m70380_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m70381_gshared (List_1_t4787 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m70381(__this, ___start, ___delta, method) (( void (*) (List_1_t4787 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m70381_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m70382_gshared (List_1_t4787 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m70382(__this, ___index, method) (( void (*) (List_1_t4787 *, int32_t, const MethodInfo*))List_1_CheckIndex_m70382_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m70383_gshared (List_1_t4787 * __this, int32_t ___index, UICharInfo_t798  ___item, const MethodInfo* method);
#define List_1_Insert_m70383(__this, ___index, ___item, method) (( void (*) (List_1_t4787 *, int32_t, UICharInfo_t798 , const MethodInfo*))List_1_Insert_m70383_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m70384_gshared (List_1_t4787 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m70384(__this, ___collection, method) (( void (*) (List_1_t4787 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m70384_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m70385_gshared (List_1_t4787 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m70385(__this, ___index, ___collection, method) (( void (*) (List_1_t4787 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m70385_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m70386_gshared (List_1_t4787 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m70386(__this, ___index, ___collection, method) (( void (*) (List_1_t4787 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m70386_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m70387_gshared (List_1_t4787 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m70387(__this, ___index, ___enumerable, method) (( void (*) (List_1_t4787 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m70387_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Remove(T)
extern "C" bool List_1_Remove_m70388_gshared (List_1_t4787 * __this, UICharInfo_t798  ___item, const MethodInfo* method);
#define List_1_Remove_m70388(__this, ___item, method) (( bool (*) (List_1_t4787 *, UICharInfo_t798 , const MethodInfo*))List_1_Remove_m70388_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m70389_gshared (List_1_t4787 * __this, Predicate_1_t9647 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m70389(__this, ___match, method) (( int32_t (*) (List_1_t4787 *, Predicate_1_t9647 *, const MethodInfo*))List_1_RemoveAll_m70389_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m70390_gshared (List_1_t4787 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m70390(__this, ___index, method) (( void (*) (List_1_t4787 *, int32_t, const MethodInfo*))List_1_RemoveAt_m70390_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m70391_gshared (List_1_t4787 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m70391(__this, ___index, ___count, method) (( void (*) (List_1_t4787 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m70391_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Reverse()
extern "C" void List_1_Reverse_m70392_gshared (List_1_t4787 * __this, const MethodInfo* method);
#define List_1_Reverse_m70392(__this, method) (( void (*) (List_1_t4787 *, const MethodInfo*))List_1_Reverse_m70392_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Sort()
extern "C" void List_1_Sort_m70393_gshared (List_1_t4787 * __this, const MethodInfo* method);
#define List_1_Sort_m70393(__this, method) (( void (*) (List_1_t4787 *, const MethodInfo*))List_1_Sort_m70393_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m70394_gshared (List_1_t4787 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m70394(__this, ___comparer, method) (( void (*) (List_1_t4787 *, Object_t*, const MethodInfo*))List_1_Sort_m70394_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m70395_gshared (List_1_t4787 * __this, Comparison_1_t9650 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m70395(__this, ___comparison, method) (( void (*) (List_1_t4787 *, Comparison_1_t9650 *, const MethodInfo*))List_1_Sort_m70395_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.UICharInfo>::ToArray()
extern "C" UICharInfoU5BU5D_t4901* List_1_ToArray_m70396_gshared (List_1_t4787 * __this, const MethodInfo* method);
#define List_1_ToArray_m70396(__this, method) (( UICharInfoU5BU5D_t4901* (*) (List_1_t4787 *, const MethodInfo*))List_1_ToArray_m70396_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::TrimExcess()
extern "C" void List_1_TrimExcess_m70397_gshared (List_1_t4787 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m70397(__this, method) (( void (*) (List_1_t4787 *, const MethodInfo*))List_1_TrimExcess_m70397_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m70398_gshared (List_1_t4787 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m70398(__this, method) (( int32_t (*) (List_1_t4787 *, const MethodInfo*))List_1_get_Capacity_m70398_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m70399_gshared (List_1_t4787 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m70399(__this, ___value, method) (( void (*) (List_1_t4787 *, int32_t, const MethodInfo*))List_1_set_Capacity_m70399_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::get_Count()
extern "C" int32_t List_1_get_Count_m70400_gshared (List_1_t4787 * __this, const MethodInfo* method);
#define List_1_get_Count_m70400(__this, method) (( int32_t (*) (List_1_t4787 *, const MethodInfo*))List_1_get_Count_m70400_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.UICharInfo>::get_Item(System.Int32)
extern "C" UICharInfo_t798  List_1_get_Item_m70401_gshared (List_1_t4787 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m70401(__this, ___index, method) (( UICharInfo_t798  (*) (List_1_t4787 *, int32_t, const MethodInfo*))List_1_get_Item_m70401_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m70402_gshared (List_1_t4787 * __this, int32_t ___index, UICharInfo_t798  ___value, const MethodInfo* method);
#define List_1_set_Item_m70402(__this, ___index, ___value, method) (( void (*) (List_1_t4787 *, int32_t, UICharInfo_t798 , const MethodInfo*))List_1_set_Item_m70402_gshared)(__this, ___index, ___value, method)

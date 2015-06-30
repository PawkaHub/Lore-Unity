#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>
struct List_1_t2001;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<UnityEngine.EventSystems.RaycastResult>
struct IEnumerable_1_t6896;
// UnityEngine.EventSystems.RaycastResult[]
struct RaycastResultU5BU5D_t5819;
// System.Collections.Generic.IEnumerator`1<UnityEngine.EventSystems.RaycastResult>
struct IEnumerator_1_t6897;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.RaycastResult>
struct ICollection_1_t6898;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.RaycastResult>
struct ReadOnlyCollection_1_t5823;
// System.Predicate`1<UnityEngine.EventSystems.RaycastResult>
struct Predicate_1_t5827;
// System.Collections.Generic.IComparer`1<UnityEngine.EventSystems.RaycastResult>
struct IComparer_1_t6899;
// System.Comparison`1<UnityEngine.EventSystems.RaycastResult>
struct Comparison_1_t1967;
// UnityEngine.EventSystems.RaycastResult
#include "UnityEngine_UI_UnityEngine_EventSystems_RaycastResult.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.EventSystems.RaycastResult>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_83.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::.ctor()
extern "C" void List_1__ctor_m9293_gshared (List_1_t2001 * __this, const MethodInfo* method);
#define List_1__ctor_m9293(__this, method) (( void (*) (List_1_t2001 *, const MethodInfo*))List_1__ctor_m9293_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m36536_gshared (List_1_t2001 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m36536(__this, ___collection, method) (( void (*) (List_1_t2001 *, Object_t*, const MethodInfo*))List_1__ctor_m36536_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::.ctor(System.Int32)
extern "C" void List_1__ctor_m36537_gshared (List_1_t2001 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m36537(__this, ___capacity, method) (( void (*) (List_1_t2001 *, int32_t, const MethodInfo*))List_1__ctor_m36537_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m36538_gshared (List_1_t2001 * __this, RaycastResultU5BU5D_t5819* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m36538(__this, ___data, ___size, method) (( void (*) (List_1_t2001 *, RaycastResultU5BU5D_t5819*, int32_t, const MethodInfo*))List_1__ctor_m36538_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::.cctor()
extern "C" void List_1__cctor_m36539_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m36539(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m36539_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m36540_gshared (List_1_t2001 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m36540(__this, method) (( Object_t* (*) (List_1_t2001 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m36540_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m36541_gshared (List_1_t2001 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m36541(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t2001 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m36541_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m36542_gshared (List_1_t2001 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m36542(__this, method) (( Object_t * (*) (List_1_t2001 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m36542_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m36543_gshared (List_1_t2001 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m36543(__this, ___item, method) (( int32_t (*) (List_1_t2001 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m36543_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m36544_gshared (List_1_t2001 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m36544(__this, ___item, method) (( bool (*) (List_1_t2001 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m36544_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m36545_gshared (List_1_t2001 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m36545(__this, ___item, method) (( int32_t (*) (List_1_t2001 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m36545_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m36546_gshared (List_1_t2001 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m36546(__this, ___index, ___item, method) (( void (*) (List_1_t2001 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m36546_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m36547_gshared (List_1_t2001 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m36547(__this, ___item, method) (( void (*) (List_1_t2001 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m36547_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m36548_gshared (List_1_t2001 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m36548(__this, method) (( bool (*) (List_1_t2001 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m36548_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m36549_gshared (List_1_t2001 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m36549(__this, method) (( bool (*) (List_1_t2001 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m36549_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m36550_gshared (List_1_t2001 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m36550(__this, method) (( Object_t * (*) (List_1_t2001 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m36550_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m36551_gshared (List_1_t2001 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m36551(__this, method) (( bool (*) (List_1_t2001 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m36551_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m36552_gshared (List_1_t2001 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m36552(__this, method) (( bool (*) (List_1_t2001 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m36552_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m36553_gshared (List_1_t2001 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m36553(__this, ___index, method) (( Object_t * (*) (List_1_t2001 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m36553_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m36554_gshared (List_1_t2001 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m36554(__this, ___index, ___value, method) (( void (*) (List_1_t2001 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m36554_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Add(T)
extern "C" void List_1_Add_m36555_gshared (List_1_t2001 * __this, RaycastResult_t1997  ___item, const MethodInfo* method);
#define List_1_Add_m36555(__this, ___item, method) (( void (*) (List_1_t2001 *, RaycastResult_t1997 , const MethodInfo*))List_1_Add_m36555_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m36556_gshared (List_1_t2001 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m36556(__this, ___newCount, method) (( void (*) (List_1_t2001 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m36556_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m36557_gshared (List_1_t2001 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m36557(__this, ___idx, ___count, method) (( void (*) (List_1_t2001 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m36557_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m36558_gshared (List_1_t2001 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m36558(__this, ___collection, method) (( void (*) (List_1_t2001 *, Object_t*, const MethodInfo*))List_1_AddCollection_m36558_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m36559_gshared (List_1_t2001 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m36559(__this, ___enumerable, method) (( void (*) (List_1_t2001 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m36559_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m36560_gshared (List_1_t2001 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m36560(__this, ___collection, method) (( void (*) (List_1_t2001 *, Object_t*, const MethodInfo*))List_1_AddRange_m36560_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t5823 * List_1_AsReadOnly_m36561_gshared (List_1_t2001 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m36561(__this, method) (( ReadOnlyCollection_1_t5823 * (*) (List_1_t2001 *, const MethodInfo*))List_1_AsReadOnly_m36561_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Clear()
extern "C" void List_1_Clear_m36562_gshared (List_1_t2001 * __this, const MethodInfo* method);
#define List_1_Clear_m36562(__this, method) (( void (*) (List_1_t2001 *, const MethodInfo*))List_1_Clear_m36562_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Contains(T)
extern "C" bool List_1_Contains_m36563_gshared (List_1_t2001 * __this, RaycastResult_t1997  ___item, const MethodInfo* method);
#define List_1_Contains_m36563(__this, ___item, method) (( bool (*) (List_1_t2001 *, RaycastResult_t1997 , const MethodInfo*))List_1_Contains_m36563_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m36564_gshared (List_1_t2001 * __this, RaycastResultU5BU5D_t5819* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m36564(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t2001 *, RaycastResultU5BU5D_t5819*, int32_t, const MethodInfo*))List_1_CopyTo_m36564_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Find(System.Predicate`1<T>)
extern "C" RaycastResult_t1997  List_1_Find_m36565_gshared (List_1_t2001 * __this, Predicate_1_t5827 * ___match, const MethodInfo* method);
#define List_1_Find_m36565(__this, ___match, method) (( RaycastResult_t1997  (*) (List_1_t2001 *, Predicate_1_t5827 *, const MethodInfo*))List_1_Find_m36565_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m36566_gshared (Object_t * __this /* static, unused */, Predicate_1_t5827 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m36566(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t5827 *, const MethodInfo*))List_1_CheckMatch_m36566_gshared)(__this /* static, unused */, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::FindAll(System.Predicate`1<T>)
extern "C" List_1_t2001 * List_1_FindAll_m36567_gshared (List_1_t2001 * __this, Predicate_1_t5827 * ___match, const MethodInfo* method);
#define List_1_FindAll_m36567(__this, ___match, method) (( List_1_t2001 * (*) (List_1_t2001 *, Predicate_1_t5827 *, const MethodInfo*))List_1_FindAll_m36567_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::FindAllStackBits(System.Predicate`1<T>)
extern "C" List_1_t2001 * List_1_FindAllStackBits_m36568_gshared (List_1_t2001 * __this, Predicate_1_t5827 * ___match, const MethodInfo* method);
#define List_1_FindAllStackBits_m36568(__this, ___match, method) (( List_1_t2001 * (*) (List_1_t2001 *, Predicate_1_t5827 *, const MethodInfo*))List_1_FindAllStackBits_m36568_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::FindAllList(System.Predicate`1<T>)
extern "C" List_1_t2001 * List_1_FindAllList_m36569_gshared (List_1_t2001 * __this, Predicate_1_t5827 * ___match, const MethodInfo* method);
#define List_1_FindAllList_m36569(__this, ___match, method) (( List_1_t2001 * (*) (List_1_t2001 *, Predicate_1_t5827 *, const MethodInfo*))List_1_FindAllList_m36569_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::FindIndex(System.Predicate`1<T>)
extern "C" int32_t List_1_FindIndex_m36570_gshared (List_1_t2001 * __this, Predicate_1_t5827 * ___match, const MethodInfo* method);
#define List_1_FindIndex_m36570(__this, ___match, method) (( int32_t (*) (List_1_t2001 *, Predicate_1_t5827 *, const MethodInfo*))List_1_FindIndex_m36570_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m36571_gshared (List_1_t2001 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t5827 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m36571(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t2001 *, int32_t, int32_t, Predicate_1_t5827 *, const MethodInfo*))List_1_GetIndex_m36571_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::GetEnumerator()
extern "C" Enumerator_t5821  List_1_GetEnumerator_m36572_gshared (List_1_t2001 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m36572(__this, method) (( Enumerator_t5821  (*) (List_1_t2001 *, const MethodInfo*))List_1_GetEnumerator_m36572_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t2001 * List_1_GetRange_m36573_gshared (List_1_t2001 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m36573(__this, ___index, ___count, method) (( List_1_t2001 * (*) (List_1_t2001 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m36573_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m36574_gshared (List_1_t2001 * __this, RaycastResult_t1997  ___item, const MethodInfo* method);
#define List_1_IndexOf_m36574(__this, ___item, method) (( int32_t (*) (List_1_t2001 *, RaycastResult_t1997 , const MethodInfo*))List_1_IndexOf_m36574_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m36575_gshared (List_1_t2001 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m36575(__this, ___start, ___delta, method) (( void (*) (List_1_t2001 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m36575_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m36576_gshared (List_1_t2001 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m36576(__this, ___index, method) (( void (*) (List_1_t2001 *, int32_t, const MethodInfo*))List_1_CheckIndex_m36576_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m36577_gshared (List_1_t2001 * __this, int32_t ___index, RaycastResult_t1997  ___item, const MethodInfo* method);
#define List_1_Insert_m36577(__this, ___index, ___item, method) (( void (*) (List_1_t2001 *, int32_t, RaycastResult_t1997 , const MethodInfo*))List_1_Insert_m36577_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m36578_gshared (List_1_t2001 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m36578(__this, ___collection, method) (( void (*) (List_1_t2001 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m36578_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m36579_gshared (List_1_t2001 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m36579(__this, ___index, ___collection, method) (( void (*) (List_1_t2001 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m36579_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m36580_gshared (List_1_t2001 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m36580(__this, ___index, ___collection, method) (( void (*) (List_1_t2001 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m36580_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m36581_gshared (List_1_t2001 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m36581(__this, ___index, ___enumerable, method) (( void (*) (List_1_t2001 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m36581_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Remove(T)
extern "C" bool List_1_Remove_m36582_gshared (List_1_t2001 * __this, RaycastResult_t1997  ___item, const MethodInfo* method);
#define List_1_Remove_m36582(__this, ___item, method) (( bool (*) (List_1_t2001 *, RaycastResult_t1997 , const MethodInfo*))List_1_Remove_m36582_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m36583_gshared (List_1_t2001 * __this, Predicate_1_t5827 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m36583(__this, ___match, method) (( int32_t (*) (List_1_t2001 *, Predicate_1_t5827 *, const MethodInfo*))List_1_RemoveAll_m36583_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m36584_gshared (List_1_t2001 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m36584(__this, ___index, method) (( void (*) (List_1_t2001 *, int32_t, const MethodInfo*))List_1_RemoveAt_m36584_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m36585_gshared (List_1_t2001 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m36585(__this, ___index, ___count, method) (( void (*) (List_1_t2001 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m36585_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Reverse()
extern "C" void List_1_Reverse_m36586_gshared (List_1_t2001 * __this, const MethodInfo* method);
#define List_1_Reverse_m36586(__this, method) (( void (*) (List_1_t2001 *, const MethodInfo*))List_1_Reverse_m36586_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Sort()
extern "C" void List_1_Sort_m36587_gshared (List_1_t2001 * __this, const MethodInfo* method);
#define List_1_Sort_m36587(__this, method) (( void (*) (List_1_t2001 *, const MethodInfo*))List_1_Sort_m36587_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m36588_gshared (List_1_t2001 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m36588(__this, ___comparer, method) (( void (*) (List_1_t2001 *, Object_t*, const MethodInfo*))List_1_Sort_m36588_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m9260_gshared (List_1_t2001 * __this, Comparison_1_t1967 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m9260(__this, ___comparison, method) (( void (*) (List_1_t2001 *, Comparison_1_t1967 *, const MethodInfo*))List_1_Sort_m9260_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::ToArray()
extern "C" RaycastResultU5BU5D_t5819* List_1_ToArray_m36589_gshared (List_1_t2001 * __this, const MethodInfo* method);
#define List_1_ToArray_m36589(__this, method) (( RaycastResultU5BU5D_t5819* (*) (List_1_t2001 *, const MethodInfo*))List_1_ToArray_m36589_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::TrimExcess()
extern "C" void List_1_TrimExcess_m36590_gshared (List_1_t2001 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m36590(__this, method) (( void (*) (List_1_t2001 *, const MethodInfo*))List_1_TrimExcess_m36590_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m36591_gshared (List_1_t2001 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m36591(__this, method) (( int32_t (*) (List_1_t2001 *, const MethodInfo*))List_1_get_Capacity_m36591_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m36592_gshared (List_1_t2001 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m36592(__this, ___value, method) (( void (*) (List_1_t2001 *, int32_t, const MethodInfo*))List_1_set_Capacity_m36592_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::get_Count()
extern "C" int32_t List_1_get_Count_m36593_gshared (List_1_t2001 * __this, const MethodInfo* method);
#define List_1_get_Count_m36593(__this, method) (( int32_t (*) (List_1_t2001 *, const MethodInfo*))List_1_get_Count_m36593_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::get_Item(System.Int32)
extern "C" RaycastResult_t1997  List_1_get_Item_m36594_gshared (List_1_t2001 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m36594(__this, ___index, method) (( RaycastResult_t1997  (*) (List_1_t2001 *, int32_t, const MethodInfo*))List_1_get_Item_m36594_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m36595_gshared (List_1_t2001 * __this, int32_t ___index, RaycastResult_t1997  ___value, const MethodInfo* method);
#define List_1_set_Item_m36595(__this, ___index, ___value, method) (( void (*) (List_1_t2001 *, int32_t, RaycastResult_t1997 , const MethodInfo*))List_1_set_Item_m36595_gshared)(__this, ___index, ___value, method)

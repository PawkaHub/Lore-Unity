#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.UILineInfo>
struct List_1_t4788;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<UnityEngine.UILineInfo>
struct IEnumerable_1_t10959;
// UnityEngine.UILineInfo[]
struct UILineInfoU5BU5D_t4902;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UILineInfo>
struct IEnumerator_1_t10960;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Collections.Generic.ICollection`1<UnityEngine.UILineInfo>
struct ICollection_1_t801;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UILineInfo>
struct ReadOnlyCollection_1_t9652;
// System.Predicate`1<UnityEngine.UILineInfo>
struct Predicate_1_t9656;
// System.Collections.Generic.IComparer`1<UnityEngine.UILineInfo>
struct IComparer_1_t10961;
// System.Comparison`1<UnityEngine.UILineInfo>
struct Comparison_1_t9659;
// UnityEngine.UILineInfo
#include "UnityEngine_UnityEngine_UILineInfo.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.UILineInfo>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_149.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::.ctor()
extern "C" void List_1__ctor_m70498_gshared (List_1_t4788 * __this, const MethodInfo* method);
#define List_1__ctor_m70498(__this, method) (( void (*) (List_1_t4788 *, const MethodInfo*))List_1__ctor_m70498_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m70499_gshared (List_1_t4788 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m70499(__this, ___collection, method) (( void (*) (List_1_t4788 *, Object_t*, const MethodInfo*))List_1__ctor_m70499_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::.ctor(System.Int32)
extern "C" void List_1__ctor_m18013_gshared (List_1_t4788 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m18013(__this, ___capacity, method) (( void (*) (List_1_t4788 *, int32_t, const MethodInfo*))List_1__ctor_m18013_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m70500_gshared (List_1_t4788 * __this, UILineInfoU5BU5D_t4902* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m70500(__this, ___data, ___size, method) (( void (*) (List_1_t4788 *, UILineInfoU5BU5D_t4902*, int32_t, const MethodInfo*))List_1__ctor_m70500_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::.cctor()
extern "C" void List_1__cctor_m70501_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m70501(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m70501_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m70502_gshared (List_1_t4788 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m70502(__this, method) (( Object_t* (*) (List_1_t4788 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m70502_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m70503_gshared (List_1_t4788 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m70503(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t4788 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m70503_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m70504_gshared (List_1_t4788 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m70504(__this, method) (( Object_t * (*) (List_1_t4788 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m70504_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m70505_gshared (List_1_t4788 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m70505(__this, ___item, method) (( int32_t (*) (List_1_t4788 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m70505_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m70506_gshared (List_1_t4788 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m70506(__this, ___item, method) (( bool (*) (List_1_t4788 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m70506_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m70507_gshared (List_1_t4788 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m70507(__this, ___item, method) (( int32_t (*) (List_1_t4788 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m70507_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m70508_gshared (List_1_t4788 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m70508(__this, ___index, ___item, method) (( void (*) (List_1_t4788 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m70508_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m70509_gshared (List_1_t4788 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m70509(__this, ___item, method) (( void (*) (List_1_t4788 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m70509_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m70510_gshared (List_1_t4788 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m70510(__this, method) (( bool (*) (List_1_t4788 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m70510_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m70511_gshared (List_1_t4788 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m70511(__this, method) (( bool (*) (List_1_t4788 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m70511_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m70512_gshared (List_1_t4788 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m70512(__this, method) (( Object_t * (*) (List_1_t4788 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m70512_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m70513_gshared (List_1_t4788 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m70513(__this, method) (( bool (*) (List_1_t4788 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m70513_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m70514_gshared (List_1_t4788 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m70514(__this, method) (( bool (*) (List_1_t4788 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m70514_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m70515_gshared (List_1_t4788 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m70515(__this, ___index, method) (( Object_t * (*) (List_1_t4788 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m70515_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m70516_gshared (List_1_t4788 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m70516(__this, ___index, ___value, method) (( void (*) (List_1_t4788 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m70516_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Add(T)
extern "C" void List_1_Add_m70517_gshared (List_1_t4788 * __this, UILineInfo_t796  ___item, const MethodInfo* method);
#define List_1_Add_m70517(__this, ___item, method) (( void (*) (List_1_t4788 *, UILineInfo_t796 , const MethodInfo*))List_1_Add_m70517_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m70518_gshared (List_1_t4788 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m70518(__this, ___newCount, method) (( void (*) (List_1_t4788 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m70518_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m70519_gshared (List_1_t4788 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m70519(__this, ___idx, ___count, method) (( void (*) (List_1_t4788 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m70519_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m70520_gshared (List_1_t4788 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m70520(__this, ___collection, method) (( void (*) (List_1_t4788 *, Object_t*, const MethodInfo*))List_1_AddCollection_m70520_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m70521_gshared (List_1_t4788 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m70521(__this, ___enumerable, method) (( void (*) (List_1_t4788 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m70521_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m70522_gshared (List_1_t4788 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m70522(__this, ___collection, method) (( void (*) (List_1_t4788 *, Object_t*, const MethodInfo*))List_1_AddRange_m70522_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.UILineInfo>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t9652 * List_1_AsReadOnly_m70523_gshared (List_1_t4788 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m70523(__this, method) (( ReadOnlyCollection_1_t9652 * (*) (List_1_t4788 *, const MethodInfo*))List_1_AsReadOnly_m70523_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Clear()
extern "C" void List_1_Clear_m70524_gshared (List_1_t4788 * __this, const MethodInfo* method);
#define List_1_Clear_m70524(__this, method) (( void (*) (List_1_t4788 *, const MethodInfo*))List_1_Clear_m70524_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Contains(T)
extern "C" bool List_1_Contains_m70525_gshared (List_1_t4788 * __this, UILineInfo_t796  ___item, const MethodInfo* method);
#define List_1_Contains_m70525(__this, ___item, method) (( bool (*) (List_1_t4788 *, UILineInfo_t796 , const MethodInfo*))List_1_Contains_m70525_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m70526_gshared (List_1_t4788 * __this, UILineInfoU5BU5D_t4902* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m70526(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t4788 *, UILineInfoU5BU5D_t4902*, int32_t, const MethodInfo*))List_1_CopyTo_m70526_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Find(System.Predicate`1<T>)
extern "C" UILineInfo_t796  List_1_Find_m70527_gshared (List_1_t4788 * __this, Predicate_1_t9656 * ___match, const MethodInfo* method);
#define List_1_Find_m70527(__this, ___match, method) (( UILineInfo_t796  (*) (List_1_t4788 *, Predicate_1_t9656 *, const MethodInfo*))List_1_Find_m70527_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m70528_gshared (Object_t * __this /* static, unused */, Predicate_1_t9656 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m70528(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t9656 *, const MethodInfo*))List_1_CheckMatch_m70528_gshared)(__this /* static, unused */, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.UILineInfo>::FindAll(System.Predicate`1<T>)
extern "C" List_1_t4788 * List_1_FindAll_m70529_gshared (List_1_t4788 * __this, Predicate_1_t9656 * ___match, const MethodInfo* method);
#define List_1_FindAll_m70529(__this, ___match, method) (( List_1_t4788 * (*) (List_1_t4788 *, Predicate_1_t9656 *, const MethodInfo*))List_1_FindAll_m70529_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.UILineInfo>::FindAllStackBits(System.Predicate`1<T>)
extern "C" List_1_t4788 * List_1_FindAllStackBits_m70530_gshared (List_1_t4788 * __this, Predicate_1_t9656 * ___match, const MethodInfo* method);
#define List_1_FindAllStackBits_m70530(__this, ___match, method) (( List_1_t4788 * (*) (List_1_t4788 *, Predicate_1_t9656 *, const MethodInfo*))List_1_FindAllStackBits_m70530_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.UILineInfo>::FindAllList(System.Predicate`1<T>)
extern "C" List_1_t4788 * List_1_FindAllList_m70531_gshared (List_1_t4788 * __this, Predicate_1_t9656 * ___match, const MethodInfo* method);
#define List_1_FindAllList_m70531(__this, ___match, method) (( List_1_t4788 * (*) (List_1_t4788 *, Predicate_1_t9656 *, const MethodInfo*))List_1_FindAllList_m70531_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::FindIndex(System.Predicate`1<T>)
extern "C" int32_t List_1_FindIndex_m70532_gshared (List_1_t4788 * __this, Predicate_1_t9656 * ___match, const MethodInfo* method);
#define List_1_FindIndex_m70532(__this, ___match, method) (( int32_t (*) (List_1_t4788 *, Predicate_1_t9656 *, const MethodInfo*))List_1_FindIndex_m70532_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m70533_gshared (List_1_t4788 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t9656 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m70533(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t4788 *, int32_t, int32_t, Predicate_1_t9656 *, const MethodInfo*))List_1_GetIndex_m70533_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.UILineInfo>::GetEnumerator()
extern "C" Enumerator_t9651  List_1_GetEnumerator_m70534_gshared (List_1_t4788 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m70534(__this, method) (( Enumerator_t9651  (*) (List_1_t4788 *, const MethodInfo*))List_1_GetEnumerator_m70534_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.UILineInfo>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t4788 * List_1_GetRange_m70535_gshared (List_1_t4788 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m70535(__this, ___index, ___count, method) (( List_1_t4788 * (*) (List_1_t4788 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m70535_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m70536_gshared (List_1_t4788 * __this, UILineInfo_t796  ___item, const MethodInfo* method);
#define List_1_IndexOf_m70536(__this, ___item, method) (( int32_t (*) (List_1_t4788 *, UILineInfo_t796 , const MethodInfo*))List_1_IndexOf_m70536_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m70537_gshared (List_1_t4788 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m70537(__this, ___start, ___delta, method) (( void (*) (List_1_t4788 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m70537_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m70538_gshared (List_1_t4788 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m70538(__this, ___index, method) (( void (*) (List_1_t4788 *, int32_t, const MethodInfo*))List_1_CheckIndex_m70538_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m70539_gshared (List_1_t4788 * __this, int32_t ___index, UILineInfo_t796  ___item, const MethodInfo* method);
#define List_1_Insert_m70539(__this, ___index, ___item, method) (( void (*) (List_1_t4788 *, int32_t, UILineInfo_t796 , const MethodInfo*))List_1_Insert_m70539_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m70540_gshared (List_1_t4788 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m70540(__this, ___collection, method) (( void (*) (List_1_t4788 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m70540_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m70541_gshared (List_1_t4788 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m70541(__this, ___index, ___collection, method) (( void (*) (List_1_t4788 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m70541_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m70542_gshared (List_1_t4788 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m70542(__this, ___index, ___collection, method) (( void (*) (List_1_t4788 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m70542_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m70543_gshared (List_1_t4788 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m70543(__this, ___index, ___enumerable, method) (( void (*) (List_1_t4788 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m70543_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Remove(T)
extern "C" bool List_1_Remove_m70544_gshared (List_1_t4788 * __this, UILineInfo_t796  ___item, const MethodInfo* method);
#define List_1_Remove_m70544(__this, ___item, method) (( bool (*) (List_1_t4788 *, UILineInfo_t796 , const MethodInfo*))List_1_Remove_m70544_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m70545_gshared (List_1_t4788 * __this, Predicate_1_t9656 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m70545(__this, ___match, method) (( int32_t (*) (List_1_t4788 *, Predicate_1_t9656 *, const MethodInfo*))List_1_RemoveAll_m70545_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m70546_gshared (List_1_t4788 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m70546(__this, ___index, method) (( void (*) (List_1_t4788 *, int32_t, const MethodInfo*))List_1_RemoveAt_m70546_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m70547_gshared (List_1_t4788 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m70547(__this, ___index, ___count, method) (( void (*) (List_1_t4788 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m70547_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Reverse()
extern "C" void List_1_Reverse_m70548_gshared (List_1_t4788 * __this, const MethodInfo* method);
#define List_1_Reverse_m70548(__this, method) (( void (*) (List_1_t4788 *, const MethodInfo*))List_1_Reverse_m70548_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Sort()
extern "C" void List_1_Sort_m70549_gshared (List_1_t4788 * __this, const MethodInfo* method);
#define List_1_Sort_m70549(__this, method) (( void (*) (List_1_t4788 *, const MethodInfo*))List_1_Sort_m70549_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m70550_gshared (List_1_t4788 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m70550(__this, ___comparer, method) (( void (*) (List_1_t4788 *, Object_t*, const MethodInfo*))List_1_Sort_m70550_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m70551_gshared (List_1_t4788 * __this, Comparison_1_t9659 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m70551(__this, ___comparison, method) (( void (*) (List_1_t4788 *, Comparison_1_t9659 *, const MethodInfo*))List_1_Sort_m70551_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.UILineInfo>::ToArray()
extern "C" UILineInfoU5BU5D_t4902* List_1_ToArray_m70552_gshared (List_1_t4788 * __this, const MethodInfo* method);
#define List_1_ToArray_m70552(__this, method) (( UILineInfoU5BU5D_t4902* (*) (List_1_t4788 *, const MethodInfo*))List_1_ToArray_m70552_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::TrimExcess()
extern "C" void List_1_TrimExcess_m70553_gshared (List_1_t4788 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m70553(__this, method) (( void (*) (List_1_t4788 *, const MethodInfo*))List_1_TrimExcess_m70553_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m70554_gshared (List_1_t4788 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m70554(__this, method) (( int32_t (*) (List_1_t4788 *, const MethodInfo*))List_1_get_Capacity_m70554_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m70555_gshared (List_1_t4788 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m70555(__this, ___value, method) (( void (*) (List_1_t4788 *, int32_t, const MethodInfo*))List_1_set_Capacity_m70555_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::get_Count()
extern "C" int32_t List_1_get_Count_m70556_gshared (List_1_t4788 * __this, const MethodInfo* method);
#define List_1_get_Count_m70556(__this, method) (( int32_t (*) (List_1_t4788 *, const MethodInfo*))List_1_get_Count_m70556_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.UILineInfo>::get_Item(System.Int32)
extern "C" UILineInfo_t796  List_1_get_Item_m70557_gshared (List_1_t4788 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m70557(__this, ___index, method) (( UILineInfo_t796  (*) (List_1_t4788 *, int32_t, const MethodInfo*))List_1_get_Item_m70557_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m70558_gshared (List_1_t4788 * __this, int32_t ___index, UILineInfo_t796  ___value, const MethodInfo* method);
#define List_1_set_Item_m70558(__this, ___index, ___value, method) (( void (*) (List_1_t4788 *, int32_t, UILineInfo_t796 , const MethodInfo*))List_1_set_Item_m70558_gshared)(__this, ___index, ___value, method)

#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t63;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Vector3>
struct IEnumerable_1_t6445;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t92;
// System.Collections.Generic.IEnumerator`1<UnityEngine.Vector3>
struct IEnumerator_1_t6446;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Collections.Generic.ICollection`1<UnityEngine.Vector3>
struct ICollection_1_t6447;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Vector3>
struct ReadOnlyCollection_1_t4969;
// System.Predicate`1<UnityEngine.Vector3>
struct Predicate_1_t4973;
// System.Collections.Generic.IComparer`1<UnityEngine.Vector3>
struct IComparer_1_t6448;
// System.Comparison`1<UnityEngine.Vector3>
struct Comparison_1_t4976;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.Vector3>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_42.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::.ctor()
extern "C" void List_1__ctor_m2399_gshared (List_1_t63 * __this, const MethodInfo* method);
#define List_1__ctor_m2399(__this, method) (( void (*) (List_1_t63 *, const MethodInfo*))List_1__ctor_m2399_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m23642_gshared (List_1_t63 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m23642(__this, ___collection, method) (( void (*) (List_1_t63 *, Object_t*, const MethodInfo*))List_1__ctor_m23642_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::.ctor(System.Int32)
extern "C" void List_1__ctor_m23643_gshared (List_1_t63 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m23643(__this, ___capacity, method) (( void (*) (List_1_t63 *, int32_t, const MethodInfo*))List_1__ctor_m23643_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m23644_gshared (List_1_t63 * __this, Vector3U5BU5D_t92* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m23644(__this, ___data, ___size, method) (( void (*) (List_1_t63 *, Vector3U5BU5D_t92*, int32_t, const MethodInfo*))List_1__ctor_m23644_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::.cctor()
extern "C" void List_1__cctor_m23645_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m23645(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m23645_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.Vector3>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m23646_gshared (List_1_t63 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m23646(__this, method) (( Object_t* (*) (List_1_t63 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m23646_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m23647_gshared (List_1_t63 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m23647(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t63 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m23647_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.Vector3>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m23648_gshared (List_1_t63 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m23648(__this, method) (( Object_t * (*) (List_1_t63 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m23648_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m23649_gshared (List_1_t63 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m23649(__this, ___item, method) (( int32_t (*) (List_1_t63 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m23649_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Vector3>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m23650_gshared (List_1_t63 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m23650(__this, ___item, method) (( bool (*) (List_1_t63 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m23650_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m23651_gshared (List_1_t63 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m23651(__this, ___item, method) (( int32_t (*) (List_1_t63 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m23651_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m23652_gshared (List_1_t63 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m23652(__this, ___index, ___item, method) (( void (*) (List_1_t63 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m23652_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m23653_gshared (List_1_t63 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m23653(__this, ___item, method) (( void (*) (List_1_t63 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m23653_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Vector3>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m23654_gshared (List_1_t63 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m23654(__this, method) (( bool (*) (List_1_t63 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m23654_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Vector3>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m23655_gshared (List_1_t63 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m23655(__this, method) (( bool (*) (List_1_t63 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m23655_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.Vector3>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m23656_gshared (List_1_t63 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m23656(__this, method) (( Object_t * (*) (List_1_t63 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m23656_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Vector3>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m23657_gshared (List_1_t63 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m23657(__this, method) (( bool (*) (List_1_t63 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m23657_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Vector3>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m23658_gshared (List_1_t63 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m23658(__this, method) (( bool (*) (List_1_t63 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m23658_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.Vector3>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m23659_gshared (List_1_t63 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m23659(__this, ___index, method) (( Object_t * (*) (List_1_t63 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m23659_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m23660_gshared (List_1_t63 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m23660(__this, ___index, ___value, method) (( void (*) (List_1_t63 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m23660_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Add(T)
extern "C" void List_1_Add_m23661_gshared (List_1_t63 * __this, Vector3_t53  ___item, const MethodInfo* method);
#define List_1_Add_m23661(__this, ___item, method) (( void (*) (List_1_t63 *, Vector3_t53 , const MethodInfo*))List_1_Add_m23661_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m23662_gshared (List_1_t63 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m23662(__this, ___newCount, method) (( void (*) (List_1_t63 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m23662_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m23663_gshared (List_1_t63 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m23663(__this, ___idx, ___count, method) (( void (*) (List_1_t63 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m23663_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m23664_gshared (List_1_t63 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m23664(__this, ___collection, method) (( void (*) (List_1_t63 *, Object_t*, const MethodInfo*))List_1_AddCollection_m23664_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m23665_gshared (List_1_t63 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m23665(__this, ___enumerable, method) (( void (*) (List_1_t63 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m23665_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m23666_gshared (List_1_t63 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m23666(__this, ___collection, method) (( void (*) (List_1_t63 *, Object_t*, const MethodInfo*))List_1_AddRange_m23666_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.Vector3>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t4969 * List_1_AsReadOnly_m23667_gshared (List_1_t63 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m23667(__this, method) (( ReadOnlyCollection_1_t4969 * (*) (List_1_t63 *, const MethodInfo*))List_1_AsReadOnly_m23667_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Clear()
extern "C" void List_1_Clear_m23668_gshared (List_1_t63 * __this, const MethodInfo* method);
#define List_1_Clear_m23668(__this, method) (( void (*) (List_1_t63 *, const MethodInfo*))List_1_Clear_m23668_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Vector3>::Contains(T)
extern "C" bool List_1_Contains_m23669_gshared (List_1_t63 * __this, Vector3_t53  ___item, const MethodInfo* method);
#define List_1_Contains_m23669(__this, ___item, method) (( bool (*) (List_1_t63 *, Vector3_t53 , const MethodInfo*))List_1_Contains_m23669_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m23670_gshared (List_1_t63 * __this, Vector3U5BU5D_t92* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m23670(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t63 *, Vector3U5BU5D_t92*, int32_t, const MethodInfo*))List_1_CopyTo_m23670_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.Vector3>::Find(System.Predicate`1<T>)
extern "C" Vector3_t53  List_1_Find_m23671_gshared (List_1_t63 * __this, Predicate_1_t4973 * ___match, const MethodInfo* method);
#define List_1_Find_m23671(__this, ___match, method) (( Vector3_t53  (*) (List_1_t63 *, Predicate_1_t4973 *, const MethodInfo*))List_1_Find_m23671_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m23672_gshared (Object_t * __this /* static, unused */, Predicate_1_t4973 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m23672(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t4973 *, const MethodInfo*))List_1_CheckMatch_m23672_gshared)(__this /* static, unused */, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.Vector3>::FindAll(System.Predicate`1<T>)
extern "C" List_1_t63 * List_1_FindAll_m23673_gshared (List_1_t63 * __this, Predicate_1_t4973 * ___match, const MethodInfo* method);
#define List_1_FindAll_m23673(__this, ___match, method) (( List_1_t63 * (*) (List_1_t63 *, Predicate_1_t4973 *, const MethodInfo*))List_1_FindAll_m23673_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.Vector3>::FindAllStackBits(System.Predicate`1<T>)
extern "C" List_1_t63 * List_1_FindAllStackBits_m23674_gshared (List_1_t63 * __this, Predicate_1_t4973 * ___match, const MethodInfo* method);
#define List_1_FindAllStackBits_m23674(__this, ___match, method) (( List_1_t63 * (*) (List_1_t63 *, Predicate_1_t4973 *, const MethodInfo*))List_1_FindAllStackBits_m23674_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.Vector3>::FindAllList(System.Predicate`1<T>)
extern "C" List_1_t63 * List_1_FindAllList_m23675_gshared (List_1_t63 * __this, Predicate_1_t4973 * ___match, const MethodInfo* method);
#define List_1_FindAllList_m23675(__this, ___match, method) (( List_1_t63 * (*) (List_1_t63 *, Predicate_1_t4973 *, const MethodInfo*))List_1_FindAllList_m23675_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::FindIndex(System.Predicate`1<T>)
extern "C" int32_t List_1_FindIndex_m23676_gshared (List_1_t63 * __this, Predicate_1_t4973 * ___match, const MethodInfo* method);
#define List_1_FindIndex_m23676(__this, ___match, method) (( int32_t (*) (List_1_t63 *, Predicate_1_t4973 *, const MethodInfo*))List_1_FindIndex_m23676_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m23677_gshared (List_1_t63 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t4973 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m23677(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t63 *, int32_t, int32_t, Predicate_1_t4973 *, const MethodInfo*))List_1_GetIndex_m23677_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.Vector3>::GetEnumerator()
extern "C" Enumerator_t4967  List_1_GetEnumerator_m23678_gshared (List_1_t63 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m23678(__this, method) (( Enumerator_t4967  (*) (List_1_t63 *, const MethodInfo*))List_1_GetEnumerator_m23678_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.Vector3>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t63 * List_1_GetRange_m2417_gshared (List_1_t63 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m2417(__this, ___index, ___count, method) (( List_1_t63 * (*) (List_1_t63 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m2417_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m23679_gshared (List_1_t63 * __this, Vector3_t53  ___item, const MethodInfo* method);
#define List_1_IndexOf_m23679(__this, ___item, method) (( int32_t (*) (List_1_t63 *, Vector3_t53 , const MethodInfo*))List_1_IndexOf_m23679_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m23680_gshared (List_1_t63 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m23680(__this, ___start, ___delta, method) (( void (*) (List_1_t63 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m23680_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m23681_gshared (List_1_t63 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m23681(__this, ___index, method) (( void (*) (List_1_t63 *, int32_t, const MethodInfo*))List_1_CheckIndex_m23681_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m23682_gshared (List_1_t63 * __this, int32_t ___index, Vector3_t53  ___item, const MethodInfo* method);
#define List_1_Insert_m23682(__this, ___index, ___item, method) (( void (*) (List_1_t63 *, int32_t, Vector3_t53 , const MethodInfo*))List_1_Insert_m23682_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m23683_gshared (List_1_t63 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m23683(__this, ___collection, method) (( void (*) (List_1_t63 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m23683_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m2409_gshared (List_1_t63 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m2409(__this, ___index, ___collection, method) (( void (*) (List_1_t63 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m2409_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m23684_gshared (List_1_t63 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m23684(__this, ___index, ___collection, method) (( void (*) (List_1_t63 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m23684_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m23685_gshared (List_1_t63 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m23685(__this, ___index, ___enumerable, method) (( void (*) (List_1_t63 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m23685_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Vector3>::Remove(T)
extern "C" bool List_1_Remove_m23686_gshared (List_1_t63 * __this, Vector3_t53  ___item, const MethodInfo* method);
#define List_1_Remove_m23686(__this, ___item, method) (( bool (*) (List_1_t63 *, Vector3_t53 , const MethodInfo*))List_1_Remove_m23686_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m23687_gshared (List_1_t63 * __this, Predicate_1_t4973 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m23687(__this, ___match, method) (( int32_t (*) (List_1_t63 *, Predicate_1_t4973 *, const MethodInfo*))List_1_RemoveAll_m23687_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m23688_gshared (List_1_t63 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m23688(__this, ___index, method) (( void (*) (List_1_t63 *, int32_t, const MethodInfo*))List_1_RemoveAt_m23688_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m2412_gshared (List_1_t63 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m2412(__this, ___index, ___count, method) (( void (*) (List_1_t63 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m2412_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Reverse()
extern "C" void List_1_Reverse_m2414_gshared (List_1_t63 * __this, const MethodInfo* method);
#define List_1_Reverse_m2414(__this, method) (( void (*) (List_1_t63 *, const MethodInfo*))List_1_Reverse_m2414_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Sort()
extern "C" void List_1_Sort_m23689_gshared (List_1_t63 * __this, const MethodInfo* method);
#define List_1_Sort_m23689(__this, method) (( void (*) (List_1_t63 *, const MethodInfo*))List_1_Sort_m23689_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m23690_gshared (List_1_t63 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m23690(__this, ___comparer, method) (( void (*) (List_1_t63 *, Object_t*, const MethodInfo*))List_1_Sort_m23690_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m23691_gshared (List_1_t63 * __this, Comparison_1_t4976 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m23691(__this, ___comparison, method) (( void (*) (List_1_t63 *, Comparison_1_t4976 *, const MethodInfo*))List_1_Sort_m23691_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.Vector3>::ToArray()
extern "C" Vector3U5BU5D_t92* List_1_ToArray_m2418_gshared (List_1_t63 * __this, const MethodInfo* method);
#define List_1_ToArray_m2418(__this, method) (( Vector3U5BU5D_t92* (*) (List_1_t63 *, const MethodInfo*))List_1_ToArray_m2418_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::TrimExcess()
extern "C" void List_1_TrimExcess_m23692_gshared (List_1_t63 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m23692(__this, method) (( void (*) (List_1_t63 *, const MethodInfo*))List_1_TrimExcess_m23692_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m23693_gshared (List_1_t63 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m23693(__this, method) (( int32_t (*) (List_1_t63 *, const MethodInfo*))List_1_get_Capacity_m23693_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m23694_gshared (List_1_t63 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m23694(__this, ___value, method) (( void (*) (List_1_t63 *, int32_t, const MethodInfo*))List_1_set_Capacity_m23694_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Count()
extern "C" int32_t List_1_get_Count_m23695_gshared (List_1_t63 * __this, const MethodInfo* method);
#define List_1_get_Count_m23695(__this, method) (( int32_t (*) (List_1_t63 *, const MethodInfo*))List_1_get_Count_m23695_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Item(System.Int32)
extern "C" Vector3_t53  List_1_get_Item_m23696_gshared (List_1_t63 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m23696(__this, ___index, method) (( Vector3_t53  (*) (List_1_t63 *, int32_t, const MethodInfo*))List_1_get_Item_m23696_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m23697_gshared (List_1_t63 * __this, int32_t ___index, Vector3_t53  ___value, const MethodInfo* method);
#define List_1_set_Item_m23697(__this, ___index, ___value, method) (( void (*) (List_1_t63 *, int32_t, Vector3_t53 , const MethodInfo*))List_1_set_Item_m23697_gshared)(__this, ___index, ___value, method)

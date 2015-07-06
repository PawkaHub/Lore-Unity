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
struct IEnumerable_1_t9617;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t92;
// System.Collections.Generic.IEnumerator`1<UnityEngine.Vector3>
struct IEnumerator_1_t9618;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Collections.Generic.ICollection`1<UnityEngine.Vector3>
struct ICollection_1_t9619;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Vector3>
struct ReadOnlyCollection_1_t6057;
// System.Predicate`1<UnityEngine.Vector3>
struct Predicate_1_t6061;
// System.Collections.Generic.IComparer`1<UnityEngine.Vector3>
struct IComparer_1_t9620;
// System.Comparison`1<UnityEngine.Vector3>
struct Comparison_1_t6064;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.Vector3>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_44.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::.ctor()
extern "C" void List_1__ctor_m2486_gshared (List_1_t63 * __this, const MethodInfo* method);
#define List_1__ctor_m2486(__this, method) (( void (*) (List_1_t63 *, const MethodInfo*))List_1__ctor_m2486_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m25018_gshared (List_1_t63 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m25018(__this, ___collection, method) (( void (*) (List_1_t63 *, Object_t*, const MethodInfo*))List_1__ctor_m25018_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::.ctor(System.Int32)
extern "C" void List_1__ctor_m25019_gshared (List_1_t63 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m25019(__this, ___capacity, method) (( void (*) (List_1_t63 *, int32_t, const MethodInfo*))List_1__ctor_m25019_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m25020_gshared (List_1_t63 * __this, Vector3U5BU5D_t92* ___data, int32_t ___size, const MethodInfo* method);
#define List_1__ctor_m25020(__this, ___data, ___size, method) (( void (*) (List_1_t63 *, Vector3U5BU5D_t92*, int32_t, const MethodInfo*))List_1__ctor_m25020_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::.cctor()
extern "C" void List_1__cctor_m25021_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m25021(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m25021_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.Vector3>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m25022_gshared (List_1_t63 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m25022(__this, method) (( Object_t* (*) (List_1_t63 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m25022_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m25023_gshared (List_1_t63 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m25023(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t63 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m25023_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.Vector3>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m25024_gshared (List_1_t63 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m25024(__this, method) (( Object_t * (*) (List_1_t63 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m25024_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m25025_gshared (List_1_t63 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m25025(__this, ___item, method) (( int32_t (*) (List_1_t63 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m25025_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Vector3>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m25026_gshared (List_1_t63 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m25026(__this, ___item, method) (( bool (*) (List_1_t63 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m25026_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m25027_gshared (List_1_t63 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m25027(__this, ___item, method) (( int32_t (*) (List_1_t63 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m25027_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m25028_gshared (List_1_t63 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m25028(__this, ___index, ___item, method) (( void (*) (List_1_t63 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m25028_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m25029_gshared (List_1_t63 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m25029(__this, ___item, method) (( void (*) (List_1_t63 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m25029_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Vector3>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m25030_gshared (List_1_t63 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m25030(__this, method) (( bool (*) (List_1_t63 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m25030_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Vector3>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m25031_gshared (List_1_t63 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m25031(__this, method) (( bool (*) (List_1_t63 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m25031_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.Vector3>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m25032_gshared (List_1_t63 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m25032(__this, method) (( Object_t * (*) (List_1_t63 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m25032_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Vector3>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m25033_gshared (List_1_t63 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m25033(__this, method) (( bool (*) (List_1_t63 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m25033_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Vector3>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m25034_gshared (List_1_t63 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m25034(__this, method) (( bool (*) (List_1_t63 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m25034_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.Vector3>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m25035_gshared (List_1_t63 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m25035(__this, ___index, method) (( Object_t * (*) (List_1_t63 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m25035_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m25036_gshared (List_1_t63 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m25036(__this, ___index, ___value, method) (( void (*) (List_1_t63 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m25036_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Add(T)
extern "C" void List_1_Add_m25037_gshared (List_1_t63 * __this, Vector3_t53  ___item, const MethodInfo* method);
#define List_1_Add_m25037(__this, ___item, method) (( void (*) (List_1_t63 *, Vector3_t53 , const MethodInfo*))List_1_Add_m25037_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m25038_gshared (List_1_t63 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m25038(__this, ___newCount, method) (( void (*) (List_1_t63 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m25038_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::CheckRange(System.Int32,System.Int32)
extern "C" void List_1_CheckRange_m25039_gshared (List_1_t63 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method);
#define List_1_CheckRange_m25039(__this, ___idx, ___count, method) (( void (*) (List_1_t63 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m25039_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m25040_gshared (List_1_t63 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m25040(__this, ___collection, method) (( void (*) (List_1_t63 *, Object_t*, const MethodInfo*))List_1_AddCollection_m25040_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m25041_gshared (List_1_t63 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m25041(__this, ___enumerable, method) (( void (*) (List_1_t63 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m25041_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m25042_gshared (List_1_t63 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m25042(__this, ___collection, method) (( void (*) (List_1_t63 *, Object_t*, const MethodInfo*))List_1_AddRange_m25042_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.Vector3>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t6057 * List_1_AsReadOnly_m25043_gshared (List_1_t63 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m25043(__this, method) (( ReadOnlyCollection_1_t6057 * (*) (List_1_t63 *, const MethodInfo*))List_1_AsReadOnly_m25043_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Clear()
extern "C" void List_1_Clear_m25044_gshared (List_1_t63 * __this, const MethodInfo* method);
#define List_1_Clear_m25044(__this, method) (( void (*) (List_1_t63 *, const MethodInfo*))List_1_Clear_m25044_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Vector3>::Contains(T)
extern "C" bool List_1_Contains_m25045_gshared (List_1_t63 * __this, Vector3_t53  ___item, const MethodInfo* method);
#define List_1_Contains_m25045(__this, ___item, method) (( bool (*) (List_1_t63 *, Vector3_t53 , const MethodInfo*))List_1_Contains_m25045_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m25046_gshared (List_1_t63 * __this, Vector3U5BU5D_t92* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m25046(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t63 *, Vector3U5BU5D_t92*, int32_t, const MethodInfo*))List_1_CopyTo_m25046_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.Vector3>::Find(System.Predicate`1<T>)
extern "C" Vector3_t53  List_1_Find_m25047_gshared (List_1_t63 * __this, Predicate_1_t6061 * ___match, const MethodInfo* method);
#define List_1_Find_m25047(__this, ___match, method) (( Vector3_t53  (*) (List_1_t63 *, Predicate_1_t6061 *, const MethodInfo*))List_1_Find_m25047_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m25048_gshared (Object_t * __this /* static, unused */, Predicate_1_t6061 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m25048(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t6061 *, const MethodInfo*))List_1_CheckMatch_m25048_gshared)(__this /* static, unused */, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.Vector3>::FindAll(System.Predicate`1<T>)
extern "C" List_1_t63 * List_1_FindAll_m25049_gshared (List_1_t63 * __this, Predicate_1_t6061 * ___match, const MethodInfo* method);
#define List_1_FindAll_m25049(__this, ___match, method) (( List_1_t63 * (*) (List_1_t63 *, Predicate_1_t6061 *, const MethodInfo*))List_1_FindAll_m25049_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.Vector3>::FindAllStackBits(System.Predicate`1<T>)
extern "C" List_1_t63 * List_1_FindAllStackBits_m25050_gshared (List_1_t63 * __this, Predicate_1_t6061 * ___match, const MethodInfo* method);
#define List_1_FindAllStackBits_m25050(__this, ___match, method) (( List_1_t63 * (*) (List_1_t63 *, Predicate_1_t6061 *, const MethodInfo*))List_1_FindAllStackBits_m25050_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.Vector3>::FindAllList(System.Predicate`1<T>)
extern "C" List_1_t63 * List_1_FindAllList_m25051_gshared (List_1_t63 * __this, Predicate_1_t6061 * ___match, const MethodInfo* method);
#define List_1_FindAllList_m25051(__this, ___match, method) (( List_1_t63 * (*) (List_1_t63 *, Predicate_1_t6061 *, const MethodInfo*))List_1_FindAllList_m25051_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::FindIndex(System.Predicate`1<T>)
extern "C" int32_t List_1_FindIndex_m25052_gshared (List_1_t63 * __this, Predicate_1_t6061 * ___match, const MethodInfo* method);
#define List_1_FindIndex_m25052(__this, ___match, method) (( int32_t (*) (List_1_t63 *, Predicate_1_t6061 *, const MethodInfo*))List_1_FindIndex_m25052_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m25053_gshared (List_1_t63 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t6061 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m25053(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t63 *, int32_t, int32_t, Predicate_1_t6061 *, const MethodInfo*))List_1_GetIndex_m25053_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.Vector3>::GetEnumerator()
extern "C" Enumerator_t6055  List_1_GetEnumerator_m25054_gshared (List_1_t63 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m25054(__this, method) (( Enumerator_t6055  (*) (List_1_t63 *, const MethodInfo*))List_1_GetEnumerator_m25054_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.Vector3>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t63 * List_1_GetRange_m2504_gshared (List_1_t63 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_GetRange_m2504(__this, ___index, ___count, method) (( List_1_t63 * (*) (List_1_t63 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m2504_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m25055_gshared (List_1_t63 * __this, Vector3_t53  ___item, const MethodInfo* method);
#define List_1_IndexOf_m25055(__this, ___item, method) (( int32_t (*) (List_1_t63 *, Vector3_t53 , const MethodInfo*))List_1_IndexOf_m25055_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m25056_gshared (List_1_t63 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m25056(__this, ___start, ___delta, method) (( void (*) (List_1_t63 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m25056_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m25057_gshared (List_1_t63 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m25057(__this, ___index, method) (( void (*) (List_1_t63 *, int32_t, const MethodInfo*))List_1_CheckIndex_m25057_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m25058_gshared (List_1_t63 * __this, int32_t ___index, Vector3_t53  ___item, const MethodInfo* method);
#define List_1_Insert_m25058(__this, ___index, ___item, method) (( void (*) (List_1_t63 *, int32_t, Vector3_t53 , const MethodInfo*))List_1_Insert_m25058_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m25059_gshared (List_1_t63 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m25059(__this, ___collection, method) (( void (*) (List_1_t63 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m25059_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m2496_gshared (List_1_t63 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertRange_m2496(__this, ___index, ___collection, method) (( void (*) (List_1_t63 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m2496_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m25060_gshared (List_1_t63 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method);
#define List_1_InsertCollection_m25060(__this, ___index, ___collection, method) (( void (*) (List_1_t63 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m25060_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertEnumeration_m25061_gshared (List_1_t63 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_InsertEnumeration_m25061(__this, ___index, ___enumerable, method) (( void (*) (List_1_t63 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m25061_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Vector3>::Remove(T)
extern "C" bool List_1_Remove_m25062_gshared (List_1_t63 * __this, Vector3_t53  ___item, const MethodInfo* method);
#define List_1_Remove_m25062(__this, ___item, method) (( bool (*) (List_1_t63 *, Vector3_t53 , const MethodInfo*))List_1_Remove_m25062_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m25063_gshared (List_1_t63 * __this, Predicate_1_t6061 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m25063(__this, ___match, method) (( int32_t (*) (List_1_t63 *, Predicate_1_t6061 *, const MethodInfo*))List_1_RemoveAll_m25063_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m25064_gshared (List_1_t63 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m25064(__this, ___index, method) (( void (*) (List_1_t63 *, int32_t, const MethodInfo*))List_1_RemoveAt_m25064_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m2499_gshared (List_1_t63 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define List_1_RemoveRange_m2499(__this, ___index, ___count, method) (( void (*) (List_1_t63 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m2499_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Reverse()
extern "C" void List_1_Reverse_m2501_gshared (List_1_t63 * __this, const MethodInfo* method);
#define List_1_Reverse_m2501(__this, method) (( void (*) (List_1_t63 *, const MethodInfo*))List_1_Reverse_m2501_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Sort()
extern "C" void List_1_Sort_m25065_gshared (List_1_t63 * __this, const MethodInfo* method);
#define List_1_Sort_m25065(__this, method) (( void (*) (List_1_t63 *, const MethodInfo*))List_1_Sort_m25065_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m25066_gshared (List_1_t63 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m25066(__this, ___comparer, method) (( void (*) (List_1_t63 *, Object_t*, const MethodInfo*))List_1_Sort_m25066_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m25067_gshared (List_1_t63 * __this, Comparison_1_t6064 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m25067(__this, ___comparison, method) (( void (*) (List_1_t63 *, Comparison_1_t6064 *, const MethodInfo*))List_1_Sort_m25067_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.Vector3>::ToArray()
extern "C" Vector3U5BU5D_t92* List_1_ToArray_m2505_gshared (List_1_t63 * __this, const MethodInfo* method);
#define List_1_ToArray_m2505(__this, method) (( Vector3U5BU5D_t92* (*) (List_1_t63 *, const MethodInfo*))List_1_ToArray_m2505_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::TrimExcess()
extern "C" void List_1_TrimExcess_m25068_gshared (List_1_t63 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m25068(__this, method) (( void (*) (List_1_t63 *, const MethodInfo*))List_1_TrimExcess_m25068_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m25069_gshared (List_1_t63 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m25069(__this, method) (( int32_t (*) (List_1_t63 *, const MethodInfo*))List_1_get_Capacity_m25069_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m25070_gshared (List_1_t63 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m25070(__this, ___value, method) (( void (*) (List_1_t63 *, int32_t, const MethodInfo*))List_1_set_Capacity_m25070_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Count()
extern "C" int32_t List_1_get_Count_m25071_gshared (List_1_t63 * __this, const MethodInfo* method);
#define List_1_get_Count_m25071(__this, method) (( int32_t (*) (List_1_t63 *, const MethodInfo*))List_1_get_Count_m25071_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Item(System.Int32)
extern "C" Vector3_t53  List_1_get_Item_m25072_gshared (List_1_t63 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m25072(__this, ___index, method) (( Vector3_t53  (*) (List_1_t63 *, int32_t, const MethodInfo*))List_1_get_Item_m25072_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m25073_gshared (List_1_t63 * __this, int32_t ___index, Vector3_t53  ___value, const MethodInfo* method);
#define List_1_set_Item_m25073(__this, ___index, ___value, method) (( void (*) (List_1_t63 *, int32_t, Vector3_t53 , const MethodInfo*))List_1_set_Item_m25073_gshared)(__this, ___index, ___value, method)

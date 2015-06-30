#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<ParticlePlayground.ManipulatorObjectC>
struct List_1_t80;
// System.Object
struct Object_t;
// ParticlePlayground.ManipulatorObjectC
struct ManipulatorObjectC_t115;
// System.Collections.Generic.IEnumerable`1<ParticlePlayground.ManipulatorObjectC>
struct IEnumerable_1_t6460;
// ParticlePlayground.ManipulatorObjectC[]
struct ManipulatorObjectCU5BU5D_t4992;
// System.Collections.Generic.IEnumerator`1<ParticlePlayground.ManipulatorObjectC>
struct IEnumerator_1_t6461;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Collections.Generic.ICollection`1<ParticlePlayground.ManipulatorObjectC>
struct ICollection_1_t6462;
// System.Collections.ObjectModel.ReadOnlyCollection`1<ParticlePlayground.ManipulatorObjectC>
struct ReadOnlyCollection_1_t4994;
// System.Predicate`1<ParticlePlayground.ManipulatorObjectC>
struct Predicate_1_t4995;
// System.Collections.Generic.IComparer`1<ParticlePlayground.ManipulatorObjectC>
struct IComparer_1_t6463;
// System.Comparison`1<ParticlePlayground.ManipulatorObjectC>
struct Comparison_1_t4997;
// System.Collections.Generic.List`1/Enumerator<ParticlePlayground.ManipulatorObjectC>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_46.h"

// System.Void System.Collections.Generic.List`1<ParticlePlayground.ManipulatorObjectC>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_genMethodDeclarations.h"
#define List_1__ctor_m2438(__this, method) (( void (*) (List_1_t80 *, const MethodInfo*))List_1__ctor_m84_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.ManipulatorObjectC>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m24111(__this, ___collection, method) (( void (*) (List_1_t80 *, Object_t*, const MethodInfo*))List_1__ctor_m3166_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.ManipulatorObjectC>::.ctor(System.Int32)
#define List_1__ctor_m24112(__this, ___capacity, method) (( void (*) (List_1_t80 *, int32_t, const MethodInfo*))List_1__ctor_m22534_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.ManipulatorObjectC>::.ctor(T[],System.Int32)
#define List_1__ctor_m24113(__this, ___data, ___size, method) (( void (*) (List_1_t80 *, ManipulatorObjectCU5BU5D_t4992*, int32_t, const MethodInfo*))List_1__ctor_m22535_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.ManipulatorObjectC>::.cctor()
#define List_1__cctor_m24114(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m22536_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<ParticlePlayground.ManipulatorObjectC>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m24115(__this, method) (( Object_t* (*) (List_1_t80 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m13947_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.ManipulatorObjectC>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m24116(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t80 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m13930_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<ParticlePlayground.ManipulatorObjectC>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m24117(__this, method) (( Object_t * (*) (List_1_t80 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m13926_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<ParticlePlayground.ManipulatorObjectC>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m24118(__this, ___item, method) (( int32_t (*) (List_1_t80 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m13935_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<ParticlePlayground.ManipulatorObjectC>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m24119(__this, ___item, method) (( bool (*) (List_1_t80 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m13937_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<ParticlePlayground.ManipulatorObjectC>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m24120(__this, ___item, method) (( int32_t (*) (List_1_t80 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m13938_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.ManipulatorObjectC>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m24121(__this, ___index, ___item, method) (( void (*) (List_1_t80 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m13939_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.ManipulatorObjectC>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m24122(__this, ___item, method) (( void (*) (List_1_t80 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m13940_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<ParticlePlayground.ManipulatorObjectC>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m24123(__this, method) (( bool (*) (List_1_t80 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m13942_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<ParticlePlayground.ManipulatorObjectC>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m24124(__this, method) (( bool (*) (List_1_t80 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m13928_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<ParticlePlayground.ManipulatorObjectC>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m24125(__this, method) (( Object_t * (*) (List_1_t80 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m13929_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<ParticlePlayground.ManipulatorObjectC>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m24126(__this, method) (( bool (*) (List_1_t80 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m13931_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<ParticlePlayground.ManipulatorObjectC>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m24127(__this, method) (( bool (*) (List_1_t80 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m13932_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<ParticlePlayground.ManipulatorObjectC>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m24128(__this, ___index, method) (( Object_t * (*) (List_1_t80 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m13933_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.ManipulatorObjectC>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m24129(__this, ___index, ___value, method) (( void (*) (List_1_t80 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m13934_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.ManipulatorObjectC>::Add(T)
#define List_1_Add_m24130(__this, ___item, method) (( void (*) (List_1_t80 *, ManipulatorObjectC_t115 *, const MethodInfo*))List_1_Add_m13943_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.ManipulatorObjectC>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m24131(__this, ___newCount, method) (( void (*) (List_1_t80 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m22537_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.ManipulatorObjectC>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m24132(__this, ___idx, ___count, method) (( void (*) (List_1_t80 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m22538_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.ManipulatorObjectC>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m24133(__this, ___collection, method) (( void (*) (List_1_t80 *, Object_t*, const MethodInfo*))List_1_AddCollection_m22539_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.ManipulatorObjectC>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m24134(__this, ___enumerable, method) (( void (*) (List_1_t80 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m22540_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.ManipulatorObjectC>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m24135(__this, ___collection, method) (( void (*) (List_1_t80 *, Object_t*, const MethodInfo*))List_1_AddRange_m87_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<ParticlePlayground.ManipulatorObjectC>::AsReadOnly()
#define List_1_AsReadOnly_m24136(__this, method) (( ReadOnlyCollection_1_t4994 * (*) (List_1_t80 *, const MethodInfo*))List_1_AsReadOnly_m22541_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.ManipulatorObjectC>::Clear()
#define List_1_Clear_m24137(__this, method) (( void (*) (List_1_t80 *, const MethodInfo*))List_1_Clear_m13936_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<ParticlePlayground.ManipulatorObjectC>::Contains(T)
#define List_1_Contains_m24138(__this, ___item, method) (( bool (*) (List_1_t80 *, ManipulatorObjectC_t115 *, const MethodInfo*))List_1_Contains_m13944_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.ManipulatorObjectC>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m24139(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t80 *, ManipulatorObjectCU5BU5D_t4992*, int32_t, const MethodInfo*))List_1_CopyTo_m13945_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<ParticlePlayground.ManipulatorObjectC>::Find(System.Predicate`1<T>)
#define List_1_Find_m24140(__this, ___match, method) (( ManipulatorObjectC_t115 * (*) (List_1_t80 *, Predicate_1_t4995 *, const MethodInfo*))List_1_Find_m22542_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.ManipulatorObjectC>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m24141(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t4995 *, const MethodInfo*))List_1_CheckMatch_m22543_gshared)(__this /* static, unused */, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<ParticlePlayground.ManipulatorObjectC>::FindAll(System.Predicate`1<T>)
#define List_1_FindAll_m24142(__this, ___match, method) (( List_1_t80 * (*) (List_1_t80 *, Predicate_1_t4995 *, const MethodInfo*))List_1_FindAll_m22544_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<ParticlePlayground.ManipulatorObjectC>::FindAllStackBits(System.Predicate`1<T>)
#define List_1_FindAllStackBits_m24143(__this, ___match, method) (( List_1_t80 * (*) (List_1_t80 *, Predicate_1_t4995 *, const MethodInfo*))List_1_FindAllStackBits_m22545_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<ParticlePlayground.ManipulatorObjectC>::FindAllList(System.Predicate`1<T>)
#define List_1_FindAllList_m24144(__this, ___match, method) (( List_1_t80 * (*) (List_1_t80 *, Predicate_1_t4995 *, const MethodInfo*))List_1_FindAllList_m22546_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<ParticlePlayground.ManipulatorObjectC>::FindIndex(System.Predicate`1<T>)
#define List_1_FindIndex_m24145(__this, ___match, method) (( int32_t (*) (List_1_t80 *, Predicate_1_t4995 *, const MethodInfo*))List_1_FindIndex_m22547_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<ParticlePlayground.ManipulatorObjectC>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m24146(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t80 *, int32_t, int32_t, Predicate_1_t4995 *, const MethodInfo*))List_1_GetIndex_m22548_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<ParticlePlayground.ManipulatorObjectC>::GetEnumerator()
#define List_1_GetEnumerator_m24147(__this, method) (( Enumerator_t4996  (*) (List_1_t80 *, const MethodInfo*))List_1_GetEnumerator_m22549_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<ParticlePlayground.ManipulatorObjectC>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m24148(__this, ___index, ___count, method) (( List_1_t80 * (*) (List_1_t80 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m22550_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<ParticlePlayground.ManipulatorObjectC>::IndexOf(T)
#define List_1_IndexOf_m24149(__this, ___item, method) (( int32_t (*) (List_1_t80 *, ManipulatorObjectC_t115 *, const MethodInfo*))List_1_IndexOf_m13948_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.ManipulatorObjectC>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m24150(__this, ___start, ___delta, method) (( void (*) (List_1_t80 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m22551_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.ManipulatorObjectC>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m24151(__this, ___index, method) (( void (*) (List_1_t80 *, int32_t, const MethodInfo*))List_1_CheckIndex_m22552_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.ManipulatorObjectC>::Insert(System.Int32,T)
#define List_1_Insert_m24152(__this, ___index, ___item, method) (( void (*) (List_1_t80 *, int32_t, ManipulatorObjectC_t115 *, const MethodInfo*))List_1_Insert_m13949_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.ManipulatorObjectC>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m24153(__this, ___collection, method) (( void (*) (List_1_t80 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m22553_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.ManipulatorObjectC>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m24154(__this, ___index, ___collection, method) (( void (*) (List_1_t80 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m22554_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.ManipulatorObjectC>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m24155(__this, ___index, ___collection, method) (( void (*) (List_1_t80 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m22555_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.ManipulatorObjectC>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m24156(__this, ___index, ___enumerable, method) (( void (*) (List_1_t80 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m22556_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<ParticlePlayground.ManipulatorObjectC>::Remove(T)
#define List_1_Remove_m24157(__this, ___item, method) (( bool (*) (List_1_t80 *, ManipulatorObjectC_t115 *, const MethodInfo*))List_1_Remove_m13946_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<ParticlePlayground.ManipulatorObjectC>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m24158(__this, ___match, method) (( int32_t (*) (List_1_t80 *, Predicate_1_t4995 *, const MethodInfo*))List_1_RemoveAll_m22557_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.ManipulatorObjectC>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m24159(__this, ___index, method) (( void (*) (List_1_t80 *, int32_t, const MethodInfo*))List_1_RemoveAt_m13941_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.ManipulatorObjectC>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m24160(__this, ___index, ___count, method) (( void (*) (List_1_t80 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m22558_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.ManipulatorObjectC>::Reverse()
#define List_1_Reverse_m24161(__this, method) (( void (*) (List_1_t80 *, const MethodInfo*))List_1_Reverse_m22559_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.ManipulatorObjectC>::Sort()
#define List_1_Sort_m24162(__this, method) (( void (*) (List_1_t80 *, const MethodInfo*))List_1_Sort_m22560_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.ManipulatorObjectC>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m24163(__this, ___comparer, method) (( void (*) (List_1_t80 *, Object_t*, const MethodInfo*))List_1_Sort_m22561_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.ManipulatorObjectC>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m24164(__this, ___comparison, method) (( void (*) (List_1_t80 *, Comparison_1_t4997 *, const MethodInfo*))List_1_Sort_m22562_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<ParticlePlayground.ManipulatorObjectC>::ToArray()
#define List_1_ToArray_m24165(__this, method) (( ManipulatorObjectCU5BU5D_t4992* (*) (List_1_t80 *, const MethodInfo*))List_1_ToArray_m3165_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.ManipulatorObjectC>::TrimExcess()
#define List_1_TrimExcess_m24166(__this, method) (( void (*) (List_1_t80 *, const MethodInfo*))List_1_TrimExcess_m22563_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<ParticlePlayground.ManipulatorObjectC>::get_Capacity()
#define List_1_get_Capacity_m24167(__this, method) (( int32_t (*) (List_1_t80 *, const MethodInfo*))List_1_get_Capacity_m22564_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.ManipulatorObjectC>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m24168(__this, ___value, method) (( void (*) (List_1_t80 *, int32_t, const MethodInfo*))List_1_set_Capacity_m22565_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<ParticlePlayground.ManipulatorObjectC>::get_Count()
#define List_1_get_Count_m24169(__this, method) (( int32_t (*) (List_1_t80 *, const MethodInfo*))List_1_get_Count_m13927_gshared)(__this, method)
// T System.Collections.Generic.List`1<ParticlePlayground.ManipulatorObjectC>::get_Item(System.Int32)
#define List_1_get_Item_m24170(__this, ___index, method) (( ManipulatorObjectC_t115 * (*) (List_1_t80 *, int32_t, const MethodInfo*))List_1_get_Item_m13950_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<ParticlePlayground.ManipulatorObjectC>::set_Item(System.Int32,T)
#define List_1_set_Item_m24171(__this, ___index, ___value, method) (( void (*) (List_1_t80 *, int32_t, ManipulatorObjectC_t115 *, const MethodInfo*))List_1_set_Item_m13951_gshared)(__this, ___index, ___value, method)

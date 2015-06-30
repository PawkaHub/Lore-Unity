#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommand>
struct List_1_t885;
// System.Object
struct Object_t;
// PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommand
struct SequencerCommand_t209;
// System.Collections.Generic.IEnumerable`1<PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommand>
struct IEnumerable_1_t6762;
// PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommand[]
struct SequencerCommandU5BU5D_t5476;
// System.Collections.Generic.IEnumerator`1<PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommand>
struct IEnumerator_1_t6763;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Collections.Generic.ICollection`1<PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommand>
struct ICollection_1_t6764;
// System.Collections.ObjectModel.ReadOnlyCollection`1<PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommand>
struct ReadOnlyCollection_1_t5478;
// System.Predicate`1<PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommand>
struct Predicate_1_t889;
// System.Collections.Generic.IComparer`1<PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommand>
struct IComparer_1_t6765;
// System.Comparison`1<PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommand>
struct Comparison_1_t5479;
// System.Collections.Generic.List`1/Enumerator<PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommand>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_24.h"

// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommand>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_genMethodDeclarations.h"
#define List_1__ctor_m5432(__this, method) (( void (*) (List_1_t885 *, const MethodInfo*))List_1__ctor_m84_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommand>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m32137(__this, ___collection, method) (( void (*) (List_1_t885 *, Object_t*, const MethodInfo*))List_1__ctor_m3166_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommand>::.ctor(System.Int32)
#define List_1__ctor_m32138(__this, ___capacity, method) (( void (*) (List_1_t885 *, int32_t, const MethodInfo*))List_1__ctor_m22534_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommand>::.ctor(T[],System.Int32)
#define List_1__ctor_m32139(__this, ___data, ___size, method) (( void (*) (List_1_t885 *, SequencerCommandU5BU5D_t5476*, int32_t, const MethodInfo*))List_1__ctor_m22535_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommand>::.cctor()
#define List_1__cctor_m32140(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m22536_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommand>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m32141(__this, method) (( Object_t* (*) (List_1_t885 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m13947_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommand>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m32142(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t885 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m13930_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommand>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m32143(__this, method) (( Object_t * (*) (List_1_t885 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m13926_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommand>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m32144(__this, ___item, method) (( int32_t (*) (List_1_t885 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m13935_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommand>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m32145(__this, ___item, method) (( bool (*) (List_1_t885 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m13937_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommand>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m32146(__this, ___item, method) (( int32_t (*) (List_1_t885 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m13938_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommand>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m32147(__this, ___index, ___item, method) (( void (*) (List_1_t885 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m13939_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommand>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m32148(__this, ___item, method) (( void (*) (List_1_t885 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m13940_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommand>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m32149(__this, method) (( bool (*) (List_1_t885 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m13942_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommand>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m32150(__this, method) (( bool (*) (List_1_t885 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m13928_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommand>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m32151(__this, method) (( Object_t * (*) (List_1_t885 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m13929_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommand>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m32152(__this, method) (( bool (*) (List_1_t885 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m13931_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommand>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m32153(__this, method) (( bool (*) (List_1_t885 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m13932_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommand>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m32154(__this, ___index, method) (( Object_t * (*) (List_1_t885 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m13933_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommand>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m32155(__this, ___index, ___value, method) (( void (*) (List_1_t885 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m13934_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommand>::Add(T)
#define List_1_Add_m32156(__this, ___item, method) (( void (*) (List_1_t885 *, SequencerCommand_t209 *, const MethodInfo*))List_1_Add_m13943_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommand>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m32157(__this, ___newCount, method) (( void (*) (List_1_t885 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m22537_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommand>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m32158(__this, ___idx, ___count, method) (( void (*) (List_1_t885 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m22538_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommand>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m32159(__this, ___collection, method) (( void (*) (List_1_t885 *, Object_t*, const MethodInfo*))List_1_AddCollection_m22539_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommand>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m32160(__this, ___enumerable, method) (( void (*) (List_1_t885 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m22540_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommand>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m32161(__this, ___collection, method) (( void (*) (List_1_t885 *, Object_t*, const MethodInfo*))List_1_AddRange_m87_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommand>::AsReadOnly()
#define List_1_AsReadOnly_m32162(__this, method) (( ReadOnlyCollection_1_t5478 * (*) (List_1_t885 *, const MethodInfo*))List_1_AsReadOnly_m22541_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommand>::Clear()
#define List_1_Clear_m32163(__this, method) (( void (*) (List_1_t885 *, const MethodInfo*))List_1_Clear_m13936_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommand>::Contains(T)
#define List_1_Contains_m32164(__this, ___item, method) (( bool (*) (List_1_t885 *, SequencerCommand_t209 *, const MethodInfo*))List_1_Contains_m13944_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommand>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m32165(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t885 *, SequencerCommandU5BU5D_t5476*, int32_t, const MethodInfo*))List_1_CopyTo_m13945_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommand>::Find(System.Predicate`1<T>)
#define List_1_Find_m32166(__this, ___match, method) (( SequencerCommand_t209 * (*) (List_1_t885 *, Predicate_1_t889 *, const MethodInfo*))List_1_Find_m22542_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommand>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m32167(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t889 *, const MethodInfo*))List_1_CheckMatch_m22543_gshared)(__this /* static, unused */, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommand>::FindAll(System.Predicate`1<T>)
#define List_1_FindAll_m5450(__this, ___match, method) (( List_1_t885 * (*) (List_1_t885 *, Predicate_1_t889 *, const MethodInfo*))List_1_FindAll_m22544_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommand>::FindAllStackBits(System.Predicate`1<T>)
#define List_1_FindAllStackBits_m32168(__this, ___match, method) (( List_1_t885 * (*) (List_1_t885 *, Predicate_1_t889 *, const MethodInfo*))List_1_FindAllStackBits_m22545_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommand>::FindAllList(System.Predicate`1<T>)
#define List_1_FindAllList_m32169(__this, ___match, method) (( List_1_t885 * (*) (List_1_t885 *, Predicate_1_t889 *, const MethodInfo*))List_1_FindAllList_m22546_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommand>::FindIndex(System.Predicate`1<T>)
#define List_1_FindIndex_m32170(__this, ___match, method) (( int32_t (*) (List_1_t885 *, Predicate_1_t889 *, const MethodInfo*))List_1_FindIndex_m22547_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommand>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m32171(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t885 *, int32_t, int32_t, Predicate_1_t889 *, const MethodInfo*))List_1_GetIndex_m22548_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommand>::GetEnumerator()
#define List_1_GetEnumerator_m5451(__this, method) (( Enumerator_t1124  (*) (List_1_t885 *, const MethodInfo*))List_1_GetEnumerator_m22549_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommand>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m32172(__this, ___index, ___count, method) (( List_1_t885 * (*) (List_1_t885 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m22550_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommand>::IndexOf(T)
#define List_1_IndexOf_m32173(__this, ___item, method) (( int32_t (*) (List_1_t885 *, SequencerCommand_t209 *, const MethodInfo*))List_1_IndexOf_m13948_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommand>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m32174(__this, ___start, ___delta, method) (( void (*) (List_1_t885 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m22551_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommand>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m32175(__this, ___index, method) (( void (*) (List_1_t885 *, int32_t, const MethodInfo*))List_1_CheckIndex_m22552_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommand>::Insert(System.Int32,T)
#define List_1_Insert_m32176(__this, ___index, ___item, method) (( void (*) (List_1_t885 *, int32_t, SequencerCommand_t209 *, const MethodInfo*))List_1_Insert_m13949_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommand>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m32177(__this, ___collection, method) (( void (*) (List_1_t885 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m22553_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommand>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m32178(__this, ___index, ___collection, method) (( void (*) (List_1_t885 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m22554_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommand>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m32179(__this, ___index, ___collection, method) (( void (*) (List_1_t885 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m22555_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommand>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m32180(__this, ___index, ___enumerable, method) (( void (*) (List_1_t885 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m22556_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommand>::Remove(T)
#define List_1_Remove_m32181(__this, ___item, method) (( bool (*) (List_1_t885 *, SequencerCommand_t209 *, const MethodInfo*))List_1_Remove_m13946_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommand>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m5454(__this, ___match, method) (( int32_t (*) (List_1_t885 *, Predicate_1_t889 *, const MethodInfo*))List_1_RemoveAll_m22557_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommand>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m32182(__this, ___index, method) (( void (*) (List_1_t885 *, int32_t, const MethodInfo*))List_1_RemoveAt_m13941_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommand>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m32183(__this, ___index, ___count, method) (( void (*) (List_1_t885 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m22558_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommand>::Reverse()
#define List_1_Reverse_m32184(__this, method) (( void (*) (List_1_t885 *, const MethodInfo*))List_1_Reverse_m22559_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommand>::Sort()
#define List_1_Sort_m32185(__this, method) (( void (*) (List_1_t885 *, const MethodInfo*))List_1_Sort_m22560_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommand>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m32186(__this, ___comparer, method) (( void (*) (List_1_t885 *, Object_t*, const MethodInfo*))List_1_Sort_m22561_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommand>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m32187(__this, ___comparison, method) (( void (*) (List_1_t885 *, Comparison_1_t5479 *, const MethodInfo*))List_1_Sort_m22562_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommand>::ToArray()
#define List_1_ToArray_m32188(__this, method) (( SequencerCommandU5BU5D_t5476* (*) (List_1_t885 *, const MethodInfo*))List_1_ToArray_m3165_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommand>::TrimExcess()
#define List_1_TrimExcess_m32189(__this, method) (( void (*) (List_1_t885 *, const MethodInfo*))List_1_TrimExcess_m22563_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommand>::get_Capacity()
#define List_1_get_Capacity_m32190(__this, method) (( int32_t (*) (List_1_t885 *, const MethodInfo*))List_1_get_Capacity_m22564_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommand>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m32191(__this, ___value, method) (( void (*) (List_1_t885 *, int32_t, const MethodInfo*))List_1_set_Capacity_m22565_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommand>::get_Count()
#define List_1_get_Count_m32192(__this, method) (( int32_t (*) (List_1_t885 *, const MethodInfo*))List_1_get_Count_m13927_gshared)(__this, method)
// T System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommand>::get_Item(System.Int32)
#define List_1_get_Item_m32193(__this, ___index, method) (( SequencerCommand_t209 * (*) (List_1_t885 *, int32_t, const MethodInfo*))List_1_get_Item_m13950_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommand>::set_Item(System.Int32,T)
#define List_1_set_Item_m32194(__this, ___index, ___value, method) (( void (*) (List_1_t885 *, int32_t, SequencerCommand_t209 *, const MethodInfo*))List_1_set_Item_m13951_gshared)(__this, ___index, ___value, method)

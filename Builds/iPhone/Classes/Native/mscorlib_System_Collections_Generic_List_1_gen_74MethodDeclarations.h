#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.SequencerCommands.QueuedSequencerCommand>
struct List_1_t1471;
// System.Object
struct Object_t;
// PixelCrushers.DialogueSystem.SequencerCommands.QueuedSequencerCommand
struct QueuedSequencerCommand_t1464;
// System.Collections.Generic.IEnumerable`1<PixelCrushers.DialogueSystem.SequencerCommands.QueuedSequencerCommand>
struct IEnumerable_1_t10313;
// PixelCrushers.DialogueSystem.SequencerCommands.QueuedSequencerCommand[]
struct QueuedSequencerCommandU5BU5D_t7037;
// System.Collections.Generic.IEnumerator`1<PixelCrushers.DialogueSystem.SequencerCommands.QueuedSequencerCommand>
struct IEnumerator_1_t10314;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Collections.Generic.ICollection`1<PixelCrushers.DialogueSystem.SequencerCommands.QueuedSequencerCommand>
struct ICollection_1_t10315;
// System.Collections.ObjectModel.ReadOnlyCollection`1<PixelCrushers.DialogueSystem.SequencerCommands.QueuedSequencerCommand>
struct ReadOnlyCollection_1_t7039;
// System.Predicate`1<PixelCrushers.DialogueSystem.SequencerCommands.QueuedSequencerCommand>
struct Predicate_1_t1702;
// System.Collections.Generic.IComparer`1<PixelCrushers.DialogueSystem.SequencerCommands.QueuedSequencerCommand>
struct IComparer_1_t10316;
// System.Comparison`1<PixelCrushers.DialogueSystem.SequencerCommands.QueuedSequencerCommand>
struct Comparison_1_t7040;
// System.Collections.Generic.List`1/Enumerator<PixelCrushers.DialogueSystem.SequencerCommands.QueuedSequencerCommand>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_26.h"

// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.SequencerCommands.QueuedSequencerCommand>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_genMethodDeclarations.h"
#define List_1__ctor_m7731(__this, method) (( void (*) (List_1_t1471 *, const MethodInfo*))List_1__ctor_m84_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.SequencerCommands.QueuedSequencerCommand>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m37486(__this, ___collection, method) (( void (*) (List_1_t1471 *, Object_t*, const MethodInfo*))List_1__ctor_m3480_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.SequencerCommands.QueuedSequencerCommand>::.ctor(System.Int32)
#define List_1__ctor_m37487(__this, ___capacity, method) (( void (*) (List_1_t1471 *, int32_t, const MethodInfo*))List_1__ctor_m24292_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.SequencerCommands.QueuedSequencerCommand>::.ctor(T[],System.Int32)
#define List_1__ctor_m37488(__this, ___data, ___size, method) (( void (*) (List_1_t1471 *, QueuedSequencerCommandU5BU5D_t7037*, int32_t, const MethodInfo*))List_1__ctor_m24293_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.SequencerCommands.QueuedSequencerCommand>::.cctor()
#define List_1__cctor_m37489(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m24294_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.SequencerCommands.QueuedSequencerCommand>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m37490(__this, method) (( Object_t* (*) (List_1_t1471 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m18232_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.SequencerCommands.QueuedSequencerCommand>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m37491(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t1471 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m18215_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.SequencerCommands.QueuedSequencerCommand>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m37492(__this, method) (( Object_t * (*) (List_1_t1471 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m18211_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.SequencerCommands.QueuedSequencerCommand>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m37493(__this, ___item, method) (( int32_t (*) (List_1_t1471 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m18220_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.SequencerCommands.QueuedSequencerCommand>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m37494(__this, ___item, method) (( bool (*) (List_1_t1471 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m18222_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.SequencerCommands.QueuedSequencerCommand>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m37495(__this, ___item, method) (( int32_t (*) (List_1_t1471 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m18223_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.SequencerCommands.QueuedSequencerCommand>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m37496(__this, ___index, ___item, method) (( void (*) (List_1_t1471 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m18224_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.SequencerCommands.QueuedSequencerCommand>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m37497(__this, ___item, method) (( void (*) (List_1_t1471 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m18225_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.SequencerCommands.QueuedSequencerCommand>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m37498(__this, method) (( bool (*) (List_1_t1471 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m18227_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.SequencerCommands.QueuedSequencerCommand>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m37499(__this, method) (( bool (*) (List_1_t1471 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m18213_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.SequencerCommands.QueuedSequencerCommand>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m37500(__this, method) (( Object_t * (*) (List_1_t1471 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m18214_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.SequencerCommands.QueuedSequencerCommand>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m37501(__this, method) (( bool (*) (List_1_t1471 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m18216_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.SequencerCommands.QueuedSequencerCommand>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m37502(__this, method) (( bool (*) (List_1_t1471 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m18217_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.SequencerCommands.QueuedSequencerCommand>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m37503(__this, ___index, method) (( Object_t * (*) (List_1_t1471 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m18218_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.SequencerCommands.QueuedSequencerCommand>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m37504(__this, ___index, ___value, method) (( void (*) (List_1_t1471 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m18219_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.SequencerCommands.QueuedSequencerCommand>::Add(T)
#define List_1_Add_m37505(__this, ___item, method) (( void (*) (List_1_t1471 *, QueuedSequencerCommand_t1464 *, const MethodInfo*))List_1_Add_m18228_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.SequencerCommands.QueuedSequencerCommand>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m37506(__this, ___newCount, method) (( void (*) (List_1_t1471 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m24295_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.SequencerCommands.QueuedSequencerCommand>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m37507(__this, ___idx, ___count, method) (( void (*) (List_1_t1471 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m24296_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.SequencerCommands.QueuedSequencerCommand>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m37508(__this, ___collection, method) (( void (*) (List_1_t1471 *, Object_t*, const MethodInfo*))List_1_AddCollection_m24297_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.SequencerCommands.QueuedSequencerCommand>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m37509(__this, ___enumerable, method) (( void (*) (List_1_t1471 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m24298_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.SequencerCommands.QueuedSequencerCommand>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m37510(__this, ___collection, method) (( void (*) (List_1_t1471 *, Object_t*, const MethodInfo*))List_1_AddRange_m87_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.SequencerCommands.QueuedSequencerCommand>::AsReadOnly()
#define List_1_AsReadOnly_m37511(__this, method) (( ReadOnlyCollection_1_t7039 * (*) (List_1_t1471 *, const MethodInfo*))List_1_AsReadOnly_m24299_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.SequencerCommands.QueuedSequencerCommand>::Clear()
#define List_1_Clear_m37512(__this, method) (( void (*) (List_1_t1471 *, const MethodInfo*))List_1_Clear_m18221_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.SequencerCommands.QueuedSequencerCommand>::Contains(T)
#define List_1_Contains_m37513(__this, ___item, method) (( bool (*) (List_1_t1471 *, QueuedSequencerCommand_t1464 *, const MethodInfo*))List_1_Contains_m18229_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.SequencerCommands.QueuedSequencerCommand>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m37514(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t1471 *, QueuedSequencerCommandU5BU5D_t7037*, int32_t, const MethodInfo*))List_1_CopyTo_m18230_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.SequencerCommands.QueuedSequencerCommand>::Find(System.Predicate`1<T>)
#define List_1_Find_m37515(__this, ___match, method) (( QueuedSequencerCommand_t1464 * (*) (List_1_t1471 *, Predicate_1_t1702 *, const MethodInfo*))List_1_Find_m24300_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.SequencerCommands.QueuedSequencerCommand>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m37516(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t1702 *, const MethodInfo*))List_1_CheckMatch_m24301_gshared)(__this /* static, unused */, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.SequencerCommands.QueuedSequencerCommand>::FindAll(System.Predicate`1<T>)
#define List_1_FindAll_m37517(__this, ___match, method) (( List_1_t1471 * (*) (List_1_t1471 *, Predicate_1_t1702 *, const MethodInfo*))List_1_FindAll_m24302_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.SequencerCommands.QueuedSequencerCommand>::FindAllStackBits(System.Predicate`1<T>)
#define List_1_FindAllStackBits_m37518(__this, ___match, method) (( List_1_t1471 * (*) (List_1_t1471 *, Predicate_1_t1702 *, const MethodInfo*))List_1_FindAllStackBits_m24303_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.SequencerCommands.QueuedSequencerCommand>::FindAllList(System.Predicate`1<T>)
#define List_1_FindAllList_m37519(__this, ___match, method) (( List_1_t1471 * (*) (List_1_t1471 *, Predicate_1_t1702 *, const MethodInfo*))List_1_FindAllList_m24304_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.SequencerCommands.QueuedSequencerCommand>::FindIndex(System.Predicate`1<T>)
#define List_1_FindIndex_m37520(__this, ___match, method) (( int32_t (*) (List_1_t1471 *, Predicate_1_t1702 *, const MethodInfo*))List_1_FindIndex_m24305_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.SequencerCommands.QueuedSequencerCommand>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m37521(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t1471 *, int32_t, int32_t, Predicate_1_t1702 *, const MethodInfo*))List_1_GetIndex_m24306_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.SequencerCommands.QueuedSequencerCommand>::GetEnumerator()
#define List_1_GetEnumerator_m7744(__this, method) (( Enumerator_t1701  (*) (List_1_t1471 *, const MethodInfo*))List_1_GetEnumerator_m24307_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.SequencerCommands.QueuedSequencerCommand>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m37522(__this, ___index, ___count, method) (( List_1_t1471 * (*) (List_1_t1471 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m24308_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.SequencerCommands.QueuedSequencerCommand>::IndexOf(T)
#define List_1_IndexOf_m37523(__this, ___item, method) (( int32_t (*) (List_1_t1471 *, QueuedSequencerCommand_t1464 *, const MethodInfo*))List_1_IndexOf_m18233_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.SequencerCommands.QueuedSequencerCommand>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m37524(__this, ___start, ___delta, method) (( void (*) (List_1_t1471 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m24309_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.SequencerCommands.QueuedSequencerCommand>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m37525(__this, ___index, method) (( void (*) (List_1_t1471 *, int32_t, const MethodInfo*))List_1_CheckIndex_m24310_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.SequencerCommands.QueuedSequencerCommand>::Insert(System.Int32,T)
#define List_1_Insert_m37526(__this, ___index, ___item, method) (( void (*) (List_1_t1471 *, int32_t, QueuedSequencerCommand_t1464 *, const MethodInfo*))List_1_Insert_m18234_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.SequencerCommands.QueuedSequencerCommand>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m37527(__this, ___collection, method) (( void (*) (List_1_t1471 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m24311_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.SequencerCommands.QueuedSequencerCommand>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m37528(__this, ___index, ___collection, method) (( void (*) (List_1_t1471 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m24312_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.SequencerCommands.QueuedSequencerCommand>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m37529(__this, ___index, ___collection, method) (( void (*) (List_1_t1471 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m24313_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.SequencerCommands.QueuedSequencerCommand>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m37530(__this, ___index, ___enumerable, method) (( void (*) (List_1_t1471 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m24314_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.SequencerCommands.QueuedSequencerCommand>::Remove(T)
#define List_1_Remove_m37531(__this, ___item, method) (( bool (*) (List_1_t1471 *, QueuedSequencerCommand_t1464 *, const MethodInfo*))List_1_Remove_m18231_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.SequencerCommands.QueuedSequencerCommand>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m7748(__this, ___match, method) (( int32_t (*) (List_1_t1471 *, Predicate_1_t1702 *, const MethodInfo*))List_1_RemoveAll_m24315_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.SequencerCommands.QueuedSequencerCommand>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m37532(__this, ___index, method) (( void (*) (List_1_t1471 *, int32_t, const MethodInfo*))List_1_RemoveAt_m18226_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.SequencerCommands.QueuedSequencerCommand>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m37533(__this, ___index, ___count, method) (( void (*) (List_1_t1471 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m24316_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.SequencerCommands.QueuedSequencerCommand>::Reverse()
#define List_1_Reverse_m37534(__this, method) (( void (*) (List_1_t1471 *, const MethodInfo*))List_1_Reverse_m24317_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.SequencerCommands.QueuedSequencerCommand>::Sort()
#define List_1_Sort_m37535(__this, method) (( void (*) (List_1_t1471 *, const MethodInfo*))List_1_Sort_m24318_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.SequencerCommands.QueuedSequencerCommand>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m37536(__this, ___comparer, method) (( void (*) (List_1_t1471 *, Object_t*, const MethodInfo*))List_1_Sort_m24319_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.SequencerCommands.QueuedSequencerCommand>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m37537(__this, ___comparison, method) (( void (*) (List_1_t1471 *, Comparison_1_t7040 *, const MethodInfo*))List_1_Sort_m24320_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.SequencerCommands.QueuedSequencerCommand>::ToArray()
#define List_1_ToArray_m37538(__this, method) (( QueuedSequencerCommandU5BU5D_t7037* (*) (List_1_t1471 *, const MethodInfo*))List_1_ToArray_m3479_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.SequencerCommands.QueuedSequencerCommand>::TrimExcess()
#define List_1_TrimExcess_m37539(__this, method) (( void (*) (List_1_t1471 *, const MethodInfo*))List_1_TrimExcess_m24321_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.SequencerCommands.QueuedSequencerCommand>::get_Capacity()
#define List_1_get_Capacity_m37540(__this, method) (( int32_t (*) (List_1_t1471 *, const MethodInfo*))List_1_get_Capacity_m24322_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.SequencerCommands.QueuedSequencerCommand>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m37541(__this, ___value, method) (( void (*) (List_1_t1471 *, int32_t, const MethodInfo*))List_1_set_Capacity_m24323_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.SequencerCommands.QueuedSequencerCommand>::get_Count()
#define List_1_get_Count_m37542(__this, method) (( int32_t (*) (List_1_t1471 *, const MethodInfo*))List_1_get_Count_m18212_gshared)(__this, method)
// T System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.SequencerCommands.QueuedSequencerCommand>::get_Item(System.Int32)
#define List_1_get_Item_m37543(__this, ___index, method) (( QueuedSequencerCommand_t1464 * (*) (List_1_t1471 *, int32_t, const MethodInfo*))List_1_get_Item_m18235_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.SequencerCommands.QueuedSequencerCommand>::set_Item(System.Int32,T)
#define List_1_set_Item_m37544(__this, ___index, ___value, method) (( void (*) (List_1_t1471 *, int32_t, QueuedSequencerCommand_t1464 *, const MethodInfo*))List_1_set_Item_m18236_gshared)(__this, ___index, ___value, method)

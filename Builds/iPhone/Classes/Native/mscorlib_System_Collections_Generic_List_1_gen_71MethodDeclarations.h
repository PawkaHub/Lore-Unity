#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.SequencerCommands.QueuedSequencerCommand>
struct List_1_t1212;
// System.Object
struct Object_t;
// PixelCrushers.DialogueSystem.SequencerCommands.QueuedSequencerCommand
struct QueuedSequencerCommand_t1205;
// System.Collections.Generic.IEnumerable`1<PixelCrushers.DialogueSystem.SequencerCommands.QueuedSequencerCommand>
struct IEnumerable_1_t10014;
// PixelCrushers.DialogueSystem.SequencerCommands.QueuedSequencerCommand[]
struct QueuedSequencerCommandU5BU5D_t6706;
// System.Collections.Generic.IEnumerator`1<PixelCrushers.DialogueSystem.SequencerCommands.QueuedSequencerCommand>
struct IEnumerator_1_t10015;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Collections.Generic.ICollection`1<PixelCrushers.DialogueSystem.SequencerCommands.QueuedSequencerCommand>
struct ICollection_1_t10016;
// System.Collections.ObjectModel.ReadOnlyCollection`1<PixelCrushers.DialogueSystem.SequencerCommands.QueuedSequencerCommand>
struct ReadOnlyCollection_1_t6708;
// System.Predicate`1<PixelCrushers.DialogueSystem.SequencerCommands.QueuedSequencerCommand>
struct Predicate_1_t1445;
// System.Collections.Generic.IComparer`1<PixelCrushers.DialogueSystem.SequencerCommands.QueuedSequencerCommand>
struct IComparer_1_t10017;
// System.Comparison`1<PixelCrushers.DialogueSystem.SequencerCommands.QueuedSequencerCommand>
struct Comparison_1_t6709;
// System.Collections.Generic.List`1/Enumerator<PixelCrushers.DialogueSystem.SequencerCommands.QueuedSequencerCommand>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_23.h"

// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.SequencerCommands.QueuedSequencerCommand>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_genMethodDeclarations.h"
#define List_1__ctor_m7285(__this, method) (( void (*) (List_1_t1212 *, const MethodInfo*))List_1__ctor_m84_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.SequencerCommands.QueuedSequencerCommand>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m36037(__this, ___collection, method) (( void (*) (List_1_t1212 *, Object_t*, const MethodInfo*))List_1__ctor_m3251_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.SequencerCommands.QueuedSequencerCommand>::.ctor(System.Int32)
#define List_1__ctor_m36038(__this, ___capacity, method) (( void (*) (List_1_t1212 *, int32_t, const MethodInfo*))List_1__ctor_m23875_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.SequencerCommands.QueuedSequencerCommand>::.ctor(T[],System.Int32)
#define List_1__ctor_m36039(__this, ___data, ___size, method) (( void (*) (List_1_t1212 *, QueuedSequencerCommandU5BU5D_t6706*, int32_t, const MethodInfo*))List_1__ctor_m23876_gshared)(__this, ___data, ___size, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.SequencerCommands.QueuedSequencerCommand>::.cctor()
#define List_1__cctor_m36040(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m23877_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.SequencerCommands.QueuedSequencerCommand>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m36041(__this, method) (( Object_t* (*) (List_1_t1212 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m17814_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.SequencerCommands.QueuedSequencerCommand>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m36042(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t1212 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m17797_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.SequencerCommands.QueuedSequencerCommand>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m36043(__this, method) (( Object_t * (*) (List_1_t1212 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m17793_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.SequencerCommands.QueuedSequencerCommand>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m36044(__this, ___item, method) (( int32_t (*) (List_1_t1212 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m17802_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.SequencerCommands.QueuedSequencerCommand>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m36045(__this, ___item, method) (( bool (*) (List_1_t1212 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m17804_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.SequencerCommands.QueuedSequencerCommand>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m36046(__this, ___item, method) (( int32_t (*) (List_1_t1212 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m17805_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.SequencerCommands.QueuedSequencerCommand>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m36047(__this, ___index, ___item, method) (( void (*) (List_1_t1212 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m17806_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.SequencerCommands.QueuedSequencerCommand>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m36048(__this, ___item, method) (( void (*) (List_1_t1212 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m17807_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.SequencerCommands.QueuedSequencerCommand>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m36049(__this, method) (( bool (*) (List_1_t1212 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m17809_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.SequencerCommands.QueuedSequencerCommand>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m36050(__this, method) (( bool (*) (List_1_t1212 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m17795_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.SequencerCommands.QueuedSequencerCommand>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m36051(__this, method) (( Object_t * (*) (List_1_t1212 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m17796_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.SequencerCommands.QueuedSequencerCommand>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m36052(__this, method) (( bool (*) (List_1_t1212 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m17798_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.SequencerCommands.QueuedSequencerCommand>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m36053(__this, method) (( bool (*) (List_1_t1212 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m17799_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.SequencerCommands.QueuedSequencerCommand>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m36054(__this, ___index, method) (( Object_t * (*) (List_1_t1212 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m17800_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.SequencerCommands.QueuedSequencerCommand>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m36055(__this, ___index, ___value, method) (( void (*) (List_1_t1212 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m17801_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.SequencerCommands.QueuedSequencerCommand>::Add(T)
#define List_1_Add_m36056(__this, ___item, method) (( void (*) (List_1_t1212 *, QueuedSequencerCommand_t1205 *, const MethodInfo*))List_1_Add_m17810_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.SequencerCommands.QueuedSequencerCommand>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m36057(__this, ___newCount, method) (( void (*) (List_1_t1212 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m23878_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.SequencerCommands.QueuedSequencerCommand>::CheckRange(System.Int32,System.Int32)
#define List_1_CheckRange_m36058(__this, ___idx, ___count, method) (( void (*) (List_1_t1212 *, int32_t, int32_t, const MethodInfo*))List_1_CheckRange_m23879_gshared)(__this, ___idx, ___count, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.SequencerCommands.QueuedSequencerCommand>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m36059(__this, ___collection, method) (( void (*) (List_1_t1212 *, Object_t*, const MethodInfo*))List_1_AddCollection_m23880_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.SequencerCommands.QueuedSequencerCommand>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m36060(__this, ___enumerable, method) (( void (*) (List_1_t1212 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m23881_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.SequencerCommands.QueuedSequencerCommand>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m36061(__this, ___collection, method) (( void (*) (List_1_t1212 *, Object_t*, const MethodInfo*))List_1_AddRange_m87_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.SequencerCommands.QueuedSequencerCommand>::AsReadOnly()
#define List_1_AsReadOnly_m36062(__this, method) (( ReadOnlyCollection_1_t6708 * (*) (List_1_t1212 *, const MethodInfo*))List_1_AsReadOnly_m23882_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.SequencerCommands.QueuedSequencerCommand>::Clear()
#define List_1_Clear_m36063(__this, method) (( void (*) (List_1_t1212 *, const MethodInfo*))List_1_Clear_m17803_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.SequencerCommands.QueuedSequencerCommand>::Contains(T)
#define List_1_Contains_m36064(__this, ___item, method) (( bool (*) (List_1_t1212 *, QueuedSequencerCommand_t1205 *, const MethodInfo*))List_1_Contains_m17811_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.SequencerCommands.QueuedSequencerCommand>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m36065(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t1212 *, QueuedSequencerCommandU5BU5D_t6706*, int32_t, const MethodInfo*))List_1_CopyTo_m17812_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.SequencerCommands.QueuedSequencerCommand>::Find(System.Predicate`1<T>)
#define List_1_Find_m36066(__this, ___match, method) (( QueuedSequencerCommand_t1205 * (*) (List_1_t1212 *, Predicate_1_t1445 *, const MethodInfo*))List_1_Find_m23883_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.SequencerCommands.QueuedSequencerCommand>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m36067(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t1445 *, const MethodInfo*))List_1_CheckMatch_m23884_gshared)(__this /* static, unused */, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.SequencerCommands.QueuedSequencerCommand>::FindAll(System.Predicate`1<T>)
#define List_1_FindAll_m36068(__this, ___match, method) (( List_1_t1212 * (*) (List_1_t1212 *, Predicate_1_t1445 *, const MethodInfo*))List_1_FindAll_m23885_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.SequencerCommands.QueuedSequencerCommand>::FindAllStackBits(System.Predicate`1<T>)
#define List_1_FindAllStackBits_m36069(__this, ___match, method) (( List_1_t1212 * (*) (List_1_t1212 *, Predicate_1_t1445 *, const MethodInfo*))List_1_FindAllStackBits_m23886_gshared)(__this, ___match, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.SequencerCommands.QueuedSequencerCommand>::FindAllList(System.Predicate`1<T>)
#define List_1_FindAllList_m36070(__this, ___match, method) (( List_1_t1212 * (*) (List_1_t1212 *, Predicate_1_t1445 *, const MethodInfo*))List_1_FindAllList_m23887_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.SequencerCommands.QueuedSequencerCommand>::FindIndex(System.Predicate`1<T>)
#define List_1_FindIndex_m36071(__this, ___match, method) (( int32_t (*) (List_1_t1212 *, Predicate_1_t1445 *, const MethodInfo*))List_1_FindIndex_m23888_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.SequencerCommands.QueuedSequencerCommand>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m36072(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t1212 *, int32_t, int32_t, Predicate_1_t1445 *, const MethodInfo*))List_1_GetIndex_m23889_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.SequencerCommands.QueuedSequencerCommand>::GetEnumerator()
#define List_1_GetEnumerator_m7298(__this, method) (( Enumerator_t1444  (*) (List_1_t1212 *, const MethodInfo*))List_1_GetEnumerator_m23890_gshared)(__this, method)
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.SequencerCommands.QueuedSequencerCommand>::GetRange(System.Int32,System.Int32)
#define List_1_GetRange_m36073(__this, ___index, ___count, method) (( List_1_t1212 * (*) (List_1_t1212 *, int32_t, int32_t, const MethodInfo*))List_1_GetRange_m23891_gshared)(__this, ___index, ___count, method)
// System.Int32 System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.SequencerCommands.QueuedSequencerCommand>::IndexOf(T)
#define List_1_IndexOf_m36074(__this, ___item, method) (( int32_t (*) (List_1_t1212 *, QueuedSequencerCommand_t1205 *, const MethodInfo*))List_1_IndexOf_m17815_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.SequencerCommands.QueuedSequencerCommand>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m36075(__this, ___start, ___delta, method) (( void (*) (List_1_t1212 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m23892_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.SequencerCommands.QueuedSequencerCommand>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m36076(__this, ___index, method) (( void (*) (List_1_t1212 *, int32_t, const MethodInfo*))List_1_CheckIndex_m23893_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.SequencerCommands.QueuedSequencerCommand>::Insert(System.Int32,T)
#define List_1_Insert_m36077(__this, ___index, ___item, method) (( void (*) (List_1_t1212 *, int32_t, QueuedSequencerCommand_t1205 *, const MethodInfo*))List_1_Insert_m17816_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.SequencerCommands.QueuedSequencerCommand>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m36078(__this, ___collection, method) (( void (*) (List_1_t1212 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m23894_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.SequencerCommands.QueuedSequencerCommand>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertRange_m36079(__this, ___index, ___collection, method) (( void (*) (List_1_t1212 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertRange_m23895_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.SequencerCommands.QueuedSequencerCommand>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
#define List_1_InsertCollection_m36080(__this, ___index, ___collection, method) (( void (*) (List_1_t1212 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertCollection_m23896_gshared)(__this, ___index, ___collection, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.SequencerCommands.QueuedSequencerCommand>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
#define List_1_InsertEnumeration_m36081(__this, ___index, ___enumerable, method) (( void (*) (List_1_t1212 *, int32_t, Object_t*, const MethodInfo*))List_1_InsertEnumeration_m23897_gshared)(__this, ___index, ___enumerable, method)
// System.Boolean System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.SequencerCommands.QueuedSequencerCommand>::Remove(T)
#define List_1_Remove_m36082(__this, ___item, method) (( bool (*) (List_1_t1212 *, QueuedSequencerCommand_t1205 *, const MethodInfo*))List_1_Remove_m17813_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.SequencerCommands.QueuedSequencerCommand>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m7302(__this, ___match, method) (( int32_t (*) (List_1_t1212 *, Predicate_1_t1445 *, const MethodInfo*))List_1_RemoveAll_m23898_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.SequencerCommands.QueuedSequencerCommand>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m36083(__this, ___index, method) (( void (*) (List_1_t1212 *, int32_t, const MethodInfo*))List_1_RemoveAt_m17808_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.SequencerCommands.QueuedSequencerCommand>::RemoveRange(System.Int32,System.Int32)
#define List_1_RemoveRange_m36084(__this, ___index, ___count, method) (( void (*) (List_1_t1212 *, int32_t, int32_t, const MethodInfo*))List_1_RemoveRange_m23899_gshared)(__this, ___index, ___count, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.SequencerCommands.QueuedSequencerCommand>::Reverse()
#define List_1_Reverse_m36085(__this, method) (( void (*) (List_1_t1212 *, const MethodInfo*))List_1_Reverse_m23900_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.SequencerCommands.QueuedSequencerCommand>::Sort()
#define List_1_Sort_m36086(__this, method) (( void (*) (List_1_t1212 *, const MethodInfo*))List_1_Sort_m23901_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.SequencerCommands.QueuedSequencerCommand>::Sort(System.Collections.Generic.IComparer`1<T>)
#define List_1_Sort_m36087(__this, ___comparer, method) (( void (*) (List_1_t1212 *, Object_t*, const MethodInfo*))List_1_Sort_m23902_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.SequencerCommands.QueuedSequencerCommand>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m36088(__this, ___comparison, method) (( void (*) (List_1_t1212 *, Comparison_1_t6709 *, const MethodInfo*))List_1_Sort_m23903_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.SequencerCommands.QueuedSequencerCommand>::ToArray()
#define List_1_ToArray_m36089(__this, method) (( QueuedSequencerCommandU5BU5D_t6706* (*) (List_1_t1212 *, const MethodInfo*))List_1_ToArray_m3250_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.SequencerCommands.QueuedSequencerCommand>::TrimExcess()
#define List_1_TrimExcess_m36090(__this, method) (( void (*) (List_1_t1212 *, const MethodInfo*))List_1_TrimExcess_m23904_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.SequencerCommands.QueuedSequencerCommand>::get_Capacity()
#define List_1_get_Capacity_m36091(__this, method) (( int32_t (*) (List_1_t1212 *, const MethodInfo*))List_1_get_Capacity_m23905_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.SequencerCommands.QueuedSequencerCommand>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m36092(__this, ___value, method) (( void (*) (List_1_t1212 *, int32_t, const MethodInfo*))List_1_set_Capacity_m23906_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.SequencerCommands.QueuedSequencerCommand>::get_Count()
#define List_1_get_Count_m36093(__this, method) (( int32_t (*) (List_1_t1212 *, const MethodInfo*))List_1_get_Count_m17794_gshared)(__this, method)
// T System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.SequencerCommands.QueuedSequencerCommand>::get_Item(System.Int32)
#define List_1_get_Item_m36094(__this, ___index, method) (( QueuedSequencerCommand_t1205 * (*) (List_1_t1212 *, int32_t, const MethodInfo*))List_1_get_Item_m17817_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.SequencerCommands.QueuedSequencerCommand>::set_Item(System.Int32,T)
#define List_1_set_Item_m36095(__this, ___index, ___value, method) (( void (*) (List_1_t1212 *, int32_t, QueuedSequencerCommand_t1205 *, const MethodInfo*))List_1_set_Item_m17818_gshared)(__this, ___index, ___value, method)

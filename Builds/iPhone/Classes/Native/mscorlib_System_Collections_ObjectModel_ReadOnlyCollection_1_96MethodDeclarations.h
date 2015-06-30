#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.ObjectModel.ReadOnlyCollection`1<System.String[]>
struct ReadOnlyCollection_1_t6012;
// System.String[]
struct StringU5BU5D_t20;
// System.Object
struct Object_t;
// System.Collections.Generic.IList`1<System.String[]>
struct IList_1_t6011;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.String[][]
struct StringU5BU5DU5BU5D_t6010;
// System.Collections.Generic.IEnumerator`1<System.String[]>
struct IEnumerator_1_t7014;

// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.String[]>::.ctor(System.Collections.Generic.IList`1<T>)
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1_5MethodDeclarations.h"
#define ReadOnlyCollection_1__ctor_m39674(__this, ___list, method) (( void (*) (ReadOnlyCollection_1_t6012 *, Object_t*, const MethodInfo*))ReadOnlyCollection_1__ctor_m22577_gshared)(__this, ___list, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.String[]>::System.Collections.Generic.ICollection<T>.Add(T)
#define ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m39675(__this, ___item, method) (( void (*) (ReadOnlyCollection_1_t6012 *, StringU5BU5D_t20*, const MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m22578_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.String[]>::System.Collections.Generic.ICollection<T>.Clear()
#define ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Clear_m39676(__this, method) (( void (*) (ReadOnlyCollection_1_t6012 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Clear_m22579_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.String[]>::System.Collections.Generic.IList<T>.Insert(System.Int32,T)
#define ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_Insert_m39677(__this, ___index, ___item, method) (( void (*) (ReadOnlyCollection_1_t6012 *, int32_t, StringU5BU5D_t20*, const MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_Insert_m22580_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.String[]>::System.Collections.Generic.ICollection<T>.Remove(T)
#define ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Remove_m39678(__this, ___item, method) (( bool (*) (ReadOnlyCollection_1_t6012 *, StringU5BU5D_t20*, const MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Remove_m22581_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.String[]>::System.Collections.Generic.IList<T>.RemoveAt(System.Int32)
#define ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_RemoveAt_m39679(__this, ___index, method) (( void (*) (ReadOnlyCollection_1_t6012 *, int32_t, const MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_RemoveAt_m22582_gshared)(__this, ___index, method)
// T System.Collections.ObjectModel.ReadOnlyCollection`1<System.String[]>::System.Collections.Generic.IList<T>.get_Item(System.Int32)
#define ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m39680(__this, ___index, method) (( StringU5BU5D_t20* (*) (ReadOnlyCollection_1_t6012 *, int32_t, const MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m22583_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.String[]>::System.Collections.Generic.IList<T>.set_Item(System.Int32,T)
#define ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_set_Item_m39681(__this, ___index, ___value, method) (( void (*) (ReadOnlyCollection_1_t6012 *, int32_t, StringU5BU5D_t20*, const MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_set_Item_m22584_gshared)(__this, ___index, ___value, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.String[]>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m39682(__this, method) (( bool (*) (ReadOnlyCollection_1_t6012 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m22585_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.String[]>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m39683(__this, ___array, ___index, method) (( void (*) (ReadOnlyCollection_1_t6012 *, Array_t *, int32_t, const MethodInfo*))ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m22586_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.ObjectModel.ReadOnlyCollection`1<System.String[]>::System.Collections.IEnumerable.GetEnumerator()
#define ReadOnlyCollection_1_System_Collections_IEnumerable_GetEnumerator_m39684(__this, method) (( Object_t * (*) (ReadOnlyCollection_1_t6012 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IEnumerable_GetEnumerator_m22587_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.String[]>::System.Collections.IList.Add(System.Object)
#define ReadOnlyCollection_1_System_Collections_IList_Add_m39685(__this, ___value, method) (( int32_t (*) (ReadOnlyCollection_1_t6012 *, Object_t *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_Add_m22588_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.String[]>::System.Collections.IList.Clear()
#define ReadOnlyCollection_1_System_Collections_IList_Clear_m39686(__this, method) (( void (*) (ReadOnlyCollection_1_t6012 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_Clear_m22589_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.String[]>::System.Collections.IList.Contains(System.Object)
#define ReadOnlyCollection_1_System_Collections_IList_Contains_m39687(__this, ___value, method) (( bool (*) (ReadOnlyCollection_1_t6012 *, Object_t *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_Contains_m22590_gshared)(__this, ___value, method)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.String[]>::System.Collections.IList.IndexOf(System.Object)
#define ReadOnlyCollection_1_System_Collections_IList_IndexOf_m39688(__this, ___value, method) (( int32_t (*) (ReadOnlyCollection_1_t6012 *, Object_t *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_IndexOf_m22591_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.String[]>::System.Collections.IList.Insert(System.Int32,System.Object)
#define ReadOnlyCollection_1_System_Collections_IList_Insert_m39689(__this, ___index, ___value, method) (( void (*) (ReadOnlyCollection_1_t6012 *, int32_t, Object_t *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_Insert_m22592_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.String[]>::System.Collections.IList.Remove(System.Object)
#define ReadOnlyCollection_1_System_Collections_IList_Remove_m39690(__this, ___value, method) (( void (*) (ReadOnlyCollection_1_t6012 *, Object_t *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_Remove_m22593_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.String[]>::System.Collections.IList.RemoveAt(System.Int32)
#define ReadOnlyCollection_1_System_Collections_IList_RemoveAt_m39691(__this, ___index, method) (( void (*) (ReadOnlyCollection_1_t6012 *, int32_t, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_RemoveAt_m22594_gshared)(__this, ___index, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.String[]>::System.Collections.ICollection.get_IsSynchronized()
#define ReadOnlyCollection_1_System_Collections_ICollection_get_IsSynchronized_m39692(__this, method) (( bool (*) (ReadOnlyCollection_1_t6012 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_ICollection_get_IsSynchronized_m22595_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<System.String[]>::System.Collections.ICollection.get_SyncRoot()
#define ReadOnlyCollection_1_System_Collections_ICollection_get_SyncRoot_m39693(__this, method) (( Object_t * (*) (ReadOnlyCollection_1_t6012 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_ICollection_get_SyncRoot_m22596_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.String[]>::System.Collections.IList.get_IsFixedSize()
#define ReadOnlyCollection_1_System_Collections_IList_get_IsFixedSize_m39694(__this, method) (( bool (*) (ReadOnlyCollection_1_t6012 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_get_IsFixedSize_m22597_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.String[]>::System.Collections.IList.get_IsReadOnly()
#define ReadOnlyCollection_1_System_Collections_IList_get_IsReadOnly_m39695(__this, method) (( bool (*) (ReadOnlyCollection_1_t6012 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_get_IsReadOnly_m22598_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<System.String[]>::System.Collections.IList.get_Item(System.Int32)
#define ReadOnlyCollection_1_System_Collections_IList_get_Item_m39696(__this, ___index, method) (( Object_t * (*) (ReadOnlyCollection_1_t6012 *, int32_t, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_get_Item_m22599_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.String[]>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define ReadOnlyCollection_1_System_Collections_IList_set_Item_m39697(__this, ___index, ___value, method) (( void (*) (ReadOnlyCollection_1_t6012 *, int32_t, Object_t *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_set_Item_m22600_gshared)(__this, ___index, ___value, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.String[]>::Contains(T)
#define ReadOnlyCollection_1_Contains_m39698(__this, ___value, method) (( bool (*) (ReadOnlyCollection_1_t6012 *, StringU5BU5D_t20*, const MethodInfo*))ReadOnlyCollection_1_Contains_m22601_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.String[]>::CopyTo(T[],System.Int32)
#define ReadOnlyCollection_1_CopyTo_m39699(__this, ___array, ___index, method) (( void (*) (ReadOnlyCollection_1_t6012 *, StringU5BU5DU5BU5D_t6010*, int32_t, const MethodInfo*))ReadOnlyCollection_1_CopyTo_m22602_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1<System.String[]>::GetEnumerator()
#define ReadOnlyCollection_1_GetEnumerator_m39700(__this, method) (( Object_t* (*) (ReadOnlyCollection_1_t6012 *, const MethodInfo*))ReadOnlyCollection_1_GetEnumerator_m22603_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.String[]>::IndexOf(T)
#define ReadOnlyCollection_1_IndexOf_m39701(__this, ___value, method) (( int32_t (*) (ReadOnlyCollection_1_t6012 *, StringU5BU5D_t20*, const MethodInfo*))ReadOnlyCollection_1_IndexOf_m22604_gshared)(__this, ___value, method)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.String[]>::get_Count()
#define ReadOnlyCollection_1_get_Count_m39702(__this, method) (( int32_t (*) (ReadOnlyCollection_1_t6012 *, const MethodInfo*))ReadOnlyCollection_1_get_Count_m22605_gshared)(__this, method)
// T System.Collections.ObjectModel.ReadOnlyCollection`1<System.String[]>::get_Item(System.Int32)
#define ReadOnlyCollection_1_get_Item_m39703(__this, ___index, method) (( StringU5BU5D_t20* (*) (ReadOnlyCollection_1_t6012 *, int32_t, const MethodInfo*))ReadOnlyCollection_1_get_Item_m22606_gshared)(__this, ___index, method)

#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.ObjectModel.Collection`1<System.Object>
struct Collection_1_t4878;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Object[]
struct ObjectU5BU5D_t21;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t718;
// System.Collections.Generic.IList`1<System.Object>
struct IList_1_t1545;

// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::.ctor()
extern "C" void Collection_1__ctor_m22607_gshared (Collection_1_t4878 * __this, const MethodInfo* method);
#define Collection_1__ctor_m22607(__this, method) (( void (*) (Collection_1_t4878 *, const MethodInfo*))Collection_1__ctor_m22607_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m22608_gshared (Collection_1_t4878 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m22608(__this, method) (( bool (*) (Collection_1_t4878 *, const MethodInfo*))Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m22608_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Collection_1_System_Collections_ICollection_CopyTo_m22609_gshared (Collection_1_t4878 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_CopyTo_m22609(__this, ___array, ___index, method) (( void (*) (Collection_1_t4878 *, Array_t *, int32_t, const MethodInfo*))Collection_1_System_Collections_ICollection_CopyTo_m22609_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Collection_1_System_Collections_IEnumerable_GetEnumerator_m22610_gshared (Collection_1_t4878 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IEnumerable_GetEnumerator_m22610(__this, method) (( Object_t * (*) (Collection_1_t4878 *, const MethodInfo*))Collection_1_System_Collections_IEnumerable_GetEnumerator_m22610_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Add(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_Add_m22611_gshared (Collection_1_t4878 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Add_m22611(__this, ___value, method) (( int32_t (*) (Collection_1_t4878 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Add_m22611_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Contains(System.Object)
extern "C" bool Collection_1_System_Collections_IList_Contains_m22612_gshared (Collection_1_t4878 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Contains_m22612(__this, ___value, method) (( bool (*) (Collection_1_t4878 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Contains_m22612_gshared)(__this, ___value, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_IndexOf_m22613_gshared (Collection_1_t4878 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_IndexOf_m22613(__this, ___value, method) (( int32_t (*) (Collection_1_t4878 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_IndexOf_m22613_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_Insert_m22614_gshared (Collection_1_t4878 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Insert_m22614(__this, ___index, ___value, method) (( void (*) (Collection_1_t4878 *, int32_t, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Insert_m22614_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Remove(System.Object)
extern "C" void Collection_1_System_Collections_IList_Remove_m22615_gshared (Collection_1_t4878 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Remove_m22615(__this, ___value, method) (( void (*) (Collection_1_t4878 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Remove_m22615_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Collection_1_System_Collections_ICollection_get_IsSynchronized_m22616_gshared (Collection_1_t4878 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_get_IsSynchronized_m22616(__this, method) (( bool (*) (Collection_1_t4878 *, const MethodInfo*))Collection_1_System_Collections_ICollection_get_IsSynchronized_m22616_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Collection_1_System_Collections_ICollection_get_SyncRoot_m22617_gshared (Collection_1_t4878 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_get_SyncRoot_m22617(__this, method) (( Object_t * (*) (Collection_1_t4878 *, const MethodInfo*))Collection_1_System_Collections_ICollection_get_SyncRoot_m22617_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.get_IsFixedSize()
extern "C" bool Collection_1_System_Collections_IList_get_IsFixedSize_m22618_gshared (Collection_1_t4878 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_IsFixedSize_m22618(__this, method) (( bool (*) (Collection_1_t4878 *, const MethodInfo*))Collection_1_System_Collections_IList_get_IsFixedSize_m22618_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_IList_get_IsReadOnly_m22619_gshared (Collection_1_t4878 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_IsReadOnly_m22619(__this, method) (( bool (*) (Collection_1_t4878 *, const MethodInfo*))Collection_1_System_Collections_IList_get_IsReadOnly_m22619_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * Collection_1_System_Collections_IList_get_Item_m22620_gshared (Collection_1_t4878 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_Item_m22620(__this, ___index, method) (( Object_t * (*) (Collection_1_t4878 *, int32_t, const MethodInfo*))Collection_1_System_Collections_IList_get_Item_m22620_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_set_Item_m22621_gshared (Collection_1_t4878 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_set_Item_m22621(__this, ___index, ___value, method) (( void (*) (Collection_1_t4878 *, int32_t, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_set_Item_m22621_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::Add(T)
extern "C" void Collection_1_Add_m22622_gshared (Collection_1_t4878 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Add_m22622(__this, ___item, method) (( void (*) (Collection_1_t4878 *, Object_t *, const MethodInfo*))Collection_1_Add_m22622_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::Clear()
extern "C" void Collection_1_Clear_m22623_gshared (Collection_1_t4878 * __this, const MethodInfo* method);
#define Collection_1_Clear_m22623(__this, method) (( void (*) (Collection_1_t4878 *, const MethodInfo*))Collection_1_Clear_m22623_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::ClearItems()
extern "C" void Collection_1_ClearItems_m22624_gshared (Collection_1_t4878 * __this, const MethodInfo* method);
#define Collection_1_ClearItems_m22624(__this, method) (( void (*) (Collection_1_t4878 *, const MethodInfo*))Collection_1_ClearItems_m22624_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::Contains(T)
extern "C" bool Collection_1_Contains_m22625_gshared (Collection_1_t4878 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Contains_m22625(__this, ___item, method) (( bool (*) (Collection_1_t4878 *, Object_t *, const MethodInfo*))Collection_1_Contains_m22625_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void Collection_1_CopyTo_m22626_gshared (Collection_1_t4878 * __this, ObjectU5BU5D_t21* ___array, int32_t ___index, const MethodInfo* method);
#define Collection_1_CopyTo_m22626(__this, ___array, ___index, method) (( void (*) (Collection_1_t4878 *, ObjectU5BU5D_t21*, int32_t, const MethodInfo*))Collection_1_CopyTo_m22626_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<System.Object>::GetEnumerator()
extern "C" Object_t* Collection_1_GetEnumerator_m22627_gshared (Collection_1_t4878 * __this, const MethodInfo* method);
#define Collection_1_GetEnumerator_m22627(__this, method) (( Object_t* (*) (Collection_1_t4878 *, const MethodInfo*))Collection_1_GetEnumerator_m22627_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::IndexOf(T)
extern "C" int32_t Collection_1_IndexOf_m22628_gshared (Collection_1_t4878 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_IndexOf_m22628(__this, ___item, method) (( int32_t (*) (Collection_1_t4878 *, Object_t *, const MethodInfo*))Collection_1_IndexOf_m22628_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::Insert(System.Int32,T)
extern "C" void Collection_1_Insert_m22629_gshared (Collection_1_t4878 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Insert_m22629(__this, ___index, ___item, method) (( void (*) (Collection_1_t4878 *, int32_t, Object_t *, const MethodInfo*))Collection_1_Insert_m22629_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::InsertItem(System.Int32,T)
extern "C" void Collection_1_InsertItem_m22630_gshared (Collection_1_t4878 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define Collection_1_InsertItem_m22630(__this, ___index, ___item, method) (( void (*) (Collection_1_t4878 *, int32_t, Object_t *, const MethodInfo*))Collection_1_InsertItem_m22630_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::Remove(T)
extern "C" bool Collection_1_Remove_m22631_gshared (Collection_1_t4878 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Remove_m22631(__this, ___item, method) (( bool (*) (Collection_1_t4878 *, Object_t *, const MethodInfo*))Collection_1_Remove_m22631_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::RemoveAt(System.Int32)
extern "C" void Collection_1_RemoveAt_m22632_gshared (Collection_1_t4878 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_RemoveAt_m22632(__this, ___index, method) (( void (*) (Collection_1_t4878 *, int32_t, const MethodInfo*))Collection_1_RemoveAt_m22632_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::RemoveItem(System.Int32)
extern "C" void Collection_1_RemoveItem_m22633_gshared (Collection_1_t4878 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_RemoveItem_m22633(__this, ___index, method) (( void (*) (Collection_1_t4878 *, int32_t, const MethodInfo*))Collection_1_RemoveItem_m22633_gshared)(__this, ___index, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::get_Count()
extern "C" int32_t Collection_1_get_Count_m22634_gshared (Collection_1_t4878 * __this, const MethodInfo* method);
#define Collection_1_get_Count_m22634(__this, method) (( int32_t (*) (Collection_1_t4878 *, const MethodInfo*))Collection_1_get_Count_m22634_gshared)(__this, method)
// T System.Collections.ObjectModel.Collection`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * Collection_1_get_Item_m22635_gshared (Collection_1_t4878 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_get_Item_m22635(__this, ___index, method) (( Object_t * (*) (Collection_1_t4878 *, int32_t, const MethodInfo*))Collection_1_get_Item_m22635_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::set_Item(System.Int32,T)
extern "C" void Collection_1_set_Item_m22636_gshared (Collection_1_t4878 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_set_Item_m22636(__this, ___index, ___value, method) (( void (*) (Collection_1_t4878 *, int32_t, Object_t *, const MethodInfo*))Collection_1_set_Item_m22636_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::SetItem(System.Int32,T)
extern "C" void Collection_1_SetItem_m22637_gshared (Collection_1_t4878 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define Collection_1_SetItem_m22637(__this, ___index, ___item, method) (( void (*) (Collection_1_t4878 *, int32_t, Object_t *, const MethodInfo*))Collection_1_SetItem_m22637_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::IsValidItem(System.Object)
extern "C" bool Collection_1_IsValidItem_m22638_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define Collection_1_IsValidItem_m22638(__this /* static, unused */, ___item, method) (( bool (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Collection_1_IsValidItem_m22638_gshared)(__this /* static, unused */, ___item, method)
// T System.Collections.ObjectModel.Collection`1<System.Object>::ConvertItem(System.Object)
extern "C" Object_t * Collection_1_ConvertItem_m22639_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define Collection_1_ConvertItem_m22639(__this /* static, unused */, ___item, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Collection_1_ConvertItem_m22639_gshared)(__this /* static, unused */, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::CheckWritable(System.Collections.Generic.IList`1<T>)
extern "C" void Collection_1_CheckWritable_m22640_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_CheckWritable_m22640(__this /* static, unused */, ___list, method) (( void (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_CheckWritable_m22640_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::IsSynchronized(System.Collections.Generic.IList`1<T>)
extern "C" bool Collection_1_IsSynchronized_m22641_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_IsSynchronized_m22641(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_IsSynchronized_m22641_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::IsFixedSize(System.Collections.Generic.IList`1<T>)
extern "C" bool Collection_1_IsFixedSize_m22642_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_IsFixedSize_m22642(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_IsFixedSize_m22642_gshared)(__this /* static, unused */, ___list, method)

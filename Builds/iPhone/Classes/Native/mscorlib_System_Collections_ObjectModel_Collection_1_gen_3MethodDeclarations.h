#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.ObjectModel.Collection`1<System.Byte>
struct Collection_1_t6344;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Byte[]
struct ByteU5BU5D_t25;
// System.Collections.Generic.IEnumerator`1<System.Byte>
struct IEnumerator_1_t7120;
// System.Collections.Generic.IList`1<System.Byte>
struct IList_1_t6342;

// System.Void System.Collections.ObjectModel.Collection`1<System.Byte>::.ctor()
extern "C" void Collection_1__ctor_m29708_gshared (Collection_1_t6344 * __this, const MethodInfo* method);
#define Collection_1__ctor_m29708(__this, method) (( void (*) (Collection_1_t6344 *, const MethodInfo*))Collection_1__ctor_m29708_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Byte>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m29709_gshared (Collection_1_t6344 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m29709(__this, method) (( bool (*) (Collection_1_t6344 *, const MethodInfo*))Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m29709_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Byte>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Collection_1_System_Collections_ICollection_CopyTo_m29710_gshared (Collection_1_t6344 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_CopyTo_m29710(__this, ___array, ___index, method) (( void (*) (Collection_1_t6344 *, Array_t *, int32_t, const MethodInfo*))Collection_1_System_Collections_ICollection_CopyTo_m29710_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<System.Byte>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Collection_1_System_Collections_IEnumerable_GetEnumerator_m29711_gshared (Collection_1_t6344 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IEnumerable_GetEnumerator_m29711(__this, method) (( Object_t * (*) (Collection_1_t6344 *, const MethodInfo*))Collection_1_System_Collections_IEnumerable_GetEnumerator_m29711_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Byte>::System.Collections.IList.Add(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_Add_m29712_gshared (Collection_1_t6344 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Add_m29712(__this, ___value, method) (( int32_t (*) (Collection_1_t6344 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Add_m29712_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Byte>::System.Collections.IList.Contains(System.Object)
extern "C" bool Collection_1_System_Collections_IList_Contains_m29713_gshared (Collection_1_t6344 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Contains_m29713(__this, ___value, method) (( bool (*) (Collection_1_t6344 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Contains_m29713_gshared)(__this, ___value, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Byte>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_IndexOf_m29714_gshared (Collection_1_t6344 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_IndexOf_m29714(__this, ___value, method) (( int32_t (*) (Collection_1_t6344 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_IndexOf_m29714_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Byte>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_Insert_m29715_gshared (Collection_1_t6344 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Insert_m29715(__this, ___index, ___value, method) (( void (*) (Collection_1_t6344 *, int32_t, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Insert_m29715_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Byte>::System.Collections.IList.Remove(System.Object)
extern "C" void Collection_1_System_Collections_IList_Remove_m29716_gshared (Collection_1_t6344 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Remove_m29716(__this, ___value, method) (( void (*) (Collection_1_t6344 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Remove_m29716_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Byte>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Collection_1_System_Collections_ICollection_get_IsSynchronized_m29717_gshared (Collection_1_t6344 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_get_IsSynchronized_m29717(__this, method) (( bool (*) (Collection_1_t6344 *, const MethodInfo*))Collection_1_System_Collections_ICollection_get_IsSynchronized_m29717_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Byte>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Collection_1_System_Collections_ICollection_get_SyncRoot_m29718_gshared (Collection_1_t6344 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_get_SyncRoot_m29718(__this, method) (( Object_t * (*) (Collection_1_t6344 *, const MethodInfo*))Collection_1_System_Collections_ICollection_get_SyncRoot_m29718_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Byte>::System.Collections.IList.get_IsFixedSize()
extern "C" bool Collection_1_System_Collections_IList_get_IsFixedSize_m29719_gshared (Collection_1_t6344 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_IsFixedSize_m29719(__this, method) (( bool (*) (Collection_1_t6344 *, const MethodInfo*))Collection_1_System_Collections_IList_get_IsFixedSize_m29719_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Byte>::System.Collections.IList.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_IList_get_IsReadOnly_m29720_gshared (Collection_1_t6344 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_IsReadOnly_m29720(__this, method) (( bool (*) (Collection_1_t6344 *, const MethodInfo*))Collection_1_System_Collections_IList_get_IsReadOnly_m29720_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Byte>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * Collection_1_System_Collections_IList_get_Item_m29721_gshared (Collection_1_t6344 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_Item_m29721(__this, ___index, method) (( Object_t * (*) (Collection_1_t6344 *, int32_t, const MethodInfo*))Collection_1_System_Collections_IList_get_Item_m29721_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Byte>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_set_Item_m29722_gshared (Collection_1_t6344 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_set_Item_m29722(__this, ___index, ___value, method) (( void (*) (Collection_1_t6344 *, int32_t, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_set_Item_m29722_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Byte>::Add(T)
extern "C" void Collection_1_Add_m29723_gshared (Collection_1_t6344 * __this, uint8_t ___item, const MethodInfo* method);
#define Collection_1_Add_m29723(__this, ___item, method) (( void (*) (Collection_1_t6344 *, uint8_t, const MethodInfo*))Collection_1_Add_m29723_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Byte>::Clear()
extern "C" void Collection_1_Clear_m29724_gshared (Collection_1_t6344 * __this, const MethodInfo* method);
#define Collection_1_Clear_m29724(__this, method) (( void (*) (Collection_1_t6344 *, const MethodInfo*))Collection_1_Clear_m29724_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Byte>::ClearItems()
extern "C" void Collection_1_ClearItems_m29725_gshared (Collection_1_t6344 * __this, const MethodInfo* method);
#define Collection_1_ClearItems_m29725(__this, method) (( void (*) (Collection_1_t6344 *, const MethodInfo*))Collection_1_ClearItems_m29725_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Byte>::Contains(T)
extern "C" bool Collection_1_Contains_m29726_gshared (Collection_1_t6344 * __this, uint8_t ___item, const MethodInfo* method);
#define Collection_1_Contains_m29726(__this, ___item, method) (( bool (*) (Collection_1_t6344 *, uint8_t, const MethodInfo*))Collection_1_Contains_m29726_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Byte>::CopyTo(T[],System.Int32)
extern "C" void Collection_1_CopyTo_m29727_gshared (Collection_1_t6344 * __this, ByteU5BU5D_t25* ___array, int32_t ___index, const MethodInfo* method);
#define Collection_1_CopyTo_m29727(__this, ___array, ___index, method) (( void (*) (Collection_1_t6344 *, ByteU5BU5D_t25*, int32_t, const MethodInfo*))Collection_1_CopyTo_m29727_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<System.Byte>::GetEnumerator()
extern "C" Object_t* Collection_1_GetEnumerator_m29728_gshared (Collection_1_t6344 * __this, const MethodInfo* method);
#define Collection_1_GetEnumerator_m29728(__this, method) (( Object_t* (*) (Collection_1_t6344 *, const MethodInfo*))Collection_1_GetEnumerator_m29728_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Byte>::IndexOf(T)
extern "C" int32_t Collection_1_IndexOf_m29729_gshared (Collection_1_t6344 * __this, uint8_t ___item, const MethodInfo* method);
#define Collection_1_IndexOf_m29729(__this, ___item, method) (( int32_t (*) (Collection_1_t6344 *, uint8_t, const MethodInfo*))Collection_1_IndexOf_m29729_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Byte>::Insert(System.Int32,T)
extern "C" void Collection_1_Insert_m29730_gshared (Collection_1_t6344 * __this, int32_t ___index, uint8_t ___item, const MethodInfo* method);
#define Collection_1_Insert_m29730(__this, ___index, ___item, method) (( void (*) (Collection_1_t6344 *, int32_t, uint8_t, const MethodInfo*))Collection_1_Insert_m29730_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Byte>::InsertItem(System.Int32,T)
extern "C" void Collection_1_InsertItem_m29731_gshared (Collection_1_t6344 * __this, int32_t ___index, uint8_t ___item, const MethodInfo* method);
#define Collection_1_InsertItem_m29731(__this, ___index, ___item, method) (( void (*) (Collection_1_t6344 *, int32_t, uint8_t, const MethodInfo*))Collection_1_InsertItem_m29731_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Byte>::Remove(T)
extern "C" bool Collection_1_Remove_m29732_gshared (Collection_1_t6344 * __this, uint8_t ___item, const MethodInfo* method);
#define Collection_1_Remove_m29732(__this, ___item, method) (( bool (*) (Collection_1_t6344 *, uint8_t, const MethodInfo*))Collection_1_Remove_m29732_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Byte>::RemoveAt(System.Int32)
extern "C" void Collection_1_RemoveAt_m29733_gshared (Collection_1_t6344 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_RemoveAt_m29733(__this, ___index, method) (( void (*) (Collection_1_t6344 *, int32_t, const MethodInfo*))Collection_1_RemoveAt_m29733_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Byte>::RemoveItem(System.Int32)
extern "C" void Collection_1_RemoveItem_m29734_gshared (Collection_1_t6344 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_RemoveItem_m29734(__this, ___index, method) (( void (*) (Collection_1_t6344 *, int32_t, const MethodInfo*))Collection_1_RemoveItem_m29734_gshared)(__this, ___index, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Byte>::get_Count()
extern "C" int32_t Collection_1_get_Count_m29735_gshared (Collection_1_t6344 * __this, const MethodInfo* method);
#define Collection_1_get_Count_m29735(__this, method) (( int32_t (*) (Collection_1_t6344 *, const MethodInfo*))Collection_1_get_Count_m29735_gshared)(__this, method)
// T System.Collections.ObjectModel.Collection`1<System.Byte>::get_Item(System.Int32)
extern "C" uint8_t Collection_1_get_Item_m29736_gshared (Collection_1_t6344 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_get_Item_m29736(__this, ___index, method) (( uint8_t (*) (Collection_1_t6344 *, int32_t, const MethodInfo*))Collection_1_get_Item_m29736_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Byte>::set_Item(System.Int32,T)
extern "C" void Collection_1_set_Item_m29737_gshared (Collection_1_t6344 * __this, int32_t ___index, uint8_t ___value, const MethodInfo* method);
#define Collection_1_set_Item_m29737(__this, ___index, ___value, method) (( void (*) (Collection_1_t6344 *, int32_t, uint8_t, const MethodInfo*))Collection_1_set_Item_m29737_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Byte>::SetItem(System.Int32,T)
extern "C" void Collection_1_SetItem_m29738_gshared (Collection_1_t6344 * __this, int32_t ___index, uint8_t ___item, const MethodInfo* method);
#define Collection_1_SetItem_m29738(__this, ___index, ___item, method) (( void (*) (Collection_1_t6344 *, int32_t, uint8_t, const MethodInfo*))Collection_1_SetItem_m29738_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Byte>::IsValidItem(System.Object)
extern "C" bool Collection_1_IsValidItem_m29739_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define Collection_1_IsValidItem_m29739(__this /* static, unused */, ___item, method) (( bool (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Collection_1_IsValidItem_m29739_gshared)(__this /* static, unused */, ___item, method)
// T System.Collections.ObjectModel.Collection`1<System.Byte>::ConvertItem(System.Object)
extern "C" uint8_t Collection_1_ConvertItem_m29740_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define Collection_1_ConvertItem_m29740(__this /* static, unused */, ___item, method) (( uint8_t (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Collection_1_ConvertItem_m29740_gshared)(__this /* static, unused */, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Byte>::CheckWritable(System.Collections.Generic.IList`1<T>)
extern "C" void Collection_1_CheckWritable_m29741_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_CheckWritable_m29741(__this /* static, unused */, ___list, method) (( void (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_CheckWritable_m29741_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Byte>::IsSynchronized(System.Collections.Generic.IList`1<T>)
extern "C" bool Collection_1_IsSynchronized_m29742_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_IsSynchronized_m29742(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_IsSynchronized_m29742_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Byte>::IsFixedSize(System.Collections.Generic.IList`1<T>)
extern "C" bool Collection_1_IsFixedSize_m29743_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_IsFixedSize_m29743(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_IsFixedSize_m29743_gshared)(__this /* static, unused */, ___list, method)

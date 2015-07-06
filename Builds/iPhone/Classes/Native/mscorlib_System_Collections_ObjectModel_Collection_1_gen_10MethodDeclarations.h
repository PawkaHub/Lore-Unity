#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.ObjectModel.Collection`1<System.SByte>
struct Collection_1_t7228;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.SByte[]
struct SByteU5BU5D_t5344;
// System.Collections.Generic.IEnumerator`1<System.SByte>
struct IEnumerator_1_t7127;
// System.Collections.Generic.IList`1<System.SByte>
struct IList_1_t7123;

// System.Void System.Collections.ObjectModel.Collection`1<System.SByte>::.ctor()
extern "C" void Collection_1__ctor_m42775_gshared (Collection_1_t7228 * __this, const MethodInfo* method);
#define Collection_1__ctor_m42775(__this, method) (( void (*) (Collection_1_t7228 *, const MethodInfo*))Collection_1__ctor_m42775_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.SByte>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m42776_gshared (Collection_1_t7228 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m42776(__this, method) (( bool (*) (Collection_1_t7228 *, const MethodInfo*))Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m42776_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.SByte>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Collection_1_System_Collections_ICollection_CopyTo_m42777_gshared (Collection_1_t7228 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_CopyTo_m42777(__this, ___array, ___index, method) (( void (*) (Collection_1_t7228 *, Array_t *, int32_t, const MethodInfo*))Collection_1_System_Collections_ICollection_CopyTo_m42777_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<System.SByte>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Collection_1_System_Collections_IEnumerable_GetEnumerator_m42778_gshared (Collection_1_t7228 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IEnumerable_GetEnumerator_m42778(__this, method) (( Object_t * (*) (Collection_1_t7228 *, const MethodInfo*))Collection_1_System_Collections_IEnumerable_GetEnumerator_m42778_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.SByte>::System.Collections.IList.Add(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_Add_m42779_gshared (Collection_1_t7228 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Add_m42779(__this, ___value, method) (( int32_t (*) (Collection_1_t7228 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Add_m42779_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.SByte>::System.Collections.IList.Contains(System.Object)
extern "C" bool Collection_1_System_Collections_IList_Contains_m42780_gshared (Collection_1_t7228 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Contains_m42780(__this, ___value, method) (( bool (*) (Collection_1_t7228 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Contains_m42780_gshared)(__this, ___value, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.SByte>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_IndexOf_m42781_gshared (Collection_1_t7228 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_IndexOf_m42781(__this, ___value, method) (( int32_t (*) (Collection_1_t7228 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_IndexOf_m42781_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.SByte>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_Insert_m42782_gshared (Collection_1_t7228 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Insert_m42782(__this, ___index, ___value, method) (( void (*) (Collection_1_t7228 *, int32_t, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Insert_m42782_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.SByte>::System.Collections.IList.Remove(System.Object)
extern "C" void Collection_1_System_Collections_IList_Remove_m42783_gshared (Collection_1_t7228 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Remove_m42783(__this, ___value, method) (( void (*) (Collection_1_t7228 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Remove_m42783_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.SByte>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Collection_1_System_Collections_ICollection_get_IsSynchronized_m42784_gshared (Collection_1_t7228 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_get_IsSynchronized_m42784(__this, method) (( bool (*) (Collection_1_t7228 *, const MethodInfo*))Collection_1_System_Collections_ICollection_get_IsSynchronized_m42784_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.SByte>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Collection_1_System_Collections_ICollection_get_SyncRoot_m42785_gshared (Collection_1_t7228 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_get_SyncRoot_m42785(__this, method) (( Object_t * (*) (Collection_1_t7228 *, const MethodInfo*))Collection_1_System_Collections_ICollection_get_SyncRoot_m42785_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.SByte>::System.Collections.IList.get_IsFixedSize()
extern "C" bool Collection_1_System_Collections_IList_get_IsFixedSize_m42786_gshared (Collection_1_t7228 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_IsFixedSize_m42786(__this, method) (( bool (*) (Collection_1_t7228 *, const MethodInfo*))Collection_1_System_Collections_IList_get_IsFixedSize_m42786_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.SByte>::System.Collections.IList.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_IList_get_IsReadOnly_m42787_gshared (Collection_1_t7228 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_IsReadOnly_m42787(__this, method) (( bool (*) (Collection_1_t7228 *, const MethodInfo*))Collection_1_System_Collections_IList_get_IsReadOnly_m42787_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.SByte>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * Collection_1_System_Collections_IList_get_Item_m42788_gshared (Collection_1_t7228 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_Item_m42788(__this, ___index, method) (( Object_t * (*) (Collection_1_t7228 *, int32_t, const MethodInfo*))Collection_1_System_Collections_IList_get_Item_m42788_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.SByte>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_set_Item_m42789_gshared (Collection_1_t7228 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_set_Item_m42789(__this, ___index, ___value, method) (( void (*) (Collection_1_t7228 *, int32_t, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_set_Item_m42789_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.SByte>::Add(T)
extern "C" void Collection_1_Add_m42790_gshared (Collection_1_t7228 * __this, int8_t ___item, const MethodInfo* method);
#define Collection_1_Add_m42790(__this, ___item, method) (( void (*) (Collection_1_t7228 *, int8_t, const MethodInfo*))Collection_1_Add_m42790_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.SByte>::Clear()
extern "C" void Collection_1_Clear_m42791_gshared (Collection_1_t7228 * __this, const MethodInfo* method);
#define Collection_1_Clear_m42791(__this, method) (( void (*) (Collection_1_t7228 *, const MethodInfo*))Collection_1_Clear_m42791_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.SByte>::ClearItems()
extern "C" void Collection_1_ClearItems_m42792_gshared (Collection_1_t7228 * __this, const MethodInfo* method);
#define Collection_1_ClearItems_m42792(__this, method) (( void (*) (Collection_1_t7228 *, const MethodInfo*))Collection_1_ClearItems_m42792_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.SByte>::Contains(T)
extern "C" bool Collection_1_Contains_m42793_gshared (Collection_1_t7228 * __this, int8_t ___item, const MethodInfo* method);
#define Collection_1_Contains_m42793(__this, ___item, method) (( bool (*) (Collection_1_t7228 *, int8_t, const MethodInfo*))Collection_1_Contains_m42793_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.SByte>::CopyTo(T[],System.Int32)
extern "C" void Collection_1_CopyTo_m42794_gshared (Collection_1_t7228 * __this, SByteU5BU5D_t5344* ___array, int32_t ___index, const MethodInfo* method);
#define Collection_1_CopyTo_m42794(__this, ___array, ___index, method) (( void (*) (Collection_1_t7228 *, SByteU5BU5D_t5344*, int32_t, const MethodInfo*))Collection_1_CopyTo_m42794_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<System.SByte>::GetEnumerator()
extern "C" Object_t* Collection_1_GetEnumerator_m42795_gshared (Collection_1_t7228 * __this, const MethodInfo* method);
#define Collection_1_GetEnumerator_m42795(__this, method) (( Object_t* (*) (Collection_1_t7228 *, const MethodInfo*))Collection_1_GetEnumerator_m42795_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.SByte>::IndexOf(T)
extern "C" int32_t Collection_1_IndexOf_m42796_gshared (Collection_1_t7228 * __this, int8_t ___item, const MethodInfo* method);
#define Collection_1_IndexOf_m42796(__this, ___item, method) (( int32_t (*) (Collection_1_t7228 *, int8_t, const MethodInfo*))Collection_1_IndexOf_m42796_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.SByte>::Insert(System.Int32,T)
extern "C" void Collection_1_Insert_m42797_gshared (Collection_1_t7228 * __this, int32_t ___index, int8_t ___item, const MethodInfo* method);
#define Collection_1_Insert_m42797(__this, ___index, ___item, method) (( void (*) (Collection_1_t7228 *, int32_t, int8_t, const MethodInfo*))Collection_1_Insert_m42797_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.SByte>::InsertItem(System.Int32,T)
extern "C" void Collection_1_InsertItem_m42798_gshared (Collection_1_t7228 * __this, int32_t ___index, int8_t ___item, const MethodInfo* method);
#define Collection_1_InsertItem_m42798(__this, ___index, ___item, method) (( void (*) (Collection_1_t7228 *, int32_t, int8_t, const MethodInfo*))Collection_1_InsertItem_m42798_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.SByte>::Remove(T)
extern "C" bool Collection_1_Remove_m42799_gshared (Collection_1_t7228 * __this, int8_t ___item, const MethodInfo* method);
#define Collection_1_Remove_m42799(__this, ___item, method) (( bool (*) (Collection_1_t7228 *, int8_t, const MethodInfo*))Collection_1_Remove_m42799_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.SByte>::RemoveAt(System.Int32)
extern "C" void Collection_1_RemoveAt_m42800_gshared (Collection_1_t7228 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_RemoveAt_m42800(__this, ___index, method) (( void (*) (Collection_1_t7228 *, int32_t, const MethodInfo*))Collection_1_RemoveAt_m42800_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.SByte>::RemoveItem(System.Int32)
extern "C" void Collection_1_RemoveItem_m42801_gshared (Collection_1_t7228 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_RemoveItem_m42801(__this, ___index, method) (( void (*) (Collection_1_t7228 *, int32_t, const MethodInfo*))Collection_1_RemoveItem_m42801_gshared)(__this, ___index, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.SByte>::get_Count()
extern "C" int32_t Collection_1_get_Count_m42802_gshared (Collection_1_t7228 * __this, const MethodInfo* method);
#define Collection_1_get_Count_m42802(__this, method) (( int32_t (*) (Collection_1_t7228 *, const MethodInfo*))Collection_1_get_Count_m42802_gshared)(__this, method)
// T System.Collections.ObjectModel.Collection`1<System.SByte>::get_Item(System.Int32)
extern "C" int8_t Collection_1_get_Item_m42803_gshared (Collection_1_t7228 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_get_Item_m42803(__this, ___index, method) (( int8_t (*) (Collection_1_t7228 *, int32_t, const MethodInfo*))Collection_1_get_Item_m42803_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.SByte>::set_Item(System.Int32,T)
extern "C" void Collection_1_set_Item_m42804_gshared (Collection_1_t7228 * __this, int32_t ___index, int8_t ___value, const MethodInfo* method);
#define Collection_1_set_Item_m42804(__this, ___index, ___value, method) (( void (*) (Collection_1_t7228 *, int32_t, int8_t, const MethodInfo*))Collection_1_set_Item_m42804_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.SByte>::SetItem(System.Int32,T)
extern "C" void Collection_1_SetItem_m42805_gshared (Collection_1_t7228 * __this, int32_t ___index, int8_t ___item, const MethodInfo* method);
#define Collection_1_SetItem_m42805(__this, ___index, ___item, method) (( void (*) (Collection_1_t7228 *, int32_t, int8_t, const MethodInfo*))Collection_1_SetItem_m42805_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.SByte>::IsValidItem(System.Object)
extern "C" bool Collection_1_IsValidItem_m42806_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define Collection_1_IsValidItem_m42806(__this /* static, unused */, ___item, method) (( bool (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Collection_1_IsValidItem_m42806_gshared)(__this /* static, unused */, ___item, method)
// T System.Collections.ObjectModel.Collection`1<System.SByte>::ConvertItem(System.Object)
extern "C" int8_t Collection_1_ConvertItem_m42807_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define Collection_1_ConvertItem_m42807(__this /* static, unused */, ___item, method) (( int8_t (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Collection_1_ConvertItem_m42807_gshared)(__this /* static, unused */, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.SByte>::CheckWritable(System.Collections.Generic.IList`1<T>)
extern "C" void Collection_1_CheckWritable_m42808_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_CheckWritable_m42808(__this /* static, unused */, ___list, method) (( void (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_CheckWritable_m42808_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.SByte>::IsSynchronized(System.Collections.Generic.IList`1<T>)
extern "C" bool Collection_1_IsSynchronized_m42809_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_IsSynchronized_m42809(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_IsSynchronized_m42809_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.SByte>::IsFixedSize(System.Collections.Generic.IList`1<T>)
extern "C" bool Collection_1_IsFixedSize_m42810_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_IsFixedSize_m42810(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_IsFixedSize_m42810_gshared)(__this /* static, unused */, ___list, method)

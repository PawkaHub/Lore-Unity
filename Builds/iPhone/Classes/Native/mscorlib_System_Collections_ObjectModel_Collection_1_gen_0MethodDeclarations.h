#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.ObjectModel.Collection`1<System.Int32>
struct Collection_1_t4955;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Int32[]
struct Int32U5BU5D_t119;
// System.Collections.Generic.IEnumerator`1<System.Int32>
struct IEnumerator_1_t3228;
// System.Collections.Generic.IList`1<System.Int32>
struct IList_1_t4953;

// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::.ctor()
extern "C" void Collection_1__ctor_m23546_gshared (Collection_1_t4955 * __this, const MethodInfo* method);
#define Collection_1__ctor_m23546(__this, method) (( void (*) (Collection_1_t4955 *, const MethodInfo*))Collection_1__ctor_m23546_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Int32>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m23547_gshared (Collection_1_t4955 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m23547(__this, method) (( bool (*) (Collection_1_t4955 *, const MethodInfo*))Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m23547_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Collection_1_System_Collections_ICollection_CopyTo_m23548_gshared (Collection_1_t4955 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_CopyTo_m23548(__this, ___array, ___index, method) (( void (*) (Collection_1_t4955 *, Array_t *, int32_t, const MethodInfo*))Collection_1_System_Collections_ICollection_CopyTo_m23548_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Collection_1_System_Collections_IEnumerable_GetEnumerator_m23549_gshared (Collection_1_t4955 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IEnumerable_GetEnumerator_m23549(__this, method) (( Object_t * (*) (Collection_1_t4955 *, const MethodInfo*))Collection_1_System_Collections_IEnumerable_GetEnumerator_m23549_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Int32>::System.Collections.IList.Add(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_Add_m23550_gshared (Collection_1_t4955 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Add_m23550(__this, ___value, method) (( int32_t (*) (Collection_1_t4955 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Add_m23550_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Int32>::System.Collections.IList.Contains(System.Object)
extern "C" bool Collection_1_System_Collections_IList_Contains_m23551_gshared (Collection_1_t4955 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Contains_m23551(__this, ___value, method) (( bool (*) (Collection_1_t4955 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Contains_m23551_gshared)(__this, ___value, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Int32>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_IndexOf_m23552_gshared (Collection_1_t4955 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_IndexOf_m23552(__this, ___value, method) (( int32_t (*) (Collection_1_t4955 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_IndexOf_m23552_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_Insert_m23553_gshared (Collection_1_t4955 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Insert_m23553(__this, ___index, ___value, method) (( void (*) (Collection_1_t4955 *, int32_t, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Insert_m23553_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::System.Collections.IList.Remove(System.Object)
extern "C" void Collection_1_System_Collections_IList_Remove_m23554_gshared (Collection_1_t4955 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Remove_m23554(__this, ___value, method) (( void (*) (Collection_1_t4955 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Remove_m23554_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Collection_1_System_Collections_ICollection_get_IsSynchronized_m23555_gshared (Collection_1_t4955 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_get_IsSynchronized_m23555(__this, method) (( bool (*) (Collection_1_t4955 *, const MethodInfo*))Collection_1_System_Collections_ICollection_get_IsSynchronized_m23555_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Collection_1_System_Collections_ICollection_get_SyncRoot_m23556_gshared (Collection_1_t4955 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_get_SyncRoot_m23556(__this, method) (( Object_t * (*) (Collection_1_t4955 *, const MethodInfo*))Collection_1_System_Collections_ICollection_get_SyncRoot_m23556_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Int32>::System.Collections.IList.get_IsFixedSize()
extern "C" bool Collection_1_System_Collections_IList_get_IsFixedSize_m23557_gshared (Collection_1_t4955 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_IsFixedSize_m23557(__this, method) (( bool (*) (Collection_1_t4955 *, const MethodInfo*))Collection_1_System_Collections_IList_get_IsFixedSize_m23557_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Int32>::System.Collections.IList.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_IList_get_IsReadOnly_m23558_gshared (Collection_1_t4955 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_IsReadOnly_m23558(__this, method) (( bool (*) (Collection_1_t4955 *, const MethodInfo*))Collection_1_System_Collections_IList_get_IsReadOnly_m23558_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Int32>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * Collection_1_System_Collections_IList_get_Item_m23559_gshared (Collection_1_t4955 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_Item_m23559(__this, ___index, method) (( Object_t * (*) (Collection_1_t4955 *, int32_t, const MethodInfo*))Collection_1_System_Collections_IList_get_Item_m23559_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_set_Item_m23560_gshared (Collection_1_t4955 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_set_Item_m23560(__this, ___index, ___value, method) (( void (*) (Collection_1_t4955 *, int32_t, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_set_Item_m23560_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::Add(T)
extern "C" void Collection_1_Add_m23561_gshared (Collection_1_t4955 * __this, int32_t ___item, const MethodInfo* method);
#define Collection_1_Add_m23561(__this, ___item, method) (( void (*) (Collection_1_t4955 *, int32_t, const MethodInfo*))Collection_1_Add_m23561_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::Clear()
extern "C" void Collection_1_Clear_m23562_gshared (Collection_1_t4955 * __this, const MethodInfo* method);
#define Collection_1_Clear_m23562(__this, method) (( void (*) (Collection_1_t4955 *, const MethodInfo*))Collection_1_Clear_m23562_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::ClearItems()
extern "C" void Collection_1_ClearItems_m23563_gshared (Collection_1_t4955 * __this, const MethodInfo* method);
#define Collection_1_ClearItems_m23563(__this, method) (( void (*) (Collection_1_t4955 *, const MethodInfo*))Collection_1_ClearItems_m23563_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Int32>::Contains(T)
extern "C" bool Collection_1_Contains_m23564_gshared (Collection_1_t4955 * __this, int32_t ___item, const MethodInfo* method);
#define Collection_1_Contains_m23564(__this, ___item, method) (( bool (*) (Collection_1_t4955 *, int32_t, const MethodInfo*))Collection_1_Contains_m23564_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::CopyTo(T[],System.Int32)
extern "C" void Collection_1_CopyTo_m23565_gshared (Collection_1_t4955 * __this, Int32U5BU5D_t119* ___array, int32_t ___index, const MethodInfo* method);
#define Collection_1_CopyTo_m23565(__this, ___array, ___index, method) (( void (*) (Collection_1_t4955 *, Int32U5BU5D_t119*, int32_t, const MethodInfo*))Collection_1_CopyTo_m23565_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<System.Int32>::GetEnumerator()
extern "C" Object_t* Collection_1_GetEnumerator_m23566_gshared (Collection_1_t4955 * __this, const MethodInfo* method);
#define Collection_1_GetEnumerator_m23566(__this, method) (( Object_t* (*) (Collection_1_t4955 *, const MethodInfo*))Collection_1_GetEnumerator_m23566_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Int32>::IndexOf(T)
extern "C" int32_t Collection_1_IndexOf_m23567_gshared (Collection_1_t4955 * __this, int32_t ___item, const MethodInfo* method);
#define Collection_1_IndexOf_m23567(__this, ___item, method) (( int32_t (*) (Collection_1_t4955 *, int32_t, const MethodInfo*))Collection_1_IndexOf_m23567_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::Insert(System.Int32,T)
extern "C" void Collection_1_Insert_m23568_gshared (Collection_1_t4955 * __this, int32_t ___index, int32_t ___item, const MethodInfo* method);
#define Collection_1_Insert_m23568(__this, ___index, ___item, method) (( void (*) (Collection_1_t4955 *, int32_t, int32_t, const MethodInfo*))Collection_1_Insert_m23568_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::InsertItem(System.Int32,T)
extern "C" void Collection_1_InsertItem_m23569_gshared (Collection_1_t4955 * __this, int32_t ___index, int32_t ___item, const MethodInfo* method);
#define Collection_1_InsertItem_m23569(__this, ___index, ___item, method) (( void (*) (Collection_1_t4955 *, int32_t, int32_t, const MethodInfo*))Collection_1_InsertItem_m23569_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Int32>::Remove(T)
extern "C" bool Collection_1_Remove_m23570_gshared (Collection_1_t4955 * __this, int32_t ___item, const MethodInfo* method);
#define Collection_1_Remove_m23570(__this, ___item, method) (( bool (*) (Collection_1_t4955 *, int32_t, const MethodInfo*))Collection_1_Remove_m23570_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::RemoveAt(System.Int32)
extern "C" void Collection_1_RemoveAt_m23571_gshared (Collection_1_t4955 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_RemoveAt_m23571(__this, ___index, method) (( void (*) (Collection_1_t4955 *, int32_t, const MethodInfo*))Collection_1_RemoveAt_m23571_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::RemoveItem(System.Int32)
extern "C" void Collection_1_RemoveItem_m23572_gshared (Collection_1_t4955 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_RemoveItem_m23572(__this, ___index, method) (( void (*) (Collection_1_t4955 *, int32_t, const MethodInfo*))Collection_1_RemoveItem_m23572_gshared)(__this, ___index, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Int32>::get_Count()
extern "C" int32_t Collection_1_get_Count_m23573_gshared (Collection_1_t4955 * __this, const MethodInfo* method);
#define Collection_1_get_Count_m23573(__this, method) (( int32_t (*) (Collection_1_t4955 *, const MethodInfo*))Collection_1_get_Count_m23573_gshared)(__this, method)
// T System.Collections.ObjectModel.Collection`1<System.Int32>::get_Item(System.Int32)
extern "C" int32_t Collection_1_get_Item_m23574_gshared (Collection_1_t4955 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_get_Item_m23574(__this, ___index, method) (( int32_t (*) (Collection_1_t4955 *, int32_t, const MethodInfo*))Collection_1_get_Item_m23574_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::set_Item(System.Int32,T)
extern "C" void Collection_1_set_Item_m23575_gshared (Collection_1_t4955 * __this, int32_t ___index, int32_t ___value, const MethodInfo* method);
#define Collection_1_set_Item_m23575(__this, ___index, ___value, method) (( void (*) (Collection_1_t4955 *, int32_t, int32_t, const MethodInfo*))Collection_1_set_Item_m23575_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::SetItem(System.Int32,T)
extern "C" void Collection_1_SetItem_m23576_gshared (Collection_1_t4955 * __this, int32_t ___index, int32_t ___item, const MethodInfo* method);
#define Collection_1_SetItem_m23576(__this, ___index, ___item, method) (( void (*) (Collection_1_t4955 *, int32_t, int32_t, const MethodInfo*))Collection_1_SetItem_m23576_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Int32>::IsValidItem(System.Object)
extern "C" bool Collection_1_IsValidItem_m23577_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define Collection_1_IsValidItem_m23577(__this /* static, unused */, ___item, method) (( bool (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Collection_1_IsValidItem_m23577_gshared)(__this /* static, unused */, ___item, method)
// T System.Collections.ObjectModel.Collection`1<System.Int32>::ConvertItem(System.Object)
extern "C" int32_t Collection_1_ConvertItem_m23578_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define Collection_1_ConvertItem_m23578(__this /* static, unused */, ___item, method) (( int32_t (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Collection_1_ConvertItem_m23578_gshared)(__this /* static, unused */, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::CheckWritable(System.Collections.Generic.IList`1<T>)
extern "C" void Collection_1_CheckWritable_m23579_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_CheckWritable_m23579(__this /* static, unused */, ___list, method) (( void (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_CheckWritable_m23579_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Int32>::IsSynchronized(System.Collections.Generic.IList`1<T>)
extern "C" bool Collection_1_IsSynchronized_m23580_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_IsSynchronized_m23580(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_IsSynchronized_m23580_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Int32>::IsFixedSize(System.Collections.Generic.IList`1<T>)
extern "C" bool Collection_1_IsFixedSize_m23581_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_IsFixedSize_m23581(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_IsFixedSize_m23581_gshared)(__this /* static, unused */, ___list, method)

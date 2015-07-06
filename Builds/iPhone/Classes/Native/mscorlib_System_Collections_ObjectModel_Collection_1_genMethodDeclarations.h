#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.ObjectModel.Collection`1<System.Object>
struct Collection_1_t5968;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Object[]
struct ObjectU5BU5D_t21;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t744;
// System.Collections.Generic.IList`1<System.Object>
struct IList_1_t1706;

// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::.ctor()
extern "C" void Collection_1__ctor_m23949_gshared (Collection_1_t5968 * __this, const MethodInfo* method);
#define Collection_1__ctor_m23949(__this, method) (( void (*) (Collection_1_t5968 *, const MethodInfo*))Collection_1__ctor_m23949_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m23950_gshared (Collection_1_t5968 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m23950(__this, method) (( bool (*) (Collection_1_t5968 *, const MethodInfo*))Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m23950_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Collection_1_System_Collections_ICollection_CopyTo_m23951_gshared (Collection_1_t5968 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_CopyTo_m23951(__this, ___array, ___index, method) (( void (*) (Collection_1_t5968 *, Array_t *, int32_t, const MethodInfo*))Collection_1_System_Collections_ICollection_CopyTo_m23951_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Collection_1_System_Collections_IEnumerable_GetEnumerator_m23952_gshared (Collection_1_t5968 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IEnumerable_GetEnumerator_m23952(__this, method) (( Object_t * (*) (Collection_1_t5968 *, const MethodInfo*))Collection_1_System_Collections_IEnumerable_GetEnumerator_m23952_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Add(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_Add_m23953_gshared (Collection_1_t5968 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Add_m23953(__this, ___value, method) (( int32_t (*) (Collection_1_t5968 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Add_m23953_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Contains(System.Object)
extern "C" bool Collection_1_System_Collections_IList_Contains_m23954_gshared (Collection_1_t5968 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Contains_m23954(__this, ___value, method) (( bool (*) (Collection_1_t5968 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Contains_m23954_gshared)(__this, ___value, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_IndexOf_m23955_gshared (Collection_1_t5968 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_IndexOf_m23955(__this, ___value, method) (( int32_t (*) (Collection_1_t5968 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_IndexOf_m23955_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_Insert_m23956_gshared (Collection_1_t5968 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Insert_m23956(__this, ___index, ___value, method) (( void (*) (Collection_1_t5968 *, int32_t, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Insert_m23956_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Remove(System.Object)
extern "C" void Collection_1_System_Collections_IList_Remove_m23957_gshared (Collection_1_t5968 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Remove_m23957(__this, ___value, method) (( void (*) (Collection_1_t5968 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Remove_m23957_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Collection_1_System_Collections_ICollection_get_IsSynchronized_m23958_gshared (Collection_1_t5968 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_get_IsSynchronized_m23958(__this, method) (( bool (*) (Collection_1_t5968 *, const MethodInfo*))Collection_1_System_Collections_ICollection_get_IsSynchronized_m23958_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Collection_1_System_Collections_ICollection_get_SyncRoot_m23959_gshared (Collection_1_t5968 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_get_SyncRoot_m23959(__this, method) (( Object_t * (*) (Collection_1_t5968 *, const MethodInfo*))Collection_1_System_Collections_ICollection_get_SyncRoot_m23959_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.get_IsFixedSize()
extern "C" bool Collection_1_System_Collections_IList_get_IsFixedSize_m23960_gshared (Collection_1_t5968 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_IsFixedSize_m23960(__this, method) (( bool (*) (Collection_1_t5968 *, const MethodInfo*))Collection_1_System_Collections_IList_get_IsFixedSize_m23960_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_IList_get_IsReadOnly_m23961_gshared (Collection_1_t5968 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_IsReadOnly_m23961(__this, method) (( bool (*) (Collection_1_t5968 *, const MethodInfo*))Collection_1_System_Collections_IList_get_IsReadOnly_m23961_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * Collection_1_System_Collections_IList_get_Item_m23962_gshared (Collection_1_t5968 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_Item_m23962(__this, ___index, method) (( Object_t * (*) (Collection_1_t5968 *, int32_t, const MethodInfo*))Collection_1_System_Collections_IList_get_Item_m23962_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_set_Item_m23963_gshared (Collection_1_t5968 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_set_Item_m23963(__this, ___index, ___value, method) (( void (*) (Collection_1_t5968 *, int32_t, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_set_Item_m23963_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::Add(T)
extern "C" void Collection_1_Add_m23964_gshared (Collection_1_t5968 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Add_m23964(__this, ___item, method) (( void (*) (Collection_1_t5968 *, Object_t *, const MethodInfo*))Collection_1_Add_m23964_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::Clear()
extern "C" void Collection_1_Clear_m23965_gshared (Collection_1_t5968 * __this, const MethodInfo* method);
#define Collection_1_Clear_m23965(__this, method) (( void (*) (Collection_1_t5968 *, const MethodInfo*))Collection_1_Clear_m23965_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::ClearItems()
extern "C" void Collection_1_ClearItems_m23966_gshared (Collection_1_t5968 * __this, const MethodInfo* method);
#define Collection_1_ClearItems_m23966(__this, method) (( void (*) (Collection_1_t5968 *, const MethodInfo*))Collection_1_ClearItems_m23966_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::Contains(T)
extern "C" bool Collection_1_Contains_m23967_gshared (Collection_1_t5968 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Contains_m23967(__this, ___item, method) (( bool (*) (Collection_1_t5968 *, Object_t *, const MethodInfo*))Collection_1_Contains_m23967_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void Collection_1_CopyTo_m23968_gshared (Collection_1_t5968 * __this, ObjectU5BU5D_t21* ___array, int32_t ___index, const MethodInfo* method);
#define Collection_1_CopyTo_m23968(__this, ___array, ___index, method) (( void (*) (Collection_1_t5968 *, ObjectU5BU5D_t21*, int32_t, const MethodInfo*))Collection_1_CopyTo_m23968_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<System.Object>::GetEnumerator()
extern "C" Object_t* Collection_1_GetEnumerator_m23969_gshared (Collection_1_t5968 * __this, const MethodInfo* method);
#define Collection_1_GetEnumerator_m23969(__this, method) (( Object_t* (*) (Collection_1_t5968 *, const MethodInfo*))Collection_1_GetEnumerator_m23969_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::IndexOf(T)
extern "C" int32_t Collection_1_IndexOf_m23970_gshared (Collection_1_t5968 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_IndexOf_m23970(__this, ___item, method) (( int32_t (*) (Collection_1_t5968 *, Object_t *, const MethodInfo*))Collection_1_IndexOf_m23970_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::Insert(System.Int32,T)
extern "C" void Collection_1_Insert_m23971_gshared (Collection_1_t5968 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Insert_m23971(__this, ___index, ___item, method) (( void (*) (Collection_1_t5968 *, int32_t, Object_t *, const MethodInfo*))Collection_1_Insert_m23971_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::InsertItem(System.Int32,T)
extern "C" void Collection_1_InsertItem_m23972_gshared (Collection_1_t5968 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define Collection_1_InsertItem_m23972(__this, ___index, ___item, method) (( void (*) (Collection_1_t5968 *, int32_t, Object_t *, const MethodInfo*))Collection_1_InsertItem_m23972_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::Remove(T)
extern "C" bool Collection_1_Remove_m23973_gshared (Collection_1_t5968 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Remove_m23973(__this, ___item, method) (( bool (*) (Collection_1_t5968 *, Object_t *, const MethodInfo*))Collection_1_Remove_m23973_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::RemoveAt(System.Int32)
extern "C" void Collection_1_RemoveAt_m23974_gshared (Collection_1_t5968 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_RemoveAt_m23974(__this, ___index, method) (( void (*) (Collection_1_t5968 *, int32_t, const MethodInfo*))Collection_1_RemoveAt_m23974_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::RemoveItem(System.Int32)
extern "C" void Collection_1_RemoveItem_m23975_gshared (Collection_1_t5968 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_RemoveItem_m23975(__this, ___index, method) (( void (*) (Collection_1_t5968 *, int32_t, const MethodInfo*))Collection_1_RemoveItem_m23975_gshared)(__this, ___index, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::get_Count()
extern "C" int32_t Collection_1_get_Count_m23976_gshared (Collection_1_t5968 * __this, const MethodInfo* method);
#define Collection_1_get_Count_m23976(__this, method) (( int32_t (*) (Collection_1_t5968 *, const MethodInfo*))Collection_1_get_Count_m23976_gshared)(__this, method)
// T System.Collections.ObjectModel.Collection`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * Collection_1_get_Item_m23977_gshared (Collection_1_t5968 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_get_Item_m23977(__this, ___index, method) (( Object_t * (*) (Collection_1_t5968 *, int32_t, const MethodInfo*))Collection_1_get_Item_m23977_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::set_Item(System.Int32,T)
extern "C" void Collection_1_set_Item_m23978_gshared (Collection_1_t5968 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_set_Item_m23978(__this, ___index, ___value, method) (( void (*) (Collection_1_t5968 *, int32_t, Object_t *, const MethodInfo*))Collection_1_set_Item_m23978_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::SetItem(System.Int32,T)
extern "C" void Collection_1_SetItem_m23979_gshared (Collection_1_t5968 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define Collection_1_SetItem_m23979(__this, ___index, ___item, method) (( void (*) (Collection_1_t5968 *, int32_t, Object_t *, const MethodInfo*))Collection_1_SetItem_m23979_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::IsValidItem(System.Object)
extern "C" bool Collection_1_IsValidItem_m23980_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define Collection_1_IsValidItem_m23980(__this /* static, unused */, ___item, method) (( bool (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Collection_1_IsValidItem_m23980_gshared)(__this /* static, unused */, ___item, method)
// T System.Collections.ObjectModel.Collection`1<System.Object>::ConvertItem(System.Object)
extern "C" Object_t * Collection_1_ConvertItem_m23981_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define Collection_1_ConvertItem_m23981(__this /* static, unused */, ___item, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Collection_1_ConvertItem_m23981_gshared)(__this /* static, unused */, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::CheckWritable(System.Collections.Generic.IList`1<T>)
extern "C" void Collection_1_CheckWritable_m23982_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_CheckWritable_m23982(__this /* static, unused */, ___list, method) (( void (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_CheckWritable_m23982_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::IsSynchronized(System.Collections.Generic.IList`1<T>)
extern "C" bool Collection_1_IsSynchronized_m23983_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_IsSynchronized_m23983(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_IsSynchronized_m23983_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::IsFixedSize(System.Collections.Generic.IList`1<T>)
extern "C" bool Collection_1_IsFixedSize_m23984_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_IsFixedSize_m23984(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_IsFixedSize_m23984_gshared)(__this /* static, unused */, ___list, method)

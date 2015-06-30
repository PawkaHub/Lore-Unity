#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.ObjectModel.Collection`1<System.Byte>
struct Collection_1_t5256;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Byte[]
struct ByteU5BU5D_t25;
// System.Collections.Generic.IEnumerator`1<System.Byte>
struct IEnumerator_1_t6429;
// System.Collections.Generic.IList`1<System.Byte>
struct IList_1_t5254;

// System.Void System.Collections.ObjectModel.Collection`1<System.Byte>::.ctor()
extern "C" void Collection_1__ctor_m28220_gshared (Collection_1_t5256 * __this, const MethodInfo* method);
#define Collection_1__ctor_m28220(__this, method) (( void (*) (Collection_1_t5256 *, const MethodInfo*))Collection_1__ctor_m28220_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Byte>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m28221_gshared (Collection_1_t5256 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m28221(__this, method) (( bool (*) (Collection_1_t5256 *, const MethodInfo*))Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m28221_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Byte>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Collection_1_System_Collections_ICollection_CopyTo_m28222_gshared (Collection_1_t5256 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_CopyTo_m28222(__this, ___array, ___index, method) (( void (*) (Collection_1_t5256 *, Array_t *, int32_t, const MethodInfo*))Collection_1_System_Collections_ICollection_CopyTo_m28222_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<System.Byte>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Collection_1_System_Collections_IEnumerable_GetEnumerator_m28223_gshared (Collection_1_t5256 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IEnumerable_GetEnumerator_m28223(__this, method) (( Object_t * (*) (Collection_1_t5256 *, const MethodInfo*))Collection_1_System_Collections_IEnumerable_GetEnumerator_m28223_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Byte>::System.Collections.IList.Add(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_Add_m28224_gshared (Collection_1_t5256 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Add_m28224(__this, ___value, method) (( int32_t (*) (Collection_1_t5256 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Add_m28224_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Byte>::System.Collections.IList.Contains(System.Object)
extern "C" bool Collection_1_System_Collections_IList_Contains_m28225_gshared (Collection_1_t5256 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Contains_m28225(__this, ___value, method) (( bool (*) (Collection_1_t5256 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Contains_m28225_gshared)(__this, ___value, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Byte>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_IndexOf_m28226_gshared (Collection_1_t5256 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_IndexOf_m28226(__this, ___value, method) (( int32_t (*) (Collection_1_t5256 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_IndexOf_m28226_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Byte>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_Insert_m28227_gshared (Collection_1_t5256 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Insert_m28227(__this, ___index, ___value, method) (( void (*) (Collection_1_t5256 *, int32_t, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Insert_m28227_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Byte>::System.Collections.IList.Remove(System.Object)
extern "C" void Collection_1_System_Collections_IList_Remove_m28228_gshared (Collection_1_t5256 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Remove_m28228(__this, ___value, method) (( void (*) (Collection_1_t5256 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Remove_m28228_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Byte>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Collection_1_System_Collections_ICollection_get_IsSynchronized_m28229_gshared (Collection_1_t5256 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_get_IsSynchronized_m28229(__this, method) (( bool (*) (Collection_1_t5256 *, const MethodInfo*))Collection_1_System_Collections_ICollection_get_IsSynchronized_m28229_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Byte>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Collection_1_System_Collections_ICollection_get_SyncRoot_m28230_gshared (Collection_1_t5256 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_get_SyncRoot_m28230(__this, method) (( Object_t * (*) (Collection_1_t5256 *, const MethodInfo*))Collection_1_System_Collections_ICollection_get_SyncRoot_m28230_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Byte>::System.Collections.IList.get_IsFixedSize()
extern "C" bool Collection_1_System_Collections_IList_get_IsFixedSize_m28231_gshared (Collection_1_t5256 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_IsFixedSize_m28231(__this, method) (( bool (*) (Collection_1_t5256 *, const MethodInfo*))Collection_1_System_Collections_IList_get_IsFixedSize_m28231_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Byte>::System.Collections.IList.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_IList_get_IsReadOnly_m28232_gshared (Collection_1_t5256 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_IsReadOnly_m28232(__this, method) (( bool (*) (Collection_1_t5256 *, const MethodInfo*))Collection_1_System_Collections_IList_get_IsReadOnly_m28232_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Byte>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * Collection_1_System_Collections_IList_get_Item_m28233_gshared (Collection_1_t5256 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_Item_m28233(__this, ___index, method) (( Object_t * (*) (Collection_1_t5256 *, int32_t, const MethodInfo*))Collection_1_System_Collections_IList_get_Item_m28233_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Byte>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_set_Item_m28234_gshared (Collection_1_t5256 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_set_Item_m28234(__this, ___index, ___value, method) (( void (*) (Collection_1_t5256 *, int32_t, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_set_Item_m28234_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Byte>::Add(T)
extern "C" void Collection_1_Add_m28235_gshared (Collection_1_t5256 * __this, uint8_t ___item, const MethodInfo* method);
#define Collection_1_Add_m28235(__this, ___item, method) (( void (*) (Collection_1_t5256 *, uint8_t, const MethodInfo*))Collection_1_Add_m28235_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Byte>::Clear()
extern "C" void Collection_1_Clear_m28236_gshared (Collection_1_t5256 * __this, const MethodInfo* method);
#define Collection_1_Clear_m28236(__this, method) (( void (*) (Collection_1_t5256 *, const MethodInfo*))Collection_1_Clear_m28236_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Byte>::ClearItems()
extern "C" void Collection_1_ClearItems_m28237_gshared (Collection_1_t5256 * __this, const MethodInfo* method);
#define Collection_1_ClearItems_m28237(__this, method) (( void (*) (Collection_1_t5256 *, const MethodInfo*))Collection_1_ClearItems_m28237_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Byte>::Contains(T)
extern "C" bool Collection_1_Contains_m28238_gshared (Collection_1_t5256 * __this, uint8_t ___item, const MethodInfo* method);
#define Collection_1_Contains_m28238(__this, ___item, method) (( bool (*) (Collection_1_t5256 *, uint8_t, const MethodInfo*))Collection_1_Contains_m28238_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Byte>::CopyTo(T[],System.Int32)
extern "C" void Collection_1_CopyTo_m28239_gshared (Collection_1_t5256 * __this, ByteU5BU5D_t25* ___array, int32_t ___index, const MethodInfo* method);
#define Collection_1_CopyTo_m28239(__this, ___array, ___index, method) (( void (*) (Collection_1_t5256 *, ByteU5BU5D_t25*, int32_t, const MethodInfo*))Collection_1_CopyTo_m28239_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<System.Byte>::GetEnumerator()
extern "C" Object_t* Collection_1_GetEnumerator_m28240_gshared (Collection_1_t5256 * __this, const MethodInfo* method);
#define Collection_1_GetEnumerator_m28240(__this, method) (( Object_t* (*) (Collection_1_t5256 *, const MethodInfo*))Collection_1_GetEnumerator_m28240_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Byte>::IndexOf(T)
extern "C" int32_t Collection_1_IndexOf_m28241_gshared (Collection_1_t5256 * __this, uint8_t ___item, const MethodInfo* method);
#define Collection_1_IndexOf_m28241(__this, ___item, method) (( int32_t (*) (Collection_1_t5256 *, uint8_t, const MethodInfo*))Collection_1_IndexOf_m28241_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Byte>::Insert(System.Int32,T)
extern "C" void Collection_1_Insert_m28242_gshared (Collection_1_t5256 * __this, int32_t ___index, uint8_t ___item, const MethodInfo* method);
#define Collection_1_Insert_m28242(__this, ___index, ___item, method) (( void (*) (Collection_1_t5256 *, int32_t, uint8_t, const MethodInfo*))Collection_1_Insert_m28242_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Byte>::InsertItem(System.Int32,T)
extern "C" void Collection_1_InsertItem_m28243_gshared (Collection_1_t5256 * __this, int32_t ___index, uint8_t ___item, const MethodInfo* method);
#define Collection_1_InsertItem_m28243(__this, ___index, ___item, method) (( void (*) (Collection_1_t5256 *, int32_t, uint8_t, const MethodInfo*))Collection_1_InsertItem_m28243_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Byte>::Remove(T)
extern "C" bool Collection_1_Remove_m28244_gshared (Collection_1_t5256 * __this, uint8_t ___item, const MethodInfo* method);
#define Collection_1_Remove_m28244(__this, ___item, method) (( bool (*) (Collection_1_t5256 *, uint8_t, const MethodInfo*))Collection_1_Remove_m28244_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Byte>::RemoveAt(System.Int32)
extern "C" void Collection_1_RemoveAt_m28245_gshared (Collection_1_t5256 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_RemoveAt_m28245(__this, ___index, method) (( void (*) (Collection_1_t5256 *, int32_t, const MethodInfo*))Collection_1_RemoveAt_m28245_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Byte>::RemoveItem(System.Int32)
extern "C" void Collection_1_RemoveItem_m28246_gshared (Collection_1_t5256 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_RemoveItem_m28246(__this, ___index, method) (( void (*) (Collection_1_t5256 *, int32_t, const MethodInfo*))Collection_1_RemoveItem_m28246_gshared)(__this, ___index, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Byte>::get_Count()
extern "C" int32_t Collection_1_get_Count_m28247_gshared (Collection_1_t5256 * __this, const MethodInfo* method);
#define Collection_1_get_Count_m28247(__this, method) (( int32_t (*) (Collection_1_t5256 *, const MethodInfo*))Collection_1_get_Count_m28247_gshared)(__this, method)
// T System.Collections.ObjectModel.Collection`1<System.Byte>::get_Item(System.Int32)
extern "C" uint8_t Collection_1_get_Item_m28248_gshared (Collection_1_t5256 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_get_Item_m28248(__this, ___index, method) (( uint8_t (*) (Collection_1_t5256 *, int32_t, const MethodInfo*))Collection_1_get_Item_m28248_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Byte>::set_Item(System.Int32,T)
extern "C" void Collection_1_set_Item_m28249_gshared (Collection_1_t5256 * __this, int32_t ___index, uint8_t ___value, const MethodInfo* method);
#define Collection_1_set_Item_m28249(__this, ___index, ___value, method) (( void (*) (Collection_1_t5256 *, int32_t, uint8_t, const MethodInfo*))Collection_1_set_Item_m28249_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Byte>::SetItem(System.Int32,T)
extern "C" void Collection_1_SetItem_m28250_gshared (Collection_1_t5256 * __this, int32_t ___index, uint8_t ___item, const MethodInfo* method);
#define Collection_1_SetItem_m28250(__this, ___index, ___item, method) (( void (*) (Collection_1_t5256 *, int32_t, uint8_t, const MethodInfo*))Collection_1_SetItem_m28250_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Byte>::IsValidItem(System.Object)
extern "C" bool Collection_1_IsValidItem_m28251_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define Collection_1_IsValidItem_m28251(__this /* static, unused */, ___item, method) (( bool (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Collection_1_IsValidItem_m28251_gshared)(__this /* static, unused */, ___item, method)
// T System.Collections.ObjectModel.Collection`1<System.Byte>::ConvertItem(System.Object)
extern "C" uint8_t Collection_1_ConvertItem_m28252_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define Collection_1_ConvertItem_m28252(__this /* static, unused */, ___item, method) (( uint8_t (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Collection_1_ConvertItem_m28252_gshared)(__this /* static, unused */, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Byte>::CheckWritable(System.Collections.Generic.IList`1<T>)
extern "C" void Collection_1_CheckWritable_m28253_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_CheckWritable_m28253(__this /* static, unused */, ___list, method) (( void (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_CheckWritable_m28253_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Byte>::IsSynchronized(System.Collections.Generic.IList`1<T>)
extern "C" bool Collection_1_IsSynchronized_m28254_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_IsSynchronized_m28254(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_IsSynchronized_m28254_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Byte>::IsFixedSize(System.Collections.Generic.IList`1<T>)
extern "C" bool Collection_1_IsFixedSize_m28255_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_IsFixedSize_m28255(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_IsFixedSize_m28255_gshared)(__this /* static, unused */, ___list, method)

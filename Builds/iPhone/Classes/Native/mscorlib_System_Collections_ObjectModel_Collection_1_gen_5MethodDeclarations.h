#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.ObjectModel.Collection`1<System.Byte>
struct Collection_1_t6672;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Byte[]
struct ByteU5BU5D_t25;
// System.Collections.Generic.IEnumerator`1<System.Byte>
struct IEnumerator_1_t7402;
// System.Collections.Generic.IList`1<System.Byte>
struct IList_1_t6670;

// System.Void System.Collections.ObjectModel.Collection`1<System.Byte>::.ctor()
extern "C" void Collection_1__ctor_m31181_gshared (Collection_1_t6672 * __this, const MethodInfo* method);
#define Collection_1__ctor_m31181(__this, method) (( void (*) (Collection_1_t6672 *, const MethodInfo*))Collection_1__ctor_m31181_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Byte>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m31182_gshared (Collection_1_t6672 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m31182(__this, method) (( bool (*) (Collection_1_t6672 *, const MethodInfo*))Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m31182_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Byte>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Collection_1_System_Collections_ICollection_CopyTo_m31183_gshared (Collection_1_t6672 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_CopyTo_m31183(__this, ___array, ___index, method) (( void (*) (Collection_1_t6672 *, Array_t *, int32_t, const MethodInfo*))Collection_1_System_Collections_ICollection_CopyTo_m31183_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<System.Byte>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Collection_1_System_Collections_IEnumerable_GetEnumerator_m31184_gshared (Collection_1_t6672 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IEnumerable_GetEnumerator_m31184(__this, method) (( Object_t * (*) (Collection_1_t6672 *, const MethodInfo*))Collection_1_System_Collections_IEnumerable_GetEnumerator_m31184_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Byte>::System.Collections.IList.Add(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_Add_m31185_gshared (Collection_1_t6672 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Add_m31185(__this, ___value, method) (( int32_t (*) (Collection_1_t6672 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Add_m31185_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Byte>::System.Collections.IList.Contains(System.Object)
extern "C" bool Collection_1_System_Collections_IList_Contains_m31186_gshared (Collection_1_t6672 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Contains_m31186(__this, ___value, method) (( bool (*) (Collection_1_t6672 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Contains_m31186_gshared)(__this, ___value, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Byte>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_IndexOf_m31187_gshared (Collection_1_t6672 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_IndexOf_m31187(__this, ___value, method) (( int32_t (*) (Collection_1_t6672 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_IndexOf_m31187_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Byte>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_Insert_m31188_gshared (Collection_1_t6672 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Insert_m31188(__this, ___index, ___value, method) (( void (*) (Collection_1_t6672 *, int32_t, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Insert_m31188_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Byte>::System.Collections.IList.Remove(System.Object)
extern "C" void Collection_1_System_Collections_IList_Remove_m31189_gshared (Collection_1_t6672 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Remove_m31189(__this, ___value, method) (( void (*) (Collection_1_t6672 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Remove_m31189_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Byte>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Collection_1_System_Collections_ICollection_get_IsSynchronized_m31190_gshared (Collection_1_t6672 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_get_IsSynchronized_m31190(__this, method) (( bool (*) (Collection_1_t6672 *, const MethodInfo*))Collection_1_System_Collections_ICollection_get_IsSynchronized_m31190_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Byte>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Collection_1_System_Collections_ICollection_get_SyncRoot_m31191_gshared (Collection_1_t6672 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_get_SyncRoot_m31191(__this, method) (( Object_t * (*) (Collection_1_t6672 *, const MethodInfo*))Collection_1_System_Collections_ICollection_get_SyncRoot_m31191_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Byte>::System.Collections.IList.get_IsFixedSize()
extern "C" bool Collection_1_System_Collections_IList_get_IsFixedSize_m31192_gshared (Collection_1_t6672 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_IsFixedSize_m31192(__this, method) (( bool (*) (Collection_1_t6672 *, const MethodInfo*))Collection_1_System_Collections_IList_get_IsFixedSize_m31192_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Byte>::System.Collections.IList.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_IList_get_IsReadOnly_m31193_gshared (Collection_1_t6672 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_IsReadOnly_m31193(__this, method) (( bool (*) (Collection_1_t6672 *, const MethodInfo*))Collection_1_System_Collections_IList_get_IsReadOnly_m31193_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Byte>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * Collection_1_System_Collections_IList_get_Item_m31194_gshared (Collection_1_t6672 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_Item_m31194(__this, ___index, method) (( Object_t * (*) (Collection_1_t6672 *, int32_t, const MethodInfo*))Collection_1_System_Collections_IList_get_Item_m31194_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Byte>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_set_Item_m31195_gshared (Collection_1_t6672 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_set_Item_m31195(__this, ___index, ___value, method) (( void (*) (Collection_1_t6672 *, int32_t, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_set_Item_m31195_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Byte>::Add(T)
extern "C" void Collection_1_Add_m31196_gshared (Collection_1_t6672 * __this, uint8_t ___item, const MethodInfo* method);
#define Collection_1_Add_m31196(__this, ___item, method) (( void (*) (Collection_1_t6672 *, uint8_t, const MethodInfo*))Collection_1_Add_m31196_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Byte>::Clear()
extern "C" void Collection_1_Clear_m31197_gshared (Collection_1_t6672 * __this, const MethodInfo* method);
#define Collection_1_Clear_m31197(__this, method) (( void (*) (Collection_1_t6672 *, const MethodInfo*))Collection_1_Clear_m31197_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Byte>::ClearItems()
extern "C" void Collection_1_ClearItems_m31198_gshared (Collection_1_t6672 * __this, const MethodInfo* method);
#define Collection_1_ClearItems_m31198(__this, method) (( void (*) (Collection_1_t6672 *, const MethodInfo*))Collection_1_ClearItems_m31198_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Byte>::Contains(T)
extern "C" bool Collection_1_Contains_m31199_gshared (Collection_1_t6672 * __this, uint8_t ___item, const MethodInfo* method);
#define Collection_1_Contains_m31199(__this, ___item, method) (( bool (*) (Collection_1_t6672 *, uint8_t, const MethodInfo*))Collection_1_Contains_m31199_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Byte>::CopyTo(T[],System.Int32)
extern "C" void Collection_1_CopyTo_m31200_gshared (Collection_1_t6672 * __this, ByteU5BU5D_t25* ___array, int32_t ___index, const MethodInfo* method);
#define Collection_1_CopyTo_m31200(__this, ___array, ___index, method) (( void (*) (Collection_1_t6672 *, ByteU5BU5D_t25*, int32_t, const MethodInfo*))Collection_1_CopyTo_m31200_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<System.Byte>::GetEnumerator()
extern "C" Object_t* Collection_1_GetEnumerator_m31201_gshared (Collection_1_t6672 * __this, const MethodInfo* method);
#define Collection_1_GetEnumerator_m31201(__this, method) (( Object_t* (*) (Collection_1_t6672 *, const MethodInfo*))Collection_1_GetEnumerator_m31201_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Byte>::IndexOf(T)
extern "C" int32_t Collection_1_IndexOf_m31202_gshared (Collection_1_t6672 * __this, uint8_t ___item, const MethodInfo* method);
#define Collection_1_IndexOf_m31202(__this, ___item, method) (( int32_t (*) (Collection_1_t6672 *, uint8_t, const MethodInfo*))Collection_1_IndexOf_m31202_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Byte>::Insert(System.Int32,T)
extern "C" void Collection_1_Insert_m31203_gshared (Collection_1_t6672 * __this, int32_t ___index, uint8_t ___item, const MethodInfo* method);
#define Collection_1_Insert_m31203(__this, ___index, ___item, method) (( void (*) (Collection_1_t6672 *, int32_t, uint8_t, const MethodInfo*))Collection_1_Insert_m31203_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Byte>::InsertItem(System.Int32,T)
extern "C" void Collection_1_InsertItem_m31204_gshared (Collection_1_t6672 * __this, int32_t ___index, uint8_t ___item, const MethodInfo* method);
#define Collection_1_InsertItem_m31204(__this, ___index, ___item, method) (( void (*) (Collection_1_t6672 *, int32_t, uint8_t, const MethodInfo*))Collection_1_InsertItem_m31204_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Byte>::Remove(T)
extern "C" bool Collection_1_Remove_m31205_gshared (Collection_1_t6672 * __this, uint8_t ___item, const MethodInfo* method);
#define Collection_1_Remove_m31205(__this, ___item, method) (( bool (*) (Collection_1_t6672 *, uint8_t, const MethodInfo*))Collection_1_Remove_m31205_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Byte>::RemoveAt(System.Int32)
extern "C" void Collection_1_RemoveAt_m31206_gshared (Collection_1_t6672 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_RemoveAt_m31206(__this, ___index, method) (( void (*) (Collection_1_t6672 *, int32_t, const MethodInfo*))Collection_1_RemoveAt_m31206_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Byte>::RemoveItem(System.Int32)
extern "C" void Collection_1_RemoveItem_m31207_gshared (Collection_1_t6672 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_RemoveItem_m31207(__this, ___index, method) (( void (*) (Collection_1_t6672 *, int32_t, const MethodInfo*))Collection_1_RemoveItem_m31207_gshared)(__this, ___index, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Byte>::get_Count()
extern "C" int32_t Collection_1_get_Count_m31208_gshared (Collection_1_t6672 * __this, const MethodInfo* method);
#define Collection_1_get_Count_m31208(__this, method) (( int32_t (*) (Collection_1_t6672 *, const MethodInfo*))Collection_1_get_Count_m31208_gshared)(__this, method)
// T System.Collections.ObjectModel.Collection`1<System.Byte>::get_Item(System.Int32)
extern "C" uint8_t Collection_1_get_Item_m31209_gshared (Collection_1_t6672 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_get_Item_m31209(__this, ___index, method) (( uint8_t (*) (Collection_1_t6672 *, int32_t, const MethodInfo*))Collection_1_get_Item_m31209_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Byte>::set_Item(System.Int32,T)
extern "C" void Collection_1_set_Item_m31210_gshared (Collection_1_t6672 * __this, int32_t ___index, uint8_t ___value, const MethodInfo* method);
#define Collection_1_set_Item_m31210(__this, ___index, ___value, method) (( void (*) (Collection_1_t6672 *, int32_t, uint8_t, const MethodInfo*))Collection_1_set_Item_m31210_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Byte>::SetItem(System.Int32,T)
extern "C" void Collection_1_SetItem_m31211_gshared (Collection_1_t6672 * __this, int32_t ___index, uint8_t ___item, const MethodInfo* method);
#define Collection_1_SetItem_m31211(__this, ___index, ___item, method) (( void (*) (Collection_1_t6672 *, int32_t, uint8_t, const MethodInfo*))Collection_1_SetItem_m31211_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Byte>::IsValidItem(System.Object)
extern "C" bool Collection_1_IsValidItem_m31212_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define Collection_1_IsValidItem_m31212(__this /* static, unused */, ___item, method) (( bool (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Collection_1_IsValidItem_m31212_gshared)(__this /* static, unused */, ___item, method)
// T System.Collections.ObjectModel.Collection`1<System.Byte>::ConvertItem(System.Object)
extern "C" uint8_t Collection_1_ConvertItem_m31213_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define Collection_1_ConvertItem_m31213(__this /* static, unused */, ___item, method) (( uint8_t (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Collection_1_ConvertItem_m31213_gshared)(__this /* static, unused */, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Byte>::CheckWritable(System.Collections.Generic.IList`1<T>)
extern "C" void Collection_1_CheckWritable_m31214_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_CheckWritable_m31214(__this /* static, unused */, ___list, method) (( void (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_CheckWritable_m31214_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Byte>::IsSynchronized(System.Collections.Generic.IList`1<T>)
extern "C" bool Collection_1_IsSynchronized_m31215_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_IsSynchronized_m31215(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_IsSynchronized_m31215_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Byte>::IsFixedSize(System.Collections.Generic.IList`1<T>)
extern "C" bool Collection_1_IsFixedSize_m31216_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_IsFixedSize_m31216(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_IsFixedSize_m31216_gshared)(__this /* static, unused */, ___list, method)

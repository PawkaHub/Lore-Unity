#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>
struct ThreadSafeDictionary_2_t9432;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1554;
// System.Object
struct Object_t;
// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<System.Object,System.Object>
struct ThreadSafeDictionaryValueFactory_2_t9430;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>[]
struct KeyValuePair_2U5BU5D_t6853;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerator_1_t6851;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_13.h"

// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::.ctor(SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<TKey,TValue>)
extern "C" void ThreadSafeDictionary_2__ctor_m70470_gshared (ThreadSafeDictionary_2_t9432 * __this, ThreadSafeDictionaryValueFactory_2_t9430 * ___valueFactory, const MethodInfo* method);
#define ThreadSafeDictionary_2__ctor_m70470(__this, ___valueFactory, method) (( void (*) (ThreadSafeDictionary_2_t9432 *, ThreadSafeDictionaryValueFactory_2_t9430 *, const MethodInfo*))ThreadSafeDictionary_2__ctor_m70470_gshared)(__this, ___valueFactory, method)
// System.Collections.IEnumerator SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * ThreadSafeDictionary_2_System_Collections_IEnumerable_GetEnumerator_m70472_gshared (ThreadSafeDictionary_2_t9432 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_System_Collections_IEnumerable_GetEnumerator_m70472(__this, method) (( Object_t * (*) (ThreadSafeDictionary_2_t9432 *, const MethodInfo*))ThreadSafeDictionary_2_System_Collections_IEnumerable_GetEnumerator_m70472_gshared)(__this, method)
// TValue SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Get(TKey)
extern "C" Object_t * ThreadSafeDictionary_2_Get_m70474_gshared (ThreadSafeDictionary_2_t9432 * __this, Object_t * ___key, const MethodInfo* method);
#define ThreadSafeDictionary_2_Get_m70474(__this, ___key, method) (( Object_t * (*) (ThreadSafeDictionary_2_t9432 *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_Get_m70474_gshared)(__this, ___key, method)
// TValue SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::AddValue(TKey)
extern "C" Object_t * ThreadSafeDictionary_2_AddValue_m70476_gshared (ThreadSafeDictionary_2_t9432 * __this, Object_t * ___key, const MethodInfo* method);
#define ThreadSafeDictionary_2_AddValue_m70476(__this, ___key, method) (( Object_t * (*) (ThreadSafeDictionary_2_t9432 *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_AddValue_m70476_gshared)(__this, ___key, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Add(TKey,TValue)
extern "C" void ThreadSafeDictionary_2_Add_m70478_gshared (ThreadSafeDictionary_2_t9432 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define ThreadSafeDictionary_2_Add_m70478(__this, ___key, ___value, method) (( void (*) (ThreadSafeDictionary_2_t9432 *, Object_t *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_Add_m70478_gshared)(__this, ___key, ___value, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::ContainsKey(TKey)
extern "C" bool ThreadSafeDictionary_2_ContainsKey_m70480_gshared (ThreadSafeDictionary_2_t9432 * __this, Object_t * ___key, const MethodInfo* method);
#define ThreadSafeDictionary_2_ContainsKey_m70480(__this, ___key, method) (( bool (*) (ThreadSafeDictionary_2_t9432 *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_ContainsKey_m70480_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<TKey> SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_Keys()
extern "C" Object_t* ThreadSafeDictionary_2_get_Keys_m70482_gshared (ThreadSafeDictionary_2_t9432 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_get_Keys_m70482(__this, method) (( Object_t* (*) (ThreadSafeDictionary_2_t9432 *, const MethodInfo*))ThreadSafeDictionary_2_get_Keys_m70482_gshared)(__this, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Remove(TKey)
extern "C" bool ThreadSafeDictionary_2_Remove_m70484_gshared (ThreadSafeDictionary_2_t9432 * __this, Object_t * ___key, const MethodInfo* method);
#define ThreadSafeDictionary_2_Remove_m70484(__this, ___key, method) (( bool (*) (ThreadSafeDictionary_2_t9432 *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_Remove_m70484_gshared)(__this, ___key, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool ThreadSafeDictionary_2_TryGetValue_m70486_gshared (ThreadSafeDictionary_2_t9432 * __this, Object_t * ___key, Object_t ** ___value, const MethodInfo* method);
#define ThreadSafeDictionary_2_TryGetValue_m70486(__this, ___key, ___value, method) (( bool (*) (ThreadSafeDictionary_2_t9432 *, Object_t *, Object_t **, const MethodInfo*))ThreadSafeDictionary_2_TryGetValue_m70486_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TValue> SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_Values()
extern "C" Object_t* ThreadSafeDictionary_2_get_Values_m70488_gshared (ThreadSafeDictionary_2_t9432 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_get_Values_m70488(__this, method) (( Object_t* (*) (ThreadSafeDictionary_2_t9432 *, const MethodInfo*))ThreadSafeDictionary_2_get_Values_m70488_gshared)(__this, method)
// TValue SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_Item(TKey)
extern "C" Object_t * ThreadSafeDictionary_2_get_Item_m70490_gshared (ThreadSafeDictionary_2_t9432 * __this, Object_t * ___key, const MethodInfo* method);
#define ThreadSafeDictionary_2_get_Item_m70490(__this, ___key, method) (( Object_t * (*) (ThreadSafeDictionary_2_t9432 *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_get_Item_m70490_gshared)(__this, ___key, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
extern "C" void ThreadSafeDictionary_2_set_Item_m70492_gshared (ThreadSafeDictionary_2_t9432 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define ThreadSafeDictionary_2_set_Item_m70492(__this, ___key, ___value, method) (( void (*) (ThreadSafeDictionary_2_t9432 *, Object_t *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_set_Item_m70492_gshared)(__this, ___key, ___value, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void ThreadSafeDictionary_2_Add_m70494_gshared (ThreadSafeDictionary_2_t9432 * __this, KeyValuePair_2_t1797  ___item, const MethodInfo* method);
#define ThreadSafeDictionary_2_Add_m70494(__this, ___item, method) (( void (*) (ThreadSafeDictionary_2_t9432 *, KeyValuePair_2_t1797 , const MethodInfo*))ThreadSafeDictionary_2_Add_m70494_gshared)(__this, ___item, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Clear()
extern "C" void ThreadSafeDictionary_2_Clear_m70496_gshared (ThreadSafeDictionary_2_t9432 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_Clear_m70496(__this, method) (( void (*) (ThreadSafeDictionary_2_t9432 *, const MethodInfo*))ThreadSafeDictionary_2_Clear_m70496_gshared)(__this, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool ThreadSafeDictionary_2_Contains_m70498_gshared (ThreadSafeDictionary_2_t9432 * __this, KeyValuePair_2_t1797  ___item, const MethodInfo* method);
#define ThreadSafeDictionary_2_Contains_m70498(__this, ___item, method) (( bool (*) (ThreadSafeDictionary_2_t9432 *, KeyValuePair_2_t1797 , const MethodInfo*))ThreadSafeDictionary_2_Contains_m70498_gshared)(__this, ___item, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void ThreadSafeDictionary_2_CopyTo_m70500_gshared (ThreadSafeDictionary_2_t9432 * __this, KeyValuePair_2U5BU5D_t6853* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define ThreadSafeDictionary_2_CopyTo_m70500(__this, ___array, ___arrayIndex, method) (( void (*) (ThreadSafeDictionary_2_t9432 *, KeyValuePair_2U5BU5D_t6853*, int32_t, const MethodInfo*))ThreadSafeDictionary_2_CopyTo_m70500_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_Count()
extern "C" int32_t ThreadSafeDictionary_2_get_Count_m70502_gshared (ThreadSafeDictionary_2_t9432 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_get_Count_m70502(__this, method) (( int32_t (*) (ThreadSafeDictionary_2_t9432 *, const MethodInfo*))ThreadSafeDictionary_2_get_Count_m70502_gshared)(__this, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_IsReadOnly()
extern "C" bool ThreadSafeDictionary_2_get_IsReadOnly_m70504_gshared (ThreadSafeDictionary_2_t9432 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_get_IsReadOnly_m70504(__this, method) (( bool (*) (ThreadSafeDictionary_2_t9432 *, const MethodInfo*))ThreadSafeDictionary_2_get_IsReadOnly_m70504_gshared)(__this, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool ThreadSafeDictionary_2_Remove_m70506_gshared (ThreadSafeDictionary_2_t9432 * __this, KeyValuePair_2_t1797  ___item, const MethodInfo* method);
#define ThreadSafeDictionary_2_Remove_m70506(__this, ___item, method) (( bool (*) (ThreadSafeDictionary_2_t9432 *, KeyValuePair_2_t1797 , const MethodInfo*))ThreadSafeDictionary_2_Remove_m70506_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::GetEnumerator()
extern "C" Object_t* ThreadSafeDictionary_2_GetEnumerator_m70508_gshared (ThreadSafeDictionary_2_t9432 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_GetEnumerator_m70508(__this, method) (( Object_t* (*) (ThreadSafeDictionary_2_t9432 *, const MethodInfo*))ThreadSafeDictionary_2_GetEnumerator_m70508_gshared)(__this, method)

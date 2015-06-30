#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>
struct ThreadSafeDictionary_2_t6196;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1429;
// System.Object
struct Object_t;
// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<System.Object,System.Object>
struct ThreadSafeDictionaryValueFactory_2_t6194;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>[]
struct KeyValuePair_2U5BU5D_t5601;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerator_1_t5599;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_13.h"

// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::.ctor(SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<TKey,TValue>)
extern "C" void ThreadSafeDictionary_2__ctor_m42338_gshared (ThreadSafeDictionary_2_t6196 * __this, ThreadSafeDictionaryValueFactory_2_t6194 * ___valueFactory, const MethodInfo* method);
#define ThreadSafeDictionary_2__ctor_m42338(__this, ___valueFactory, method) (( void (*) (ThreadSafeDictionary_2_t6196 *, ThreadSafeDictionaryValueFactory_2_t6194 *, const MethodInfo*))ThreadSafeDictionary_2__ctor_m42338_gshared)(__this, ___valueFactory, method)
// System.Collections.IEnumerator SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * ThreadSafeDictionary_2_System_Collections_IEnumerable_GetEnumerator_m42340_gshared (ThreadSafeDictionary_2_t6196 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_System_Collections_IEnumerable_GetEnumerator_m42340(__this, method) (( Object_t * (*) (ThreadSafeDictionary_2_t6196 *, const MethodInfo*))ThreadSafeDictionary_2_System_Collections_IEnumerable_GetEnumerator_m42340_gshared)(__this, method)
// TValue SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Get(TKey)
extern "C" Object_t * ThreadSafeDictionary_2_Get_m42342_gshared (ThreadSafeDictionary_2_t6196 * __this, Object_t * ___key, const MethodInfo* method);
#define ThreadSafeDictionary_2_Get_m42342(__this, ___key, method) (( Object_t * (*) (ThreadSafeDictionary_2_t6196 *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_Get_m42342_gshared)(__this, ___key, method)
// TValue SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::AddValue(TKey)
extern "C" Object_t * ThreadSafeDictionary_2_AddValue_m42344_gshared (ThreadSafeDictionary_2_t6196 * __this, Object_t * ___key, const MethodInfo* method);
#define ThreadSafeDictionary_2_AddValue_m42344(__this, ___key, method) (( Object_t * (*) (ThreadSafeDictionary_2_t6196 *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_AddValue_m42344_gshared)(__this, ___key, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Add(TKey,TValue)
extern "C" void ThreadSafeDictionary_2_Add_m42346_gshared (ThreadSafeDictionary_2_t6196 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define ThreadSafeDictionary_2_Add_m42346(__this, ___key, ___value, method) (( void (*) (ThreadSafeDictionary_2_t6196 *, Object_t *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_Add_m42346_gshared)(__this, ___key, ___value, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::ContainsKey(TKey)
extern "C" bool ThreadSafeDictionary_2_ContainsKey_m42348_gshared (ThreadSafeDictionary_2_t6196 * __this, Object_t * ___key, const MethodInfo* method);
#define ThreadSafeDictionary_2_ContainsKey_m42348(__this, ___key, method) (( bool (*) (ThreadSafeDictionary_2_t6196 *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_ContainsKey_m42348_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<TKey> SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_Keys()
extern "C" Object_t* ThreadSafeDictionary_2_get_Keys_m42350_gshared (ThreadSafeDictionary_2_t6196 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_get_Keys_m42350(__this, method) (( Object_t* (*) (ThreadSafeDictionary_2_t6196 *, const MethodInfo*))ThreadSafeDictionary_2_get_Keys_m42350_gshared)(__this, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Remove(TKey)
extern "C" bool ThreadSafeDictionary_2_Remove_m42352_gshared (ThreadSafeDictionary_2_t6196 * __this, Object_t * ___key, const MethodInfo* method);
#define ThreadSafeDictionary_2_Remove_m42352(__this, ___key, method) (( bool (*) (ThreadSafeDictionary_2_t6196 *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_Remove_m42352_gshared)(__this, ___key, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool ThreadSafeDictionary_2_TryGetValue_m42354_gshared (ThreadSafeDictionary_2_t6196 * __this, Object_t * ___key, Object_t ** ___value, const MethodInfo* method);
#define ThreadSafeDictionary_2_TryGetValue_m42354(__this, ___key, ___value, method) (( bool (*) (ThreadSafeDictionary_2_t6196 *, Object_t *, Object_t **, const MethodInfo*))ThreadSafeDictionary_2_TryGetValue_m42354_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TValue> SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_Values()
extern "C" Object_t* ThreadSafeDictionary_2_get_Values_m42356_gshared (ThreadSafeDictionary_2_t6196 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_get_Values_m42356(__this, method) (( Object_t* (*) (ThreadSafeDictionary_2_t6196 *, const MethodInfo*))ThreadSafeDictionary_2_get_Values_m42356_gshared)(__this, method)
// TValue SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_Item(TKey)
extern "C" Object_t * ThreadSafeDictionary_2_get_Item_m42358_gshared (ThreadSafeDictionary_2_t6196 * __this, Object_t * ___key, const MethodInfo* method);
#define ThreadSafeDictionary_2_get_Item_m42358(__this, ___key, method) (( Object_t * (*) (ThreadSafeDictionary_2_t6196 *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_get_Item_m42358_gshared)(__this, ___key, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
extern "C" void ThreadSafeDictionary_2_set_Item_m42360_gshared (ThreadSafeDictionary_2_t6196 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define ThreadSafeDictionary_2_set_Item_m42360(__this, ___key, ___value, method) (( void (*) (ThreadSafeDictionary_2_t6196 *, Object_t *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_set_Item_m42360_gshared)(__this, ___key, ___value, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void ThreadSafeDictionary_2_Add_m42362_gshared (ThreadSafeDictionary_2_t6196 * __this, KeyValuePair_2_t1591  ___item, const MethodInfo* method);
#define ThreadSafeDictionary_2_Add_m42362(__this, ___item, method) (( void (*) (ThreadSafeDictionary_2_t6196 *, KeyValuePair_2_t1591 , const MethodInfo*))ThreadSafeDictionary_2_Add_m42362_gshared)(__this, ___item, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Clear()
extern "C" void ThreadSafeDictionary_2_Clear_m42364_gshared (ThreadSafeDictionary_2_t6196 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_Clear_m42364(__this, method) (( void (*) (ThreadSafeDictionary_2_t6196 *, const MethodInfo*))ThreadSafeDictionary_2_Clear_m42364_gshared)(__this, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool ThreadSafeDictionary_2_Contains_m42366_gshared (ThreadSafeDictionary_2_t6196 * __this, KeyValuePair_2_t1591  ___item, const MethodInfo* method);
#define ThreadSafeDictionary_2_Contains_m42366(__this, ___item, method) (( bool (*) (ThreadSafeDictionary_2_t6196 *, KeyValuePair_2_t1591 , const MethodInfo*))ThreadSafeDictionary_2_Contains_m42366_gshared)(__this, ___item, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void ThreadSafeDictionary_2_CopyTo_m42368_gshared (ThreadSafeDictionary_2_t6196 * __this, KeyValuePair_2U5BU5D_t5601* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define ThreadSafeDictionary_2_CopyTo_m42368(__this, ___array, ___arrayIndex, method) (( void (*) (ThreadSafeDictionary_2_t6196 *, KeyValuePair_2U5BU5D_t5601*, int32_t, const MethodInfo*))ThreadSafeDictionary_2_CopyTo_m42368_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_Count()
extern "C" int32_t ThreadSafeDictionary_2_get_Count_m42370_gshared (ThreadSafeDictionary_2_t6196 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_get_Count_m42370(__this, method) (( int32_t (*) (ThreadSafeDictionary_2_t6196 *, const MethodInfo*))ThreadSafeDictionary_2_get_Count_m42370_gshared)(__this, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_IsReadOnly()
extern "C" bool ThreadSafeDictionary_2_get_IsReadOnly_m42372_gshared (ThreadSafeDictionary_2_t6196 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_get_IsReadOnly_m42372(__this, method) (( bool (*) (ThreadSafeDictionary_2_t6196 *, const MethodInfo*))ThreadSafeDictionary_2_get_IsReadOnly_m42372_gshared)(__this, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool ThreadSafeDictionary_2_Remove_m42374_gshared (ThreadSafeDictionary_2_t6196 * __this, KeyValuePair_2_t1591  ___item, const MethodInfo* method);
#define ThreadSafeDictionary_2_Remove_m42374(__this, ___item, method) (( bool (*) (ThreadSafeDictionary_2_t6196 *, KeyValuePair_2_t1591 , const MethodInfo*))ThreadSafeDictionary_2_Remove_m42374_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::GetEnumerator()
extern "C" Object_t* ThreadSafeDictionary_2_GetEnumerator_m42376_gshared (ThreadSafeDictionary_2_t6196 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_GetEnumerator_m42376(__this, method) (( Object_t* (*) (ThreadSafeDictionary_2_t6196 *, const MethodInfo*))ThreadSafeDictionary_2_GetEnumerator_m42376_gshared)(__this, method)

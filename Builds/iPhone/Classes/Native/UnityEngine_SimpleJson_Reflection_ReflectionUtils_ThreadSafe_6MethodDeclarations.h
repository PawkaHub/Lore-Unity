#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>
struct ThreadSafeDictionary_2_t9714;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1809;
// System.Object
struct Object_t;
// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<System.Object,System.Object>
struct ThreadSafeDictionaryValueFactory_2_t9712;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>[]
struct KeyValuePair_2U5BU5D_t7165;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerator_1_t7163;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_13.h"

// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::.ctor(SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<TKey,TValue>)
extern "C" void ThreadSafeDictionary_2__ctor_m71385_gshared (ThreadSafeDictionary_2_t9714 * __this, ThreadSafeDictionaryValueFactory_2_t9712 * ___valueFactory, const MethodInfo* method);
#define ThreadSafeDictionary_2__ctor_m71385(__this, ___valueFactory, method) (( void (*) (ThreadSafeDictionary_2_t9714 *, ThreadSafeDictionaryValueFactory_2_t9712 *, const MethodInfo*))ThreadSafeDictionary_2__ctor_m71385_gshared)(__this, ___valueFactory, method)
// System.Collections.IEnumerator SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * ThreadSafeDictionary_2_System_Collections_IEnumerable_GetEnumerator_m71387_gshared (ThreadSafeDictionary_2_t9714 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_System_Collections_IEnumerable_GetEnumerator_m71387(__this, method) (( Object_t * (*) (ThreadSafeDictionary_2_t9714 *, const MethodInfo*))ThreadSafeDictionary_2_System_Collections_IEnumerable_GetEnumerator_m71387_gshared)(__this, method)
// TValue SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Get(TKey)
extern "C" Object_t * ThreadSafeDictionary_2_Get_m71389_gshared (ThreadSafeDictionary_2_t9714 * __this, Object_t * ___key, const MethodInfo* method);
#define ThreadSafeDictionary_2_Get_m71389(__this, ___key, method) (( Object_t * (*) (ThreadSafeDictionary_2_t9714 *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_Get_m71389_gshared)(__this, ___key, method)
// TValue SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::AddValue(TKey)
extern "C" Object_t * ThreadSafeDictionary_2_AddValue_m71391_gshared (ThreadSafeDictionary_2_t9714 * __this, Object_t * ___key, const MethodInfo* method);
#define ThreadSafeDictionary_2_AddValue_m71391(__this, ___key, method) (( Object_t * (*) (ThreadSafeDictionary_2_t9714 *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_AddValue_m71391_gshared)(__this, ___key, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Add(TKey,TValue)
extern "C" void ThreadSafeDictionary_2_Add_m71393_gshared (ThreadSafeDictionary_2_t9714 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define ThreadSafeDictionary_2_Add_m71393(__this, ___key, ___value, method) (( void (*) (ThreadSafeDictionary_2_t9714 *, Object_t *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_Add_m71393_gshared)(__this, ___key, ___value, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::ContainsKey(TKey)
extern "C" bool ThreadSafeDictionary_2_ContainsKey_m71395_gshared (ThreadSafeDictionary_2_t9714 * __this, Object_t * ___key, const MethodInfo* method);
#define ThreadSafeDictionary_2_ContainsKey_m71395(__this, ___key, method) (( bool (*) (ThreadSafeDictionary_2_t9714 *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_ContainsKey_m71395_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<TKey> SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_Keys()
extern "C" Object_t* ThreadSafeDictionary_2_get_Keys_m71397_gshared (ThreadSafeDictionary_2_t9714 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_get_Keys_m71397(__this, method) (( Object_t* (*) (ThreadSafeDictionary_2_t9714 *, const MethodInfo*))ThreadSafeDictionary_2_get_Keys_m71397_gshared)(__this, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Remove(TKey)
extern "C" bool ThreadSafeDictionary_2_Remove_m71399_gshared (ThreadSafeDictionary_2_t9714 * __this, Object_t * ___key, const MethodInfo* method);
#define ThreadSafeDictionary_2_Remove_m71399(__this, ___key, method) (( bool (*) (ThreadSafeDictionary_2_t9714 *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_Remove_m71399_gshared)(__this, ___key, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool ThreadSafeDictionary_2_TryGetValue_m71401_gshared (ThreadSafeDictionary_2_t9714 * __this, Object_t * ___key, Object_t ** ___value, const MethodInfo* method);
#define ThreadSafeDictionary_2_TryGetValue_m71401(__this, ___key, ___value, method) (( bool (*) (ThreadSafeDictionary_2_t9714 *, Object_t *, Object_t **, const MethodInfo*))ThreadSafeDictionary_2_TryGetValue_m71401_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TValue> SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_Values()
extern "C" Object_t* ThreadSafeDictionary_2_get_Values_m71403_gshared (ThreadSafeDictionary_2_t9714 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_get_Values_m71403(__this, method) (( Object_t* (*) (ThreadSafeDictionary_2_t9714 *, const MethodInfo*))ThreadSafeDictionary_2_get_Values_m71403_gshared)(__this, method)
// TValue SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_Item(TKey)
extern "C" Object_t * ThreadSafeDictionary_2_get_Item_m71405_gshared (ThreadSafeDictionary_2_t9714 * __this, Object_t * ___key, const MethodInfo* method);
#define ThreadSafeDictionary_2_get_Item_m71405(__this, ___key, method) (( Object_t * (*) (ThreadSafeDictionary_2_t9714 *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_get_Item_m71405_gshared)(__this, ___key, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
extern "C" void ThreadSafeDictionary_2_set_Item_m71407_gshared (ThreadSafeDictionary_2_t9714 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define ThreadSafeDictionary_2_set_Item_m71407(__this, ___key, ___value, method) (( void (*) (ThreadSafeDictionary_2_t9714 *, Object_t *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_set_Item_m71407_gshared)(__this, ___key, ___value, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void ThreadSafeDictionary_2_Add_m71409_gshared (ThreadSafeDictionary_2_t9714 * __this, KeyValuePair_2_t2037  ___item, const MethodInfo* method);
#define ThreadSafeDictionary_2_Add_m71409(__this, ___item, method) (( void (*) (ThreadSafeDictionary_2_t9714 *, KeyValuePair_2_t2037 , const MethodInfo*))ThreadSafeDictionary_2_Add_m71409_gshared)(__this, ___item, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Clear()
extern "C" void ThreadSafeDictionary_2_Clear_m71411_gshared (ThreadSafeDictionary_2_t9714 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_Clear_m71411(__this, method) (( void (*) (ThreadSafeDictionary_2_t9714 *, const MethodInfo*))ThreadSafeDictionary_2_Clear_m71411_gshared)(__this, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool ThreadSafeDictionary_2_Contains_m71413_gshared (ThreadSafeDictionary_2_t9714 * __this, KeyValuePair_2_t2037  ___item, const MethodInfo* method);
#define ThreadSafeDictionary_2_Contains_m71413(__this, ___item, method) (( bool (*) (ThreadSafeDictionary_2_t9714 *, KeyValuePair_2_t2037 , const MethodInfo*))ThreadSafeDictionary_2_Contains_m71413_gshared)(__this, ___item, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void ThreadSafeDictionary_2_CopyTo_m71415_gshared (ThreadSafeDictionary_2_t9714 * __this, KeyValuePair_2U5BU5D_t7165* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define ThreadSafeDictionary_2_CopyTo_m71415(__this, ___array, ___arrayIndex, method) (( void (*) (ThreadSafeDictionary_2_t9714 *, KeyValuePair_2U5BU5D_t7165*, int32_t, const MethodInfo*))ThreadSafeDictionary_2_CopyTo_m71415_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_Count()
extern "C" int32_t ThreadSafeDictionary_2_get_Count_m71417_gshared (ThreadSafeDictionary_2_t9714 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_get_Count_m71417(__this, method) (( int32_t (*) (ThreadSafeDictionary_2_t9714 *, const MethodInfo*))ThreadSafeDictionary_2_get_Count_m71417_gshared)(__this, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_IsReadOnly()
extern "C" bool ThreadSafeDictionary_2_get_IsReadOnly_m71419_gshared (ThreadSafeDictionary_2_t9714 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_get_IsReadOnly_m71419(__this, method) (( bool (*) (ThreadSafeDictionary_2_t9714 *, const MethodInfo*))ThreadSafeDictionary_2_get_IsReadOnly_m71419_gshared)(__this, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool ThreadSafeDictionary_2_Remove_m71421_gshared (ThreadSafeDictionary_2_t9714 * __this, KeyValuePair_2_t2037  ___item, const MethodInfo* method);
#define ThreadSafeDictionary_2_Remove_m71421(__this, ___item, method) (( bool (*) (ThreadSafeDictionary_2_t9714 *, KeyValuePair_2_t2037 , const MethodInfo*))ThreadSafeDictionary_2_Remove_m71421_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::GetEnumerator()
extern "C" Object_t* ThreadSafeDictionary_2_GetEnumerator_m71423_gshared (ThreadSafeDictionary_2_t9714 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_GetEnumerator_m71423(__this, method) (( Object_t* (*) (ThreadSafeDictionary_2_t9714 *, const MethodInfo*))ThreadSafeDictionary_2_GetEnumerator_m71423_gshared)(__this, method)

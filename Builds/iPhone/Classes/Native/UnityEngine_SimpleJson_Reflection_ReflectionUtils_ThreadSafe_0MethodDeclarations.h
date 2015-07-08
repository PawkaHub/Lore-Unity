#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>
struct ThreadSafeDictionary_2_t4922;
// System.Collections.Generic.ICollection`1<System.Type>
struct ICollection_1_t10037;
// System.Collections.Generic.ICollection`1<SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>
struct ICollection_1_t10985;
// SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate
struct ConstructorDelegate_t4825;
// System.Type
struct Type_t;
// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>
struct ThreadSafeDictionaryValueFactory_2_t4921;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>[]
struct KeyValuePair_2U5BU5D_t10986;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>>
struct IEnumerator_1_t10987;
// System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_136.h"

// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>::.ctor(SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<TKey,TValue>)
// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_ThreadSafe_6MethodDeclarations.h"
#define ThreadSafeDictionary_2__ctor_m18037(__this, ___valueFactory, method) (( void (*) (ThreadSafeDictionary_2_t4922 *, ThreadSafeDictionaryValueFactory_2_t4921 *, const MethodInfo*))ThreadSafeDictionary_2__ctor_m71385_gshared)(__this, ___valueFactory, method)
// System.Collections.IEnumerator SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>::System.Collections.IEnumerable.GetEnumerator()
#define ThreadSafeDictionary_2_System_Collections_IEnumerable_GetEnumerator_m71386(__this, method) (( Object_t * (*) (ThreadSafeDictionary_2_t4922 *, const MethodInfo*))ThreadSafeDictionary_2_System_Collections_IEnumerable_GetEnumerator_m71387_gshared)(__this, method)
// TValue SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>::Get(TKey)
#define ThreadSafeDictionary_2_Get_m71388(__this, ___key, method) (( ConstructorDelegate_t4825 * (*) (ThreadSafeDictionary_2_t4922 *, Type_t *, const MethodInfo*))ThreadSafeDictionary_2_Get_m71389_gshared)(__this, ___key, method)
// TValue SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>::AddValue(TKey)
#define ThreadSafeDictionary_2_AddValue_m71390(__this, ___key, method) (( ConstructorDelegate_t4825 * (*) (ThreadSafeDictionary_2_t4922 *, Type_t *, const MethodInfo*))ThreadSafeDictionary_2_AddValue_m71391_gshared)(__this, ___key, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>::Add(TKey,TValue)
#define ThreadSafeDictionary_2_Add_m71392(__this, ___key, ___value, method) (( void (*) (ThreadSafeDictionary_2_t4922 *, Type_t *, ConstructorDelegate_t4825 *, const MethodInfo*))ThreadSafeDictionary_2_Add_m71393_gshared)(__this, ___key, ___value, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>::ContainsKey(TKey)
#define ThreadSafeDictionary_2_ContainsKey_m71394(__this, ___key, method) (( bool (*) (ThreadSafeDictionary_2_t4922 *, Type_t *, const MethodInfo*))ThreadSafeDictionary_2_ContainsKey_m71395_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<TKey> SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>::get_Keys()
#define ThreadSafeDictionary_2_get_Keys_m71396(__this, method) (( Object_t* (*) (ThreadSafeDictionary_2_t4922 *, const MethodInfo*))ThreadSafeDictionary_2_get_Keys_m71397_gshared)(__this, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>::Remove(TKey)
#define ThreadSafeDictionary_2_Remove_m71398(__this, ___key, method) (( bool (*) (ThreadSafeDictionary_2_t4922 *, Type_t *, const MethodInfo*))ThreadSafeDictionary_2_Remove_m71399_gshared)(__this, ___key, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>::TryGetValue(TKey,TValue&)
#define ThreadSafeDictionary_2_TryGetValue_m71400(__this, ___key, ___value, method) (( bool (*) (ThreadSafeDictionary_2_t4922 *, Type_t *, ConstructorDelegate_t4825 **, const MethodInfo*))ThreadSafeDictionary_2_TryGetValue_m71401_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TValue> SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>::get_Values()
#define ThreadSafeDictionary_2_get_Values_m71402(__this, method) (( Object_t* (*) (ThreadSafeDictionary_2_t4922 *, const MethodInfo*))ThreadSafeDictionary_2_get_Values_m71403_gshared)(__this, method)
// TValue SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>::get_Item(TKey)
#define ThreadSafeDictionary_2_get_Item_m71404(__this, ___key, method) (( ConstructorDelegate_t4825 * (*) (ThreadSafeDictionary_2_t4922 *, Type_t *, const MethodInfo*))ThreadSafeDictionary_2_get_Item_m71405_gshared)(__this, ___key, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>::set_Item(TKey,TValue)
#define ThreadSafeDictionary_2_set_Item_m71406(__this, ___key, ___value, method) (( void (*) (ThreadSafeDictionary_2_t4922 *, Type_t *, ConstructorDelegate_t4825 *, const MethodInfo*))ThreadSafeDictionary_2_set_Item_m71407_gshared)(__this, ___key, ___value, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>::Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define ThreadSafeDictionary_2_Add_m71408(__this, ___item, method) (( void (*) (ThreadSafeDictionary_2_t4922 *, KeyValuePair_2_t9717 , const MethodInfo*))ThreadSafeDictionary_2_Add_m71409_gshared)(__this, ___item, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>::Clear()
#define ThreadSafeDictionary_2_Clear_m71410(__this, method) (( void (*) (ThreadSafeDictionary_2_t4922 *, const MethodInfo*))ThreadSafeDictionary_2_Clear_m71411_gshared)(__this, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>::Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define ThreadSafeDictionary_2_Contains_m71412(__this, ___item, method) (( bool (*) (ThreadSafeDictionary_2_t4922 *, KeyValuePair_2_t9717 , const MethodInfo*))ThreadSafeDictionary_2_Contains_m71413_gshared)(__this, ___item, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define ThreadSafeDictionary_2_CopyTo_m71414(__this, ___array, ___arrayIndex, method) (( void (*) (ThreadSafeDictionary_2_t4922 *, KeyValuePair_2U5BU5D_t10986*, int32_t, const MethodInfo*))ThreadSafeDictionary_2_CopyTo_m71415_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>::get_Count()
#define ThreadSafeDictionary_2_get_Count_m71416(__this, method) (( int32_t (*) (ThreadSafeDictionary_2_t4922 *, const MethodInfo*))ThreadSafeDictionary_2_get_Count_m71417_gshared)(__this, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>::get_IsReadOnly()
#define ThreadSafeDictionary_2_get_IsReadOnly_m71418(__this, method) (( bool (*) (ThreadSafeDictionary_2_t4922 *, const MethodInfo*))ThreadSafeDictionary_2_get_IsReadOnly_m71419_gshared)(__this, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>::Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define ThreadSafeDictionary_2_Remove_m71420(__this, ___item, method) (( bool (*) (ThreadSafeDictionary_2_t4922 *, KeyValuePair_2_t9717 , const MethodInfo*))ThreadSafeDictionary_2_Remove_m71421_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>::GetEnumerator()
#define ThreadSafeDictionary_2_GetEnumerator_m71422(__this, method) (( Object_t* (*) (ThreadSafeDictionary_2_t4922 *, const MethodInfo*))ThreadSafeDictionary_2_GetEnumerator_m71423_gshared)(__this, method)

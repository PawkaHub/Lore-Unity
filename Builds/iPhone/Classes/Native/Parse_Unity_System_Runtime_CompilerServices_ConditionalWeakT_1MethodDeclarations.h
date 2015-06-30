#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Object>
struct ConditionalWeakTable_2_t5524;
// System.Object
struct Object_t;
// System.Runtime.CompilerServices.ConditionalWeakTable`2/CreateValueCallback<System.Object,System.Object>
struct CreateValueCallback_t5538;

// System.Void System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Object>::.ctor()
extern "C" void ConditionalWeakTable_2__ctor_m32790_gshared (ConditionalWeakTable_2_t5524 * __this, const MethodInfo* method);
#define ConditionalWeakTable_2__ctor_m32790(__this, method) (( void (*) (ConditionalWeakTable_2_t5524 *, const MethodInfo*))ConditionalWeakTable_2__ctor_m32790_gshared)(__this, method)
// System.Void System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Object>::CleanUp()
extern "C" void ConditionalWeakTable_2_CleanUp_m32791_gshared (ConditionalWeakTable_2_t5524 * __this, const MethodInfo* method);
#define ConditionalWeakTable_2_CleanUp_m32791(__this, method) (( void (*) (ConditionalWeakTable_2_t5524 *, const MethodInfo*))ConditionalWeakTable_2_CleanUp_m32791_gshared)(__this, method)
// TValue System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Object>::GetValue(TKey,System.Runtime.CompilerServices.ConditionalWeakTable`2/CreateValueCallback<TKey,TValue>)
extern "C" Object_t * ConditionalWeakTable_2_GetValue_m32792_gshared (ConditionalWeakTable_2_t5524 * __this, Object_t * ___key, CreateValueCallback_t5538 * ___createValueCallback, const MethodInfo* method);
#define ConditionalWeakTable_2_GetValue_m32792(__this, ___key, ___createValueCallback, method) (( Object_t * (*) (ConditionalWeakTable_2_t5524 *, Object_t *, CreateValueCallback_t5538 *, const MethodInfo*))ConditionalWeakTable_2_GetValue_m32792_gshared)(__this, ___key, ___createValueCallback, method)

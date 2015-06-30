#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.LinkedList`1/Enumerator<System.Object>
struct Enumerator_t5643;
// System.Object
struct Object_t;
// System.Collections.Generic.LinkedList`1<System.Object>
struct LinkedList_1_t2611;

// System.Void System.Collections.Generic.LinkedList`1/Enumerator<System.Object>::.ctor(System.Collections.Generic.LinkedList`1<T>)
extern "C" void Enumerator__ctor_m33942_gshared (Enumerator_t5643 * __this, LinkedList_1_t2611 * ___parent, const MethodInfo* method);
#define Enumerator__ctor_m33942(__this, ___parent, method) (( void (*) (Enumerator_t5643 *, LinkedList_1_t2611 *, const MethodInfo*))Enumerator__ctor_m33942_gshared)(__this, ___parent, method)
// System.Object System.Collections.Generic.LinkedList`1/Enumerator<System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m33943_gshared (Enumerator_t5643 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m33943(__this, method) (( Object_t * (*) (Enumerator_t5643 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m33943_gshared)(__this, method)
// T System.Collections.Generic.LinkedList`1/Enumerator<System.Object>::get_Current()
extern "C" Object_t * Enumerator_get_Current_m33944_gshared (Enumerator_t5643 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m33944(__this, method) (( Object_t * (*) (Enumerator_t5643 *, const MethodInfo*))Enumerator_get_Current_m33944_gshared)(__this, method)
// System.Boolean System.Collections.Generic.LinkedList`1/Enumerator<System.Object>::MoveNext()
extern "C" bool Enumerator_MoveNext_m33945_gshared (Enumerator_t5643 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m33945(__this, method) (( bool (*) (Enumerator_t5643 *, const MethodInfo*))Enumerator_MoveNext_m33945_gshared)(__this, method)
// System.Void System.Collections.Generic.LinkedList`1/Enumerator<System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m33946_gshared (Enumerator_t5643 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m33946(__this, method) (( void (*) (Enumerator_t5643 *, const MethodInfo*))Enumerator_Dispose_m33946_gshared)(__this, method)

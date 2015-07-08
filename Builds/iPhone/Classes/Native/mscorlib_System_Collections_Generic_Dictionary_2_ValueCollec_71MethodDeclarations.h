#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.DateTime>
struct Enumerator_t8174;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>
struct Dictionary_2_t8168;
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.DateTime>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m52286_gshared (Enumerator_t8174 * __this, Dictionary_2_t8168 * ___host, const MethodInfo* method);
#define Enumerator__ctor_m52286(__this, ___host, method) (( void (*) (Enumerator_t8174 *, Dictionary_2_t8168 *, const MethodInfo*))Enumerator__ctor_m52286_gshared)(__this, ___host, method)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.DateTime>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m52287_gshared (Enumerator_t8174 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m52287(__this, method) (( Object_t * (*) (Enumerator_t8174 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m52287_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.DateTime>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m52288_gshared (Enumerator_t8174 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m52288(__this, method) (( void (*) (Enumerator_t8174 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m52288_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.DateTime>::Dispose()
extern "C" void Enumerator_Dispose_m52289_gshared (Enumerator_t8174 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m52289(__this, method) (( void (*) (Enumerator_t8174 *, const MethodInfo*))Enumerator_Dispose_m52289_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.DateTime>::MoveNext()
extern "C" bool Enumerator_MoveNext_m52290_gshared (Enumerator_t8174 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m52290(__this, method) (( bool (*) (Enumerator_t8174 *, const MethodInfo*))Enumerator_MoveNext_m52290_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.DateTime>::get_Current()
extern "C" DateTime_t1953  Enumerator_get_Current_m52291_gshared (Enumerator_t8174 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m52291(__this, method) (( DateTime_t1953  (*) (Enumerator_t8174 *, const MethodInfo*))Enumerator_get_Current_m52291_gshared)(__this, method)

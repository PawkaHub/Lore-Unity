#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.DateTime>
struct Enumerator_t7892;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>
struct Dictionary_2_t7886;
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.DateTime>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m51371_gshared (Enumerator_t7892 * __this, Dictionary_2_t7886 * ___host, const MethodInfo* method);
#define Enumerator__ctor_m51371(__this, ___host, method) (( void (*) (Enumerator_t7892 *, Dictionary_2_t7886 *, const MethodInfo*))Enumerator__ctor_m51371_gshared)(__this, ___host, method)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.DateTime>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m51372_gshared (Enumerator_t7892 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m51372(__this, method) (( Object_t * (*) (Enumerator_t7892 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m51372_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.DateTime>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m51373_gshared (Enumerator_t7892 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m51373(__this, method) (( void (*) (Enumerator_t7892 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m51373_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.DateTime>::Dispose()
extern "C" void Enumerator_Dispose_m51374_gshared (Enumerator_t7892 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m51374(__this, method) (( void (*) (Enumerator_t7892 *, const MethodInfo*))Enumerator_Dispose_m51374_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.DateTime>::MoveNext()
extern "C" bool Enumerator_MoveNext_m51375_gshared (Enumerator_t7892 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m51375(__this, method) (( bool (*) (Enumerator_t7892 *, const MethodInfo*))Enumerator_MoveNext_m51375_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.DateTime>::get_Current()
extern "C" DateTime_t1705  Enumerator_get_Current_m51376_gshared (Enumerator_t7892 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m51376(__this, method) (( DateTime_t1705  (*) (Enumerator_t7892 *, const MethodInfo*))Enumerator_get_Current_m51376_gshared)(__this, method)

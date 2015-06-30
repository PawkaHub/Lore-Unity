#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.TimeZoneInfo/TimeType>
struct Enumerator_t6324;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>
struct Dictionary_2_t3231;
// System.TimeZoneInfo/TimeType
#include "System_Core_System_TimeZoneInfo_TimeType.h"

// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.TimeZoneInfo/TimeType>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m44426_gshared (Enumerator_t6324 * __this, Dictionary_2_t3231 * ___host, const MethodInfo* method);
#define Enumerator__ctor_m44426(__this, ___host, method) (( void (*) (Enumerator_t6324 *, Dictionary_2_t3231 *, const MethodInfo*))Enumerator__ctor_m44426_gshared)(__this, ___host, method)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.TimeZoneInfo/TimeType>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m44427_gshared (Enumerator_t6324 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m44427(__this, method) (( Object_t * (*) (Enumerator_t6324 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m44427_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.TimeZoneInfo/TimeType>::Dispose()
extern "C" void Enumerator_Dispose_m44428_gshared (Enumerator_t6324 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m44428(__this, method) (( void (*) (Enumerator_t6324 *, const MethodInfo*))Enumerator_Dispose_m44428_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.TimeZoneInfo/TimeType>::MoveNext()
extern "C" bool Enumerator_MoveNext_m44429_gshared (Enumerator_t6324 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m44429(__this, method) (( bool (*) (Enumerator_t6324 *, const MethodInfo*))Enumerator_MoveNext_m44429_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.TimeZoneInfo/TimeType>::get_Current()
extern "C" TimeType_t3222  Enumerator_get_Current_m44430_gshared (Enumerator_t6324 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m44430(__this, method) (( TimeType_t3222  (*) (Enumerator_t6324 *, const MethodInfo*))Enumerator_get_Current_m44430_gshared)(__this, method)

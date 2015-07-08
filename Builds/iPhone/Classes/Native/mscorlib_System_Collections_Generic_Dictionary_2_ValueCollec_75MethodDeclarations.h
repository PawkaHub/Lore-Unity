#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,Parse.ParseGeoPoint>
struct Enumerator_t8201;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,Parse.ParseGeoPoint>
struct Dictionary_2_t8195;
// Parse.ParseGeoPoint
#include "Parse_Unity_Parse_ParseGeoPoint.h"

// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,Parse.ParseGeoPoint>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m52649_gshared (Enumerator_t8201 * __this, Dictionary_2_t8195 * ___host, const MethodInfo* method);
#define Enumerator__ctor_m52649(__this, ___host, method) (( void (*) (Enumerator_t8201 *, Dictionary_2_t8195 *, const MethodInfo*))Enumerator__ctor_m52649_gshared)(__this, ___host, method)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,Parse.ParseGeoPoint>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m52650_gshared (Enumerator_t8201 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m52650(__this, method) (( Object_t * (*) (Enumerator_t8201 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m52650_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,Parse.ParseGeoPoint>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m52651_gshared (Enumerator_t8201 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m52651(__this, method) (( void (*) (Enumerator_t8201 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m52651_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,Parse.ParseGeoPoint>::Dispose()
extern "C" void Enumerator_Dispose_m52652_gshared (Enumerator_t8201 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m52652(__this, method) (( void (*) (Enumerator_t8201 *, const MethodInfo*))Enumerator_Dispose_m52652_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,Parse.ParseGeoPoint>::MoveNext()
extern "C" bool Enumerator_MoveNext_m52653_gshared (Enumerator_t8201 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m52653(__this, method) (( bool (*) (Enumerator_t8201 *, const MethodInfo*))Enumerator_MoveNext_m52653_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,Parse.ParseGeoPoint>::get_Current()
extern "C" ParseGeoPoint_t935  Enumerator_get_Current_m52654_gshared (Enumerator_t8201 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m52654(__this, method) (( ParseGeoPoint_t935  (*) (Enumerator_t8201 *, const MethodInfo*))Enumerator_get_Current_m52654_gshared)(__this, method)

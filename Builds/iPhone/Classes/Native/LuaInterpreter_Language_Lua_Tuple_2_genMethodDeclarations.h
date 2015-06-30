#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Language.Lua.Tuple`2<System.Double,System.Double>
struct Tuple_2_t2662;
// System.Object
struct Object_t;

// System.Void Language.Lua.Tuple`2<System.Double,System.Double>::.ctor(T1,T2)
extern "C" void Tuple_2__ctor_m40092_gshared (Tuple_2_t2662 * __this, double ___item1, double ___item2, const MethodInfo* method);
#define Tuple_2__ctor_m40092(__this, ___item1, ___item2, method) (( void (*) (Tuple_2_t2662 *, double, double, const MethodInfo*))Tuple_2__ctor_m40092_gshared)(__this, ___item1, ___item2, method)
// T1 Language.Lua.Tuple`2<System.Double,System.Double>::get_Item1()
extern "C" double Tuple_2_get_Item1_m12181_gshared (Tuple_2_t2662 * __this, const MethodInfo* method);
#define Tuple_2_get_Item1_m12181(__this, method) (( double (*) (Tuple_2_t2662 *, const MethodInfo*))Tuple_2_get_Item1_m12181_gshared)(__this, method)
// T2 Language.Lua.Tuple`2<System.Double,System.Double>::get_Item2()
extern "C" double Tuple_2_get_Item2_m12182_gshared (Tuple_2_t2662 * __this, const MethodInfo* method);
#define Tuple_2_get_Item2_m12182(__this, method) (( double (*) (Tuple_2_t2662 *, const MethodInfo*))Tuple_2_get_Item2_m12182_gshared)(__this, method)
// System.Boolean Language.Lua.Tuple`2<System.Double,System.Double>::Equals(System.Object)
extern "C" bool Tuple_2_Equals_m40093_gshared (Tuple_2_t2662 * __this, Object_t * ___o, const MethodInfo* method);
#define Tuple_2_Equals_m40093(__this, ___o, method) (( bool (*) (Tuple_2_t2662 *, Object_t *, const MethodInfo*))Tuple_2_Equals_m40093_gshared)(__this, ___o, method)
// System.Int32 Language.Lua.Tuple`2<System.Double,System.Double>::GetHashCode()
extern "C" int32_t Tuple_2_GetHashCode_m40094_gshared (Tuple_2_t2662 * __this, const MethodInfo* method);
#define Tuple_2_GetHashCode_m40094(__this, method) (( int32_t (*) (Tuple_2_t2662 *, const MethodInfo*))Tuple_2_GetHashCode_m40094_gshared)(__this, method)
// System.Boolean Language.Lua.Tuple`2<System.Double,System.Double>::op_Equality(Language.Lua.Tuple`2<T1,T2>,Language.Lua.Tuple`2<T1,T2>)
extern "C" bool Tuple_2_op_Equality_m40095_gshared (Object_t * __this /* static, unused */, Tuple_2_t2662 * ___a, Tuple_2_t2662 * ___b, const MethodInfo* method);
#define Tuple_2_op_Equality_m40095(__this /* static, unused */, ___a, ___b, method) (( bool (*) (Object_t * /* static, unused */, Tuple_2_t2662 *, Tuple_2_t2662 *, const MethodInfo*))Tuple_2_op_Equality_m40095_gshared)(__this /* static, unused */, ___a, ___b, method)
// System.Boolean Language.Lua.Tuple`2<System.Double,System.Double>::op_Inequality(Language.Lua.Tuple`2<T1,T2>,Language.Lua.Tuple`2<T1,T2>)
extern "C" bool Tuple_2_op_Inequality_m40096_gshared (Object_t * __this /* static, unused */, Tuple_2_t2662 * ___a, Tuple_2_t2662 * ___b, const MethodInfo* method);
#define Tuple_2_op_Inequality_m40096(__this /* static, unused */, ___a, ___b, method) (( bool (*) (Object_t * /* static, unused */, Tuple_2_t2662 *, Tuple_2_t2662 *, const MethodInfo*))Tuple_2_op_Inequality_m40096_gshared)(__this /* static, unused */, ___a, ___b, method)

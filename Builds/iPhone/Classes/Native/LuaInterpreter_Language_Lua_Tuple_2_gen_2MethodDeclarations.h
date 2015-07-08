#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Language.Lua.Tuple`2<System.Int32,System.Object>
struct Tuple_2_t9543;
// System.Object
struct Object_t;

// System.Void Language.Lua.Tuple`2<System.Int32,System.Object>::.ctor(T1,T2)
extern "C" void Tuple_2__ctor_m68945_gshared (Tuple_2_t9543 * __this, int32_t ___item1, Object_t * ___item2, const MethodInfo* method);
#define Tuple_2__ctor_m68945(__this, ___item1, ___item2, method) (( void (*) (Tuple_2_t9543 *, int32_t, Object_t *, const MethodInfo*))Tuple_2__ctor_m68945_gshared)(__this, ___item1, ___item2, method)
// T1 Language.Lua.Tuple`2<System.Int32,System.Object>::get_Item1()
extern "C" int32_t Tuple_2_get_Item1_m68946_gshared (Tuple_2_t9543 * __this, const MethodInfo* method);
#define Tuple_2_get_Item1_m68946(__this, method) (( int32_t (*) (Tuple_2_t9543 *, const MethodInfo*))Tuple_2_get_Item1_m68946_gshared)(__this, method)
// T2 Language.Lua.Tuple`2<System.Int32,System.Object>::get_Item2()
extern "C" Object_t * Tuple_2_get_Item2_m68947_gshared (Tuple_2_t9543 * __this, const MethodInfo* method);
#define Tuple_2_get_Item2_m68947(__this, method) (( Object_t * (*) (Tuple_2_t9543 *, const MethodInfo*))Tuple_2_get_Item2_m68947_gshared)(__this, method)
// System.Boolean Language.Lua.Tuple`2<System.Int32,System.Object>::Equals(System.Object)
extern "C" bool Tuple_2_Equals_m68949_gshared (Tuple_2_t9543 * __this, Object_t * ___o, const MethodInfo* method);
#define Tuple_2_Equals_m68949(__this, ___o, method) (( bool (*) (Tuple_2_t9543 *, Object_t *, const MethodInfo*))Tuple_2_Equals_m68949_gshared)(__this, ___o, method)
// System.Int32 Language.Lua.Tuple`2<System.Int32,System.Object>::GetHashCode()
extern "C" int32_t Tuple_2_GetHashCode_m68951_gshared (Tuple_2_t9543 * __this, const MethodInfo* method);
#define Tuple_2_GetHashCode_m68951(__this, method) (( int32_t (*) (Tuple_2_t9543 *, const MethodInfo*))Tuple_2_GetHashCode_m68951_gshared)(__this, method)
// System.Boolean Language.Lua.Tuple`2<System.Int32,System.Object>::op_Equality(Language.Lua.Tuple`2<T1,T2>,Language.Lua.Tuple`2<T1,T2>)
extern "C" bool Tuple_2_op_Equality_m68953_gshared (Object_t * __this /* static, unused */, Tuple_2_t9543 * ___a, Tuple_2_t9543 * ___b, const MethodInfo* method);
#define Tuple_2_op_Equality_m68953(__this /* static, unused */, ___a, ___b, method) (( bool (*) (Object_t * /* static, unused */, Tuple_2_t9543 *, Tuple_2_t9543 *, const MethodInfo*))Tuple_2_op_Equality_m68953_gshared)(__this /* static, unused */, ___a, ___b, method)
// System.Boolean Language.Lua.Tuple`2<System.Int32,System.Object>::op_Inequality(Language.Lua.Tuple`2<T1,T2>,Language.Lua.Tuple`2<T1,T2>)
extern "C" bool Tuple_2_op_Inequality_m68955_gshared (Object_t * __this /* static, unused */, Tuple_2_t9543 * ___a, Tuple_2_t9543 * ___b, const MethodInfo* method);
#define Tuple_2_op_Inequality_m68955(__this /* static, unused */, ___a, ___b, method) (( bool (*) (Object_t * /* static, unused */, Tuple_2_t9543 *, Tuple_2_t9543 *, const MethodInfo*))Tuple_2_op_Inequality_m68955_gshared)(__this /* static, unused */, ___a, ___b, method)

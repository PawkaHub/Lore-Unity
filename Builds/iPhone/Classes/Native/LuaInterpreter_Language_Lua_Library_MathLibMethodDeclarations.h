#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Language.Lua.Library.MathLib
struct MathLib_t3799;
// Language.Lua.LuaTable
struct LuaTable_t1336;
// Language.Lua.LuaValue
struct LuaValue_t1334;
// Language.Lua.LuaValue[]
struct LuaValueU5BU5D_t3808;
// Language.Lua.LuaNumber
struct LuaNumber_t1657;
// Language.Lua.Tuple`2<System.Double,System.Double>
struct Tuple_2_t3829;

// System.Void Language.Lua.Library.MathLib::.cctor()
extern "C" void MathLib__cctor_m11080 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Language.Lua.Library.MathLib::RegisterModule(Language.Lua.LuaTable)
extern "C" void MathLib_RegisterModule_m11081 (Object_t * __this /* static, unused */, LuaTable_t1336 * ___enviroment, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Language.Lua.Library.MathLib::RegisterFunctions(Language.Lua.LuaTable)
extern "C" void MathLib_RegisterFunctions_m11082 (Object_t * __this /* static, unused */, LuaTable_t1336 * ___module, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.MathLib::abs(Language.Lua.LuaValue[])
extern "C" LuaValue_t1334 * MathLib_abs_m11083 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t3808* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.MathLib::acos(Language.Lua.LuaValue[])
extern "C" LuaValue_t1334 * MathLib_acos_m11084 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t3808* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.MathLib::asin(Language.Lua.LuaValue[])
extern "C" LuaValue_t1334 * MathLib_asin_m11085 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t3808* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.MathLib::atan(Language.Lua.LuaValue[])
extern "C" LuaValue_t1334 * MathLib_atan_m11086 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t3808* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.MathLib::atan2(Language.Lua.LuaValue[])
extern "C" LuaValue_t1334 * MathLib_atan2_m11087 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t3808* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.MathLib::ceil(Language.Lua.LuaValue[])
extern "C" LuaValue_t1334 * MathLib_ceil_m11088 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t3808* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.MathLib::cos(Language.Lua.LuaValue[])
extern "C" LuaValue_t1334 * MathLib_cos_m11089 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t3808* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.MathLib::cosh(Language.Lua.LuaValue[])
extern "C" LuaValue_t1334 * MathLib_cosh_m11090 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t3808* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.MathLib::deg(Language.Lua.LuaValue[])
extern "C" LuaValue_t1334 * MathLib_deg_m11091 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t3808* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.MathLib::exp(Language.Lua.LuaValue[])
extern "C" LuaValue_t1334 * MathLib_exp_m11092 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t3808* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.MathLib::floor(Language.Lua.LuaValue[])
extern "C" LuaValue_t1334 * MathLib_floor_m11093 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t3808* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.MathLib::fmod(Language.Lua.LuaValue[])
extern "C" LuaValue_t1334 * MathLib_fmod_m11094 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t3808* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.MathLib::log(Language.Lua.LuaValue[])
extern "C" LuaValue_t1334 * MathLib_log_m11095 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t3808* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.MathLib::log10(Language.Lua.LuaValue[])
extern "C" LuaValue_t1334 * MathLib_log10_m11096 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t3808* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.MathLib::max(Language.Lua.LuaValue[])
extern "C" LuaValue_t1334 * MathLib_max_m11097 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t3808* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.MathLib::min(Language.Lua.LuaValue[])
extern "C" LuaValue_t1334 * MathLib_min_m11098 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t3808* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.MathLib::modf(Language.Lua.LuaValue[])
extern "C" LuaValue_t1334 * MathLib_modf_m11099 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t3808* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.MathLib::pow(Language.Lua.LuaValue[])
extern "C" LuaValue_t1334 * MathLib_pow_m11100 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t3808* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.MathLib::rad(Language.Lua.LuaValue[])
extern "C" LuaValue_t1334 * MathLib_rad_m11101 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t3808* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.MathLib::random(Language.Lua.LuaValue[])
extern "C" LuaValue_t1334 * MathLib_random_m11102 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t3808* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.MathLib::randomseed(Language.Lua.LuaValue[])
extern "C" LuaValue_t1334 * MathLib_randomseed_m11103 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t3808* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.MathLib::sin(Language.Lua.LuaValue[])
extern "C" LuaValue_t1334 * MathLib_sin_m11104 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t3808* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.MathLib::sinh(Language.Lua.LuaValue[])
extern "C" LuaValue_t1334 * MathLib_sinh_m11105 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t3808* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.MathLib::sqrt(Language.Lua.LuaValue[])
extern "C" LuaValue_t1334 * MathLib_sqrt_m11106 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t3808* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.MathLib::tan(Language.Lua.LuaValue[])
extern "C" LuaValue_t1334 * MathLib_tan_m11107 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t3808* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.MathLib::tanh(Language.Lua.LuaValue[])
extern "C" LuaValue_t1334 * MathLib_tanh_m11108 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t3808* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaNumber Language.Lua.Library.MathLib::CheckArgs(Language.Lua.LuaValue[])
extern "C" LuaNumber_t1657 * MathLib_CheckArgs_m11109 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t3808* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.Tuple`2<System.Double,System.Double> Language.Lua.Library.MathLib::CheckArgs2(Language.Lua.LuaValue[])
extern "C" Tuple_2_t3829 * MathLib_CheckArgs2_m11110 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t3808* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double Language.Lua.Library.MathLib::<max>m__4(Language.Lua.LuaValue)
extern "C" double MathLib_U3CmaxU3Em__4_m11111 (Object_t * __this /* static, unused */, LuaValue_t1334 * ___v, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double Language.Lua.Library.MathLib::<min>m__5(Language.Lua.LuaValue)
extern "C" double MathLib_U3CminU3Em__5_m11112 (Object_t * __this /* static, unused */, LuaValue_t1334 * ___v, const MethodInfo* method) IL2CPP_METHOD_ATTR;

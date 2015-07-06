#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Language.Lua.Library.MathLib
struct MathLib_t3561;
// Language.Lua.LuaTable
struct LuaTable_t1077;
// Language.Lua.LuaValue
struct LuaValue_t1075;
// Language.Lua.LuaValue[]
struct LuaValueU5BU5D_t3570;
// Language.Lua.LuaNumber
struct LuaNumber_t1398;
// Language.Lua.Tuple`2<System.Double,System.Double>
struct Tuple_2_t3591;

// System.Void Language.Lua.Library.MathLib::.cctor()
extern "C" void MathLib__cctor_m10661 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Language.Lua.Library.MathLib::RegisterModule(Language.Lua.LuaTable)
extern "C" void MathLib_RegisterModule_m10662 (Object_t * __this /* static, unused */, LuaTable_t1077 * ___enviroment, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Language.Lua.Library.MathLib::RegisterFunctions(Language.Lua.LuaTable)
extern "C" void MathLib_RegisterFunctions_m10663 (Object_t * __this /* static, unused */, LuaTable_t1077 * ___module, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.MathLib::abs(Language.Lua.LuaValue[])
extern "C" LuaValue_t1075 * MathLib_abs_m10664 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t3570* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.MathLib::acos(Language.Lua.LuaValue[])
extern "C" LuaValue_t1075 * MathLib_acos_m10665 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t3570* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.MathLib::asin(Language.Lua.LuaValue[])
extern "C" LuaValue_t1075 * MathLib_asin_m10666 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t3570* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.MathLib::atan(Language.Lua.LuaValue[])
extern "C" LuaValue_t1075 * MathLib_atan_m10667 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t3570* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.MathLib::atan2(Language.Lua.LuaValue[])
extern "C" LuaValue_t1075 * MathLib_atan2_m10668 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t3570* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.MathLib::ceil(Language.Lua.LuaValue[])
extern "C" LuaValue_t1075 * MathLib_ceil_m10669 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t3570* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.MathLib::cos(Language.Lua.LuaValue[])
extern "C" LuaValue_t1075 * MathLib_cos_m10670 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t3570* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.MathLib::cosh(Language.Lua.LuaValue[])
extern "C" LuaValue_t1075 * MathLib_cosh_m10671 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t3570* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.MathLib::deg(Language.Lua.LuaValue[])
extern "C" LuaValue_t1075 * MathLib_deg_m10672 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t3570* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.MathLib::exp(Language.Lua.LuaValue[])
extern "C" LuaValue_t1075 * MathLib_exp_m10673 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t3570* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.MathLib::floor(Language.Lua.LuaValue[])
extern "C" LuaValue_t1075 * MathLib_floor_m10674 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t3570* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.MathLib::fmod(Language.Lua.LuaValue[])
extern "C" LuaValue_t1075 * MathLib_fmod_m10675 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t3570* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.MathLib::log(Language.Lua.LuaValue[])
extern "C" LuaValue_t1075 * MathLib_log_m10676 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t3570* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.MathLib::log10(Language.Lua.LuaValue[])
extern "C" LuaValue_t1075 * MathLib_log10_m10677 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t3570* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.MathLib::max(Language.Lua.LuaValue[])
extern "C" LuaValue_t1075 * MathLib_max_m10678 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t3570* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.MathLib::min(Language.Lua.LuaValue[])
extern "C" LuaValue_t1075 * MathLib_min_m10679 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t3570* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.MathLib::modf(Language.Lua.LuaValue[])
extern "C" LuaValue_t1075 * MathLib_modf_m10680 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t3570* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.MathLib::pow(Language.Lua.LuaValue[])
extern "C" LuaValue_t1075 * MathLib_pow_m10681 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t3570* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.MathLib::rad(Language.Lua.LuaValue[])
extern "C" LuaValue_t1075 * MathLib_rad_m10682 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t3570* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.MathLib::random(Language.Lua.LuaValue[])
extern "C" LuaValue_t1075 * MathLib_random_m10683 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t3570* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.MathLib::randomseed(Language.Lua.LuaValue[])
extern "C" LuaValue_t1075 * MathLib_randomseed_m10684 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t3570* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.MathLib::sin(Language.Lua.LuaValue[])
extern "C" LuaValue_t1075 * MathLib_sin_m10685 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t3570* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.MathLib::sinh(Language.Lua.LuaValue[])
extern "C" LuaValue_t1075 * MathLib_sinh_m10686 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t3570* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.MathLib::sqrt(Language.Lua.LuaValue[])
extern "C" LuaValue_t1075 * MathLib_sqrt_m10687 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t3570* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.MathLib::tan(Language.Lua.LuaValue[])
extern "C" LuaValue_t1075 * MathLib_tan_m10688 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t3570* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.MathLib::tanh(Language.Lua.LuaValue[])
extern "C" LuaValue_t1075 * MathLib_tanh_m10689 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t3570* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaNumber Language.Lua.Library.MathLib::CheckArgs(Language.Lua.LuaValue[])
extern "C" LuaNumber_t1398 * MathLib_CheckArgs_m10690 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t3570* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.Tuple`2<System.Double,System.Double> Language.Lua.Library.MathLib::CheckArgs2(Language.Lua.LuaValue[])
extern "C" Tuple_2_t3591 * MathLib_CheckArgs2_m10691 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t3570* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double Language.Lua.Library.MathLib::<max>m__4(Language.Lua.LuaValue)
extern "C" double MathLib_U3CmaxU3Em__4_m10692 (Object_t * __this /* static, unused */, LuaValue_t1075 * ___v, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double Language.Lua.Library.MathLib::<min>m__5(Language.Lua.LuaValue)
extern "C" double MathLib_U3CminU3Em__5_m10693 (Object_t * __this /* static, unused */, LuaValue_t1075 * ___v, const MethodInfo* method) IL2CPP_METHOD_ATTR;

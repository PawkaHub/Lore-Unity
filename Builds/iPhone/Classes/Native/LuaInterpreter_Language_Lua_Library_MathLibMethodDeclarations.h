#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Language.Lua.Library.MathLib
struct MathLib_t2631;
// Language.Lua.LuaTable
struct LuaTable_t750;
// Language.Lua.LuaValue
struct LuaValue_t748;
// Language.Lua.LuaValue[]
struct LuaValueU5BU5D_t2640;
// Language.Lua.LuaNumber
struct LuaNumber_t1075;
// Language.Lua.Tuple`2<System.Double,System.Double>
struct Tuple_2_t2662;

// System.Void Language.Lua.Library.MathLib::.cctor()
extern "C" void MathLib__cctor_m11870 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Language.Lua.Library.MathLib::RegisterModule(Language.Lua.LuaTable)
extern "C" void MathLib_RegisterModule_m11871 (Object_t * __this /* static, unused */, LuaTable_t750 * ___enviroment, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Language.Lua.Library.MathLib::RegisterFunctions(Language.Lua.LuaTable)
extern "C" void MathLib_RegisterFunctions_m11872 (Object_t * __this /* static, unused */, LuaTable_t750 * ___module, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.MathLib::abs(Language.Lua.LuaValue[])
extern "C" LuaValue_t748 * MathLib_abs_m11873 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t2640* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.MathLib::acos(Language.Lua.LuaValue[])
extern "C" LuaValue_t748 * MathLib_acos_m11874 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t2640* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.MathLib::asin(Language.Lua.LuaValue[])
extern "C" LuaValue_t748 * MathLib_asin_m11875 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t2640* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.MathLib::atan(Language.Lua.LuaValue[])
extern "C" LuaValue_t748 * MathLib_atan_m11876 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t2640* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.MathLib::atan2(Language.Lua.LuaValue[])
extern "C" LuaValue_t748 * MathLib_atan2_m11877 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t2640* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.MathLib::ceil(Language.Lua.LuaValue[])
extern "C" LuaValue_t748 * MathLib_ceil_m11878 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t2640* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.MathLib::cos(Language.Lua.LuaValue[])
extern "C" LuaValue_t748 * MathLib_cos_m11879 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t2640* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.MathLib::cosh(Language.Lua.LuaValue[])
extern "C" LuaValue_t748 * MathLib_cosh_m11880 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t2640* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.MathLib::deg(Language.Lua.LuaValue[])
extern "C" LuaValue_t748 * MathLib_deg_m11881 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t2640* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.MathLib::exp(Language.Lua.LuaValue[])
extern "C" LuaValue_t748 * MathLib_exp_m11882 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t2640* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.MathLib::floor(Language.Lua.LuaValue[])
extern "C" LuaValue_t748 * MathLib_floor_m11883 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t2640* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.MathLib::fmod(Language.Lua.LuaValue[])
extern "C" LuaValue_t748 * MathLib_fmod_m11884 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t2640* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.MathLib::log(Language.Lua.LuaValue[])
extern "C" LuaValue_t748 * MathLib_log_m11885 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t2640* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.MathLib::log10(Language.Lua.LuaValue[])
extern "C" LuaValue_t748 * MathLib_log10_m11886 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t2640* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.MathLib::max(Language.Lua.LuaValue[])
extern "C" LuaValue_t748 * MathLib_max_m11887 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t2640* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.MathLib::min(Language.Lua.LuaValue[])
extern "C" LuaValue_t748 * MathLib_min_m11888 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t2640* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.MathLib::modf(Language.Lua.LuaValue[])
extern "C" LuaValue_t748 * MathLib_modf_m11889 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t2640* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.MathLib::pow(Language.Lua.LuaValue[])
extern "C" LuaValue_t748 * MathLib_pow_m11890 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t2640* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.MathLib::rad(Language.Lua.LuaValue[])
extern "C" LuaValue_t748 * MathLib_rad_m11891 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t2640* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.MathLib::random(Language.Lua.LuaValue[])
extern "C" LuaValue_t748 * MathLib_random_m11892 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t2640* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.MathLib::randomseed(Language.Lua.LuaValue[])
extern "C" LuaValue_t748 * MathLib_randomseed_m11893 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t2640* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.MathLib::sin(Language.Lua.LuaValue[])
extern "C" LuaValue_t748 * MathLib_sin_m11894 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t2640* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.MathLib::sinh(Language.Lua.LuaValue[])
extern "C" LuaValue_t748 * MathLib_sinh_m11895 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t2640* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.MathLib::sqrt(Language.Lua.LuaValue[])
extern "C" LuaValue_t748 * MathLib_sqrt_m11896 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t2640* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.MathLib::tan(Language.Lua.LuaValue[])
extern "C" LuaValue_t748 * MathLib_tan_m11897 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t2640* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.MathLib::tanh(Language.Lua.LuaValue[])
extern "C" LuaValue_t748 * MathLib_tanh_m11898 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t2640* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaNumber Language.Lua.Library.MathLib::CheckArgs(Language.Lua.LuaValue[])
extern "C" LuaNumber_t1075 * MathLib_CheckArgs_m11899 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t2640* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.Tuple`2<System.Double,System.Double> Language.Lua.Library.MathLib::CheckArgs2(Language.Lua.LuaValue[])
extern "C" Tuple_2_t2662 * MathLib_CheckArgs2_m11900 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t2640* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double Language.Lua.Library.MathLib::<max>m__4(Language.Lua.LuaValue)
extern "C" double MathLib_U3CmaxU3Em__4_m11901 (Object_t * __this /* static, unused */, LuaValue_t748 * ___v, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double Language.Lua.Library.MathLib::<min>m__5(Language.Lua.LuaValue)
extern "C" double MathLib_U3CminU3Em__5_m11902 (Object_t * __this /* static, unused */, LuaValue_t748 * ___v, const MethodInfo* method) IL2CPP_METHOD_ATTR;

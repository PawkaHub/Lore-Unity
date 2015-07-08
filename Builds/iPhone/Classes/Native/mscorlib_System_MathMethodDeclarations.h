#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Math
struct Math_t5636;
// System.Decimal
#include "mscorlib_System_Decimal.h"

// System.Double System.Math::Abs(System.Double)
extern "C" double Math_Abs_m22987 (Object_t * __this /* static, unused */, double ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.Math::Abs(System.Single)
extern "C" float Math_Abs_m22988 (Object_t * __this /* static, unused */, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Math::Abs(System.Int32)
extern "C" int32_t Math_Abs_m22989 (Object_t * __this /* static, unused */, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Math::Abs(System.Int64)
extern "C" int64_t Math_Abs_m22990 (Object_t * __this /* static, unused */, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Math::Ceiling(System.Double)
extern "C" double Math_Ceiling_m22991 (Object_t * __this /* static, unused */, double ___a, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Math::Floor(System.Double)
extern "C" double Math_Floor_m22992 (Object_t * __this /* static, unused */, double ___d, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Math::IEEERemainder(System.Double,System.Double)
extern "C" double Math_IEEERemainder_m11396 (Object_t * __this /* static, unused */, double ___x, double ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Math::Log(System.Double,System.Double)
extern "C" double Math_Log_m18005 (Object_t * __this /* static, unused */, double ___a, double ___newBase, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Math::Max(System.Double,System.Double)
extern "C" double Math_Max_m22993 (Object_t * __this /* static, unused */, double ___val1, double ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Math::Max(System.Int32,System.Int32)
extern "C" int32_t Math_Max_m13294 (Object_t * __this /* static, unused */, int32_t ___val1, int32_t ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Math::Min(System.Double,System.Double)
extern "C" double Math_Min_m9089 (Object_t * __this /* static, unused */, double ___val1, double ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Math::Min(System.Int32,System.Int32)
extern "C" int32_t Math_Min_m11350 (Object_t * __this /* static, unused */, int32_t ___val1, int32_t ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Math::Round(System.Decimal)
extern "C" Decimal_t2021  Math_Round_m22994 (Object_t * __this /* static, unused */, Decimal_t2021  ___d, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Math::Round(System.Double)
extern "C" double Math_Round_m22995 (Object_t * __this /* static, unused */, double ___a, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Math::Sin(System.Double)
extern "C" double Math_Sin_m22996 (Object_t * __this /* static, unused */, double ___a, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Math::Cos(System.Double)
extern "C" double Math_Cos_m22997 (Object_t * __this /* static, unused */, double ___d, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Math::Tan(System.Double)
extern "C" double Math_Tan_m22998 (Object_t * __this /* static, unused */, double ___a, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Math::Sinh(System.Double)
extern "C" double Math_Sinh_m22999 (Object_t * __this /* static, unused */, double ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Math::Cosh(System.Double)
extern "C" double Math_Cosh_m23000 (Object_t * __this /* static, unused */, double ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Math::Tanh(System.Double)
extern "C" double Math_Tanh_m23001 (Object_t * __this /* static, unused */, double ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Math::Acos(System.Double)
extern "C" double Math_Acos_m23002 (Object_t * __this /* static, unused */, double ___d, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Math::Asin(System.Double)
extern "C" double Math_Asin_m23003 (Object_t * __this /* static, unused */, double ___d, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Math::Atan(System.Double)
extern "C" double Math_Atan_m23004 (Object_t * __this /* static, unused */, double ___d, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Math::Atan2(System.Double,System.Double)
extern "C" double Math_Atan2_m23005 (Object_t * __this /* static, unused */, double ___y, double ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Math::Exp(System.Double)
extern "C" double Math_Exp_m23006 (Object_t * __this /* static, unused */, double ___d, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Math::Log(System.Double)
extern "C" double Math_Log_m23007 (Object_t * __this /* static, unused */, double ___d, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Math::Log10(System.Double)
extern "C" double Math_Log10_m23008 (Object_t * __this /* static, unused */, double ___d, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Math::Pow(System.Double,System.Double)
extern "C" double Math_Pow_m23009 (Object_t * __this /* static, unused */, double ___x, double ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Math::Sqrt(System.Double)
extern "C" double Math_Sqrt_m23010 (Object_t * __this /* static, unused */, double ___d, const MethodInfo* method) IL2CPP_METHOD_ATTR;

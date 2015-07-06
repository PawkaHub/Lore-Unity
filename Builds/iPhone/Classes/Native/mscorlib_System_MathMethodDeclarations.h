#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Math
struct Math_t5398;
// System.Decimal
#include "mscorlib_System_Decimal.h"

// System.Double System.Math::Abs(System.Double)
extern "C" double Math_Abs_m22570 (Object_t * __this /* static, unused */, double ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.Math::Abs(System.Single)
extern "C" float Math_Abs_m22571 (Object_t * __this /* static, unused */, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Math::Abs(System.Int32)
extern "C" int32_t Math_Abs_m22572 (Object_t * __this /* static, unused */, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Math::Abs(System.Int64)
extern "C" int64_t Math_Abs_m22573 (Object_t * __this /* static, unused */, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Math::Ceiling(System.Double)
extern "C" double Math_Ceiling_m22574 (Object_t * __this /* static, unused */, double ___a, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Math::Floor(System.Double)
extern "C" double Math_Floor_m22575 (Object_t * __this /* static, unused */, double ___d, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Math::IEEERemainder(System.Double,System.Double)
extern "C" double Math_IEEERemainder_m10977 (Object_t * __this /* static, unused */, double ___x, double ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Math::Log(System.Double,System.Double)
extern "C" double Math_Log_m17587 (Object_t * __this /* static, unused */, double ___a, double ___newBase, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Math::Max(System.Double,System.Double)
extern "C" double Math_Max_m22576 (Object_t * __this /* static, unused */, double ___val1, double ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Math::Max(System.Int32,System.Int32)
extern "C" int32_t Math_Max_m12876 (Object_t * __this /* static, unused */, int32_t ___val1, int32_t ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Math::Min(System.Double,System.Double)
extern "C" double Math_Min_m8656 (Object_t * __this /* static, unused */, double ___val1, double ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Math::Min(System.Int32,System.Int32)
extern "C" int32_t Math_Min_m10931 (Object_t * __this /* static, unused */, int32_t ___val1, int32_t ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Math::Round(System.Decimal)
extern "C" Decimal_t1781  Math_Round_m22577 (Object_t * __this /* static, unused */, Decimal_t1781  ___d, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Math::Round(System.Double)
extern "C" double Math_Round_m22578 (Object_t * __this /* static, unused */, double ___a, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Math::Sin(System.Double)
extern "C" double Math_Sin_m22579 (Object_t * __this /* static, unused */, double ___a, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Math::Cos(System.Double)
extern "C" double Math_Cos_m22580 (Object_t * __this /* static, unused */, double ___d, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Math::Tan(System.Double)
extern "C" double Math_Tan_m22581 (Object_t * __this /* static, unused */, double ___a, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Math::Sinh(System.Double)
extern "C" double Math_Sinh_m22582 (Object_t * __this /* static, unused */, double ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Math::Cosh(System.Double)
extern "C" double Math_Cosh_m22583 (Object_t * __this /* static, unused */, double ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Math::Tanh(System.Double)
extern "C" double Math_Tanh_m22584 (Object_t * __this /* static, unused */, double ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Math::Acos(System.Double)
extern "C" double Math_Acos_m22585 (Object_t * __this /* static, unused */, double ___d, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Math::Asin(System.Double)
extern "C" double Math_Asin_m22586 (Object_t * __this /* static, unused */, double ___d, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Math::Atan(System.Double)
extern "C" double Math_Atan_m22587 (Object_t * __this /* static, unused */, double ___d, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Math::Atan2(System.Double,System.Double)
extern "C" double Math_Atan2_m22588 (Object_t * __this /* static, unused */, double ___y, double ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Math::Exp(System.Double)
extern "C" double Math_Exp_m22589 (Object_t * __this /* static, unused */, double ___d, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Math::Log(System.Double)
extern "C" double Math_Log_m22590 (Object_t * __this /* static, unused */, double ___d, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Math::Log10(System.Double)
extern "C" double Math_Log10_m22591 (Object_t * __this /* static, unused */, double ___d, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Math::Pow(System.Double,System.Double)
extern "C" double Math_Pow_m22592 (Object_t * __this /* static, unused */, double ___x, double ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Math::Sqrt(System.Double)
extern "C" double Math_Sqrt_m22593 (Object_t * __this /* static, unused */, double ___d, const MethodInfo* method) IL2CPP_METHOD_ATTR;

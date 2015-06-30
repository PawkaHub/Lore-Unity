#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Math.BigInteger/Kernel
struct Kernel_t3879;
// Mono.Math.BigInteger
struct BigInteger_t3877;
// Mono.Math.BigInteger[]
struct BigIntegerU5BU5D_t4364;
// System.UInt32[]
struct UInt32U5BU5D_t1182;
// Mono.Math.BigInteger/Sign
#include "mscorlib_Mono_Math_BigInteger_Sign.h"

// Mono.Math.BigInteger Mono.Math.BigInteger/Kernel::AddSameSign(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t3877 * Kernel_AddSameSign_m17956 (Object_t * __this /* static, unused */, BigInteger_t3877 * ___bi1, BigInteger_t3877 * ___bi2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/Kernel::Subtract(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t3877 * Kernel_Subtract_m17957 (Object_t * __this /* static, unused */, BigInteger_t3877 * ___big, BigInteger_t3877 * ___small, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/Kernel::MinusEq(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" void Kernel_MinusEq_m17958 (Object_t * __this /* static, unused */, BigInteger_t3877 * ___big, BigInteger_t3877 * ___small, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/Kernel::PlusEq(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" void Kernel_PlusEq_m17959 (Object_t * __this /* static, unused */, BigInteger_t3877 * ___bi1, BigInteger_t3877 * ___bi2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger/Sign Mono.Math.BigInteger/Kernel::Compare(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" int32_t Kernel_Compare_m17960 (Object_t * __this /* static, unused */, BigInteger_t3877 * ___bi1, BigInteger_t3877 * ___bi2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Mono.Math.BigInteger/Kernel::SingleByteDivideInPlace(Mono.Math.BigInteger,System.UInt32)
extern "C" uint32_t Kernel_SingleByteDivideInPlace_m17961 (Object_t * __this /* static, unused */, BigInteger_t3877 * ___n, uint32_t ___d, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Mono.Math.BigInteger/Kernel::DwordMod(Mono.Math.BigInteger,System.UInt32)
extern "C" uint32_t Kernel_DwordMod_m17962 (Object_t * __this /* static, unused */, BigInteger_t3877 * ___n, uint32_t ___d, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger[] Mono.Math.BigInteger/Kernel::DwordDivMod(Mono.Math.BigInteger,System.UInt32)
extern "C" BigIntegerU5BU5D_t4364* Kernel_DwordDivMod_m17963 (Object_t * __this /* static, unused */, BigInteger_t3877 * ___n, uint32_t ___d, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger[] Mono.Math.BigInteger/Kernel::multiByteDivide(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigIntegerU5BU5D_t4364* Kernel_multiByteDivide_m17964 (Object_t * __this /* static, unused */, BigInteger_t3877 * ___bi1, BigInteger_t3877 * ___bi2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/Kernel::LeftShift(Mono.Math.BigInteger,System.Int32)
extern "C" BigInteger_t3877 * Kernel_LeftShift_m17965 (Object_t * __this /* static, unused */, BigInteger_t3877 * ___bi, int32_t ___n, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/Kernel::RightShift(Mono.Math.BigInteger,System.Int32)
extern "C" BigInteger_t3877 * Kernel_RightShift_m17966 (Object_t * __this /* static, unused */, BigInteger_t3877 * ___bi, int32_t ___n, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/Kernel::MultiplyByDword(Mono.Math.BigInteger,System.UInt32)
extern "C" BigInteger_t3877 * Kernel_MultiplyByDword_m17967 (Object_t * __this /* static, unused */, BigInteger_t3877 * ___n, uint32_t ___f, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/Kernel::Multiply(System.UInt32[],System.UInt32,System.UInt32,System.UInt32[],System.UInt32,System.UInt32,System.UInt32[],System.UInt32)
extern "C" void Kernel_Multiply_m17968 (Object_t * __this /* static, unused */, UInt32U5BU5D_t1182* ___x, uint32_t ___xOffset, uint32_t ___xLen, UInt32U5BU5D_t1182* ___y, uint32_t ___yOffset, uint32_t ___yLen, UInt32U5BU5D_t1182* ___d, uint32_t ___dOffset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/Kernel::MultiplyMod2p32pmod(System.UInt32[],System.Int32,System.Int32,System.UInt32[],System.Int32,System.Int32,System.UInt32[],System.Int32,System.Int32)
extern "C" void Kernel_MultiplyMod2p32pmod_m17969 (Object_t * __this /* static, unused */, UInt32U5BU5D_t1182* ___x, int32_t ___xOffset, int32_t ___xLen, UInt32U5BU5D_t1182* ___y, int32_t ___yOffest, int32_t ___yLen, UInt32U5BU5D_t1182* ___d, int32_t ___dOffset, int32_t ___mod, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Mono.Math.BigInteger/Kernel::modInverse(Mono.Math.BigInteger,System.UInt32)
extern "C" uint32_t Kernel_modInverse_m17970 (Object_t * __this /* static, unused */, BigInteger_t3877 * ___bi, uint32_t ___modulus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/Kernel::modInverse(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t3877 * Kernel_modInverse_m17971 (Object_t * __this /* static, unused */, BigInteger_t3877 * ___bi, BigInteger_t3877 * ___modulus, const MethodInfo* method) IL2CPP_METHOD_ATTR;

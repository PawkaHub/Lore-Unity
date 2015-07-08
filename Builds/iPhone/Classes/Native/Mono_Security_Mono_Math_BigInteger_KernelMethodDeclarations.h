﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Math.BigInteger/Kernel
struct Kernel_t4554;
// Mono.Math.BigInteger
struct BigInteger_t4552;
// Mono.Math.BigInteger[]
struct BigIntegerU5BU5D_t4653;
// System.UInt32[]
struct UInt32U5BU5D_t4086;
// Mono.Math.BigInteger/Sign
#include "Mono_Security_Mono_Math_BigInteger_Sign.h"

// Mono.Math.BigInteger Mono.Math.BigInteger/Kernel::AddSameSign(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t4552 * Kernel_AddSameSign_m15667 (Object_t * __this /* static, unused */, BigInteger_t4552 * ___bi1, BigInteger_t4552 * ___bi2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/Kernel::Subtract(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t4552 * Kernel_Subtract_m15668 (Object_t * __this /* static, unused */, BigInteger_t4552 * ___big, BigInteger_t4552 * ___small, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/Kernel::MinusEq(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" void Kernel_MinusEq_m15669 (Object_t * __this /* static, unused */, BigInteger_t4552 * ___big, BigInteger_t4552 * ___small, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/Kernel::PlusEq(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" void Kernel_PlusEq_m15670 (Object_t * __this /* static, unused */, BigInteger_t4552 * ___bi1, BigInteger_t4552 * ___bi2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger/Sign Mono.Math.BigInteger/Kernel::Compare(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" int32_t Kernel_Compare_m15671 (Object_t * __this /* static, unused */, BigInteger_t4552 * ___bi1, BigInteger_t4552 * ___bi2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Mono.Math.BigInteger/Kernel::SingleByteDivideInPlace(Mono.Math.BigInteger,System.UInt32)
extern "C" uint32_t Kernel_SingleByteDivideInPlace_m15672 (Object_t * __this /* static, unused */, BigInteger_t4552 * ___n, uint32_t ___d, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Mono.Math.BigInteger/Kernel::DwordMod(Mono.Math.BigInteger,System.UInt32)
extern "C" uint32_t Kernel_DwordMod_m15673 (Object_t * __this /* static, unused */, BigInteger_t4552 * ___n, uint32_t ___d, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger[] Mono.Math.BigInteger/Kernel::DwordDivMod(Mono.Math.BigInteger,System.UInt32)
extern "C" BigIntegerU5BU5D_t4653* Kernel_DwordDivMod_m15674 (Object_t * __this /* static, unused */, BigInteger_t4552 * ___n, uint32_t ___d, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger[] Mono.Math.BigInteger/Kernel::multiByteDivide(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigIntegerU5BU5D_t4653* Kernel_multiByteDivide_m15675 (Object_t * __this /* static, unused */, BigInteger_t4552 * ___bi1, BigInteger_t4552 * ___bi2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/Kernel::LeftShift(Mono.Math.BigInteger,System.Int32)
extern "C" BigInteger_t4552 * Kernel_LeftShift_m15676 (Object_t * __this /* static, unused */, BigInteger_t4552 * ___bi, int32_t ___n, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/Kernel::RightShift(Mono.Math.BigInteger,System.Int32)
extern "C" BigInteger_t4552 * Kernel_RightShift_m15677 (Object_t * __this /* static, unused */, BigInteger_t4552 * ___bi, int32_t ___n, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/Kernel::Multiply(System.UInt32[],System.UInt32,System.UInt32,System.UInt32[],System.UInt32,System.UInt32,System.UInt32[],System.UInt32)
extern "C" void Kernel_Multiply_m15678 (Object_t * __this /* static, unused */, UInt32U5BU5D_t4086* ___x, uint32_t ___xOffset, uint32_t ___xLen, UInt32U5BU5D_t4086* ___y, uint32_t ___yOffset, uint32_t ___yLen, UInt32U5BU5D_t4086* ___d, uint32_t ___dOffset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/Kernel::MultiplyMod2p32pmod(System.UInt32[],System.Int32,System.Int32,System.UInt32[],System.Int32,System.Int32,System.UInt32[],System.Int32,System.Int32)
extern "C" void Kernel_MultiplyMod2p32pmod_m15679 (Object_t * __this /* static, unused */, UInt32U5BU5D_t4086* ___x, int32_t ___xOffset, int32_t ___xLen, UInt32U5BU5D_t4086* ___y, int32_t ___yOffest, int32_t ___yLen, UInt32U5BU5D_t4086* ___d, int32_t ___dOffset, int32_t ___mod, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Mono.Math.BigInteger/Kernel::modInverse(Mono.Math.BigInteger,System.UInt32)
extern "C" uint32_t Kernel_modInverse_m15680 (Object_t * __this /* static, unused */, BigInteger_t4552 * ___bi, uint32_t ___modulus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/Kernel::modInverse(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t4552 * Kernel_modInverse_m15681 (Object_t * __this /* static, unused */, BigInteger_t4552 * ___bi, BigInteger_t4552 * ___modulus, const MethodInfo* method) IL2CPP_METHOD_ATTR;

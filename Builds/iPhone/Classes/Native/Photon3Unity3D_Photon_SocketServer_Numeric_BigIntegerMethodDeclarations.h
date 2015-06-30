#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Photon.SocketServer.Numeric.BigInteger
struct BigInteger_t3117;
// System.Byte[]
struct ByteU5BU5D_t25;
// System.UInt32[]
struct UInt32U5BU5D_t1182;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Random
struct Random_t81;

// System.Void Photon.SocketServer.Numeric.BigInteger::.ctor()
extern "C" void BigInteger__ctor_m14006 (BigInteger_t3117 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.SocketServer.Numeric.BigInteger::.ctor(System.Int64)
extern "C" void BigInteger__ctor_m14007 (BigInteger_t3117 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.SocketServer.Numeric.BigInteger::.ctor(Photon.SocketServer.Numeric.BigInteger)
extern "C" void BigInteger__ctor_m14008 (BigInteger_t3117 * __this, BigInteger_t3117 * ___bi, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.SocketServer.Numeric.BigInteger::.ctor(System.Byte[])
extern "C" void BigInteger__ctor_m14009 (BigInteger_t3117 * __this, ByteU5BU5D_t25* ___inData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.SocketServer.Numeric.BigInteger::.ctor(System.UInt32[])
extern "C" void BigInteger__ctor_m14010 (BigInteger_t3117 * __this, UInt32U5BU5D_t1182* ___inData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::op_Implicit(System.Int64)
extern "C" BigInteger_t3117 * BigInteger_op_Implicit_m14011 (Object_t * __this /* static, unused */, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::op_Implicit(System.Int32)
extern "C" BigInteger_t3117 * BigInteger_op_Implicit_m14012 (Object_t * __this /* static, unused */, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::op_Addition(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
extern "C" BigInteger_t3117 * BigInteger_op_Addition_m14013 (Object_t * __this /* static, unused */, BigInteger_t3117 * ___bi1, BigInteger_t3117 * ___bi2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::op_Subtraction(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
extern "C" BigInteger_t3117 * BigInteger_op_Subtraction_m14014 (Object_t * __this /* static, unused */, BigInteger_t3117 * ___bi1, BigInteger_t3117 * ___bi2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::op_Multiply(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
extern "C" BigInteger_t3117 * BigInteger_op_Multiply_m14015 (Object_t * __this /* static, unused */, BigInteger_t3117 * ___bi1, BigInteger_t3117 * ___bi2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::op_LeftShift(Photon.SocketServer.Numeric.BigInteger,System.Int32)
extern "C" BigInteger_t3117 * BigInteger_op_LeftShift_m14016 (Object_t * __this /* static, unused */, BigInteger_t3117 * ___bi1, int32_t ___shiftVal, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Photon.SocketServer.Numeric.BigInteger::shiftLeft(System.UInt32[],System.Int32)
extern "C" int32_t BigInteger_shiftLeft_m14017 (Object_t * __this /* static, unused */, UInt32U5BU5D_t1182* ___buffer, int32_t ___shiftVal, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Photon.SocketServer.Numeric.BigInteger::shiftRight(System.UInt32[],System.Int32)
extern "C" int32_t BigInteger_shiftRight_m14018 (Object_t * __this /* static, unused */, UInt32U5BU5D_t1182* ___buffer, int32_t ___shiftVal, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::op_UnaryNegation(Photon.SocketServer.Numeric.BigInteger)
extern "C" BigInteger_t3117 * BigInteger_op_UnaryNegation_m14019 (Object_t * __this /* static, unused */, BigInteger_t3117 * ___bi1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Photon.SocketServer.Numeric.BigInteger::op_Equality(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
extern "C" bool BigInteger_op_Equality_m14020 (Object_t * __this /* static, unused */, BigInteger_t3117 * ___bi1, BigInteger_t3117 * ___bi2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Photon.SocketServer.Numeric.BigInteger::Equals(System.Object)
extern "C" bool BigInteger_Equals_m14021 (BigInteger_t3117 * __this, Object_t * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Photon.SocketServer.Numeric.BigInteger::GetHashCode()
extern "C" int32_t BigInteger_GetHashCode_m14022 (BigInteger_t3117 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Photon.SocketServer.Numeric.BigInteger::op_GreaterThan(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
extern "C" bool BigInteger_op_GreaterThan_m14023 (Object_t * __this /* static, unused */, BigInteger_t3117 * ___bi1, BigInteger_t3117 * ___bi2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Photon.SocketServer.Numeric.BigInteger::op_LessThan(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
extern "C" bool BigInteger_op_LessThan_m14024 (Object_t * __this /* static, unused */, BigInteger_t3117 * ___bi1, BigInteger_t3117 * ___bi2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Photon.SocketServer.Numeric.BigInteger::op_GreaterThanOrEqual(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
extern "C" bool BigInteger_op_GreaterThanOrEqual_m14025 (Object_t * __this /* static, unused */, BigInteger_t3117 * ___bi1, BigInteger_t3117 * ___bi2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.SocketServer.Numeric.BigInteger::multiByteDivide(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
extern "C" void BigInteger_multiByteDivide_m14026 (Object_t * __this /* static, unused */, BigInteger_t3117 * ___bi1, BigInteger_t3117 * ___bi2, BigInteger_t3117 * ___outQuotient, BigInteger_t3117 * ___outRemainder, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.SocketServer.Numeric.BigInteger::singleByteDivide(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
extern "C" void BigInteger_singleByteDivide_m14027 (Object_t * __this /* static, unused */, BigInteger_t3117 * ___bi1, BigInteger_t3117 * ___bi2, BigInteger_t3117 * ___outQuotient, BigInteger_t3117 * ___outRemainder, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::op_Division(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
extern "C" BigInteger_t3117 * BigInteger_op_Division_m14028 (Object_t * __this /* static, unused */, BigInteger_t3117 * ___bi1, BigInteger_t3117 * ___bi2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::op_Modulus(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
extern "C" BigInteger_t3117 * BigInteger_op_Modulus_m14029 (Object_t * __this /* static, unused */, BigInteger_t3117 * ___bi1, BigInteger_t3117 * ___bi2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Photon.SocketServer.Numeric.BigInteger::ToString()
extern "C" String_t* BigInteger_ToString_m14030 (BigInteger_t3117 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Photon.SocketServer.Numeric.BigInteger::ToString(System.Int32)
extern "C" String_t* BigInteger_ToString_m14031 (BigInteger_t3117 * __this, int32_t ___radix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::ModPow(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
extern "C" BigInteger_t3117 * BigInteger_ModPow_m14032 (BigInteger_t3117 * __this, BigInteger_t3117 * ___exp, BigInteger_t3117 * ___n, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::BarrettReduction(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
extern "C" BigInteger_t3117 * BigInteger_BarrettReduction_m14033 (BigInteger_t3117 * __this, BigInteger_t3117 * ___x, BigInteger_t3117 * ___n, BigInteger_t3117 * ___constant, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::GenerateRandom(System.Int32)
extern "C" BigInteger_t3117 * BigInteger_GenerateRandom_m14034 (Object_t * __this /* static, unused */, int32_t ___bits, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.SocketServer.Numeric.BigInteger::genRandomBits(System.Int32,System.Random)
extern "C" void BigInteger_genRandomBits_m14035 (BigInteger_t3117 * __this, int32_t ___bits, Random_t81 * ___rand, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Photon.SocketServer.Numeric.BigInteger::bitCount()
extern "C" int32_t BigInteger_bitCount_m14036 (BigInteger_t3117 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Photon.SocketServer.Numeric.BigInteger::GetBytes()
extern "C" ByteU5BU5D_t25* BigInteger_GetBytes_m14037 (BigInteger_t3117 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.SocketServer.Numeric.BigInteger::.cctor()
extern "C" void BigInteger__cctor_m14038 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;

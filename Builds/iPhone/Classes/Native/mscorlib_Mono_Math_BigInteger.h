#pragma once
#include <stdint.h>
// System.UInt32[]
struct UInt32U5BU5D_t3848;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t4034;
// System.Object
#include "mscorlib_System_Object.h"
// Mono.Math.BigInteger
struct  BigInteger_t4967  : public Object_t
{
	// System.UInt32 Mono.Math.BigInteger::length
	uint32_t ___length_0;
	// System.UInt32[] Mono.Math.BigInteger::data
	UInt32U5BU5D_t3848* ___data_1;
};
struct BigInteger_t4967_StaticFields{
	// System.UInt32[] Mono.Math.BigInteger::smallPrimes
	UInt32U5BU5D_t3848* ___smallPrimes_2;
	// System.Security.Cryptography.RandomNumberGenerator Mono.Math.BigInteger::rng
	RandomNumberGenerator_t4034 * ___rng_3;
};

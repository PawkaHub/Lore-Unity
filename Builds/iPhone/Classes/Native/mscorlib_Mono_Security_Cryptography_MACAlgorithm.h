﻿#pragma once
#include <stdint.h>
// System.Security.Cryptography.SymmetricAlgorithm
struct SymmetricAlgorithm_t4575;
// System.Security.Cryptography.ICryptoTransform
struct ICryptoTransform_t4597;
// System.Byte[]
struct ByteU5BU5D_t25;
// System.Object
#include "mscorlib_System_Object.h"
// Mono.Security.Cryptography.MACAlgorithm
struct  MACAlgorithm_t5214  : public Object_t
{
	// System.Security.Cryptography.SymmetricAlgorithm Mono.Security.Cryptography.MACAlgorithm::algo
	SymmetricAlgorithm_t4575 * ___algo_0;
	// System.Security.Cryptography.ICryptoTransform Mono.Security.Cryptography.MACAlgorithm::enc
	Object_t * ___enc_1;
	// System.Byte[] Mono.Security.Cryptography.MACAlgorithm::block
	ByteU5BU5D_t25* ___block_2;
	// System.Int32 Mono.Security.Cryptography.MACAlgorithm::blockSize
	int32_t ___blockSize_3;
	// System.Int32 Mono.Security.Cryptography.MACAlgorithm::blockCount
	int32_t ___blockCount_4;
};

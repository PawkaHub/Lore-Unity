﻿#pragma once
#include <stdint.h>
// Mono.Security.Cryptography.KeyPairPersistence
struct KeyPairPersistence_t5213;
// Mono.Security.Cryptography.DSAManaged
struct DSAManaged_t5212;
// System.Security.Cryptography.DSA
#include "mscorlib_System_Security_Cryptography_DSA.h"
// System.Security.Cryptography.DSACryptoServiceProvider
struct  DSACryptoServiceProvider_t4481  : public DSA_t4446
{
	// Mono.Security.Cryptography.KeyPairPersistence System.Security.Cryptography.DSACryptoServiceProvider::store
	KeyPairPersistence_t5213 * ___store_2;
	// System.Boolean System.Security.Cryptography.DSACryptoServiceProvider::persistKey
	bool ___persistKey_3;
	// System.Boolean System.Security.Cryptography.DSACryptoServiceProvider::persisted
	bool ___persisted_4;
	// System.Boolean System.Security.Cryptography.DSACryptoServiceProvider::privateKeyExportable
	bool ___privateKeyExportable_5;
	// System.Boolean System.Security.Cryptography.DSACryptoServiceProvider::m_disposed
	bool ___m_disposed_6;
	// Mono.Security.Cryptography.DSAManaged System.Security.Cryptography.DSACryptoServiceProvider::dsa
	DSAManaged_t5212 * ___dsa_7;
};
struct DSACryptoServiceProvider_t4481_StaticFields{
	// System.Boolean System.Security.Cryptography.DSACryptoServiceProvider::useMachineKeyStore
	bool ___useMachineKeyStore_8;
};

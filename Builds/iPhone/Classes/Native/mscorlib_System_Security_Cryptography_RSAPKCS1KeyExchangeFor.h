#pragma once
#include <stdint.h>
// System.Security.Cryptography.RSA
struct RSA_t4447;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t4272;
// System.Security.Cryptography.AsymmetricKeyExchangeFormatter
#include "mscorlib_System_Security_Cryptography_AsymmetricKeyExchangeF.h"
// System.Security.Cryptography.RSAPKCS1KeyExchangeFormatter
struct  RSAPKCS1KeyExchangeFormatter_t4668  : public AsymmetricKeyExchangeFormatter_t5503
{
	// System.Security.Cryptography.RSA System.Security.Cryptography.RSAPKCS1KeyExchangeFormatter::rsa
	RSA_t4447 * ___rsa_0;
	// System.Security.Cryptography.RandomNumberGenerator System.Security.Cryptography.RSAPKCS1KeyExchangeFormatter::random
	RandomNumberGenerator_t4272 * ___random_1;
};

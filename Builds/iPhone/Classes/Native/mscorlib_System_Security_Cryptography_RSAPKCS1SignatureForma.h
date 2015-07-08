#pragma once
#include <stdint.h>
// System.Security.Cryptography.RSA
struct RSA_t4447;
// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t4273;
// System.Security.Cryptography.AsymmetricSignatureFormatter
#include "mscorlib_System_Security_Cryptography_AsymmetricSignatureFor.h"
// System.Security.Cryptography.RSAPKCS1SignatureFormatter
struct  RSAPKCS1SignatureFormatter_t5523  : public AsymmetricSignatureFormatter_t4620
{
	// System.Security.Cryptography.RSA System.Security.Cryptography.RSAPKCS1SignatureFormatter::rsa
	RSA_t4447 * ___rsa_0;
	// System.Security.Cryptography.HashAlgorithm System.Security.Cryptography.RSAPKCS1SignatureFormatter::hash
	HashAlgorithm_t4273 * ___hash_1;
};

#pragma once
#include <stdint.h>
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t4272;
// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t4273;
// System.Net.DigestHeaderParser
struct DigestHeaderParser_t4271;
// System.String
struct String_t;
// System.Object
#include "mscorlib_System_Object.h"
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.Net.DigestSession
struct  DigestSession_t4274  : public Object_t
{
	// System.DateTime System.Net.DigestSession::lastUse
	DateTime_t1953  ___lastUse_1;
	// System.Int32 System.Net.DigestSession::_nc
	int32_t ____nc_2;
	// System.Security.Cryptography.HashAlgorithm System.Net.DigestSession::hash
	HashAlgorithm_t4273 * ___hash_3;
	// System.Net.DigestHeaderParser System.Net.DigestSession::parser
	DigestHeaderParser_t4271 * ___parser_4;
	// System.String System.Net.DigestSession::_cnonce
	String_t* ____cnonce_5;
};
struct DigestSession_t4274_StaticFields{
	// System.Security.Cryptography.RandomNumberGenerator System.Net.DigestSession::rng
	RandomNumberGenerator_t4272 * ___rng_0;
};

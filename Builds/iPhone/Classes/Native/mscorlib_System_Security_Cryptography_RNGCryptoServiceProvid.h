#pragma once
#include <stdint.h>
// System.Object
struct Object_t;
// System.Security.Cryptography.RandomNumberGenerator
#include "mscorlib_System_Security_Cryptography_RandomNumberGenerator.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Security.Cryptography.RNGCryptoServiceProvider
struct  RNGCryptoServiceProvider_t5284  : public RandomNumberGenerator_t4034
{
	// System.IntPtr System.Security.Cryptography.RNGCryptoServiceProvider::_handle
	IntPtr_t ____handle_1;
};
struct RNGCryptoServiceProvider_t5284_StaticFields{
	// System.Object System.Security.Cryptography.RNGCryptoServiceProvider::_lock
	Object_t * ____lock_0;
};

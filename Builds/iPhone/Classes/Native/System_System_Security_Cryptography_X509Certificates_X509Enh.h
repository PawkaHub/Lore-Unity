﻿#pragma once
#include <stdint.h>
// System.Security.Cryptography.OidCollection
struct OidCollection_t3671;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t427;
// System.Security.Cryptography.X509Certificates.X509Extension
#include "System_System_Security_Cryptography_X509Certificates_X509Ext.h"
// System.Security.Cryptography.AsnDecodeStatus
#include "System_System_Security_Cryptography_AsnDecodeStatus.h"
// System.Security.Cryptography.X509Certificates.X509EnhancedKeyUsageExtension
struct  X509EnhancedKeyUsageExtension_t3673  : public X509Extension_t3660
{
	// System.Security.Cryptography.OidCollection System.Security.Cryptography.X509Certificates.X509EnhancedKeyUsageExtension::_enhKeyUsage
	OidCollection_t3671 * ____enhKeyUsage_4;
	// System.Security.Cryptography.AsnDecodeStatus System.Security.Cryptography.X509Certificates.X509EnhancedKeyUsageExtension::_status
	int32_t ____status_5;
};
struct X509EnhancedKeyUsageExtension_t3673_StaticFields{
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Security.Cryptography.X509Certificates.X509EnhancedKeyUsageExtension::<>f__switch$mapE
	Dictionary_2_t427 * ___U3CU3Ef__switchU24mapE_6;
};

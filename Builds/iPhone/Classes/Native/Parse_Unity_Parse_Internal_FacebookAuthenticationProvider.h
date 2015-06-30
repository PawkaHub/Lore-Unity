#pragma once
#include <stdint.h>
// System.Uri
struct Uri_t32;
// System.String
struct String_t;
// System.Object
#include "mscorlib_System_Object.h"
// Parse.Internal.FacebookAuthenticationProvider
struct  FacebookAuthenticationProvider_t1400  : public Object_t
{
	// System.String Parse.Internal.FacebookAuthenticationProvider::<AccessToken>k__BackingField
	String_t* ___U3CAccessTokenU3Ek__BackingField_4;
};
struct FacebookAuthenticationProvider_t1400_StaticFields{
	// System.Uri Parse.Internal.FacebookAuthenticationProvider::LoginDialogUrl
	Uri_t32 * ___LoginDialogUrl_0;
	// System.Uri Parse.Internal.FacebookAuthenticationProvider::TokenExtensionUrl
	Uri_t32 * ___TokenExtensionUrl_1;
	// System.Uri Parse.Internal.FacebookAuthenticationProvider::ResponseUrl
	Uri_t32 * ___ResponseUrl_2;
	// System.Uri Parse.Internal.FacebookAuthenticationProvider::MeUrl
	Uri_t32 * ___MeUrl_3;
};

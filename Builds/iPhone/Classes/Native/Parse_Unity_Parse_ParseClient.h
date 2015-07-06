#pragma once
#include <stdint.h>
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t20;
// Parse.Internal.IPlatformHooks
struct IPlatformHooks_t1557;
// System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>
struct Dictionary_2_t1558;
// System.Uri
struct Uri_t32;
// System.Func`2<System.Object,System.Object>
struct Func_2_t1559;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>,<>f__AnonymousType2`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>,System.String>>
struct Func_2_t1560;
// System.Func`2<<>f__AnonymousType2`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>,System.String>,System.String>
struct Func_2_t1561;
// System.Object
#include "mscorlib_System_Object.h"
// System.Nullable`1<System.Guid>
#include "mscorlib_System_Nullable_1_gen.h"
// Parse.ParseClient
struct  ParseClient_t1562  : public Object_t
{
};
struct ParseClient_t1562_StaticFields{
	// System.Object Parse.ParseClient::mutex
	Object_t * ___mutex_0;
	// System.String Parse.ParseClient::versionString
	String_t* ___versionString_1;
	// System.String Parse.ParseClient::dateFormatString
	String_t* ___dateFormatString_2;
	// System.String[] Parse.ParseClient::assemblyNames
	StringU5BU5D_t20* ___assemblyNames_3;
	// Parse.Internal.IPlatformHooks Parse.ParseClient::platformHooks
	Object_t * ___platformHooks_4;
	// System.String Parse.ParseClient::revocableSessionTokenTrueValue
	String_t* ___revocableSessionTokenTrueValue_5;
	// System.Nullable`1<System.Guid> Parse.ParseClient::installationId
	Nullable_1_t1563  ___installationId_6;
	// System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type> Parse.ParseClient::interfaceLookupCache
	Dictionary_2_t1558 * ___interfaceLookupCache_7;
	// System.Uri Parse.ParseClient::<HostName>k__BackingField
	Uri_t32 * ___U3CHostNameU3Ek__BackingField_8;
	// System.String Parse.ParseClient::<MasterKey>k__BackingField
	String_t* ___U3CMasterKeyU3Ek__BackingField_9;
	// System.String Parse.ParseClient::<ApplicationId>k__BackingField
	String_t* ___U3CApplicationIdU3Ek__BackingField_10;
	// System.String Parse.ParseClient::<WindowsKey>k__BackingField
	String_t* ___U3CWindowsKeyU3Ek__BackingField_11;
	// System.Func`2<System.Object,System.Object> Parse.ParseClient::CS$<>9__CachedAnonymousMethodDelegate1
	Func_2_t1559 * ___CSU24U3CU3E9__CachedAnonymousMethodDelegate1_12;
	// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>,<>f__AnonymousType2`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>,System.String>> Parse.ParseClient::CS$<>9__CachedAnonymousMethodDelegate11
	Func_2_t1560 * ___CSU24U3CU3E9__CachedAnonymousMethodDelegate11_13;
	// System.Func`2<<>f__AnonymousType2`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>,System.String>,System.String> Parse.ParseClient::CS$<>9__CachedAnonymousMethodDelegate12
	Func_2_t1561 * ___CSU24U3CU3E9__CachedAnonymousMethodDelegate12_14;
};

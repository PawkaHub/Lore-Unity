#pragma once
#include <stdint.h>
// System.Object
struct Object_t;
// Parse.ParseUser
struct ParseUser_t722;
// System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseAuthenticationProvider>
struct IDictionary_2_t1647;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_t1622;
// System.String
struct String_t;
// System.Func`1<Parse.ParseUser>
struct Func_1_t1648;
// Parse.ParseObject
#include "Parse_Unity_Parse_ParseObject.h"
// Parse.ParseUser
struct  ParseUser_t722  : public ParseObject_t1552
{
	// System.String Parse.ParseUser::sessionToken
	String_t* ___sessionToken_35;
	// System.Boolean Parse.ParseUser::isCurrentUser
	bool ___isCurrentUser_36;
};
struct ParseUser_t722_StaticFields{
	// System.Object Parse.ParseUser::currentUserMutex
	Object_t * ___currentUserMutex_30;
	// Parse.ParseUser Parse.ParseUser::currentUser
	ParseUser_t722 * ___currentUser_31;
	// System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseAuthenticationProvider> Parse.ParseUser::authProviders
	Object_t* ___authProviders_32;
	// System.Collections.Generic.HashSet`1<System.String> Parse.ParseUser::readOnlyKeys
	HashSet_1_t1622 * ___readOnlyKeys_33;
	// System.Boolean Parse.ParseUser::currentUserMatchesDisk
	bool ___currentUserMatchesDisk_34;
	// System.Object Parse.ParseUser::isRevocableSessionEnabledMutex
	Object_t * ___isRevocableSessionEnabledMutex_37;
	// System.Boolean Parse.ParseUser::isRevocableSessionEnabled
	bool ___isRevocableSessionEnabled_38;
	// System.Func`1<Parse.ParseUser> Parse.ParseUser::CS$<>9__CachedAnonymousMethodDelegate13
	Func_1_t1648 * ___CSU24U3CU3E9__CachedAnonymousMethodDelegate13_39;
};

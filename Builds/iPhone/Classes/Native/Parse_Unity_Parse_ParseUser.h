#pragma once
#include <stdint.h>
// System.Object
struct Object_t;
// Parse.ParseUser
struct ParseUser_t704;
// System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseAuthenticationProvider>
struct IDictionary_2_t1496;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_t1482;
// System.String
struct String_t;
// Parse.ParseObject
#include "Parse_Unity_Parse_ParseObject.h"
// Parse.ParseUser
struct  ParseUser_t704  : public ParseObject_t1427
{
	// System.String Parse.ParseUser::sessionToken
	String_t* ___sessionToken_33;
	// System.Boolean Parse.ParseUser::isCurrentUser
	bool ___isCurrentUser_34;
};
struct ParseUser_t704_StaticFields{
	// System.Object Parse.ParseUser::currentUserMutex
	Object_t * ___currentUserMutex_28;
	// Parse.ParseUser Parse.ParseUser::currentUser
	ParseUser_t704 * ___currentUser_29;
	// System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseAuthenticationProvider> Parse.ParseUser::authProviders
	Object_t* ___authProviders_30;
	// System.Collections.Generic.HashSet`1<System.String> Parse.ParseUser::readOnlyKeys
	HashSet_1_t1482 * ___readOnlyKeys_31;
	// System.Boolean Parse.ParseUser::currentUserMatchesDisk
	bool ___currentUserMatchesDisk_32;
	// System.Object Parse.ParseUser::isRevocableSessionEnabledMutex
	Object_t * ___isRevocableSessionEnabledMutex_35;
	// System.Boolean Parse.ParseUser::isRevocableSessionEnabled
	bool ___isRevocableSessionEnabled_36;
};

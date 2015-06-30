#pragma once
#include <stdint.h>
// Parse.ParseInstallation
struct ParseInstallation_t1480;
// System.Object
struct Object_t;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_t1482;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t860;
// Parse.Internal.InternalExtensions/PartialAccessor`1<System.Threading.Tasks.Task>
struct PartialAccessor_1_t1483;
// System.Action`1<System.Threading.Tasks.Task>
struct Action_1_t1401;
// Parse.ParseObject
#include "Parse_Unity_Parse_ParseObject.h"
// Parse.ParseInstallation
struct  ParseInstallation_t1480  : public ParseObject_t1427
{
};
struct ParseInstallation_t1480_StaticFields{
	// System.Boolean Parse.ParseInstallation::currentInstallationMatchesDisk
	bool ___currentInstallationMatchesDisk_28;
	// Parse.ParseInstallation Parse.ParseInstallation::currentInstallation
	ParseInstallation_t1480 * ___currentInstallation_29;
	// System.Object Parse.ParseInstallation::currentInstallationMutex
	Object_t * ___currentInstallationMutex_30;
	// System.Collections.Generic.HashSet`1<System.String> Parse.ParseInstallation::readOnlyKeys
	HashSet_1_t1482 * ___readOnlyKeys_31;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> Parse.ParseInstallation::tzNameMap
	Dictionary_2_t860 * ___tzNameMap_32;
	// Parse.Internal.InternalExtensions/PartialAccessor`1<System.Threading.Tasks.Task> Parse.ParseInstallation::CS$<>9__CachedAnonymousMethodDelegate90
	PartialAccessor_1_t1483 * ___CSU24U3CU3E9__CachedAnonymousMethodDelegate90_33;
	// System.Action`1<System.Threading.Tasks.Task> Parse.ParseInstallation::CS$<>9__CachedAnonymousMethodDelegate91
	Action_1_t1401 * ___CSU24U3CU3E9__CachedAnonymousMethodDelegate91_34;
};

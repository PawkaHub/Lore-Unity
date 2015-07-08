#pragma once
#include <stdint.h>
// Parse.ParseInstallation
struct ParseInstallation_t1871;
// System.Object
struct Object_t;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_t1873;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t1444;
// Parse.Internal.InternalExtensions/PartialAccessor`1<System.Threading.Tasks.Task>
struct PartialAccessor_1_t1874;
// System.Action`1<System.Threading.Tasks.Task>
struct Action_1_t337;
// Parse.ParseObject
#include "Parse_Unity_Parse_ParseObject.h"
// Parse.ParseInstallation
struct  ParseInstallation_t1871  : public ParseObject_t596
{
};
struct ParseInstallation_t1871_StaticFields{
	// System.Boolean Parse.ParseInstallation::currentInstallationMatchesDisk
	bool ___currentInstallationMatchesDisk_30;
	// Parse.ParseInstallation Parse.ParseInstallation::currentInstallation
	ParseInstallation_t1871 * ___currentInstallation_31;
	// System.Object Parse.ParseInstallation::currentInstallationMutex
	Object_t * ___currentInstallationMutex_32;
	// System.Collections.Generic.HashSet`1<System.String> Parse.ParseInstallation::readOnlyKeys
	HashSet_1_t1873 * ___readOnlyKeys_33;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> Parse.ParseInstallation::tzNameMap
	Dictionary_2_t1444 * ___tzNameMap_34;
	// Parse.Internal.InternalExtensions/PartialAccessor`1<System.Threading.Tasks.Task> Parse.ParseInstallation::CS$<>9__CachedAnonymousMethodDelegate90
	PartialAccessor_1_t1874 * ___CSU24U3CU3E9__CachedAnonymousMethodDelegate90_35;
	// System.Action`1<System.Threading.Tasks.Task> Parse.ParseInstallation::CS$<>9__CachedAnonymousMethodDelegate91
	Action_1_t337 * ___CSU24U3CU3E9__CachedAnonymousMethodDelegate91_36;
};

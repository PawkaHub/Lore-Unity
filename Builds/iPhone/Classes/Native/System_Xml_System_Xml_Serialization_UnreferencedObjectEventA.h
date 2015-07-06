#pragma once
#include <stdint.h>
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.EventArgs
#include "mscorlib_System_EventArgs.h"
// System.Xml.Serialization.UnreferencedObjectEventArgs
struct  UnreferencedObjectEventArgs_t3719  : public EventArgs_t1202
{
	// System.Object System.Xml.Serialization.UnreferencedObjectEventArgs::unreferencedObject
	Object_t * ___unreferencedObject_1;
	// System.String System.Xml.Serialization.UnreferencedObjectEventArgs::unreferencedId
	String_t* ___unreferencedId_2;
};

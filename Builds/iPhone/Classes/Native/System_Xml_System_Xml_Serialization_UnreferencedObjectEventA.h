#pragma once
#include <stdint.h>
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.EventArgs
#include "mscorlib_System_EventArgs.h"
// System.Xml.Serialization.UnreferencedObjectEventArgs
struct  UnreferencedObjectEventArgs_t3957  : public EventArgs_t1461
{
	// System.Object System.Xml.Serialization.UnreferencedObjectEventArgs::unreferencedObject
	Object_t * ___unreferencedObject_1;
	// System.String System.Xml.Serialization.UnreferencedObjectEventArgs::unreferencedId
	String_t* ___unreferencedId_2;
};

#pragma once
#include <stdint.h>
// System.Xml.Serialization.XmlSerializationCollectionFixupCallback
struct XmlSerializationCollectionFixupCallback_t2368;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Object
#include "mscorlib_System_Object.h"
// System.Xml.Serialization.XmlSerializationReader/CollectionFixup
struct  CollectionFixup_t2369  : public Object_t
{
	// System.Xml.Serialization.XmlSerializationCollectionFixupCallback System.Xml.Serialization.XmlSerializationReader/CollectionFixup::callback
	XmlSerializationCollectionFixupCallback_t2368 * ___callback_0;
	// System.Object System.Xml.Serialization.XmlSerializationReader/CollectionFixup::collection
	Object_t * ___collection_1;
	// System.Object System.Xml.Serialization.XmlSerializationReader/CollectionFixup::collectionItems
	Object_t * ___collectionItems_2;
	// System.String System.Xml.Serialization.XmlSerializationReader/CollectionFixup::id
	String_t* ___id_3;
};

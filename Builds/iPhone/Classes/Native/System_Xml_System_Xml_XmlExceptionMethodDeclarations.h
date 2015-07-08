#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.XmlException
struct XmlException_t4099;
// System.String
struct String_t;
// System.Exception
struct Exception_t496;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3296;
// System.Xml.IXmlLineInfo
struct IXmlLineInfo_t4166;
// System.Object
struct Object_t;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Xml.XmlException::.ctor()
extern "C" void XmlException__ctor_m12609 (XmlException_t4099 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlException::.ctor(System.String,System.Exception)
extern "C" void XmlException__ctor_m12610 (XmlException_t4099 * __this, String_t* ___message, Exception_t496 * ___innerException, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void XmlException__ctor_m12611 (XmlException_t4099 * __this, SerializationInfo_t3296 * ___info, StreamingContext_t3297  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlException::.ctor(System.String)
extern "C" void XmlException__ctor_m12612 (XmlException_t4099 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlException::.ctor(System.Xml.IXmlLineInfo,System.String,System.String)
extern "C" void XmlException__ctor_m12613 (XmlException_t4099 * __this, Object_t * ___li, String_t* ___sourceUri, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlException::.ctor(System.Xml.IXmlLineInfo,System.Exception,System.String,System.String)
extern "C" void XmlException__ctor_m12614 (XmlException_t4099 * __this, Object_t * ___li, Exception_t496 * ___innerException, String_t* ___sourceUri, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlException::.ctor(System.String,System.Exception,System.Int32,System.Int32)
extern "C" void XmlException__ctor_m12615 (XmlException_t4099 * __this, String_t* ___message, Exception_t496 * ___innerException, int32_t ___lineNumber, int32_t ___linePosition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlException::.ctor(System.String,System.Int32,System.Int32,System.Object,System.String,System.Exception)
extern "C" void XmlException__ctor_m12616 (XmlException_t4099 * __this, String_t* ___message, int32_t ___lineNumber, int32_t ___linePosition, Object_t * ___sourceObject, String_t* ___sourceUri, Exception_t496 * ___innerException, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlException::GetMessage(System.String,System.String,System.Int32,System.Int32,System.Object)
extern "C" String_t* XmlException_GetMessage_m12617 (Object_t * __this /* static, unused */, String_t* ___message, String_t* ___sourceUri, int32_t ___lineNumber, int32_t ___linePosition, Object_t * ___sourceObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlException::get_Message()
extern "C" String_t* XmlException_get_Message_m12618 (XmlException_t4099 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlException::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void XmlException_GetObjectData_m12619 (XmlException_t4099 * __this, SerializationInfo_t3296 * ___info, StreamingContext_t3297  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
